/*Define a function to swap data of two int variables using call by reference*/
#include<iostream>
using namespace std;
class swapNumber
{
    public:

    int swap(int *n1,int *n2)
    {
        int temp;
        temp=*n1;
        *n1=*n2;
        *n2=temp;
    }
};
int main()
{
    swapNumber s1;
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    s1.swap(&a,&b);
    cout<<"number 1 "<<a<<"     number 2 "<< b<<endl;
}