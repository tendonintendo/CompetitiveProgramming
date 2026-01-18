#include <iostream>
#include <cmath>
#define ll long long
int main() {
  int t; scanf("%lld", &t);
  while(t--) {
    ll a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    ll need = a - b;
    if(need <= 0) {
      printf("%lld\n", b); continue;
    } else if(d >= c) {
      printf("-1\n"); continue;
    }
    printf("%lld\n", b + c*((need + c - d - 1)/(c-d)));
  }
}