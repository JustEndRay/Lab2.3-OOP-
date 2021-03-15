#include "pch.h"
#include "CppUnitTest.h"
#include "../LongLong.h"
#include "../LongLong.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(40, 23), B(40, 23);	
			Assert::AreEqual(A==B, true);
		}
	};
}
