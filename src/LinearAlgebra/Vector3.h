#pragma once

namespace EMPhyLib
{
	namespace LinearAlgebra
	{
		/*
		* A class representing a vector in 3D cartesian coordinates.
		*/
		class Vector3
		{
		public:
			/*
			* The x-component of the vector.
			*/
			double x;
			/*
			* The y-component of the vector.
			*/
			double y;
			/*
			* The z-component of the vector.
			*/
			double z;
			/*
			* Adds two vectors.
			* 
			* @param other: The vector to be added to the first vector.
			* 
			* @return The sum of the two vectors.
			*/
			Vector3 operator+(Vector3* other);
			/*
			* Subtracts two vectors.
			*
			* @param other: The vector to be subtracted to the first vector.
			*
			* @return The difference of the two vectors.
			*/
			Vector3 operator-(Vector3* other);
		};
	}
}