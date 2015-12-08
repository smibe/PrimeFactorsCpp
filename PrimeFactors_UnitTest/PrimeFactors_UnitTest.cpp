#include "CppUnitTest.h"
#include "TestUtilities.h"
#include <vector>
#include "PrimeFactors.h"

namespace PrimeFactors_UnitTest
{
    TEST_CLASS(PrimeFactorsTest)
    {
    public:
        TEST_METHOD(PrimesOf_1)
        {
            Assert::AreEqual(IntVector(), PrimeFactors::Generate(1));
        }
        TEST_METHOD(PrimesOf_2)
        {
            Assert::AreEqual(IntVector{ 2 }, PrimeFactors::Generate(2));
        }
        TEST_METHOD(PrimesOf_3)
        {
            Assert::AreEqual(IntVector{ 3 }, PrimeFactors::Generate(3));
        }
        TEST_METHOD(PrimesOf_4)
        {
            Assert::AreEqual(IntVector{ 2, 2 }, PrimeFactors::Generate(4));
        }
        TEST_METHOD(PrimesOf_5)
        {
            Assert::AreEqual(IntVector{ 5 }, PrimeFactors::Generate(5));
        }
        TEST_METHOD(PrimesOf_6)
        {
            Assert::AreEqual(IntVector{ 2, 3 }, PrimeFactors::Generate(6));
        }
        TEST_METHOD(PrimesOf_8)
        {
            Assert::AreEqual(IntVector{ 2, 2, 2 }, PrimeFactors::Generate(8));
        }
        TEST_METHOD(PrimesOf_9)
        {
            Assert::AreEqual(IntVector{ 3, 3 }, PrimeFactors::Generate(9));
        }
        TEST_METHOD(PrimesOf_196)
        {
            Assert::AreEqual(IntVector{ 2, 2, 7, 7 }, PrimeFactors::Generate(196));
        }

    };
}