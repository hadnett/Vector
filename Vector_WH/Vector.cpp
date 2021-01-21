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
    checkSize();
    this->array[this->count] = n;
    this->count ++;
}

Vector::~Vector() {
    delete[] this->array;
}

void Vector::checkSize() {

    if(this->count < this->capacity)
        return;

    this->capacity *= 2;
    int* tempPtr = this->array;
    this->array = new int[this->capacity];

    for(int i = 0; i <= *tempPtr; i++)
        this->array[i] = tempPtr[i];

    delete [] tempPtr;
    tempPtr = nullptr;
}

void Vector::remove() {

    if(this->count == 0)
        throw std::logic_error("Cannot remove element from empty vector.");

    this->count -= 1;

    if(this->count == (this->capacity / 2)) {
        this->capacity /= 2;
        int* tempPtr = this->array;
        this->array = new int[this->capacity];

        for(int i = 0; i <= this->capacity; i++)
            this->array[i] = tempPtr[i];

        delete [] tempPtr;
        tempPtr = nullptr;
    }
}