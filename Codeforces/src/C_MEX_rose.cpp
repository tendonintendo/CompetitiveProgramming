#include <iostream>
 
int main() {
  int t; scanf("%d", &t);
  while(t--) {
    int n, k; scanf("%d %d", &n, &k);
    int arr[n + 1] = {};
    for(int i = 0; i < n; i++) {
      int x; scanf("%d", &x);
      arr[x]++;
    }
    int count = 0;
 
    for(int i = 0; i < k; i++) {
      if(arr[i] == 0) {
        count++;
        arr[k]--;
      }
    }
    printf("%d\n", count + (arr[k] < 0 ? 0 : arr[k]));
  }
}