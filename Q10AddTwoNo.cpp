/*Write functions using function overloading to add two numbers having different data 
types*/
#include<iostream>
using namespace std;
class Addition
{
    public:
    void add(int a,float b)
    {
        cout<<"Addition is "<<a+b<<endl;
    }
    
    void add(float x, long int y)
    {
        cout<<"Addition is "<<x+y<<endl;
    }
};

int main()
{
    Addition ad;
    long int a=90,b=23;
    float x=34.67;
    ad.add(a,x);
    return 0;
}