#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter values in array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    const int N= 1e6+2;
    int temp_arr[N];
    for(int i=0;i<N;i++)
    {
        temp_arr[i]=-1;
    }

    int pointer=1e6+2;
    
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];

        if(temp_arr[temp]==-1)
        {
            temp_arr[temp]=i;
        }
        else
        {
            pointer= min(pointer,temp_arr[temp]);
        }
    }

    if(pointer==1e6+2)
    {
        cout<<"Not any repeated element available "<<endl;
    }

    else
    {
        cout<<"The repeated element with minimun index value is : "<<pointer + 1<<endl;
    }

    return 0;
}