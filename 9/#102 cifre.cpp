/******************************************************************************
Created by Gabe on 15/04/23.

Requirement
Write a program that reads from the keyboard a natural number with at least two digits and determines the sum between the tens digit and the units digit of the read number.

Input data
The program will read a natural number from the keyboard n.

Output data
The program will display a number on the screen s, representing the sum of the tens digit and the units digit of the number n.

Restrictions and clarifications
9 < n < 1.000.000.000

Example:
Input
2012

Output
3
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,s;
    cin>>a;
    s=(a%100)/10 + a%10;
    cout<<s;
}
