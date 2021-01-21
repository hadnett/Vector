#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
    Vector vector(2);

    vector.add(1);
    vector.add(2);

    for(int i = 0; i < vector.count; i++) {
        cout << vector.array[i] << endl;
    }
    return 0;
}
