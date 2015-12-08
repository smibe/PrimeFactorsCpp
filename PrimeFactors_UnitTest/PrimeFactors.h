#pragma once

#include <vector>
typedef std::vector<int> IntVector;

class PrimeFactors
{
public:
    static IntVector Generate(int number)
    {
        IntVector primes;
        for (int divisor = 2; divisor <= number; divisor++)
        {
            while (number % divisor == 0)
            {
                primes.push_back(divisor);
                number /= divisor;
            }
        }
	
        return primes;
    }
};