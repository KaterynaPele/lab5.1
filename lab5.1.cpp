// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;

double h(const double a, const double b); // прототип

int main()
{
    double g, s;
    cout << "g = "; cin >> g;
    cout << "s = "; cin >> s;

    // Підстановка твоєї формули:
    // ( h(g+1, s) + h(g, s+1)^2 ) / ( 1 + h(g^2, s^2)^3 )
    double c = (h(g + 1, s) + pow(h(g, s + 1), 2)) /
        (1 + pow(h(pow(g, 2), pow(s, 2)), 3));

    cout << "c = " << c << endl;
    return 0;
}

double h(const double a, const double b) // визначення
{
    return a * a - b * b; // h(a, b) = a^2 - b^2
}