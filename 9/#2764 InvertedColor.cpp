/******************************************************************************
Created by Gabe on 10/04/23

RGB

Any color can be represented as a combination of red ( R ED ), green ( G REEN ) and blue ( B LUE ) intensities. Your computer most likely uses colors represented by 24 bits, as many as 8 you reserve for each of the three previously mentioned colors.

We define the opposite of a color ( r , g , b ) as ( 255– r , 255– g , 255– b ).

Requirement
Given a color, write its opposite.

Input data
The program reads from the keyboard three natural numbers, r, g and b.

Output data
The program will display on the screen the numbers R, G and B, so that they represent a color opposite to the original one.

Restrictions and clarifications
0 ≤ R, G, B, r, g, b ≤ 255

Example:
Input
0 92 254

Output
255 163 1

Explanation
R=255-0=255; G=255-92=163; B=255-254=1
*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    int r,g,b;
    cin>>r>>g>>b;
    r=255-r;
    g=255-g;
    b=255-b;
    cout<<r<<" "<<g<<" "<<b;
    return 0;
}
