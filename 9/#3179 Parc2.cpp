/******************************************************************************
Created by Gabe on 23/03/2023.

Requirement
In a park there are n paths. On each path there are n trees. Every tree has n branches. On every branch there are n nests. In every nest there are n birds. How many birds are in the park?

Input data
The program reads the natural number from the keyboard n.

Output data
The program will display the number of birds in the park on the screen.

Restrictions and clarifications
1 ≤ n ≤ 50

Example:
Input
3
Output
243
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

    int p,t,b,n,birds;

    cin>>p;
    t=p*p;
    b=t*p;
    n=b*p;
    birds=n*p;

    cout<<birds;

    return 0;
}
