//
// Created by Patrick Oetterli on 18.10.17.
//

#ifndef ARRAY_UND_LINKEDLIST_ARRAY_H
#define ARRAY_UND_LINKEDLIST_ARRAY_H

#include <iostream>
#include "Collection.h"

template <class T>
class Array : public Collection<T>{
private:
    T *values;
    int maxSize;
    int currentSize;

    bool isIndexValid(int index);
    void resize();
public:

    Array(int size=0);

    ~Array();
    Array<T>(const Array & obj);
    Array<T> &operator= (const Array & obj);

    int size();
    void add(T value);
    T get(int index, bool & ok);
    void set(int index, T value, bool & ok);
    void remove(int index, bool & ok);
    std::ostream & printObj(std::ostream &stream);

};


#endif //ARRAY_UND_LINKEDLIST_ARRAY_H
