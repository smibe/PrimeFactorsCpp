#include "CppUnitTest.h"
#include "TestUtilities.h"
#include <vector>

class PrimeFactors
{
public:
    static IntVector Generate(int number)
    {
        throw std::invalid_argument("Number needs to be greater 1");
    }
};

namespace PrimeFactors_UnitTest
{
    TEST_CLASS(PrimeFactorsTest)
    {
    public:
        TEST_METHOD(CalculatePrimeOf_1)
        {
            Assert::ExpectException<std::exception>([]() { PrimeFactors::Generate(1); });
        }
    };
}