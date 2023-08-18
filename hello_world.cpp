#include <iostream>
#include "calculator.h"

using namespace std;

int main(void) {
    int num1 = 10;
    int num2 = 5;

    cout << "Hello world!" << endl;
    cout << "Welcome!" << endl;

    cout << "Sum = " << add(num1, num2) << endl;
    cout << "Difference = " << sub(num1, num2) << endl;

    return 0;
}
