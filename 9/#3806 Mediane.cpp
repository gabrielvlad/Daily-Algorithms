/******************************************************************************
Created by Gabe on 26/04/23.

Requirement
The lengths of the sides of a triangle are given ABC. Find the lengths of the medians taken from A,B and C.

Input data
The program reads the numbers from keyboard a,b,c representing the lengths of the sides AB,BC,AC.

Output data
The program will display three numbers on the screen, representing the lengths of the 3 medians, each with 2 exact decimals, without rounding, if the triangle is valid, otherwise the message will be display: " Imposibil " .

Restrictions and clarifications
1 ≤ a,b,c ≤ 1000

Example 1:
Input
3 4 5

Output
4.27 3.60 2.50

Example 2:
entry
4 5 10

Output
Impossible
*******************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool valid_triangle(double a, double b, double c) {
    return a + b > c && a + c > b && b + c > a;
}

double median_length(double a, double b, double c) {
    return 0.5 * sqrt(2 * (b * b + c * c) - a * a);
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (valid_triangle(a, b, c)) {
        double m_A = median_length(a, b, c);
        double m_B = median_length(b, a, c);
        double m_C = median_length(c, a, b);

        cout << fixed << setprecision(2) << m_A << " " << m_B << " " << m_C << endl;
    } else {
        cout << "Imposibil" << endl;
    }

    return 0;
}

