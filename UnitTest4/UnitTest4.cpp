#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2 2/6.2 2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int a[n] = { 1, 6, -7, -8, -3, -7, -3, 10, -9, -4 };
			int r[n] = { 1, 6, -7, -8, -3, -7, -3, -9, 10, -4 };

			SwapMinMaxInArray(a, n);

			for (int i = 0; i < n; i++) {
				Assert::AreEqual(r[i], a[i]);
			}
		}
	};
}
