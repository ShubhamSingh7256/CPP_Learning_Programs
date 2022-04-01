#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a :"<<endl;
    cin>>a;

    cout<<"Enter value of b :"<<endl;
    cin>>b;

    cout<<"Enter value of c :"<<endl;
    cin>>c;

    if(a>=b)
    {
        if(a>=c)
        {
            cout<<"The biggest no is :"<<a<<endl;
        }
        else{
            cout<<"The biggest no is :"<<c<<endl;
        }
    }
    else{
        if(c>b)
        {
            cout<<"The biggest no is :"<<c<<endl;
        }

        else{
            cout<<"The biggest no is :"<<b<<endl;
        }
        
    }

    return 0;
}