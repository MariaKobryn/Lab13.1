#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних

using namespace nsVar;

void nsDod::dod() {
	double R = x * x * (2. * n - 1) / (2. * n + 1);
	a *= R;
}