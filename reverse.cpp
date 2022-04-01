#include<iostream>
using namespace std;

int main()
{
    int num;
    int reverse=0;

    cout<<"Enter a number to find it's reverse : ";
    cin>>num;

    while(num>0)
    {
        int lastdigit=num%10;
        
        reverse=reverse*10 + lastdigit;
        num=num/10;
    }

    cout<<"Reverse of given number is : "<<reverse<<endl;

    return 0;
}