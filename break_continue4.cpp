#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter a num1........."<<endl;
    cin>>num1;
    cout<<"Enter a num2........."<<endl;
    cin>>num2;

    int i,j;

    for(i=num1;i<=num2;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
            
        }
        if(j==i)
            {
                cout<<i<<endl;
            }
    }


    return 0;
}