#include<iostream>
using namespace std;
//冒泡排序的实现
void bubblesort(int * data , int len )
{
    for(int i=len-1;i>=1;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(data[j]>data[j+1])
            {//冒一次泡
                int temp;
                temp=data[j+1];
                data[j+1]=data[j];
                data[j]=temp;
            }
        }
    }
}
