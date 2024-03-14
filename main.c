#include <stdbool.h>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    _Bool fizz = (i % 3 == 0);
    _Bool buzz = (i % 5 == 0);

    if (fizz) {
      printf("Fizz");
    }
    if (buzz) {
      printf("Buzz");
    }
    if (!fizz && !buzz) {
      printf("%d", i);
    }

    if (i != n) {
      printf(" ");
    }
  }

  printf("\n");

  return 0;
}
