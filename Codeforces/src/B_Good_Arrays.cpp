#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
  int t; scanf("%d\n", &t);
  while(t--) {
    int n; scanf("%d\n", &n);
    vector<ll> arr(n); ll sum = 0;
    for(int i = 0; i < n; i++) {
      scanf("%lld", &arr[i]);
      sum += arr[i];
    } 
    sort(arr.begin(), arr.end());
 
    vector<ll> b(n, 1);
    int flag = 1;
    b[n - 1] = sum - n + 1;
    for(int i = 0; i < n; i++) {
      if(b[n - 1] <= 0 || n == 1) {
        printf("NO\n"); flag = 0; break;
      } else if(b[i] == arr[i]) {
        b[n - 1] -= 1;
      }
    }
    if(flag) printf("YES\n"); 
  }
}