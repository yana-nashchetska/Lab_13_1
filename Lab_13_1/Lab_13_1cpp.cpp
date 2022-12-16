#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << endl;

	x = x_p;

	cout << fixed;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "log(x)" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;
	while (x <= x_k) {
		sum(); 

		
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x) << " |"
			<< setw(10) << setprecision(5) << 2 * s << " |"
			<< setw(5) << n << " |"
			<< endl;
			
		x += dx;
	}

	cout << "-----------------------------------------" << endl;
	cout << 
	cin.get();
	return 0;
}