#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCSCN71020A2
{
	TEST_CLASS(UnitTestCSCN71020A2)
	{
	public:


		TEST_METHOD(getPerimeterTesting)
		{

			int length = 68;
			int width = 39;
			int expected_perimeter = 214;
			int actual_perimeter = getPerimeter(&length, &width);
			Assert::AreEqual(expected_perimeter, actual_perimeter);

		}

		TEST_METHOD(getAreaTesting)
		{

			int length = 23;
			int width = 48;
			int expected_area = 1104;
			int actual_area = getArea(&length, &width);
			Assert::AreEqual(expected_area, actual_area);
		}
	};
}
