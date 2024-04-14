/******************************************************************************
Created by Gabe on 14/04/24.

Requirement
Numbers are read from the keyboard until zero appears. To determine how many of them were even.

Input data
The program reads integers from the keyboard. Reading ends when entering the value 0, which will not be counted.

Output data
The program displays on the screen the number K, representing the number of even numbers read.

Restrictions and clarifications
the numbers read belong to the range (-1.000.000,1.000.000);
if no number is even, the message will be displayed NU EXISTA.

Example:
Input
1 2 3 4 5 6 0

Output
3
*******************************************************************************/

#include <iostream>

using namespace std;

// Initialize a counter for even numbers as k
long long k = 0;
// Initialize a variable for any number as x
long long x;



int main()
{
    //Ininitial usage instructions message
    cout << "Enter a number (0 to stop): ";
    // Read numbers until 0 is entered
    while (true)
    {
        cin >> x;

        // Check if the number is 0
        if (x == 0)
        {
            break;
        }

        // Check if the number is even
        if (x % 2 == 0)
        {
            k++;
        }
    }

    // Output the count of even numbers
    if (k == 0)
    {
        cout << "NU EXISTA" << endl;
    }
    else
    {
        cout << "There is a total of: " << k << " even number/s" << endl;
    }

    return 0;
}

