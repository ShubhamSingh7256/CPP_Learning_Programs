#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a no. :"<<endl;
    cin>>num;

    if(num%2==0)
    {
        cout<<"Entered no is Even"<<endl;
    }

    else{
        cout<<"Entered no is Odd"<<endl;
    }

    return 0;
}