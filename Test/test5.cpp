#include<iostream>
using namespace std;

class student
{
    public :
   
    int id;
    string name;
    string mobile;
    float marks;
    static int count;

    student(int id,string name,string mobile,float marks)
    {
        this ->id=id;
        this -> name=name;
        this -> mobile=mobile;
        this -> marks=marks;
        count++;
    }

    void show()
    {
        cout<<id<<" "<<name<<" "<<mobile<<" Marks :"<<marks<<endl;
    }

};
int student::count=0;

int main()
{
    student s1(101,"Shubham Singh","7256069303",77.34);
    student s2(102,"Raushan Singh","7294056886",68.53);
    student s3(103,"Piyush","7256034824",58.28);

    s1.show();
    s2.show();
    s3.show();

    cout<<"Total object created : "<<student::count<<endl;

    return 0;
}



// #include <iostream>  
// using namespace std;  
// class Account {  
//    public:  
//        int accno; //data member (also instance variable)      
//        string name;   
//        static int count;     
//        Account(int accno, string name)   
//         {    
//              this->accno = accno;    
//             this->name = name;    
//             count++;  
//         }    
//        void display()    
//         {    
//             cout<<accno<<" "<<name<<endl;   
//         }    
// };  
// int Account::count=0;  
// int main(void) {  
//     Account a1 =Account(201, "Sanjay"); //creating an object of Account  
//     Account a2=Account(202, "Nakul");   
//      Account a3=Account(203, "Ranjana");  
//     a1.display();    
//     a2.display();    
//     a3.display();    
//     cout<<"Total Objects are: "<<Account::count;  
//     return 0;  
// }  