/******************************************************************************
Created by Gabe on 23/04/23.

Requirement
Given a regular polygon with n sides of length one side. Find the area of the polygon.

Input data
The program reads the number n and l.

Output data
The program will display on the screen the number A, representing the area of the regular polygon with 2 exact decimals.

Restrictions and clarifications
3 ≤ n ≤ 360
l will be a natural number less than 1000
Example 1:
Input
3 2

Output
1.73

Example 2:
Input
4 3

Output
9.00

Example 3:
Input
6 3

Output
23.38
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    double l;
    cin>>n>>l;
    double A = (n*pow(l, 2))/(4*tan(M_PI/n));
    cout<<fixed<<setprecision(2)<<A;
    return 0;
}

