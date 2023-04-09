/******************************************************************************
Created by Gabe on 09/04/23

Requirement
In a beehive, on an infinite honeycomb, lives a very industrious bee. The honeycomb is made up of hexagonal cells, each cell having six neighbors. On the first day, the bee deposits nectar in a single cell. On each of the following days, the bee deposits nectar in neighboring cells with those in which nectar has already been deposited.

A somehow representation of it using ASCII characters:

    /\  /\  /\
   /  \/  \/  \
  / /\  /\  /\ \
 / /__\/__\/__\ \
 \ \  /\  /\  / /
  \ \/  \/  \/ /
   \/\  /\  /\/
      \/  \/

Find out how many cells are nectar deposited by n days.

Input data
The program reads the number n from the keyboard.

Output data
The program will display on the screen the number C, representing the number of cells in which nectar is deposited after n days.

Restrictions and clarifications
1 ≤ n ≤ 1.000.000

Example:
Input
4

Output
37
*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n; // read the input value of n
    long long cells = 1; // initialize the number of cells to 1
    for (long long i = 1; i <= n; i++) { // loop over each day
        cells += 6 * (i - 1); // add the number of cells in the current ring
    }
    cout << cells << endl; // print the final number of cells
    return 0;
}


