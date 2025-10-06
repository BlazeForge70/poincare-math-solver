#include <iostream>
#include <math.h>
#include <cmath>
#include "poincare.h"
using namespace std;

int main() {
    cout << "Welcome to Poincare! Your math solver!\n";
    cout << "Copyright (c) 2025 BLAZE FORGE NET\n";
    cout << "Please enter your operations\n";
    cout << "Available branches: Arithmetic, Algebra, Geometry and Trigonometry\n";
        int option;
    do {
        cout << "\n--- POINCARE MATH SOLVER ---\n";
        cout << "1. Arithmetic\n2. Algebra\n3. Geometry\n4. Trigonometry\n0. Exit\nOption:";
        cin >> option;
        switch(option) { 
            case 1: Arithmetic(); break;
            case 2: Algebra(); break;
            case 3: Geometry(); break;
            case 4: Trigonometry(); break;
            case 0: 
               std::cout << "See you later! Have a nice day!\nPress ENTER to exit."; 
            std::cin.ignore();
            std::cin.get();
            break;
            default: cout << "Invalid input." << endl;
        }

    } while (option !=0);
    return 0;
}

void Arithmetic () {
    double a, b;
    char op; 
    cout << "Input operation: ";
    cin >> a >> op >> b;
    switch(op) {

        case '+': cout << "Result:" << a + b << endl; break;
        case '-': cout << "Result:" << a - b << endl; break;
        case '*': cout << "Result:" << a * b << endl; break;
        case '/': 
        if (b not_eq 0) cout << "Result:" << a / b << endl;
        else cout << "Errir: Divided by zero" << endl;
        break;
        default: cout << "Invalid operation" << endl;
    }
}

void Algebra() { 
    double a, b; 
    cout << "Linear equation ax + b = 0\n Input a and b; ";
    cin >> a >> b;
    if (a not_eq 0)
    cout << "Solved: x =" << -b / a << endl;
    else 
    cout << "Invalid equation (a = 0):" << endl;
}

void Geometry() {
    int option;
    cout << "1. Circle area\n2. Triangle area\n3. Rectangle area\nOption:";
    cin >> option;
    switch (option){
        case 1: {
            double r;
            cout << "Radius: "; cin >> r;
            cout << "Area: " << M_PI * r * r << endl;
            break;
        }
        case 2: {
            double b, h;
            cout << "Height and base: "; cin >> b >> h;
            cout << "Area: " << 0.5 * b * h << endl;
            break;
        }
        case 3: {
            double l, w;
            cout << "Wide and large: "; cin >> l >> w;
            cout << "Area: " << l * w << endl;
            break;
        }
        default: cout << "Invalid operation." << endl;
    }

}

void Trigonometry() {
    double angle;
    cout << "Put angle in degrees: ";
    cin >> angle;
    double rad = angle * M_PI / 100.0;
    cout << "Sine: " << sin(rad) << endl;
    cout << "Cosine: " << cos(rad) << endl;
    cout << "Tangent: " << tan(rad) << endl;
}

