
#include "PointCharge.h"

EMPhyLib::EMField::PointCharge::PointCharge(double x, double y, double z, double charge)
{
	position = EMPhyLib::LinearAlgebra::Vector3 {x, y, z};
	q = charge;
}

EMPhyLib::EMField::PointCharge::PointCharge(EMPhyLib::LinearAlgebra::Vector3* chargePosition, double charge)
{
	position = *chargePosition;
	q = charge;
}
