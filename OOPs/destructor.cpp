#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  
int main(void)   
{  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    cout<<"Hello"<<endl;
    Employee e3; //creating an object of Employee   
    Employee e4; //creating an object of Employee  
    cout<<"Hello"<<endl;
    Employee e5; //creating an object of Employee   
    Employee e6; //creating an object of Employee  
    cout<<"Hello"<<endl;
    
    return 0;
}