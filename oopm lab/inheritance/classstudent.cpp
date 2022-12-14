#include<iostream>
using namespace std;
#include<conio.h>
class student
{
    int rollno;
    char a[20];
    public:
    student()
    {
        cout<<"********enter student detail*****************"<<endl;
        cout<<"enter student name="<<endl;
        gets(a);
        cout<<"enter roll number of student="<<endl;
        cin>>rollno;
    }
        
        void showdetail()
        {
            cout<<"\nstudent name is\n"<<a;
            cout<<"\nstudent roll no. is\n"<<rollno;
            
        }
    
    
};
class exam:public student
{
    public:
    int eng,hindi,maths,science;
    exam()
    {
        cout<<"***********************enter the marks of student**********************"<<endl;
        cout<<"enter the marks of english"<<endl;
        cin>>eng;
         cout<<"enter the marks of english"<<endl;
        cin>>hindi;
         cout<<"enter the marks of english"<<endl;
        cin>>maths;
         cout<<"enter the marks of english"<<endl;
        cin>>science;
    
    }
    void marksobtained()
    {
        cout<<"marks in english="<<eng<<"/100"<<endl;
        cout<<"marks in english="<<hindi<<"/100"<<endl;
        cout<<"marks in english="<<maths<<"/100"<<endl;
        cout<<"marks in english="<<science<<"/100"<<endl;
        
    }
};
class result:public exam
{
    int totalmarks;
    public:
     result()
    {
        totalmarks=eng+hindi+maths+science;
    }
    void totalmark()
    {
        cout<<"*********************total marks****************************"<<endl;
        cout<<"total marks are="<<totalmarks<<endl;

    }


};
int main()
{
    result ob;
    ob.showdetail();
    ob.marksobtained();
    ob.totalmark();
    return 0;
}