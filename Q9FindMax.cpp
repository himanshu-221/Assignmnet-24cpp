/*Write functions using function overloading to find a maximum of two numbers and both 
the numbers can be integer or real.*/
#include<iostream>
using namespace std;
class Maximum
{
    public:
    void max(float x,float y)
    {
        if(x>y)
        {
            cout<<"max is "<<x<<endl;
        }
        else
            cout<<"max is "<<y<<endl;
    }
    void max(int x,int y)
    {
         if(x>y)
        {
            cout<<"max is "<<x<<endl;
        }
        else
            cout<<"max is "<<y<<endl;
    }
};

int main()
{
    Maximum m;
    int a=12,b=56;
    float c=67.45,d=90.42;
    m.max(c,d);
    return 0;
}