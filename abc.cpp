#include <iostream>
#include <cmath> // for square root and pi
using namespace std;

class Calculator {
public:
    // Function to add two numbers
    double add(double a, double b) {
        return a + b;
    }

    // Function to subtract two numbers
    double subtract(double a, double b) {
        return a - b;
    }

    // Function to multiply two numbers
    double multiply(double a, double b) {
        return a * b;
    }

    // Function to divide two numbers
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }

    // Team B Features
    // Function to calculate the square root of a number
    double squareRoot(double a) {
        if (a < 0) {
            cout << "Error: Negative input for square root!" << endl;
            return 0;
        }
        return sqrt(a);
    }

    // Function to calculate the cube of a number
    double cube(double a) {
        return a * a * a;
    }

    // Function to calculate the area of a rectangle
    double areaRectangle(double length, double width) {
        return length * width;
    }

    // Function to calculate the area of a circle
    double areaCircle(double radius) {
        return M_PI * radius * radius;  // Using M_PI from cmath for pi value
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /, r, c, S, A): ";
    cout << "\nr for square root, c for cube, S for area of rectangle, A for area of circle" << endl;
    cin >> operation;

    if (operation != 'r' && operation != 'c' && operation != 'A') { // Square root, cube, and area of circle need one input
        cout << "Enter second number: ";
        cin >> num2;
    }

    switch (operation) {
        case '+':
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        case 'r':
            cout << "Result: " << calc.squareRoot(num1) << endl;
            break;
        case 'c':
            cout << "Result: " << calc.cube(num1) << endl;
            break;
        case 'S':
            cout << "Enter length: ";
            cin >> num1;
            cout << "Enter width: ";
            cin >> num2;
            cout << "Area of Rectangle: " << calc.areaRectangle(num1, num2) << endl;
            break;
        case 'A':
            cout << "Enter radius: ";
            cin >> num1;
            cout << "Area of Circle: " << calc.areaCircle(num1) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
