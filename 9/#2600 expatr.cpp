/******************************************************************************
Created by Gabe on 21/04/23.

Requirement
Write a program that reads a natural number from the keyboard a and displays the integer part of the value of the following expression
I used LaTeX code to illustrate the mathematical expression:
 \[
    \frac{3*(a^2 + a^4)}
    {a^2 + a^4 + \sqrt{a^2 + a^4}}
    +
    \sqrt{a^2+a^4}
\]

Input data
The program reads the number from the keyboard a.

Output data
The program will display on the screen the number a natural number, representing the required result.

Restrictions and clarifications
1 ≤ a ≤ 100

Example:
Input
2

Output
6
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    cin >> a;
    long long int x = a*a + a*a*a*a;
    long long int n = 3 * x;
    double m = x + (double)sqrt(x);
    double p = (double)sqrt(x);
    double y = n / m + p;
    cout << (int) y;
    return 0;
}
