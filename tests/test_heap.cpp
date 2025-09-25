#include <gtest/gtest.h>
#include "heap.h"

TEST(HeapTest, PushPopSingle) {
    Heap<int> h;
    EXPECT_TRUE(h.empty());
    h.push(20);
    EXPECT_FALSE(h.empty());
    EXPECT_EQ(h.pop(), 20);
    EXPECT_TRUE(h.empty());
}

TEST(HeapTest, PushPopMultiple) {
    Heap<int> h;
    h.push(5);
    h.push(15);
    h.push(10);
    EXPECT_EQ(h.pop(), 15); // предполагаем, что это max-heap
    EXPECT_EQ(h.pop(), 10);
    EXPECT_EQ(h.pop(), 5);
    EXPECT_TRUE(h.empty());
}
