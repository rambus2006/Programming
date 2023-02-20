import pandas as pd
import matplotlib.pyplot as plt
import statsmodels.api as sm

# Load the data
df = pd.read_csv('D:/AIFriendsSchool/seoul2023forcastdata.csv', header=0, encoding='cp949')
df['day'] = pd.to_datetime(df['day'], format='%Y-%m-%d')
df.set_index('day', inplace=True)

# Set the frequency of the index
df.index = pd.date_range(start=df.index[0], periods=len(df), freq='D')

# Fit an ARIMA model with order (2,1,2)
model = sm.tsa.ARIMA(df['mm'], order=(2, 1, 2))
result = model.fit()

# Make predictions for the next 5 days
forecast_data = result.forecast(steps=5)

# Load the test data
test_data = pd.read_csv('D:/AIFriendsSchool/seoul2023forcastTestdata.csv', header=0, encoding='cp949')
test_data['ds'] = pd.to_datetime(test_data['day'], format='%Y-%m-%d')
test_data.set_index('ds', inplace=True)

# Extract the actual values for the last 5 days
test_y = test_data['mm'].tail()

# Extract the predicted values and prediction intervals
pred_y = forecast_data[0]
pred_y_lower = forecast_data[2][:, 0]
pred_y_upper = forecast_data[2][:, 1]

# Set the index of the predicted values
pred_y_index = pd.date_range(start=df.index[-1] + pd.Timedelta(days=1), periods=5, freq='D')
pred_y = pd.Series(pred_y, index=pred_y_index)

# Plot the predicted and actual values
plt.plot(pred_y, color='gold', label='predicted')
plt.plot(pred_y_lower, color='red', label='lower bound')
plt.plot(pred_y_upper, color='blue', label='upper bound')
plt.plot(test_y, color='green', label='actual')
plt.legend()
plt.show()
