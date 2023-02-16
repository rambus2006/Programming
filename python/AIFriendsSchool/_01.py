
#%%
from konlpy.tag import Okt
import matplotlib.pyplot as plt
import matplotlib as mpl
import numpy as np

x = np.linspace(0, 50, 50)
#plt.plot(x, np.sin(x))
#plt.show()

import pandas as pd


okt = Okt()
df=pd.read_csv('D:\AIFriendsSchool\_2022-08_2022.csv',encoding='cp949')
df.head()

# Extract a single column
columns = df[["일시","지점","기온(°C)","누적강수량(mm)"]]

# Extract multiple columns
#columns = df[["column1_name", "column2_name", "column3_name"]]

# Plot the data as a bar graph
columns.plot(kind='bar', x='일시', y='누적강수량(mm)')

# Show the graph
plt.show()

#print(columns)


# %%
