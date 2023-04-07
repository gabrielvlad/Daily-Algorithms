/******************************************************************************
Created by Gabe on 07/04/2023.

Requirement
Gigel has a piece of paper with the dimensions N*M and wants to cut it into pieces with the dimensions 1*1, following the rules:

- can only cut one sheet at a time. It cannot overlap several sheets and cut them at the same time;
- each cut is made from one side of the sheet to another, vertically or horizontally. The following figure shows the three ways in which a sheet of dimensions can be cut 3*2.

        xxx
        xxx

xxx     xx|x    x|xx
---
xxx     xx|x    x|xx

Write a program to read the numbers N and M that will represent the number of cuts to make.

Input data
The program reads non-zero natural numbers from the keyboard N, M.

Output data
The program will display the number S on the screen, representing the required value.

Restrictions and clarifications
1 ≤ N,M ≤ 1000000

Example:
Input
2 3

Output
5

Explanation
One way to make the cuts is:
 xxx    x|x|x   x x x
 ----   x|x|x   x x x
 xxx
*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    int n, m, s;
    cin >> n >> m;
    s = (n - 1) + 1LL * n * (m - 1); //LL is a suffix that tells the compiler to treat 1 as long long with is a shorthand for long long int
    cout << s;
    return 0;
}
