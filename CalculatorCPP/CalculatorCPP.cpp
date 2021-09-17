#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "The simple calculator" << endl;
    cout << "Choose an operation. Format: x+y | x-y | x*y | x/y\n" << endl;
    
    Calculator c;
    while (true) {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0) {
            cout << "Division by 0" << endl;
            continue;
        }
        else {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result is: " << result << endl;
    }
    return 0;
}
