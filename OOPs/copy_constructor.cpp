#include<iostream>
using namespace std;

class Student 
{
    public :

    int roll;
    string name;
    string mobile;

    // Student()          // This is a Default Contructor...........
    // {
    //     cout<<"Default Constructor Called"<<endl;
    // }

    Student(int r, string n, string m)   // This is a Parameterize Constructor.......
    {
        roll=r;
        name=n;
        mobile=m;

        cout<<"Parameterized Constructor Called"<<endl;
    }
     Student(const Student &s)   // This is a Parameterize Constructor.......
    {
        roll=s.roll;
        name=s.name;
        mobile=s.mobile;

        cout<<"Copy Constructor Called"<<endl;
    }


    void print()
    {
        cout<<"The user's name is "<<name<<" Roll_no. is "<<roll<<" and mobile is "<<mobile<<endl;
    }

};

int main()
{
    // Student s1;    // Here when we create object then Default Constructor automatically called....
    // Student s2;
    // Student s3;
    
    Student s1(5,"Shubham Kumar","7256069303");    //Here when we create object then Parameterized Constructor automatically called....
    Student s2=s1;
    Student s3(s2);

    s1.print();
    s2.print();
    s3.print();

    return 0;
}