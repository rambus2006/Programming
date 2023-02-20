import pandas as pd
import matplotlib.pyplot as plt
import statsmodels.tsa.api as sm

# Load the data
df = pd.read_csv('D:/AIFriendsSchool/seoul2023forcastdata.csv', header=0, encoding='cp949')
df['day'] = pd.to_datetime(df['day'])
df.set_index('day', inplace=True)

# Fit an ARIMA model with order (2,1,2)
model = sm.tsa.arima.ARIMA(df['mm'], order=(2, 1, 2))
result = model.fit()

# Make predictions for the next 5 days
forecast_data = result.forecast(steps=5)

#print(forecast_data)
# 테스트데이터 불러오기 
test_data = pd.read_csv('D:/AIFriendsSchool/seoul2023forcastTestdata.csv', header=0, encoding='cp949')
test_data = test_data.rename(columns={'mm':'y','day':'ds'})
#test_data['day'] = pd.to_datetime(test_data['day'])
#test_data.set_index('day', inplace=True)
#test_data.index = pd.DatetimeIndex(test_data.index).to_period('day')
# Extract the actual values for the last 5 days

# Extract the predicted values and prediction intervals
pred_y = forecast_data[0]
test_y = test_data['mm'].values
pred_y_lower = forecast_data[2][:, 0]
pred_y_upper = forecast_data[2][:, 1]

# Plot the predicted and actual values
plt.plot(pred_y, color='gold', label='predicted')
plt.plot(pred_y_lower, color='red', label='lower bound')
plt.plot(pred_y_upper, color='blue', label='upper bound')
plt.plot(test_y, color='green', label='actual')
plt.legend()
plt.show()
