#include<iostream>
using namespace std;

int main()
{
    enum WEEK {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    WEEK day=Thursday;
    cout<<"Day : "<<day+1<<endl;
    
    return 0;
}