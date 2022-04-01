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

void print(int n,int f)
{
    cout<<"The Factorial of "<<n<<" is "<<f<<endl;
}

int main()
{
    int num;

    cout<<"Enter a number to print Factorial "<<endl;
    cin>>num;

    int f=fact(num);

    print(num,f);

    return 0;
}