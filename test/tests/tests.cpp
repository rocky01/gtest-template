#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <boost/bimap.hpp>
#include <iostream>


TEST(Test, AssertTrue)
{
    ASSERT_TRUE(true);
}

TEST(Test, Assert10)
{
    ASSERT_TRUE(10 == 10);
}

TEST(Test, Boost_bm1)
{
    using bm_type = boost::bimap<int, std::string>;
    bm_type bm;
    bm.insert( bm_type::value_type(1, "one" ) );
    bm.insert( bm_type::value_type(2, "two" ) );

    std::cout << "There are " << bm.size() << " relations" << std::endl;

    ASSERT_TRUE(bm.left.begin()->first == 1);
}