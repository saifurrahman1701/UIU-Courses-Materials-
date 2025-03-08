#include<stdio.h>

int BinarySearch(int arr[], int key, int n) {
    int low = 0, high = n-1;
    int f_o = -1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid] == key) {
            f_o = mid;
            high = mid - 1;
        }
        else if(arr[mid] > key) high = mid-1;
        else low = mid + 1;
    }
    return f_o;
}

int main() {

    int arr[] = {1, 2, 3,3,3,3,3,3, 5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 3;
    int idx = BinarySearch(arr, key, n);
    printf("Index is %d", idx);
}

