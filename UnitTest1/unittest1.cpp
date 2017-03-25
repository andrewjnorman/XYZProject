#include "stdafx.h"
#include "CppUnitTest.h"
#include "Class1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(AndrewsFirstTest)
		{
			Class1 x;
			// TODO: Your test code here
			Assert::AreEqual(1, x.fn_1());

		}

	};
}