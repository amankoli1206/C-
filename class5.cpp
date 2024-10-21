#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace

// Define a class named 'A'
class A {
private:
    int a; // Private member variable 'a', accessible only within this class

protected:
    int b; // Protected member variable 'b', accessible within this class and derived classes

public:
    // Public method to get data from the user
    void getdata() 
    {
        cout << "Enter the first num" << endl;
        cin >> a; // Input for 'a'
        cout << "Enter the second num" << endl;
        cin >> b; // Input for 'b'
    }

    // Public method to add 'a' and 'b'
    void adddata() 
    {
        cout << "Add is = " << a + b << endl;
    }

    // Public method to multiply 'a' and 'b'
    void muldata() 
    {
        cout << "Mul is = " << a * b << endl;
    }

    // Public method to subtract 'b' from 'a'
    void subdata() 
    {
        cout << "Sub is = " << a - b << endl;
    }
};

int main() {
    A obj1;    // Create an object 'obj1' of class 'A'
    obj1.getdata();  // Call the method to get input from the user
    obj1.adddata();  // Call the method to perform addition
    obj1.muldata();  // Call the method to perform multiplication
    obj1.subdata();  // Call the method to perform subtraction
}
