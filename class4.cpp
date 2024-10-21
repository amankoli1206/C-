#include<iostream>
using namespace std;
 class Mycars
 {
    public:
         string brand;
         string model;
         int year;


 };
 int main()
 {
    Mycars obj1;
    obj1.brand=" BMW ";
    obj1.model=" i7 ";
    obj1.year = 2022;

    Mycars obj2; 
    obj2.brand="Lamborghini ";
    obj2.model="Countach LPI 800-4 ";
    obj2.year = 1963;

    Mycars obj3;
    obj3.brand="Mercedes Benz ";
    obj3.model="Mercedes MaybachS-Class ";
    obj3.year = 1926 ;

    cout<< obj1.brand << obj1.model << obj1.year <<endl;
    cout<< obj2.brand << obj2.model << obj2.year <<endl;
    cout<< obj3.brand << obj3.model << obj3.year <<endl;


 }
