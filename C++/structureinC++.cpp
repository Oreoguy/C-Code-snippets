#include<iostream>
using namespace std;
struct empl_info 
{   
    int id=12,mbno=456,salary=1234;
    string name = "Johnny";
    
 }e;
 int main()
 {
    cout<<e.id<<"\t"<<e.mbno<<"\t"<<e.salary<<"\t"<<e.name;
    //cout<<"Enter name,id,mbo,salary of employees:";
 }
