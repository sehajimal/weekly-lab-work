#include "array_utilities.h"

int main() {
    int a[] = {1,2,3,4,5,6,6,7,8,9};
    find_index(10, a, 6);
    find_index(10, a, 0);
    find_pointer(10, a, 6);
    find_pointer(10, a, 0);
    count(10, a, 6);
    count(10, a, 0);
}