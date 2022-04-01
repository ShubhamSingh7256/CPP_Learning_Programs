#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

void print(int n)
{
    cout<<"The Final ans is :"<<n<<endl;
}

int main()
{
    int n,r;

    cout<<"Enter the value of n and r "<<endl;
    cin>>n>>r;

    int f=fact(n)/(fact(r)*fact(n-r));

    print(f);

    return 0;
}