/******************************************************************************
Created by Gabe on 16/04/23.

Requirement
Write a program that prompts for a number A(one digit) and displays the value of the expression A^16.
Apply the multiplication operator as few times as possible.

Input data
The program reads the number from the keyboard a.

Output data
The program will display the calculated value on the screen.

Restrictions and clarifications
0 ≤ a ≤ 9

Example:
Input
2

Output
65536
*******************************************************************************/
/* ver1 using simple multiplication
#include <iostream>
using namespace std;
int main() {
    long long a;
    cin>>a;
    a*=a;
    a*=a;
    a*=a;
    a*=a;
    cout<<a;
    return 0;
}
*/
/* ver2 using a loop */
#include <iostream>
using namespace std;
int main() {
    long long a;
    cin>>a;
    long long result=a;
    for(long long i=1;i<16;i++)
    {
        result*=a;
    }
    cout<<result;
    return 0;
}

