/******************************************************************************
Created by Gabe on 19/03/2023.

Requirement
Two natural numbers are given x and y. Calculate the last digit of their amount.

Input data
The program reads the numbers from the keyboard x and y.

Output data
The program will display the last digit of the amount on the screen x+y.

Restrictions and clarifications
1 ≤ x,y < 1.000.000

Example:
Input
25 78
Output
3
*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    cout << (x + y)  % 10 << endl;
    return 0;
}

