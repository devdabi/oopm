#include<iostream>
using namespace std;
class base
{ public:
   
    int *p,*w;
    float *e;
    char *r;
    
    
    void showdata()
    {  
       cout<<"dev "; 
    }
    
};

int main()
{
    base b;
    b.showdata();
    cout<< sizeof(base);
    return 0;
}