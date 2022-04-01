#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}


void triangle(int r)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int f=fact(i)/(fact(j)*fact(i-j));
            cout<<f<<" ";
        }cout<<endl;
    }
}

int main()
{
    int row,column;

    cout<<"Enter row "<<endl;
    cin>>row;

    triangle(row);

    return 0;
}