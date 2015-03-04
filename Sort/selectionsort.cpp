#include<iostream>
using namespace std;

//选择排序

void selectionsort(int *data,int len)
{
    int max_id;
    int temp;
    for(int i=len-1;i>=1;i--)
    {
        max_id=0;
        //找出最大的值，及其位置
        for(int j=1;j<=i;j++)
        {
            if(data[j]>data[max_id])
            {
                max_id=j;
            }
        }
        //交换
        if(max_id!=i)
        {
            temp=data[i];
            data[i]=data[max_id];
            data[max_id]=temp;
        }
    }
}
