#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.4/complex_number.h"
#include "D:\project C++ 2\lab 1.4\lab 1.4\complex_number.cpp"
#include "D:\project C++ 2\lab 1.4\lab 1.4\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ComplexNumber complexNumber;
			complexNumber.Init(3.5, -2.7);
			Assert::AreEqual(3.5, complexNumber.GetReal());
			Assert::AreEqual(-2.7, complexNumber.GetImaginary());
		}
	};
}
