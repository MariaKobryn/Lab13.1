#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab13.1/var.h"
#include "../Lab13.1/var.cpp"
#include "C:\Users\Maria\source\repos\Lab13.1\Lab13.1\dod.h"
#include "C:\Users\Maria\source\repos\Lab13.1\Lab13.1\dod.cpp"
#include "C:\Users\Maria\source\repos\Lab13.1\Lab13.1\sum.cpp"
#include "C:\Users\Maria\source\repos\Lab13.1\Lab13.1\sum.h"
#include "C:\Users\Maria\source\repos\Lab13.1\Lab13.1\Lab13.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 1;
			x = 2;
			n = -3;
			dod();
			Assert::AreEqual(a, 5.6);
		}
	};
}
