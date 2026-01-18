#include <cstdio>
#include <cstring>
int main() {
  char s[2][200001];
  scanf("%s\n%s", s[0], s[1]);
  int max = strlen(s[0]) > strlen(s[1]) ? strlen(s[0]) : strlen(s[1]);
  int min = strlen(s[0]) < strlen(s[1]) ? strlen(s[0]) : strlen(s[1]);
  int index = strlen(s[0]) > strlen(s[1]) ? 0 : 1;
  int i;
  for(i = 0; i < min; i++) {
    if(s[index][max - i - 1] != s[index == 1 ? 0 : 1][min - i - 1]) break;
  }
  printf("%d\n", max - i + min - i);
}