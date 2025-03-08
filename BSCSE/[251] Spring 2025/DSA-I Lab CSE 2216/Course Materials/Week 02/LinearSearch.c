#include<stdio.h>

int LinearSearch(int arr[], int key, int n) {
    for(int i=0;i<n;i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[] = {5, 3, 7, 1, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 8;
    int idx = LinearSearch(arr, key, n);
    printf("Index is %d", idx);
}
