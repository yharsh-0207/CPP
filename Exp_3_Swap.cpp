#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n1,n2,temp;
    cout << "    SWAPPING OF TWO NUMBERS \n\n   ";

    cout << "enter two numbers : \n";
    cin >> n1>>n2;
    cout << "Before swapping the numbers are:" << endl;
    cout << "n1 = " << n1 << endl ;
    cout << "n2 = " << n2 << endl;

    temp = n1;
    n1 = n2;
    n2 = temp;

    cout << "\nAfter swapping the numbers are:" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    
    return 0;
    
}