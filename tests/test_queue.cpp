#include <gtest/gtest.h>
#include "queue.h"

TEST(QueueTest, PushPopSingle) {
    Queue<int> q;
    EXPECT_TRUE(q.empty());
    q.push(10);
    EXPECT_FALSE(q.empty());
    EXPECT_EQ(q.pop(), 10);
    EXPECT_TRUE(q.empty());
}

TEST(QueueTest, PushPopMultiple) {
    Queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    EXPECT_EQ(q.pop(), 1);
    EXPECT_EQ(q.pop(), 2);
    EXPECT_EQ(q.pop(), 3);
    EXPECT_TRUE(q.empty());
}
