/******************************************************************************
Created by Gabe on 03/04/2023.

Requirement
In a yard there are G chickens and 0 sheep. (I just found out that the plural of sheep is sheep and not sheeps, I am amazed)
Find out the total number of heads and legs in the yard.

Input data
The program reads the numbers from the keyboard G and O, representing the number of chickens and the number of sheep in the yard.

Output data
The program displays the numbers on the screen C and P, separated by a space, representing the number of heads and the number of legs in the yard.

Restrictions and clarifications
0 < G , O < 1.000.000

Example:
Input
3 2

Output
5 14
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int G,O,C,P;
    cin>>G>>O;

    //Finding the total number of G and O by adding them together;
    C=G+O;
    //For legs, we know each chicken has 2 legs so G*2, and each sheep has 4 legs so O*4 and for total just add them together
    P=G*2+O*4;//finding the total number of heads and legs
    cout<<C<<" "<<P;

    return 0;
}