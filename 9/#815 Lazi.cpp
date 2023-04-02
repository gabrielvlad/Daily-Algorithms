/******************************************************************************
Created by Gabe on 02/04/2023.

Requirement
How many cubic boxes on the side l can be superimposed in a room of height h.

Input data
The program reads natural numbers from the keyboard l and h.

Output data
The program will display the number on the screen n, representing the number of boxes that can be overlapping.

Restrictions and clarifications
1 ≤ l,h ≤ 1000000

 Example:
Input
2 7

Output
3

Explanation
They can only be overlapping 3 boxes, the fourth no longer enters.
*******************************************************************************/

//How many cubic boxes on the side l can be superimposed in a room of height h. Logic: we can find this by simply seeing how many times l enters in h, so we divide it.
#include <iostream>

using namespace std;

int main()
{
    int l,h,s;
    cin>>l>>h;

    //Assigning the l and h of a box
    l=l;
    h=h;
    s=h/l;

    //display how many times l enters into h aka how many boxes can be put on top of each other
    cout<<s;

    return 0;
}