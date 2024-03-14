#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct encryption
{
    char enc[200];
    char dec[200];
    int key;
    char text[200];
};

int main()
{
    struct encryption e;
    string uname="Vansh",pass="v1234h";
    string username, password;
    char ch;
    int unamecheck, passwordcheck;
    int i,op;
    cout <<"\n\t\t\t\t------+SECURITY OF YOUR DATA MATTERS+-------\n";
    cout <<"\n\t\t\t\t-------PLEASE LOG IN TO USE FEATURES--------\n";
    cout <<"\n--------------------\n";
    cout <<"\t ENTER USERNAME";
    cin>> username;
    cout <<"\t ENTER PASSWORD";
    cin>> password;
}
