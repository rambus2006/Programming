from bs4 import BeautifulSoup
import requests
import pandas as pd
import csv

#모듈 설치
#pip install 모듈 이름 : 모듈 설치
#pip uninstall 모듈이름 : 모듈 제거
#pip list : 현재 환경에 설치되어 있는 파이썬 모듈의 목록을 가지고 온다. 
#pip install --upgrade pip : 모듈 업데이트 
#pip --version : pip 버전 확인 


#크롤링 할 웹 사이트(마지막에 ?query=위치+날씨)
html=requests.get('https://search.naver.com/search.naver?query=신림+날씨')
soup=BeautifulSoup(html.text,'html.parser')


#위치
address=soup.find('div',{'class':'title_area _area_panel'}).find('h2',{'class':'title'}).text
print(address)

#날짜
weatherdatetoday=soup.find('span',{'class':'date'})
print(weatherdatetoday.text.strip())

#시간
weathertimeresult=soup.find_all('div',{'class':'precipitation_graph_box'})
#infors=weathertimeresult.find_all('li',{'class':'time'})

for i in weathertimeresult:
    if (i.text.split()=='시간대'):
        print("\n")
    print(i.text.split())

#강수량
#weather_rain=soup.find('div',{'class':'data_inner'})

#현재 강수량
#weather_raindata=soup.find('em',{'class':'value'})


#print(weather_rain.text.strip(),"mm",weather_raindata.text.strip())
#area=[weathertimeresult]

#데이터 프레임=pd.DataFrame(리스트,columns=['열이름'])
#name_split = DFAState["full_name"].str.split(',')
#DFAState["first_name"] = name_split.str.get(0)
#DFAState["last_name"] = name_split.str.get(1)

#csv파일 만들기 


#데이터 열
rows=[['확률','-', '-', '-', '-', '-', '30%', '30%', '30%', '20%', '30%', '30%', '20%', '20%', '20%', '0%', '0%', '0%', '20%', '30%', '30%', '30%', '30%', '30%', '0%', '0%', '30%', '20%', '30%', '30%', '30%', '30%', '30%', '30%', '20%', '0%', '0%', '30%', '30%', '20%', '30%', '30%', '30%', '30%', '60%', '60%', '30%', '30%', '30%', '30%', '60%', '60%', '60%', '30%', '30%', '30%', '30%', '30%', '30%', '30%', '30%', '30%', '30%', '0%', '0%', '0%', '0%', '0%', '0%', '0%', '0%', '0%', '0%', '0%', '0%', '0%', '0%'],
      ['강수량','0', '0', '0', '0', '0', '0', '0', '0', 
        '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '~1', '~1', '0', '0', '0', '0', '~1', '~1', '~1', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'],
      ['시간대','21시', '22시', '23시', '내일', '01시', '02시', '03시', '04시', '05시', '06시', '07시', '08시', '09시', '10시', '11시', '12시', '13시', '14시', '15시', '16시', '17시', '18시', '19시', '20시', '21시', '22시', '23시', '모레', '01시', '02시', '03시', '04시', '05시', '06시', '07시', '08시', '09시', '10시', '11시', '12시', '13시', '14시', '15시', '16시', '17시', '18시', '19시', '20시', '21시', '22시', '23시', '02.19', '01시', '02 시', '03시', '04시', '05시', '06시', '07시', '08시', '09시', '10시', '11시', '12시', '13시', '14시', '15시', '16시', '17시', '18시', '19시', '20시', '21시', '22시', '23시']
      ]

with open('test.csv','w',newline='') as f:
    write=csv.writer(f)
    write.writerows(rows)

