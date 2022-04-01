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

    int max=array[0];
    int min=array[0];

    for(int i=1;i<n;i++)
    {
        if(array[i]>=max)
        {
            max=array[i];
        }
        if(array[i]<=min)
        {
            min=array[i];
        }
    }

    cout<<"The maximum value is : "<<max<<endl;
    cout<<"The minimum value is : "<<min<<endl;

    return 0;
}