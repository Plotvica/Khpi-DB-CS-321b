﻿#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	long n;
	double dbln;
	double sum = 0;
	double term;
	const double lim = 0.000001; 
	short k1 = 1;
	long k3 = 1, k2 = 1;
	
	for (n = 0; ; n++, k2 *= 2, k3 *= 3, k1 = -k1) {
		dbln = n;
		term = k1 * (k2*k2 + 1) / (k3*k3*k3 + k2);
		if (fabs(term) >= lim)
			sum += term;
		else
			break;
		if (n == 9)
			printf("Сумма 10 членов ряда = %10.7lf\n", sum);
	}
	printf("Полная сумма ряда = %10.7lf\n", sum);
	// -2,64166
  return 0;
}
