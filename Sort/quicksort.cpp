#include<iostream>

using namespace std;

//快速排序，主要在于：1.如何实现递归；2.如何实现内存的处理。
void quicksort(int * data,int left,int right)
{
    if(left<right)
    {
        int i=left;
        int j=right;
        int temp=data[i];
        //根据把第一个元素当作划分的比较数字；
        //下面的做法省空间，不含递归的空间复杂度为O(1)，但是其排序是“不稳定”的。
        while(i<j)
        {
            while(i<j&&data[j]>=temp)//要确定等于划分元素的值放在哪边 j--;
                j--;
            if(i<j)
            {
                data[i]=data[j];
                i=i+1;

            }
            while(i<j&&data[i]<temp)
                i++;
            if(i<j)
            {
                data[j]=data[i];
                j=j-1;
            }
        }
        data[i]=temp;//每一轮，都至少有一个数字是被固定的；
        quicksort(data,left,i-1);
        quicksort(data,i+1,right);
    }
}
