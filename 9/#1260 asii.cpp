/******************************************************************************
Created by Gabe on 16/03/2023.

Requirement
Two natural numbers are read. Display their sum, difference, product, and quotient, in that order, separated by a space.

Restrictions and clarifications
the two numbers read will be smaller than 500;
the second will be subtracted from the first number;
the first number will be divided by the second; the quotient of the whole division will be displayed.

Example:
Input
15 3
Output
18 12 45 5
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<""<<x+y;
    cout<<" "<<x-y;
    cout<<" "<<x*y;
    cout<<" "<<x/y;

    return 0;
}