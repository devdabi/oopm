#include<iostream>
using namespace std;
class base
{
    public:
    int display()
    {
        cout<< "dev ";
    }
};
class derived:virtual base
{

};
int main()
{
    base b;
    b.display();
    cout<<sizeof(b.display());
    return 0;
}
