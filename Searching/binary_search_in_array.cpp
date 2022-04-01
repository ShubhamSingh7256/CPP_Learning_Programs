#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;

    int array[n];
    cout<<"Add values in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<endl;

    int num;
    cout<<"Enter number to find in array :";
    cin>>num;

    int lb=0;
    int ub=n;
    int mid=(lb+ub)/2;

    while(lb<=ub)
    {
        if(array[mid]==num)
        {
            cout<<"The number "<<num<<" is found at index "<<mid+1<<endl;
            break;
        }
        else if(array[mid]>num)
        {
            ub=mid-1;
            mid=(lb+ub)/2;
        }
        else if(array[mid]<num)
        {
            lb=mid+1;
            mid=(lb+ub)/2;
        }
        
    }

   
    return 0;
}    