/*#include <iostream>  
using namespace std;  
int main()  
{  
int a=20,b=10,*p1=&a,*p2=&b;    
cout<<"Before swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
*p1=*p1+*p2;    
*p2=*p1-*p2;    
*p1=*p1-*p2;    
cout<<"After swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
   return 0;  
}  */

// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//     char const *names[5] = {"john","Peter","Marco","Devin","Ronan"};

//  // char *names[5] = {"john","Peter","Marco","Devin","Ronan"};

//    for(int i=0;i<5;i++)  
//    {  
//       std::cout << names[i] << std::endl;  
//    }  

//    return 0;  
// }  

#include <iostream>  
using namespace std;  
int main()  
{  
 int *p;  
 int a=8;  
 int *q;  

 p=&a;  
 q=p;  
std::cout << "The value of q is : " <<q<< std::endl; 
return 0;  
}  