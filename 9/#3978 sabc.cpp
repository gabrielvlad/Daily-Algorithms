/******************************************************************************
Created by Gabe on 28/03/2023.

If x and y are two natural numbers with x ≤ y, then we note with s(x,y) the sum of natural numbers between x and y. E.g, s(3,6) = 3+4+5+6 = 18, and s(7,7) = 7.

Requirement
Natural numbers are given a, b and c, where a ≤ b ≤ c. calculate s(a,b), s(b,c) and s(a,c).

Input data
The program reads natural numbers from the keyboard a, b and c.

Output data
The program will display on the screen, separated by a space, the three amounts.

Restrictions and clarifications
1 ≤ a ≤ b ≤ c ≤ 10.000

Example:
Input
3 10 20

Output
52 165 207

Explanation
The sum of the numbers from 3 to 10 is 52, the sum of the numbers from 10 to 20 is 165, and the sum of the numbers from 3 to 20 is 207.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    // Calculate s(a,b)
    int sum_ab = 0;
    for (int i = a; i <= b; i++) {
        sum_ab +=i;

    }
    // Calculate s(b,c)
    int sum_bc = 0;
    for (int i = b; i <= c; i++) {
        sum_bc +=i;

    }
    // Calculate s(a,c)
    int sum_ac = 0;
    for (int i = a; i <=c; i++) {
        sum_ac +=i;

    }
    cout<<sum_ab<<" "<<sum_bc<<" "<<sum_ac;

    return 0;
}