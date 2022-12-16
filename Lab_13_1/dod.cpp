#include "dod.h"
#include "var.h" 
#include <cmath>

using namespace nsVar;

void nsDod::dod() {
	a *= (pow((x - 1), 2)) / (1. * (pow((x + 1), 2))) * (2. * n - 1) / (2. * n + 1);
}