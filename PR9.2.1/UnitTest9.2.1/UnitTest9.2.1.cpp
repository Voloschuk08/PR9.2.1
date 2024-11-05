#include "pch.h"
#include "CppUnitTest.h"
#include "../PR9.2.1/PR9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest921
{
    TEST_CLASS(UnitTest921)
    {
    public:
        // Тестування обчислення макросу SQR
        TEST_METHOD(TestSquareCalculation)
        {
            double value = 3.0;
            double expected = 9.0; // 3^2 = 9
            double result = SQR(value);
            Assert::AreEqual(expected, result, 1e-5, L"Incorrect square calculation");
        }

        // Тестування обчислення макросу MAX
        TEST_METHOD(TestMaxCalculation)
        {
            double a = 10.0, b = 5.0;
            double expected = 10.0; // MAX(10, 5) має повернути 10
            double result = MAX(a, b);
            Assert::AreEqual(expected, result, 1e-5, L"Incorrect max calculation");
        }

        // Тестування обчислення макросу MIN
        TEST_METHOD(TestMinCalculation)
        {
            double a = 10.0, b = 5.0;
            double expected = 5.0; // MIN(10, 5) має повернути 5
            double result = MIN(a, b);
            Assert::AreEqual(expected, result, 1e-5, L"Incorrect min calculation");
        }
    };
}
