#include<iostream>
using namespace std;

class Student
{
    public :

    int id;
    string name;
    string mobile_no;

    void input(int i,string n,string m)
    {
        id=i;
        name=n;
        mobile_no=m;
    }
    void output()
    {
        cout<<"The student's \nName is : "<<name<<"\nId is : "<<id<<"\n Mobile no. is : "<<mobile_no<<endl;
    }
};

int main()
{
    Student s1;
    Student s2;
    Student s3;

    s1.id;
    s1.name;
    s1.mobile_no;

    s2.id;
    s2.name;
    s2.mobile_no;

    s3.id;
    s3.name;
    s3.mobile_no;

    cout<<"Enter student's id "<<endl;
    cin>>s1.id;
    cout<<"Name "<<endl;
    cin>>s1.name;
    cout<<"Mobile no. "<<endl;
    cin>>s1.mobile_no;

    cout<<"Enter student's id "<<endl;
    cin>>s2.id;
    cout<<"Name "<<endl;
    cin>>s2.name;
    cout<<"Mobile no. "<<endl;
    cin>>s2.mobile_no;

    cout<<"Enter student's id "<<endl;
    cin>>s3.id;
    cout<<"Name "<<endl;
    cin>>s3.name;
    cout<<"Mobile no. "<<endl;
    cin>>s3.mobile_no;

    s1.input(s1.id,s1.name,s1.mobile_no);
    s1.input(s2.id,s2.name,s2.mobile_no);
    s1.input(s3.id,s3.name,s3.mobile_no);

    s1.output();
    s2.output();
    s3.output();

    return 0;
}