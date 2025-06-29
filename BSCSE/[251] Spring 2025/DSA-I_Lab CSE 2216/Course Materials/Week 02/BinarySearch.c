#include<stdio.h>

int BinarySearch(int arr[], int key, int n) {
    int low = 0, high = n-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) high = mid-1;
        else low = mid + 1;
    }
    return -1;
}

int main() {

    int arr[] = {5, 3, 7, 1, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 8;
    int idx = BinarySearch(arr, key, n);
    printf("Index is %d", idx);
}
