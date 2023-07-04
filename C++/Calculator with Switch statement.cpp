#include<iostream>
using namespace std;
int main()
{
int n1,n2,res,op;
cout<<"enter 2 numbers for desired operation:";
cin>>n1>>n2;
    cout<<"Enter your choice:";
    cout<<"1.Addition \t 2.Subtraction \t 3.Multiplication \t 4.Division";
    cin>>op;
        switch(op)
        {
            case 1:
                res=n1+n2;
                cout<<"Addition is :"<<res;
            break;
             case 2:
                res=n1-n2;
                cout<<"Subtraction is :"<<res;
                break;
             case 3:
                res=n1*n2;
                cout<<"Multiplication is :"<<res;
                break;
             case 4:
                res=n1/n2;
                cout<<"Division is :"<<res;
                break;
                default:
                    cout<<"Wrong Input:";
        }
}