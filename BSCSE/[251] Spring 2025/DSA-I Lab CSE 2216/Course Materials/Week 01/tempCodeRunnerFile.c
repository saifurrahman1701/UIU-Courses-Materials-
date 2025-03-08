#include<stdio.h>

int main() {
    int arr[] = {-2, 45, 0, 11, -9}; ///O(n)
    int n = sizeof(arr)/sizeof(arr[0]); ///O(1)

    for(int j=0;j<n-1;j++) { ///O(1)
        for(int i=0;i<n-1-j;i++) { /// O(1)
            int x = arr[i]; /// O(1)
            int y = arr[i+1];   /// O(1)
            if(x>y) {
                /// swap(arr[i], arr[i+1]);
                int temp = arr[i];  /// O(1)
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for(int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

}
