#pragma once
template<typename T>
class BinaryTree {
public:
    void push(const T& value);
    T pop();
    bool search(const T& value) const;
    bool empty() const;
};
