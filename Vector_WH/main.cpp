#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    Vector vector(2);
    //cout << vector.capacity << endl;

    vector.add(1);
    vector.add(3);
    vector.add(4);
    cout << vector.capacity << endl;

    for(int i = 0; i < vector.count; i++) {
        cout << vector.array[i] << endl;
    }
    return 0;
}
