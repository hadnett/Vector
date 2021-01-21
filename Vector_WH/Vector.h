//
// Created by William Hadnett on 20/01/2021.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

class Vector {
public:
    int * array;
    int capacity;
    int count;

    Vector();
    explicit Vector(int capacity);
    void checkSize(Vector& vector);
    void add(int n);
};

#endif //VECTOR_VECTOR_H
