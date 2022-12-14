#include<iostream>
using namespace std;
class demo
{  public:
int a , b;
    void showdata()
    {
       
        cout<<"enter the is 1st num=";
        cin>>a;
        cout<<"enter the 2nd num=";
        cin>>b;
    }

};
    class derived:public demo
    { public:
    int sum;
        void display()
        {
        sum=a+b;
        cout<<"your answer is="<<a+b;
        }
    };

    int  main()
    {
        derived a;
        a.showdata();
        a.display();
        return 0;
    }