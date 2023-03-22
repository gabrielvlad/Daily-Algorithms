/******************************************************************************
Created by Gabe on 22/03/2023.

Requirement
In a yard there are dogs, cats and chickens. It is known that the number of cats is equal to twice the number of dogs, and the number of chickens is equal to twice the number of cats. If there are C dogs in the yard, how many animals are there in the yard?

Input data
The program reads the natural number from the keyboard C.

Output data
The program will display the total number of animals in the yard on the screen.

Restrictions and clarifications
2 ≤ C ≤ 1000
Example:
Input
3
Output
21

Explanation
There are 3dogs, 6cats and 12chickens, in total 21animals.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int d,c,ch,sum;

    cin>>d;

    d=d;
    c=d*2;
    ch=c*2;

    sum=d+c+ch;
    cout<<sum;

    return 0;
}
