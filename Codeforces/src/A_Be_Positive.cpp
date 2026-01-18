#include <iostream>
 
int main() {
  int t; scanf("%d", &t);
  while(t--) {
    int neg = 0, pos = 0, zero = 0;
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++) {
      int x; scanf("%d", &x);
      if(x < 0) neg++;
      else if(x > 0) pos++;
      else zero++;
    }
    printf("%d\n", (2*(neg%2)+zero));
  }
}