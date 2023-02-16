import requests
from bs4 import BeautifulSoup

def scrape_weather():
    print("[오늘의 날씨]")
    url="https://www.weather.go.kr/w/index.do#"
    res = requests.get(url)
    #res.raise_for_status()
    soup=BeautifulSoup(res.text,"lxml")
    rain_rate = soup.find("span",attrs={"class":"val"})
    
    print(rain_rate)
   

scrape_weather() #오늘의 날씨 정보 가져오기