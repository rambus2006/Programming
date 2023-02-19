import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split

# Read the data and rename the columns
df = pd.read_csv('D:\AIFriendsSchool\_20210801_20210831day.csv', header=0, index_col=0)
#df2=pd.read_csv('D:\AIFriendsSchool\_202208_202208.csv',header=0, index_col=0) 키값 에러가 계속 발생=>데이터를 하나의 파일에 넣는 것으로 문제 해결
df = df.rename(columns={'value location:59_125 Start : 20210801 ': 'value','value location:59_125 Start : 20220801 ': 'value2','value location:59_125 Start : 20200801 ':'value3','day':'day'})
#df2=df2.rename(columns={})

# Drop rows with missing values
df = df.dropna()

# Define the independent variables
X = df[['value','value2','value3']]

# Define the dependent variable
y = df['day']

# 데이터를 교육 및 테스트 세트로 나눕니다
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)

# 선형 회귀 모형 적합
line_fitter = LinearRegression()
line_fitter.fit(X_train, y_train)

# 세트에 대한 값 예측
y_predict = line_fitter.predict(X_test)

# 계수 및 절편 출력
print("계수: ", line_fitter.coef_)
print("절편: ", line_fitter.intercept_)

# 데이터 점의 산점도 생성
plt.scatter(X_test['value'], y_test, color='pink') #2021년 강수량
plt.scatter(X_test['value2'], y_test, color='blue') #2022년 강수량
plt.scatter(X_test['value3'], y_test, color='purple') #2022년 강수량
# Add regression line to plot
#plt.plot(X_test['value'], line_fitter.predict(X_test), color='red', linewidth=2) #선
#plt.plot(X_test['value2'], line_fitter.predict(X_test), color='green', linewidth=2)

# 축 레이블 및 제목 설정
plt.xlabel('rain')
plt.ylabel('day')
plt.title('rain in silim 8month')

# Show plot
plt.show()
