/******************************************************************************
Created by Gabe on 20/03/2023.

Requirement
In a tree there are 1 white balls, twice as many red balls, and green balls with 3less than the number of red balls. How many globes are there in total?

Input data
The program reads the natural number from the keyboard a.

Output data
The program will display the total number of globes on the screen.

Restrictions and clarifications
2 ≤ a ≤ 1000

Example:
Input
7
Output
32

Explanation
There are 7white, 14red and 11green globes, total 32globes.
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin>>a;

    b=a*2;
    c=b-3;

    cout<<a+b+c;

    return 0;
}
