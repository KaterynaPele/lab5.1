#include "CppUnitTest.h"
#include "../lab5.1/5.1.cpp"   // змінити шлях під себе

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	void TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			double g = 0.5;
			double s = 0.5;

			double t = (h(g + 1, s) + pow(h(g, s + 1), 2)) /
				(1 + pow(h(pow(g, 2), pow(s, 2)), 3));

			double expected = (pow((g + 1), 2) - pow(s, 2)
				+ pow((pow(g, 2) - pow((s + 1), 2)), 2))
				/ (1 + pow((pow(pow(g, 2), 2) - pow(pow(s, 2), 2)), 3));

			Assert::AreEqual(expected, t, 1e-6);
		};
	};
};