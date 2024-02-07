#include<iostream>
using namespace std;
struct stud_details{
    int rno;
    float p;
    string name;
}s;
int main()
{
    cout<<"Enter the Roll number percentage and the name of the student:";
    cin>>s.rno>>s.p>>s.name;

    cout<<"The details of student is :\n";
    cout<<"Roll number"<<s.rno<<"\t"<<"Percentage:"<<s.p<<"\t"<<"Name:";

    return 0 ;
  
}
