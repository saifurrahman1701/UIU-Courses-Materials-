#include<stdio.h>

int main() {
    int n;scanf("%d", &n);
    int nums1[n];
    int store[10000] = {0};
    for(int i=0;i<n;i++) {
        scanf("%d", &nums1[i]);
        store[nums1[i]] = 1;
    }
    int m;scanf("%d", &m);
    int nums2[m];
    for(int i=0;i<m;i++) {
        scanf("%d", &nums2[i]);
        if(store[nums2[i]] != 0) {
            printf("%d ", nums2[i]);
            store[nums2[i]] = 0;
        }
    }
}