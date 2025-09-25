#include <gtest/gtest.h>
#include "binary_tree.h"

TEST(BinaryTreeTest, PushPopSearchSingle) {
    BinaryTree<int> t;
    EXPECT_TRUE(t.empty());
    t.push(42);
    EXPECT_FALSE(t.empty());
    EXPECT_TRUE(t.search(42));
    EXPECT_EQ(t.pop(), 42);
    EXPECT_TRUE(t.empty());
    EXPECT_FALSE(t.search(42));
}

TEST(BinaryTreeTest, PushPopSearchMultiple) {
    BinaryTree<int> t;
    t.push(10);
    t.push(20);
    t.push(5);
    
    EXPECT_TRUE(t.search(10));
    EXPECT_TRUE(t.search(20));
    EXPECT_TRUE(t.search(5));
    EXPECT_FALSE(t.search(15));

    EXPECT_EQ(t.pop(), 10); // предполагаем, что pop удаляет корень
    EXPECT_FALSE(t.search(10));
}
