#include<iostream>
using namespace std;

int add(int num1,int num2 )
{
    int c=num1+num2;
    return c;
}
int add(int num1 , int num2, int num3)
{
    int sum=num1+num2+num3;
    return sum;
}

    float add(float num1, float num2)
    {
        float sum =num1+num2;
        return sum;

    }

int main()
{
    int a=5;
    int b=4;
    
    float c=3.14;
    float d=3.34;

    cout<< add(c,d)<<endl;

}