//
// Created by 84000 on 2021/1/20.
//

#ifndef LINEARLIST_A_H
#define LINEARLIST_A_H
#include <iostream>

class A {
public:
    A(int id) : id_(id)
    {
        std::cout << "A ctor" << std::endl;
    }
    ~A()
    {
        std::cout << "A dctor" << std::endl;
    }

private:
    int id_;
};


#endif //LINEARLIST_A_H
