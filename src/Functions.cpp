
#include "../include/EMPhyLib/Functions.h"

double EMPhyLib::DiracDelta(double x)
{
	const double a = 1.0e-6;
	return exp(-(x*x) / (a*a)) * M_2_SQRTPI / (2 * a);
}