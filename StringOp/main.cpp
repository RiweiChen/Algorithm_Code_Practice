#include <iostream>
#include <strstr.cpp>
#include <string2int.cpp>
using namespace std;

int main()
{
    char str1[50]="12345abcde12345";
    char str2[10]="abc";
    cout<<"Str1:"<<str1<<endl;
    cout<<"Str2:"<<str2<<endl;
    cout<<"Result:"<<strstr(str1,str2)<<endl;

    cout<<"Input the String you want to convert to int:";
    cin>>str1;
    cout<<string2int(str1)<<endl;
    return 0;
}

