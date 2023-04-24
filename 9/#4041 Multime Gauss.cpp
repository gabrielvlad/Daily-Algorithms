/******************************************************************************
Created by Gabe on 24/04/23.

Let it be the numbers 1, 2, 3, 4, 5, 6, 7, ..., n, ...that satisfies the rules below:
1 is part of the set numbered with 1.
2, 3 are part of the set numbered with 2.
4, 5, 6 are part of the set numbered with 3.
7, 8, 9, 10 are part of the set numbered with 4.
…
And n is part of the set numbered with m.

Representative image of the exercise rules:
https://cdn.jsdelivr.net/gh/gabrielvlad/assets-cdn@main/Daily-Algorthims/9/Multime_Gaussexp1.png

Requirement
Knowing the number n, let m be find out.

Input data
The program reads from the keyboard n.

Output data
The program will display the number on the screen m, representing the number of the set of which it is a part n.

Restrictions and clarifications
n, mare natural numbers
1 ≤ n, m ≤ 2*10^9+1

Example:
Input
7

Output
4

Explanation
7 is part of the set numbered with 4.
*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int find_set(long long n) {
    long long m = ceil((-1 + sqrt(1 + 8*n))/2); //Gauss formula used, so this exercises basically want you to search up the formula and write it in c++
    return m;
}
int main() {
    long long n;
    cin >> n;
    long long m = find_set(n);
    cout<<m;
    return 0;
}
