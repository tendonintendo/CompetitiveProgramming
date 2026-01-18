#include <cstdio>
 
int main() {
  int n;
  scanf("%d\n", &n);
  int sum = 0;
  while(n--) {
    char a, b, c;
    scanf("%c%c%c\n", &a, &b, &c);
    if(b == '+') sum++;  
    else sum--;
  }
  printf("%d", sum);
}