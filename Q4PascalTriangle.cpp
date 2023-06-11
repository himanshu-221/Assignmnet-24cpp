/*Define a function to print Pascal Triangle up to N lines.*/
#include<iostream>
using namespace std;

class pascalTriangle
{
    public:
    int factorial(int n)
    {
        int fact=1;
        while(n>=1)
        {
            fact=fact*n;
            n--;
        }
        return fact;
    }
    int combination(int x,int y)
    { 
        return (factorial(x)/(factorial(y)*factorial(x-y)));
    }
    void PascalTriangle(int x)
    {
        int i,j,k,r,n=x;
        for(i=0;i<n;i++)
        {
            k=1;
            r=0;
            for(j=0;j<=n*2;j++)
            {
                if(j>=n-i && j<=n+i && k)
                {
                    cout<<combination(i,r);
                    k=0;
                    r++;
                }
                else{
                    cout<<" ";
                    k=1;
                }
            }
            cout<<endl;
        }
    }
};
int main()
{
    pascalTriangle pt;
    int n;
    cout<<"enter number of rows"<<endl;
    cin>>n;
    pt.PascalTriangle(n);
    return 0;
    
    
}