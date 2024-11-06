#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_9.1\Project_9.1\lab_9.1.cpp"
#include "C:\Users\admin\source\repos\Project_9.1\Project_9.1\dod.cpp"
#include "C:\Users\admin\source\repos\Project_9.1\Project_9.1\sum.cpp"
#include "C:\Users\admin\source\repos\Project_9.1\Project_9.1\var.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestSumCalculation)
		{
			x = 2.0;   
			eps = 0.0001; 

			sum();

			double expectedValue = log((x + 1) / (x - 1));

			Assert::AreEqual(expectedValue, s * 2, 0.0001);

			Assert::IsTrue(n > 0);
		}
	};
}
