#include <algorithm>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <vector>
#include <iostream>
using namespace std;
TEST_CASE("djnekmne")
{
    auto vec1=vector<int>{5,4,3};
   auto vec2 =vector<int>{3,5,2};
    vect2.find_first_of(vec1.begin(),vec1.end(),vec2.begin(),vec2.end());
    CHECK(vect1.find_first_of(vec1.begin(),vec1.end(),vec2.begin(),vec2.end()););
}