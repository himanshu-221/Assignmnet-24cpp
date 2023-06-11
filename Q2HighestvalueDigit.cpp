/*Define a function to find the highest value digit in a given number.*/
#include<iostream>
using namespace std;
class highestvaluedigit
{
    public:
        int x,r,h=0;

        int hd()
        {
            int i=0;
            while(x!=0)
            {
                r=x%10;
                x=x/10;
                if(r>h)
                {
                    h=r;
                }
                i++;
            }
            return h;
        }

};
int main()
{
    highestvaluedigit hvd;
    int temp;
    cout<<"enter a number"<<endl;
    cin>>hvd.x;
    temp=hvd.hd();
    cout<<"Highest value digit is "<<temp<<endl;
    return 0;
}