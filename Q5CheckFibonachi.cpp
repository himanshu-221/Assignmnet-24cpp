/*Define a function to check whether a given number is a term in a Fibonacci series or not.*/
#include<iostream>
using namespace std;
class fibonacci
{
    public:
        int num1=0,num2=1,num=0,n;
    void checkFibNumber()
    {
        int flag=0;
        for(int i=0;i<n;i++)
        {
            num=num1+num2;
            if(num==n){
                cout<<"number "<<n<<" is term of fibonacci series"<<endl;
                flag++;
                break;
            }
            num1=num2;
            num2=num;
        }
        if(flag==0)
        {
            cout<<n<<" is not term of fibonacci series";
        }
    }
};
int main()
{
    fibonacci fib;
    cout<<"Enter number to check fibonacci"<<endl;
    cin>>fib.n;
    fib.checkFibNumber();
}