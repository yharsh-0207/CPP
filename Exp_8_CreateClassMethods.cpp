#include <iostream> 
#include <conio.h> 
using namespace std;  
class Student {  
   public:  
       int roll_no;      
       string name;      
       void insert(int i, string n)    
        {    
            roll_no= i;    
            name = n;    
        }    
       void display()    
        {    
            cout<<roll_no<<"  "<<name<<endl;    
        }    
};  
int main()
{  
    Student s1;   
    Student s2;
    s1.insert(58, "Harsh");    
    s2.insert(49, "Jay");    
    s1.display();    
    s2.display();  
    return 0;  
}