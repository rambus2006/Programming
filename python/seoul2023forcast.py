import tensorflow as tf
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from prophet import Prophet
from statsmodels.tsa.arima_model import ARIMA
import statsmodels.api as sm


df = pd.read_csv('D:\AIFriendsSchool\seoul2023forcastdata.csv', header=0, index_col=0,encoding='cp949')
df = df.rename(columns={'mm':'mm','day':'day'})

#20xx-02-2를 수로 바꾸기
df['day'] = pd.to_datetime(df['day'])
df.index = df['day']
df.set_index('day', inplace=True)

# (AR=2, 차분=1, MA=2) 파라미터로 ARIMA 모델을 학습합니다.
model = ARIMA(df.mm.values, order=(2,1,2))

#trend : constant를 가지고 있는지, c - constant / nc - no constant
#disp : 수렴 정보를 나타냄
model_fit = model.fit(trend='c', full_output=True, disp=True)
print(model_fit.summary())

#df.plot()
#plt.show()





