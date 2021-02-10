
#include "Vector3.h"

EMPhyLib::LinearAlgebra::Vector3 EMPhyLib::LinearAlgebra::Vector3::operator+(Vector3* other)
{
	return Vector3 { x + other->x, y + other->y, z + other->z };
}

EMPhyLib::LinearAlgebra::Vector3 EMPhyLib::LinearAlgebra::Vector3::operator-(Vector3* other)
{
	return Vector3{ x - other->x, y - other->y, z - other->z };
}
