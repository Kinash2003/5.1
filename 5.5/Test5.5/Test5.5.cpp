#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test55
{
	TEST_CLASS(Test55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double n;
			int � = 0;
		
			n = f(�);
			Assert::AreEqual(n, 1.);

		}
	};
}
