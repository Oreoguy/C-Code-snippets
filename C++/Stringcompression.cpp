#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char username[14]="code";
    char password[34]="CODE";
    char uname[20],pass[20];
    cout<<"Enter username and password:";
    cin>>uname>>pass;
    if(strcmp(uname,username)==0 && strcmp(pass,password)==0)
    {
        cout<<"Welcome , Successfully logged In";
    }
    else
    {
        cout<<"Try Again";
    }
}