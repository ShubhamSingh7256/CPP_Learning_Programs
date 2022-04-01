#include<iostream>
using namespace std;

int main()
{
    int a=25;
    int b=10;

    //................Arithmatic Operator....................

          //....1....Binary Operator...

    cout<<"a+b = "<<a+b<<endl;            //Additional operator
    cout<<"a-b = "<<a-b<<endl;            //Subtractional operator
    cout<<"a*b = "<<a*b<<endl;            //Multiplicational operator
    cout<<"a/b = "<<a/b<<endl;            //Divisional operator
    cout<<"a%b = "<<a%b<<endl;            //Modulational operator



          //....2....Unary Operator...



    cout<<"a++ = "<<a++<<endl;
    cout<<"a = "<<a<<endl;    
    cout<<"++a ="<<++a<<endl;  



    //....................Relational Operator......................

    int c=30;
    int d=15;
    int e=30;

    if(c==e)
    {
        cout<<"Equal equal to operator (==)"<<endl;
    }
    if(c!=d)
    {
        cout<<"Not Equal to operator(!=)"<<endl;
    }
    if(c>d)
    {
        cout<<"Greater than operator(>)"<<endl;
    }
    if(d<e)
    {
        cout<<"Less than operator(<)"<<endl;
    }
    if(c>=e)
    {
        cout<<"Greater than and equal to operator(>=)"<<endl;
    }
    if(d<=e)
    {
        cout<<"Less than and equal to operator(<=)"<<endl;
    }


    //......................Logical Operator........................

    if(c>d&&d<e)
    {
        cout<<"AND AND operator (&&)"<<endl;
    }
    if(c>d||d>e)
    {
        cout<<"OR OR operator (||)"<<endl;
    }
    if(!c<d||d>e)
    {
        cout<<"Not operator (!)"<<endl;
    }


    //...........................Assignment Operator........................

    int f=20;
    int g=10;
    int h;

    h=g;
    cout<<"Equal to operator (=)  :"<<h<<endl;
    f+=g;
    cout<<"(+=) operator  -  f+=g :"<<f<<endl;            // f+=g ==>  f=f+g
    f-=g;
    cout<<"(-=) operator  -  f-=g :"<<f<<endl;            // f-=g ==>  f=f-g
    f*=g;
    cout<<"(*=) operator  -  f*=g :"<<f<<endl;            // f*=g ==>  f=f*g
    f/=g;
    cout<<"(/=) operator  -  f/=g :"<<f<<endl;            // f/=g ==>  f=f/g


    //...........................Miscellaneous Operator.....................

    int i=(5,6,7,8);
    char ch='a';
    int *j=&i;

    cout<<"Sizeof() operator / size of int :"<<sizeof(int)<<endl;
    cout<<"Conditional operator ( condition?X:Y ) , if f>g then print Hello ,else namsate :"<<(f>g?f:g)<<endl;
    cout<<"Conditional operator ( condition?X:Y ) , if f<g then print Hello ,else namsate :"<<(f<g?f:g)<<endl;
    cout<<"Cast operator (converting one data type into another) : "<<int(ch)<<endl;
    cout<<"Comma (,) operator : "<<i<<endl;
    cout<<"& operator used for address / address of i : "<<&i<<endl;
    cout<<"* operator used for pointing : "<<j<<endl;
    

    //..........................Bitwise Operator...........................


    int x=5;
    int y=6;

    cout<<"Bitwise operators are used in Binary calculation (&,|,^,~,<<,>>) (AND,OR,XOR,Ones complement,Left shift,Right shift) "<<endl;    

    return 0;
}