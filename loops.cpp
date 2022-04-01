#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter the no you want to loop :"<<endl;
    cin>>num;

   /* for(int i=1;i<=num;i++)
    {
        cout<<i<<endl;    
    }
    */

    int i=1;
  /*  while(i<=num)
    {
        cout<<i<<endl;  
        i++;  
    }
    */

   
    do{
        cout<<i<<endl;  
        i++;  
    }while(i<num+1);


    return 0;
}