#include<iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    float marks;

    Student(int id,string name,float marks)
    {
        this ->id=id;
        this ->name=name;
        this ->marks=marks;
    }

    void show()
    {
        cout<<id<<" "<<name<<" "<<"Marks : "<<marks<<endl;
    }
};

int main()
{
    //struct Student s1=Student(102,"Shubham",77.80);
    struct Student s1(102,"Shubham",77.85);

    s1.show();

    return 0;
}