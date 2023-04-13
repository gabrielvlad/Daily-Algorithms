/******************************************************************************
Created by Gabe on 13/04/23.

Requirement
It is known that there are n cats that eat n mice in n minutes. To find out in how much time do m cats eat m mice.

Input data
The program reads from keyboard the natural numbers n and m

Output data
The program will display on the screen the number T, representing the time required for m cats to eat m mice.

Restrictions and clarifications
1 ≤ n,m ≤ 100.000.000.000

Example:
Input
3 100

Output
3
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin>>n>>m;

    //Calculate how many mice a single cat can eat in one minute
    long long spm = (m + n - 1) / n;

    //Calculate how much time it would take for m cats to eat m mice
    long long t = (m + spm - 1) / spm;

    //Display the time resulted to the console:
    cout<<t;
    return 0;
}
