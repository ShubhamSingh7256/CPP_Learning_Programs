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

    for(int i=0;i<n-1;i++)
    {
        int temp;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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