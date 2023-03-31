/******************************************************************************
Created by Gabe on 31/03/2023.

Requirement
On the planet Mars, the Martian year lasts x Martian days, and a Martian day lasts y hours. Every hour, Martian Iggle grows an antenna. How long will Iggle have n antenna?

Input data
The program reads natural numbers from the keyboard x y n.

Output data
The program will display three natural numbers on the screen: a, z, h, in different rows, representing the number of years, days and hours after which Iggle will have n antennas.

Restrictions and clarifications
1 ≤ x , y ≤ 1.000
1 ≤ n ≤ 1.000.000.000

Example:
Input
5 3 100

Output
6
3
1

Explanation
The Martian Year has 5 days, and the Martian day has 3 hours. Thus, a Martian year will have 5*3 = 15 hours. Then 100 Martian hours means 6 years and still 10 hours. The ones 10 hours means 3 days and 1 hour.
*******************************************************************************/


//Variant 1 did by me when not realizing that I can simply find the decimal number if I say n/(x*y) I guess is the extensive way :/
#include <iostream>

using namespace std;

int main()
{
    int x,y,n,a,z,h;
    cin>>x>>y>>n;

    //Assigning years as z and days as n
    x=x; //days
    y=y; //hours
    n=n; //antennas

    x=x*y;//finding a year by multiplying days with hours.
    a=n/x;//dividing the antennas from the days to find the number of a year
    cout<<a<<endl;//displaying the total number of years.
    a=n%x;//a gets a new value now to get the remainder of antennas and days
    z=a/y;//find the days out of the remainder
    cout<<z<<endl;//display the number of days to the console
    h=a%y;//find hours by using remainder again with a and y.
    cout<<h<<endl;//display the hours remaining.

    return 0;
}

/*
//Variant 2 and technically better variant
#include <iostream>
using namespace std;

int main ()
{
    int a , z , h , x , y , n;
    cin >> x >> y >> n;
    a = n / (x * y); // ani
    n = n - a * x * y;
    z = n / y;
    h = n - z * y;
    cout << a << endl;
    cout << z << endl;
    cout << h << endl;
    return 0;
}
*/