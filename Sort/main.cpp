#include <iostream>
#include<stdio.h>
#include<stdlib.h>

#include<bubblesort.cpp>
#include<selectionsort.cpp>
#include<quicksort.cpp>

#define random(x) (rand()%x)

using namespace std;

int data[100];
void makeRandomData(int *data,int len)
{
    for(int i=0;i<len;i++)
    {
        data[i]=random(100);
    }
}

void printArray(int *data,int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout << "Begin!" << endl;


    makeRandomData(data,10);
    cout<<"Origion Data"<<endl;
    printArray(data,10);
    bubblesort(data,10);
    cout<<"Sorted Data"<<endl;
    printArray(data,10);

    makeRandomData(data,10);
    cout<<"Origion Data"<<endl;
    printArray(data,10);
    selectionsort(data,10);
    cout<<"Sorted Data"<<endl;
    printArray(data,10);

    makeRandomData(data,10);
    cout<<"Origion Data"<<endl;
    printArray(data,10);
    quicksort(data,0,9);
    cout<<"Sorted Data"<<endl;
    printArray(data,10);

    return 0;
}

