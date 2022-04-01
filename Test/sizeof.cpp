#include<iostream>
using namespace std;

int main()
{
    int array[]={1,2,3,4,5};

    cout<<sizeof(array)<<endl;
    cout<<sizeof(array[0])<<endl;
    cout<<sizeof(int)<<endl;

    char arr[]={'1','2','3','4','5'};

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<sizeof(char)<<endl;

    double a[]={1,2,3,4,5};

    cout<<sizeof(a)<<endl;
    cout<<sizeof(a[0])<<endl;
    cout<<sizeof(double)<<endl;

    double *p; //=&array[0];

    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&array[0])<<endl;


    return 0;
}