/*Write a function using the default argument that is able to add 2 or 3 numbers.*/
#include<iostream>
using namespace std;
class DefaultArguments
{
    public:

    int add(int x,int y,int z=0)
    {
        return x+y+z;
    }
};
int main()
{
    DefaultArguments d1;
    int sum=0;
    sum=d1.add(12,13,6);
    cout<<"Sum is "<<sum<<endl;
    return 0;
}