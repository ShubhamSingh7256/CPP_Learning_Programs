#include <iostream>  
#include<stdio.h>
using namespace std; 
int main()  
{
    int size;
cout<<"Enter the size of the array : ";     
cin >> size; 
int *arr = new int[size]; 
printf("Hello SHUBHAM");

cout<<"\n Enter the element : ";  
for(int i=0;i<size;i++)  
{  
cin>>arr[i];  
}  
cout<<"\nThe elements that you have entered are :";  
for(int i=0;i<size;i++)    
{  
cout<<arr[i]<<",";  
}  

cout<<"\nThe elements that you have entered are :"<<sizeof(*arr);

delete arr; 

cout<<"\nThe elements that you have entered are :"<<sizeof(*arr);  

return 0;  
}  