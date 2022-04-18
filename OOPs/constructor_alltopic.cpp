#include<iostream>
using namespace std;

class employee
{
    public :
  
    int id;
    string name;
    string mob_no;
    float sallary;
    int join_year;
    static int count;

    employee(int i,string n,string m,float s,int y)
    {
        id=i;
        name=n;
        mob_no=m;
        sallary=s;
        join_year=y;

        count++;
        cout<<"Parameterized constructor called "<<endl;
        cout<<count<<" object created "<<endl;
    }

    employee(const employee &e)
    {
        id=e.id;
        name=e.name;
        mob_no=e.mob_no;
        sallary=e.sallary;
        join_year=e.join_year;

        count++;
        cout<<"copy constructor called "<<endl;
        cout<<count<<" object created "<<endl;
    }

    void print()
    {
        cout<<"\nEmployee I'd : "<<id<<"\nEmployee Name : "<<name<<"\nEmployee Mob_no. : "<<mob_no<<"\nEmployee Sallary : "<<sallary<<"\nEmployee Join_year : "<<join_year<<endl;
    }

    ~employee()
    {
        cout<<"\nDestructor Called"<<endl;
    }


};
int employee::count=0;

int main()
{
    employee e1(103,"Shubham Kumar","7256069303",48990.50,2022);
    employee e2=e1;
    employee e3(e2);

    e1.print();
    e2.print();
    e3.print();

    return 0;
}