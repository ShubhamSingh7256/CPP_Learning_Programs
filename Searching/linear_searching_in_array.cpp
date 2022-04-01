#include<iostream>
using namespace std;

int main()
{
    int n;
    int num;
    cout<<"Enter the size of array :";
    cin>>n;

    int array[n];
    cout<<"Add values in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<endl;

    cout<<"Enter number to find in array :";
    cin>>num;

    for(int i=0;i<n;i++)
    {
        if(num==array[i])
        {
            cout<<"The number "<<num<<" is found at index "<<i+1<<endl;
        }
    }

    return 0;
}    