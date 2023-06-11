/*Define a function to calculate x raised to the power y.
*/
#include<iostream>
using namespace std;
class PowerFunction
{
    public:
        int x,y;

        int pow()
        {
            int i,p=1;
            for(i=0;i<y;i++)
            {
                p*=x;
            }
            return p;
        }
};
int main()
{
    PowerFunction p;
    cout<<"Enter a number"<<endl;
    cin>>p.x;
    cout<<"Enter its power"<<endl;
    cin>>p.y;
    int temp=p.pow();
    cout<<"x raised to the power y is "<<temp<<endl;
    return 0;
}