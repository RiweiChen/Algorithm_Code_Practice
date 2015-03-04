#include<iostream>
#include<string.h>
using namespace std;
//实现strstr函数
//功能：若str2是str1的子串，则返回其第一次出现的位置，否则，返回-1；
int strstr(char *str1,char *str2)
{
    int len_str1=strlen(str1);
    int len_str2=strlen(str2);
    int i,j;
    if(len_str2>len_str1)
        return -1;
    for(i=0;i<len_str1-len_str2;i++)
    {
        for(j=0;j<len_str2;j++)
        {
            if(str1[i+j]==str2[j])
                continue;
            else
                break;

        }
        if(j==len_str2)
            return i+1;
    }
}
