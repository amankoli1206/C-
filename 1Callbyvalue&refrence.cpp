#include<iostream>
using namespace std;
int swap(int *a,int *b)  //a=10;b=20;
{
  int temp=*a;  // *temp=10
  *a=*b;         //a=20 b==?
  *b=temp;      // b=10
}
int main()
{
    int x=10,y=20;
    cout<<"before the swap:"<<endl;
    cout<<"the vale of x :"<< x <<" the value of y :"<<y<<endl;

    swap(x,y); 

    cout<<"after the swap:"<<endl;
    cout<<"the vale of x :"<< x <<" the value of y :"<<y<<endl;
    
}