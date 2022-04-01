#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a num to find it is a prime or non-prime"<<endl;
    cin>>num;

    cout<<"square root of "<<num<<" is : "<<sqrt(num)<<endl;

    int i;
  
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"Non Prime no."<<endl;
            break;
        }
       
    }
    cout<<i<<endl;
    if(i==num)
    {
        cout<<"Prime no."<<endl;
    }


    return 0;
}