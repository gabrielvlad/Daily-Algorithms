/******************************************************************************
Created by Gabe on 30/03/2023.

Requirement
On the planet Mars, the Martian year lasts z Martian days. Martian Iggle celebrates his birthday and finds that he lived n days. How many candles will Iggle's cake have?

Input data
The program reads natural numbers from the keyboard z n.

Output data
The program will display the number of candles on Iggle's cake on the screen.

Restrictions and clarifications
1 ≤ z ≤ 1.000
1 ≤ n ≤ 1.000.000.000

Example:
Input
7 56

Output
8

Explanation
The Martian Year has 7 days. Iggle lived 56 of days, that is 8 years, so the cake will have 8 candles.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int z,n,c;
    cin>>z>>n;

    //Assigning years as z and days as n
    z=z;
    n=n;

    //Calculate how many years aka candles as c he has by dividing n (days) from z years
    c=n/z;

    cout<<c;

    return 0;
}