#include "pch.h"
#include "CppUnitTest.h"


extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);



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

		TEST_METHOD(setLengthTestCase1)
		{
			
			int length;
			int new_length = 71;
			setLength(new_length, &length);
			Assert::AreEqual(new_length, length);

		}

		TEST_METHOD(setLengthTestCase2)
		{

			int length;
			int new_length = 192;
			setLength(new_length, &length);
			Assert::AreEqual(new_length, length);

		}

		TEST_METHOD(setLengthTestCase3)
		{

			int length;
			int new_length = 0;
			setLength(new_length, &length);
			Assert::AreEqual(new_length, length);

		}

		TEST_METHOD(setWidthTestCase1)
		{

			int width;
			int new_width = 41;
			setWidth(new_width, &width);
			Assert::AreEqual(new_width, width);

		}

		TEST_METHOD(setWidthTestCase2)
		{

			int width;
			int new_width = 173;
			setWidth(new_width, &width);
			Assert::AreEqual(new_width, width);

		}

		TEST_METHOD(setWidthTestCase3)
		{

			int width;
			int new_width = 100;
			setWidth(new_width, &width);
			Assert::AreEqual(new_width, width);

		}

	};
}
