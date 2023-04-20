/******************************************************************************
Created by Gabe on 20/04/23.

Requirement
Write a program that prompts the keyboard for a real number (in a double variable) and displays the first digit after the decimal point in the read value.

Input data
The program reads the number from the keyboard a.

Output data
The program will display the required figure on the screen.

Restrictions and clarifications
1 ≤ a ≤ 1000

Example:
Input
123.45

Output
4
*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a;
    cin>>a;
    int r = (int)((a * 10) - (int)(a) * 10);
    cout<<r;

    return 0;
}
