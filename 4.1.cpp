// 4.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	class Vector
	{
		double x,y,z;
	public:
		Vector (double _x=0, double _y=0, double _z=0)
		{
			x=_x;
			y=_y;
			z=_z;
		}
		Vector (Vector& a)
		{
			x=a.x;
			y=a.y;
			z=a.z;
		}
		Vector operator+ (Vector& a)
		{
			Vector c(x+a.x, y+a.y, z+a.z);
			return c;
		}



	return 0;
}

