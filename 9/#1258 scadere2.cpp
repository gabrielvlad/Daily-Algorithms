/******************************************************************************
Created by Gabe on 15/03/2023.

Requirement
Two natural numbers are given. Calculate their difference.
Restrictions and clarifications
the two numbers are smaller than 2.000.000.000
the second number will be subtracted from the first

Example:
Input
5 3
Output
2
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x,y,sum;
    cin>>x;
    cin>>y;
    sum=x-y;
    cout<<sum;

    return 0;
}
