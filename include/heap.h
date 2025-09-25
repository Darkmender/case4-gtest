#pragma once
template<typename T>
class Heap {
public:
    void push(const T& value);
    T pop();
    bool empty() const;
};
