#include<iostream>
using namespace std;
int main()
{
    char name[20];
    int i, key;
    cout<<"Enter the name and the key:";
    cin>> name>> key;
    for(i=0;i<5;i++)
    {
        cout<<char(int(name[i])+key);
    }
}