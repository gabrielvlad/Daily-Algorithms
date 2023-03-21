/******************************************************************************
Created by Gabe on 21/03/2023.

Requirement

In a class there are F girls and B boys. Each girl reads 3 pages a day and each boy reads 2 pages a day. How many pages will the children read in n days?

Input data
The program reads natural numbers from the keyboard F B n.

Output data
The program will display the total number of pages read on the screen.

Restrictions and clarifications
1 ≤ F , B , n ≤ 1000

 Example:
Input
7 5 3
Output
93

Explanation
There are F=7girls, B=5boys and they read n=3for days. Together they will read 93pages.
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int F,B,n;

    cin>>F>>B>>n;

    F=F*3;
    B=B*2;
    n=(F+B)*n;

    cout<<n;

    return 0;
}
