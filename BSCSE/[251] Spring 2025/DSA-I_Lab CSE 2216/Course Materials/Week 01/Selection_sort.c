#include<stdio.h>

int main() {
    int arr[] = {-2, 45, 0, 11, -9}; ///O(n)
    int n = sizeof(arr)/sizeof(arr[0]); ///O(1)

    for(int j=0;j<n-1;j++) {
        int mini = 1e8;
        int idx = -1;
        for(int i=j;i<n;i++) {
            if(mini > arr[i]) {
                mini = arr[i];
                idx = i;
            }
        }
        /// swap between arr[0] and arr[idx]
        int temp = arr[j];  /// O(1)
        arr[j] = arr[idx];
        arr[idx] = temp;
    }


    for(int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

}
