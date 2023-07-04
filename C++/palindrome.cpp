#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem,pl;
    int m;
    cout<<"enter a number:";
    cin>>n;
    m=n;
    while(n!=0)
    {
        rem=n%10;//1
        rev=rev*10+rem;//321
        n=n/10;//12,10
    }
        cout<<"reverse is :"<<rev;
        if(m==rev)
        {
            cout<<"\nIt is a palindrome";
        }
        else{
            cout<<"\nNot a palindrome";
        }
        
}       

