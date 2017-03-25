// XYZProject.cpp : Defines the entry point for the console application.
//

//A dummy change - 4
#include "stdafx.h"
#include "gtest/gtest.h"
#include "Class1.h"


//TEST(MyTest, FirstTests)
//{
//	EXPECT_EQ(2, x);
//}

int main(int argc, char* argv[])
{
	Class1 x;

	printf("Class1.fn_1 = %d\n", x.fn_1());

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}


