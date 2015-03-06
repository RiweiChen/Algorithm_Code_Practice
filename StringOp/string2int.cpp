#include<iostream>
#include<string.h>
using namespace std;
//功能:实现字符串到十进制数的转换，考虑了正负的情况
int string2int(char *str)
{
    //先判断是不是为空：
    if(str==NULL)
        return 0;//空指针，返回0
    bool sign=true;
    int i=0;
    if('-'==str[0])
    {
        sign=false;
        i=1;
    }
    if('+'==str[0])
    {
        i=1;
    }
    int len=strlen(str);

    int value=0;
    while(i<len)
    {
        value=value*10+(str[i]-'0');
        i++;
    }
    if(true==sign)
        value=-value;
    return value;

}
