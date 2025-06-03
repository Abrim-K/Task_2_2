#include <iostream> 
#include "Line.h" 
using namespace std;

void Line::SetCoeff() {
    cout << "Enter a = "; cin >> a;
    cout << "Enter b = "; cin >> b;
}

// Глобальный объект 
Line f_line;