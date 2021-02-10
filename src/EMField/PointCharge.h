#pragma once

#include "../LinearAlgebra/Vector3.h"

namespace EMPhyLib
{
	namespace EMField
	{
		class PointCharge
		{
		public:
			PointCharge(double x, double y, double z, double q);
			PointCharge(EMPhyLib::LinearAlgebra::Vector3* chargePosition, double q);

			EMPhyLib::LinearAlgebra::Vector3 position;
			double q;
		private:
			
		};
	}
}