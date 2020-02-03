#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
FILE *fp;
int i=0;
char str[100];
printf("请输入字符串，并且以感叹号!结束:\n");
if((fp=fopen("test.txt","w"))==NULL)//打开输出文件并使fp指向此文件
{
   printf("无法打开此文件!\n");//如果打开出错就输出打不开的信息
   exit(0);//退出程序
}
gets(str);
int count=0;
while(str[i]!='!')
{
   if(str[i]>='a'&&str[i]<='z')
    str[i]-=32;
   fputc(str[i],fp);//向磁盘输出字符,将str所指向的字符,串输出到fp指向的文件中
   i++;
   count++;
}
    printf("有字符%d个",count);
       printf("\n"); 
     fclose(fp);
//把转换后的字符串输出
if((fp=fopen("test.txt","r"))==NULL)
{
   printf("File open falied!\n");
   exit(0);
}
printf("转换后的字符串是:\n");
puts(fgets(str,strlen(str)+1,fp));//从文件读取一个字符串,长度是strlen(str),并且显示出来
fclose(fp);
return 0;
} 
