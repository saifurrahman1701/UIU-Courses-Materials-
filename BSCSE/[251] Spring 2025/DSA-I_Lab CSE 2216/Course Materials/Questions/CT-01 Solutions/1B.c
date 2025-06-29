#include<stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i=0;i<n;i++) {
    scanf("%d", &arr[i]);
  }
  int low = 0, high = n-1;

  while(high >= low) {
      int mid = (high + low)/2;
      if(mid == arr[mid]) {
          low = mid+1;
      }
      else {
          high = mid-1;
      }
  }
  printf("%d", low);
}