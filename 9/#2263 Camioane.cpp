/******************************************************************************
Created by Gabe on 24/03/2023.

Requirement
A company has two types of trucks: trucks of type 1, which can transport as many as t1 tons of cargo per day, and trucks of type 2, which can transport as many as t2 tons of cargo per day.
Knowing that the company has n trucks of the type 1 and m trucks of the type 2, how many tons of cargo can the company's trucks transport in z days.

Input data
The program reads natural numbers from the keyboard t1 t2 n m z.

Output data
The program will display the result on the screen.

Restrictions and clarifications
2 ≤ t1, t2 ≤ 100
2 ≤ n, m ≤ 100
2 ≤ z ≤ 30

Example:
Input
3 5 4 2 5

Output
110

Explanation
There are 4trucks of the type 1that can carry 3tons of cargo and 2trucks of the type 2that can carry 5tons of cargo. They will be able to transport tons of cargo in 5days .110
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t1,t2,n,m,z;
    cin>>t1>>t2>>n>>m>>z;

    t1=t1;
    t2=t2;
    n=n*t1;
    m=m*t2;
    z=z*(n+m);

    cout<<z;

    return 0;
}
