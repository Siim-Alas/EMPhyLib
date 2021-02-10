#pragma once

#define _USE_MATH_DEFINES

#include <cmath>

namespace EMPhyLib
{
	/*
	* An approximation of the 1D dirac delta function in one variable, which peaks sharply around 0 
	* and is valued at 0 everywhere else. Integrating it over all real numbers yields 1.
	* 
	* @param x: The argument to the 1D dirac delta function.
	* 
	* @return The value of the dirac delta function at x.
	*/
	double DiracDelta(double x);
}