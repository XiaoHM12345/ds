//
// Created by 84000 on 2021/1/20.
//

#ifndef LINEARLIST_CHAIN_H
#define LINEARLIST_CHAIN_H
#include "linearList.h"
#include "myException.h"

template<typename T>
struct chainNode {
    T element_;
    chainNode<T>* next_;

    chainNode() : next_(nullptr) {}
    explicit chainNode(const T& element) : next_(nullptr), element_(element) {}
    chainNode(const T& element, chainNode<T>* next) : next_(next), element_(element) { }
    explicit chainNode(chainNode<T>* next) : next_(next) {}
};

template<typename T>
class chain : public linearList<T>{
public:
    chainNode() :listSize_(0), head_(nullptr) {}

private:
    int listSize_;
    chainNode<T>* head_;
};


#endif //LINEARLIST_CHAIN_H
