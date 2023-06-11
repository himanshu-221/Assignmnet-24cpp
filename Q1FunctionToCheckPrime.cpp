#include<iostream>
using namespace std;
class prime{
    public:
    int x;
    int isprime()
    {
        for(int i=2;i<x/2;i++)
        {
            if(x%i==0)
            {
                return 1;
                break;
            } 
        }
        return 0;
    }
};
int main()
{
    prime p;
    cout<<"Enter a number"<<endl;
    cin>>p.x;
    int flag=0;
    flag=p.isprime();
    if(flag==0)
    {
        cout<<p.x<<" is prime number"<<endl;
    }
    else{
        cout<<p.x<<" is not a prime number"<<endl;
    }
    return 0;
}