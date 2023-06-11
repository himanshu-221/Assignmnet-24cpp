/*Define overloaded functions to calculate area of circle, area of rectangle and area of 
triangle*/
#include<iostream>
using namespace std;
class FunctionOverloading
{
    public:
        void area(float r)
        {
            cout<<"Area of circle is "<<3.14*r*r<<endl;
        }

        void area(float l, float w)
        {
            cout<<"Area of Rectangle is "<<l*w<<endl;
        }

        void area(int b,int h)
        {
            cout<<"area of traingle is "<<0.5*b*h<<endl;
        }
};
int main()
{
    FunctionOverloading f;
    float x=9.0;
    f.area(x,8.9);

    return 0;
}