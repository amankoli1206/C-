#include<iostream>
using namespace std;

class Calculator
{
   private :
          double num1;
          double num2;
   public :
          void setdata(double a,double b)
          { 
            
            num1=a;
            num2=b;
          }
          double add()
          {
            return num1+num2;
          }
          double subtract()
          {
            return num1-num2;
          }
          double multiply()
          {
            return num1*num2;
          }
          double divide()
          {
            if (num2!=0)
            {
                return num1/num2;
            }
            else
            {
                cout<<"division by zero "<<endl;
                return 0;
            }
          }
        
};
int main()
{
    
    Calculator calc; // Create an object 'calc' of class 'Calculator'
    double a, b; // Variables to hold the operands
    char operation; // Variable to hold the chosen operation

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Set the operands in the calculator object
    calc.setdata(a, b);

    // Perform the chosen operation and display the result
    switch (operation) 
    {
        case '+':
            cout << "Result: " << calc.add() << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract() << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply() << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    return 0;
}
   
