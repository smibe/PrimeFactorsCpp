#pragma once
#include "CppUnitTest.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace Microsoft {
    namespace VisualStudio
    {
        namespace CppUnitTestFramework
        {
            std::wstring ToString(const std::vector<int>& values)
            {
                std::wstring text;
                for (auto it : values)
                {
                    text += std::to_wstring(it);
                    text += L";";
                }
                return text;
            }
        }
    }
}

typedef std::vector<int> IntVector;
