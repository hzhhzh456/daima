# -*- coding:utf-8 -*-
import requests
if __name__ == "__main__":
    #制定url
    url = 'https://www.sogou.com/'
    #发起请求
    #get方法会返回一个响应对象
    response = requests.get(url=url)
    #获得响应数据，text返回的是以字符串形式的响应数据
    page_text = response.text
    #持续化存储
    with open('./sogou.html','w',encoding='utf-8') as fp:
        fp.write(page_text)
    print("爬行结束！")