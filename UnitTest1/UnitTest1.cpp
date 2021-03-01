#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba1.1/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money b;
			b.Init(10, 8);
			int result = b.summa();
			Assert::AreEqual(result, 80);
		}
	};
}
