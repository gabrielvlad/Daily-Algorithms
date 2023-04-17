/******************************************************************************
Created by Gabe on 17/04/23.

Requirement
A number is given. Display its square root.

Input data
The program reads the number from the keyboard n.

Output data
The program will display the natural number on the screen r, representing the square root of n.

Restrictions and clarifications
1 ≤ n ≤ 1000
in each test the number n will be a perfect square

Example:
Input
9

Output
3
*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long n,r;
    cin>>n;
    r=sqrt(n);
    cout<<r;
    return 0;
}
