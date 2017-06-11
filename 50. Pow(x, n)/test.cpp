//
// Created by anjouker on 17-6-4.
//

#include "Solution.h"
#include <limits>

#define BOOST_TEST_MODULE leetcode_solution_test
#include <boost/test/included/unit_test.hpp>
#include <boost/bind.hpp>

BOOST_AUTO_TEST_CASE( pow_function )
{
        boost::shared_ptr<Solution> solution(new Solution);
        namespace tt = boost::test_tools;
        BOOST_TEST(solution->myPow(1.2,0) == 1, tt::tolerance(0.000001));
        BOOST_TEST(solution->myPow(1.1,10) == 2.5937424601,tt::tolerance(0.000001));
        BOOST_TEST(solution->myPow(1.1,-3) == 0.75131480090158,tt::tolerance(0.000001));
        BOOST_TEST(solution->myPow(1.0,std::numeric_limits<int>::max() == 1.0), tt::tolerance(0.000001));
        BOOST_TEST(solution->myPow(2.0,std::numeric_limits<int>::min() == 0.0), tt::tolerance(0.000001));
}
