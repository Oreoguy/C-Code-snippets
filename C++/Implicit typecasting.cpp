#include <iostream>  
using namespace std;  
int main ()  
{  
    short x = 90;  
    int y;  
    y = x;  
    cout << " Implicit Type Casting " << endl;  
    cout << " The value of x: " << x << endl;  
    cout << " The value of y: " << y << endl;  
      
    int num = 70;  
    char ch = 'a';  
    int res = 30 + 'a';  
    cout << " Type casting char to int data type ('a' to 20): " <<res<<endl;
    float val = num + 'A';  
    cout << " Type casting from int data to float type: " << val << endl;   
    return 0;              
}