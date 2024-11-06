#include <stdio.h>
#include <stdlib.h>

int find_index(int n, int a[n], int key){
    for (int i=0; i<n; i++) {
        if (a[i] == key){
            printf("%d\n", i);
            return i;
        }
    }
    printf("-1\n");
    return -1;
}

int* find_pointer(int n, int a[n], int key){
    for (int *p = a; p<a+n; p++) {
        if (*p==key) {
            printf("Key %d FOUND %d\n", key, *p);
            return p;
        }
    }
    printf("Key %d NOT FOUND\n", key);
    return NULL;
}

int count(int n, int a[n], int key){
    int count = 0;
    int *p = a;
    while (p<a+n){
        int *key_location = find_pointer(n - (p-a), p, key);
        if (key_location ==NULL){
            break;
        }
        count ++;
        p = key_location +1;
    }
    printf("%d\n", count);
    return count;
}
