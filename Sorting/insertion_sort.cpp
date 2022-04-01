#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int arr[n];
    cout<<"Enter elements in array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
        
        int temp;
       /* while(arr[i]<arr[i-1] && i>0)
        {
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;

            i--;
        }*/
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }

    cout<<"Sorted Array elements are :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}