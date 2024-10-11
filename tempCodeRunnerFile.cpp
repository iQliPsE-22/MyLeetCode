#include <iostream>
using namespace std;

int main()
{
    int num1 = 6;
    int num2 = 10;

    // Bitwise AND
    int andResult = num1 & num2;
    cout << "Bitwise AND: " << andResult << endl;

    // Bitwise OR
    int orResult = num1 | num2;
    cout << "Bitwise OR: " << orResult << endl;

    // Bitwise XOR
    int xorResult = num1 ^ num2;
    cout << "Bitwise XOR: " << xorResult << endl;

    // Bitwise NOT
    int notResult = ~num1;
    cout << "Bitwise NOT: " << notResult << endl;

    // Bitwise left shift
    int leftShiftResult = num1 << 1;
    cout << "Bitwise Left Shift: " << leftShiftResult << endl;

    // Bitwise right shift
    int rightShiftResult = num1 >> 1;
    cout << "Bitwise Right Shift: " << rightShiftResult << endl;

    return 0;
}
