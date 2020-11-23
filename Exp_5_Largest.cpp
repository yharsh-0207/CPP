#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float a,b,c;
    cout<<" Enter the three numbers:\n ";
    cin>>a>>b>>c;
    cout<<"\n a is "<<a;
    cout<<"\n b is "<<b;
    cout<<"\n c is "<<c;

    if(a>b)
    {
        if(a>c)
        cout<<"\n a is the largest number ";
        else
        cout<<"\n c is the largest number ";
    }
    else
    {
        if(b>c)
        cout<<"\n b is the largest number ";
        else
        cout<<"\n c is the largest number ";
    }
   return 0; 
}