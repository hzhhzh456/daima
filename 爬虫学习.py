# -*- coding:utf-8 -*-
#需求：爬取糗事百科热图中所有照片
import requests
import re
import os
if __name__ == "__main__":
    #创建一个文件夹，用来保存爬取照片
    if not os.path.exists('/.qiutu'):
        os.mkdir('/.qiutu')
    url = "https://www.qiushibaike.com/imgrank/"
    header = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'
    }
    #使用url对整个页面进行爬取
    page_text = requests.get(url=url,headers=header).text
    #对糗图进行解析
    ex = '<div class="thumb">.*?<img src="(.*?)" alt.*?</div>'
    img_src_list = re.findall(ex,page_text,re.S)
    #print(img_src_list)
    for src in img_src_list:
    #拼接出一个完整的url
        src = 'https:' + src
    #请求图片的二进制数据
        img_data = requests.get(url=src,headers=header).content
    #生成图片名称
        img_name = src.split('/')[-1]
    #图片存储路径
        imgpath = '/.qiytu' + img_name
        with open(imgpath,'wb') as fp:
            fp.write(img_data)
            print(img_name,'爬取完毕！')






