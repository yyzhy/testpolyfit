#ifndef _EQUATION_H_
#define _EQUATION_H_

#include <iostream>
using namespace std;

float Q_rsqrt(float number);
bool Matrix_PolyFit(double *x, double *y, int X_Y_Number, int Fit_N, double *ks);
bool Matrix_Solve(double *K, double *B, int m, int n, double *x);
void Matrix_Mul(double *Mul1, int Mul1_m, double *Mul2, int Mul2_n, int nm, double *Mul);
void Matrix_T(double *K, int m, int n, double *KT);
bool Matrix_Inv(double *K, int n, double *InvK);
bool Matrix_LU(double *K, int n, double *L, double *U);
double  f(double x, double k[3]);
double fd(double x, double k[3]);
double newton(double ks[3], double x0);


#endif