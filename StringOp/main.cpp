#include <iostream>
#include <strstr.cpp>
using namespace std;

int main()
{
    char str1[50]="12345abcde12345";
    char str2[10]="abc";
    cout<<"Str1:"<<str1<<endl;
    cout<<"Str2:"<<str2<<endl;
    cout<<"Result:"<<strstr(str1,str2)<<endl;
    return 0;
}

