#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = f(1.);
			Assert::AreEqual(t, 2, 7080734);
		}
	};
}
