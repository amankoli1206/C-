#include<iostream>
using namespace std;

class GCD
{
   public:
      void findGCD()
      {
        int a,b;
        cout<<"enter the value of a and b"<<endl;
        cin>>a>>b;
        while (a!=0)
        {
            int r;
            r=a%b;
            a=b;
            b=r;
        }
        cout<<"gcd of the entered number is = "<<b<<endl;
        
      }
     
      
};
int main()
{
      GCD obj;
      obj.findGCD();
      
}