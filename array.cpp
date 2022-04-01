#include<iostream>
using namespace std;

int main()
{
    int array[5]={20,30,40,50,60};
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int arr[n];

    cout<<"Enter values in array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The entered values in array are :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}