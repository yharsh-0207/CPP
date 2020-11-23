#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
    int n;
 
    cout << "Enter the number : ";
    cin >> n;
    
    if (n % 2 == 0)
        cout <<  " The Number entered is an even ";
    else
        cout <<  "The Number entered is an odd  ";
 
    return 0;
}