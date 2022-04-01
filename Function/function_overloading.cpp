#include<iostream>
using namespace std;

int myFunc(int x, int y)
{
    cout<<"This is integer Function "<<endl;

    return x+y;
}

int myFunc(int x)
{
    cout<<"This is single integer Function "<<endl;

    return x+x;
}

float myFunc(float x, float y)
{
    cout<<"This is float Function "<<endl;
    
    return x+y;
}

char myFunc(char x)
{
    cout<<"This is character Function "<<endl;

    return x;
}

int main()
{
    int x;
    int y;
    float a;
    float b;
    char c;

    cout<<"Enter 2 Integers "<<endl;
    cin>>x>>y;

    cout<<"Enter 2 Float "<<endl;
    cin>>a>>b;

    cout<<"Enter a Characters "<<endl;
    cin>>c;

    cout<<myFunc(x,y)<<endl;
    cout<<myFunc(a,b)<<endl;
    cout<<myFunc(c)<<endl;
    cout<<myFunc(x)<<endl;


    return 0;
}