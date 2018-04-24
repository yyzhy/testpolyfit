#include <iostream>
using namespace std;

#include "equation.h"

int main()
{
    /*double x[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double y[] = { 9, 31, 83, 177, 325, 539, 831, 1213, 1697, 2295 };*/
    double x[] = { 1, 2, 3, 4, 5 };
    double y[] = { 9, 31, 83, 177, 325 };
    double ks[3];
    Matrix_PolyFit(x, y, 5, 2, ks);
    cout << ks[2] << ", " << ks[1] << ", " << ks[0] << endl;
    float x0 = Q_rsqrt((float)3);
    cout << x0 << endl;
    double k1[] = {16, -8, 1};
    double res = newton(k1, 5);
    //test git.
    return 0;
}