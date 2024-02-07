#include<iostream>
using namespace std;
int main()
{
    char c[30]="I am Vansh";
    int i;
    for(i=0;i<10;i++)
    {
        cout<<c[i]<<"\t"<<int(c[i])<<"\t"<<char(int(c[i]+1))<<endl;

    }
    return 0;
}