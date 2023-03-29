/******************************************************************************
Created by Gabe on 29/03/2023.

Requirement
On the planet Mars, money is different from ours. There are 3 types of coins: the first type of currency is worth a Martian lei, the second type is worth b Martian lei, and the third type of currency is worth c Martian lions. Martian Iggle has n first type coins, m second type coins and p third type coins. How many Martian lions does Iggle have?

Input data
The program reads natural numbers from the keyboard a b c, then natural numbers n m p.

Output data
The program will display the amount that Iggle holds on the screen.

Restrictions and clarifications
1 ≤ a , b , c ≤ 1000
1 ≤ n , m , p ≤ 10000

Example:
Input
2 3 7
4 2 2

Output
28
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,n,m,p,sum;
    cin>>a>>b>>c>>n>>m>>p;

    //a,b,c get assigned values.(according to how much the Maritan money are worth, this could be ignored but I keep it for clarity)
    a=a;
    b=b;
    c=c;

    //n,m,p gets the assigned value.(according to how much money the user aka Martian Iggle, has)
    n=n*a;
    m=m*b;
    p=p*c;

    sum=n+m+p;

    //display sum to the console.
    cout<<sum;

    return 0;
}