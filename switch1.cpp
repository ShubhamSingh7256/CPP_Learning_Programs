#include<iostream>
using namespace std;

int main()
{
     char input;

     cout<<"Enter a character"<<endl;
     cin>>input;

     switch(input)
     {
         case 'a' :  cout<<"Hello"<<endl;
         break;

         case 'b' :  cout<<"Namste"<<endl;
         break;

         case 'c' :  cout<<"Halo"<<endl;
         break;

         case 'd' :  cout<<"Ram Ram"<<endl;
         break;

         case 'e' :  cout<<"Radhe Radhe"<<endl;
         break;

         case 'f' :  cout<<"Har Har Mahadev"<<endl;
         break;

         default :  cout<<"Please give a character in between ""a"" to ""f"" "<<endl;
         break;

     }
}