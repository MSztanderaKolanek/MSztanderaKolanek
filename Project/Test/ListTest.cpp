#include <gtest/gtest.h>
#include"List.hpp"

using namespace ::testing;

TEST(ListTest, sizeMethodTestWhenListIsEmpty)
{
    List<int> list;
    ASSERT_EQ(list.size(), 0);
}

TEST(ListTest, sizeMethodTestWithMoreElements)
{
    List<int> list;
    list.pushBack(7);
    list.pushBack(15);
    list.size();
    ASSERT_EQ(list.size(), 2);
}
