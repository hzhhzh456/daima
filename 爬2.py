# -*- coding:utf-8 -*-
import json
import requests
if __name__ == '__main__':
    url = 'https://movie.douban.com/j/chart/top_list'
    param = {
        'type': '24',
        'interval_id': '100:90',
        'action':'' ,
        'start': '1',#从库中第几个电影进行选取
        'limit': '20',#每次选取的个数
    }
    #伪装
    headers = {
        'User - Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'
    }
    #获得相应对象
    response = requests.get(url=url,params=param,headers=headers)

    list_data = response.json()

    fp = open('/a.json','w',encoding='utf-8')
    json.dump(list_data,fp=fp,ensure_ascii=False)

    print('over!!!')