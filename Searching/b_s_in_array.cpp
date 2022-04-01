#include<iostream>
using namespace std;

int binarySearch(int n,int array[],int num)
{
    int s=0;
    int e=n;
    int mid;

    while(s<=e)
    {
        mid=(s+e)/2;

        if(array[mid]==num)
        {
            return mid;
        }
        else if(array[mid]>num)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}

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

    int index=binarySearch(n,array,num);

    if(index==-1)
    {
        cout<<"NOT FOUND !"<<endl;
    }
    else
    {
        cout<<"The number "<<num<<" is found at index "<<index<<endl;
    }

    return 0;
}