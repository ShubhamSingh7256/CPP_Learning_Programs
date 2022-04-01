/*
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter no max no of * in a single line : ";
    cin>>num;

    // for(int i=1;i<=num;i++)   // for  rows...........................
    // {
    //     for(int j=1;j<=)
    // }
    int n=num;
    for(int i=1;i<=num;i++)
    {
        for(int j=n;j>=1;--j)
        {
            cout<<" * ";
        }cout<<endl;
        n=n-1;
    }
    

    return 0;
}