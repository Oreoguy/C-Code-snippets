#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char ch[12]="\nprogrammer";
    for(int i=0;i<strlen(ch);i++)
    {
        cout<<int(ch[i])<<endl;
    }
}