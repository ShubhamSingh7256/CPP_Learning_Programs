#include<iostream>
using namespace std;

int main()
{
    int pocketmoney=2000;

    for(int date=1;date<30;date++)
    {
        if(date%2==0)
        {
            continue;     //Skip to the next iternation of loop...........................
        
        }

        if(pocketmoney==0)
        {
            break;          // Terminate the loop.....................................
        }

        cout<<"Go for Out on Date :"<<date<<endl;
        pocketmoney=pocketmoney-200;
    }

    return 0;
}