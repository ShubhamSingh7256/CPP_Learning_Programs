#include<iostream>
using namespace std;

class B;
class A
{
    private :
    int num1,num2;
   // friend void print(A ob, B obj);

    public :
    void input()
    {
        cout<<"Enter 2 numbers "<<endl;
        cin>>num1>>num2;
    }

    friend void print(A ob, B obj);
    
};

class B
{
    private :
    int num1,num2;
    friend void print(A ob, B obj);

    public :
    void input()
    {
        cout<<"Enter 2 numbers "<<endl;
        cin>>num1>>num2;
    }

    //friend void print(A ob, B obj);
    
};

void print(A ob, B obj)
{
    cout<<"The sum of "<<ob.num1<<" and "<<ob.num2<<" is : "<<ob.num1+ob.num2<<endl;
    cout<<"The difference of "<<obj.num1<<" and "<<obj.num2<<" is : "<<obj.num1-obj.num2<<endl;
}

int main()
{
    A obj1;
    obj1.input();

    B obj2;
    obj2.input();

    print(obj1,obj2);

    return 0;
}