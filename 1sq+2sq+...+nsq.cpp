#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the num:"<<endl;
    cin>>n;
    int sum=0;

    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i;

    }
    cout<<"the sum is:"<<n<<endl;
    cout<<"square="<<sum<<endl;
}