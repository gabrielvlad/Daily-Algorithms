/******************************************************************************
Created by Gabe on 06/04/2023.

Requirement
In a group there are n friends. When they meet they greet each other, each shaking hands with everyone else. How many handshakes take place?

Input data
The program reads the number from the keyboard n.

Output data
The program will display the required value on the screen.

Restrictions and clarifications
1 ≤ n ≤ 1.000.000.000

Example:
Input
3

Output
3

Explanation
If the three friends are A B C, then the following handshakes occur: (A,B), (A,C) and (B,C).
*******************************************************************************/
//First iteration using nested loops
/*
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    long long handshakeCount=0;
    for(long long i=0; i<n; i++)
    {
        for(long long j=i+1; j<n; j++)
        {
            handshakeCount++;
        }
    }

    cout<<handshakeCount<<endl;

    return 0;
}
*/

//This is the second iteration because the loops solution was not using a long long int and apparently the given one or more sets of input data, consistent with problem-specific constraints were validating it as not a complete solution.
/*
 * The formula calculates the number of distinct pairs that can be formed from a set of n elements.
 * For example, if n is 4, the formula would give us: 4*(4-1)/2 = 6, which means there are 6 distinct pairs that can be formed from the set of 4 elements, such as (1,2), (1,3), (1,4), (2,3), (2,4), and (3,4).
 */

#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long hand_shakes=n*(n-1)/2;//since we are interested in distinct numbers we divide by 2
    cout<<hand_shakes;
    return 0;
}