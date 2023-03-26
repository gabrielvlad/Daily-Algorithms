/******************************************************************************
Created by Gabe on 26/03/2023.

Requirement
A box of candies costs B lei. Gigel has S lions(romanian currency is called Lion). Determine how many boxes of candy Gigel can buy and how many more lei he needs to get to buy another box.

Input data
The program reads natural numbers from the keyboard B S.

Output data
The program displays on the screen the numbers C P, separated by a space, representing the number of candy boxes that Gigel can buy with Slei, respectively the amount needed to buy another box.

Restrictions and clarifications
1 ≤ B,S ≤ 1.000.000.000

Example:
Input
4 9

Output
2 3

Explanation
Gigel has 9lei, and a box of candy costs 4lei. Can buy 2boxes, remaining 1lion. For another box, Gigel needs more 3lei.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int B,S,C,P;
    cin>>B>>S;
    C=S/B;
    P=B-(S%B);
    cout<<C<<" "<<P;

    return 0;
}
