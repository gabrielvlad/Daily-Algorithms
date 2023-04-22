/******************************************************************************
Created by Gabe on 22/04/23.

Requirement
Given a segment that has a common point with a straight line. Given x representing the degrees of one of the angles between the line and the segment, determine the value of the second angle.

Input data
The program reads from the keyboard the number x representing the degrees of one of the angles.

Output data
The program will display on the screen the number y representing the value expressed in degrees.

Restrictions and clarifications
1 ≤ n ≤ 179

Example:
Input
25

Output
155
*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin>>x;
    y=180-x;
    cout<<y;
    return 0;
}
