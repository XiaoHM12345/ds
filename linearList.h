//
// Created by 84000 on 2021/1/19.
//

#ifndef LINEARLIST_LINEARLIST_H
#define LINEARLIST_LINEARLIST_H
#include <iostream>

template<typename T>
class linearList {
public:
    virtual ~linearList() {};
    virtual bool empty() const = 0;
    virtual size_t size() const = 0;
    virtual T& get(int theIndex) const = 0;
    virtual int indexOf(const T& theElement) const = 0;
    virtual void erase(int theIndex) = 0;
    virtual void insert(int theIndex, const T& theElement) = 0;
    virtual void output(std::ostream& out) const = 0;
};


#endif //LINEARLIST_LINEARLIST_H
