/******************************************************************************
Created by Gabe on 14/04/23.

Requirement
Gigel is a years old and his father is b years old. In how many years will the ratio of Gigel's age to his father's be equal to c/d, where c and dare given.

Input data
The program reads from the keyboard the numbers a, b, c and d.

Output data
The program will display a required number on the screen x, with 2exact decimals, without rounding.

Restrictions and clarifications
1 ≤ a,b,c,d ≤ 1000000
x can be negative

Example 1:
Input
5 25 1 2

Output
15.00

Example 2:
Input
20 50 1 5

Output
-12.50

*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // Calculate how many years will pass until the ratio of ages becomes equal to c/d
    double x = static_cast<double>(a * d - b * c) / (c - d);

    // Print the result with 2 decimal places
    cout << fixed << setprecision(2) << x;

    return 0;
}



