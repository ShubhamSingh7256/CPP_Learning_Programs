#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter numbers in Array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            int temp;
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"The numbers in Array After Sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}