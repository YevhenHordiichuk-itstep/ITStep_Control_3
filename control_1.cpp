#include <cstdio>
#include <math.h>

struct Pair {
  float x;
  float y;
};

Pair square(float a, float b, float c) {
  Pair unswer = {-1, -1};
  float d;
  d = b * b - 4 * a * c;
  if (d < 0) {
    printf("no root\n");
    return unswer;
  }
  if (d == 0) {
    unswer.x = - b / 2 / a;
    unswer.y = unswer.x;
    return unswer;
  }
  if (d > 0) {
    unswer.x = (- b - sqrt(d)) / 4 / a / c;
    unswer.y = (- b + sqrt(d)) / 4 / a / c;
    return unswer;
  }
}

int main() {
  float A, B, C;
  printf("enter A, B, C: ");
  scanf("%f %f %f", &A, &B, &C);
  Pair unswer = square(A, B, C);
  printf("x1 = %.2f; x2 = %.2f", unswer.x, unswer.y);
  return 0;
}