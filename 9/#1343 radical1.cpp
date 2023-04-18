/******************************************************************************
Created by Gabe on 18/04/23.

Requirement
A real number is given n. Display its square root.

Input data
The program reads the real number from the keyboard n.

Output data
The program will display the number on the screen R, representing the square root of n.

Restrictions and clarifications
1 ≤ n ≤ 1000
The displayed number will contain decimals .
It is recommended to use the type double.

Example:
Input
5

Output
2.23607
Explanation
The number was read n=5and its square root was displayed.
*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double n,r;
    cin>>n;
    r=sqrt(n);
    cout<<r;
    return 0;
}