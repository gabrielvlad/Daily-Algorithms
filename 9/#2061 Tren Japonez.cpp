/******************************************************************************
Created by Gabe on 04/04/2023.

In Japan trains can carry a number of carriages and cargo. All wagons have equal loads.

Requirement
Calculate the load in each wagon.

Input data
The program reads from keyboard the number of wagons as n and the total cargo from the keyboard m. It is guaranteed that m%n=0

Output data
The program will display the number on the screen I, representing the loading of the wagons.

Restrictions and clarifications
1 ≤ n,m ≤ 1000000
n ≤ m

Example:
Input
3 6

Output
2
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,m,I;
    cin>>n>>m;

    //
    I=m/n;

    //
    if(m%n==0){
        cout<<I;
    }
    else{
        cout<<"m is not divisible by n aka The train can still take more load";
    }

    return 0;
}