/******************************************************************************
Created by Gabe on 05/04/2023.

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

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int handshakeCount = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            handshakeCount++;
        }
    }

    cout << handshakeCount << endl;

    return 0;
}
