#pragma once
template<typename T>
class Queue {
public:
    void push(const T& value);
    T pop();
    bool empty() const;
};
