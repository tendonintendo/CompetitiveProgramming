#include <cstdio>
 
int main() {
  int n;
  scanf("%d\n", &n);
  for(int i = 2; i < n; i += 2) {
    if((n - i) % 2 == 0) {
      printf("YES"); return 0;
    }
  }
  printf("NO");
}