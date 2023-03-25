/******************************************************************************
Created by Gabe on 25/03/2023.

Requirement
Given two natural numbers x and y determine the value that must be added to x to obtain the triple of y.

Input data
The program reads from the keyboard the numbers x and y.

Output data
The program will display on the screen the number that added to x will get the triple of y.

Restrictions and clarifications
1 ≤ x,y ≤ 100.000.000
the result may be negative

Example:
Input
5 12

Output
31

Explanation
31+5=12*3
*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    y = y * 3;
    x = y - x;
    cout << x;
    return 0;
}
