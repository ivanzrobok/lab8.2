#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2.1/lab8.2.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab821Test
{
	TEST_CLASS(lab821Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string sentens = { " gyt fhf lul" };
			//перший елемент пробіл
			int t;
			
			 t = The_same_Element_words(sentens);
			Assert::AreEqual(t, 2);

		}
	};
}
