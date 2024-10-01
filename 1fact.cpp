#include <iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"enter the num:"<<endl;
    cout<<"--------------"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of "<< n << " is = " << fact <<endl;
}