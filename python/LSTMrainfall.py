import tensorflow as tf
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from prophet import Prophet

df = pd.read_csv('D:\AIFriendsSchool\_slimRain2.csv', header=0, index_col=0)
df = df.rename(columns={'2022':'2022','day':'day'})


#df.plot(x='day', y='2022')
#plt.show()

# prophet을 사용하기 위해서는 다음과 같이 피처의 이름을 변경해야 합니다 : 'ds', 'y'
df = pd.read_csv('D:\AIFriendsSchool\_slimRain2.csv', names=['ds','y'])

prophet = Prophet(seasonality_mode='multiplicative', 
                  yearly_seasonality=True,
                  weekly_seasonality=True, daily_seasonality=True,
                  changepoint_prior_scale=0.5)
prophet.fit(df)
# 5일을 내다보며 예측합니다.
future_data = prophet.make_future_dataframe(periods=5, freq='d')
forecast_data = prophet.predict(future_data)
forecast_data[['ds', 'yhat', 'yhat_lower', 'yhat_upper']].tail(5)

ds = df.dropna()
fig1 = prophet.plot(forecast_data)
plt.show()
