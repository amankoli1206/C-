#include <iostream>
using namespace std;
int calsi(int a,int b)
{
    cout<<"a+b="<<a+b<<endl;
    cout<<"a-b="<<a-b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout<<"a/b="<<a/b<<endl;
    cout<<"a%b="<<a%b<<endl;
    
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=calsi(a,b);
}