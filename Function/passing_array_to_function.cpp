#include<iostream>
using namespace std;

int myfunc(int array[10])
{
    int i=0;
    int result=0;
/*
    for(int i=0;i<10;i++)
    {
        result=result+array[i];
    }
*/
    while(array[i]!='\0')
    {
        result=result+array[i];
        cout<<"Value : "<<i<<endl;
        i++;
    }

    return result;
}

int main()
{
    int arr[10]={7,2,4,67,4,33,2,5,8,9};

    int result = myfunc(arr);

    cout<<"The sum of all array elements is : "<<result;

    return 0;
}