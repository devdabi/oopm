#include<iostream>
using namespace std;
#include<conio.h>
class complex
{   public:
    int a,b;
    complex(void);
    
    void printnumber()
    {
        cout<<a + b;
    }
};
    complex::complex(void)
    {
        a=10;
        b=20;
    }
int main()
{ 
    complex c;
    c.printnumber();
    return 0;
}