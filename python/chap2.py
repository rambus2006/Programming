import tensorflow as tf
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from prophet import Prophet
import statsmodels.api as sm

df = pd.read_csv('D:\AIFriendsSchool\seoul2023forcastdata.csv', header=0, index_col=0, encoding='cp949')
df = df.rename(columns={'mm':'mm','day':'day'})

# 20xx-02-2를 수로 바꾸기
df['day'] = pd.to_datetime(df['day'])
df.index = df['day']
df.set_index('day', inplace=True)

# Convert the DataFrame to a Series with a datetime index
data = pd.Series(df.mm.values, index=df.index)

# (AR=2, 차분=1, MA=2) 파라미터로 ARIMA 모델을 학습합니다.
model = sm.tsa.arima.ARIMA(df, order=(2,1,2))
result = model.fit()

# trend : constant를 가지고 있는지, c - constant / nc - no constant
# disp : 수렴 정보를 나타냄
#model_fit = model.fit(trend='c', full_output=True, disp=True)
#print(result.summary())

#데이터 테스트
forecast_data = result.forecast(steps=5) # 학습 데이터셋으로부터 5일 뒤를 예측합니다.

# 테스트 데이터셋을 불러옵니다.
Testdata = pd.read_csv('D:\AIFriendsSchool\seoul2023forcastTestdata.csv', header=0, index_col=0, encoding='cp949')
Testdata = Testdata.rename(columns={'mm':'mm','day':'day'})
Testdata['day'] = pd.to_datetime(Testdata['day'])
Testdata.index = Testdata['day']
Testdata.set_index('day', inplace=True)

pred_y = Testdata[0].tolist() # 마지막 5일의 예측 데이터입니다. (2018-08-27 ~ 2018-08-31)
test_y = data.y.values # 실제 5일 가격 데이터입니다. (2018-08-27 ~ 2018-08-31)
pred_y_lower = [] # 마지막 5일의 예측 데이터의 최소값입니다.
pred_y_upper = [] # 마지막 5일의 예측 데이터의 최대값입니다.

for lower_upper in forecast_data[2]:
    lower = lower_upper[0]
    upper = lower_upper[1]
    pred_y_lower.append(lower)
    pred_y_upper.append(upper)
    
plt.plot(pred_y, color="gold") # 모델이 예상한 가격 그래프입니다.
plt.plot(pred_y_lower, color="red") # 모델이 예상한 최소가격 그래프입니다.
plt.plot(pred_y_upper, color="blue") # 모델이 예상한 최대가격 그래프입니다.
plt.plot(test_y, color="green") # 실제 가격 그래프입니다.

plt.show()