#include<iostream>
#include<math.h>
using namespace std;

void print(int num)
{
    cout<<num<<",";
}

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }return true;
}

void prime_number(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i))
        {
            print(i);
        }
    }
}

int main()
{
    int num1,num2;

    cout<<"Enter num1 "<<endl;
    cin>>num1;
    cout<<"Enter num2 "<<endl;
    cin>>num2;

    prime_number(num1,num2);

    return 0;
}