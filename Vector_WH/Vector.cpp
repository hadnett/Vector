//
// Created by William Hadnett on 20/01/2021.
//

#include <iostream>
#include "Vector.h"

Vector::Vector() {
    this->array = new int[this->capacity];
    this->capacity = 10;
    this->count = 0;
}

Vector::Vector(int capacity) {
    this->array = new int[capacity];
    this->capacity = capacity;
    this->count = 0;
}

void Vector::add(int n) {
    this->array[this->count] = n;
    this->count ++;
}

Vector::~Vector() {
    delete[] this->array;
}

