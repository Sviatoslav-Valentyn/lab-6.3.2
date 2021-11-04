#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab 6.3.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 1, 7, 6, 9 };
			Sum(A, 4, 0);
			Assert::AreEqual(A[2],6);
		}
	};
}
