//
// Created by 84000 on 2021/1/19.
//

#ifndef LINEARLIST_ARRAYLIST_H
#define LINEARLIST_ARRAYLIST_H
#include <iostream>

#include "linearList.h"
#include "myException.h"
template<typename T>
class arrayList : public linearList<T> {
public:
    arrayList()
        : arrayLength_(100), listSize_(0), element_(new T[100])
    { }
    ~arrayList() { delete []element_; }
    bool empty() const { return listSize_ == 0; }
    size_t size() const { return listSize_; }
    T& get(int theIndex) const {
        checkIndex(theIndex);
        return *(element_ + theIndex);
    }
    int indexOf(const T& theElement) const;
    void erase(int theIndex);
    void insert(int theIndex, const T& theElement);
    void output(std::ostream& out) const;
private:
    void makeSpace();
    void checkIndex(int theIndex) const;
    T* element_;
    size_t arrayLength_;
    size_t listSize_;
};

template<typename T>
inline void arrayList<T>::checkIndex(int theIndex) const {
    if (theIndex < 0 || theIndex >= this->listSize_)
        throw myException("index out of range");
}

template<typename T>
inline int arrayList<T>::indexOf(const T &theElement) const {
    int ret = -1;
    for (int i = 0; i < this->listSize_; i++)
        if (theElement == *(element_ + i))
            ret = i;
    return ret;
}

template<typename T>
inline void arrayList<T>::erase(int theIndex) {
    checkIndex(theIndex);
    for (int i = theIndex; i < listSize_ - 1; i++)
        element_[i] = element_[i + 1];
    element_[listSize_ - 1].~T();
    listSize_--;
}

template<typename T>
void arrayList<T>::makeSpace() {
    if (element_ == nullptr)
        throw myException("no memery space on pointer");
    T* temp_pointer = new T[arrayLength_ * 2];
    for (int i = 0; i < listSize_; i++)
        temp_pointer[i] = element_[i];
    delete []element_;
    element_ = temp_pointer;
    arrayLength_ *= 2;
}

template<typename T>
inline void arrayList<T>::insert(int theIndex, const T &theElement) {
    if (arrayLength_ == listSize_)
        makeSpace();
    for (int i = listSize_ - 1; i >= theIndex; i--)
        element_[i + 1] = element_[i];
    element_[theIndex] = theElement;
    listSize_++;
}

template<typename T>
void arrayList<T>::output(std::ostream &out) const {
    for (int i = 0; i < listSize_; ++i)
        out << element_[i] << " ";
}

#endif //LINEARLIST_ARRAYLIST_H
