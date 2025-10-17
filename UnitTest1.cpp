#include "pch.h"
#include "CppUnitTest.h"
#include <cmath> 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double h(const double a, const double b)
{
	return a * a - b * b;
}

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double g = 0.5;
			double s = 0.5;

			double actual = (h(g + 1, s) + pow(h(g, s + 1), 2)) /
				(1 + pow(h(pow(g, 2), pow(s, 2)), 3));

			double expected = (pow((g + 1), 2) - pow(s, 2)
				+ pow((pow(g, 2) - pow((s + 1), 2)), 2))
				/ (1 + pow((pow(pow(g, 2), 2) - pow(pow(s, 2), 2)), 3));

			Assert::AreEqual(expected, actual, 1e-6);
		}
	};
}