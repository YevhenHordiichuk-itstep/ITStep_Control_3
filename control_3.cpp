#include <cstdio>

struct Pair {
  int x;
  int y;
};

Pair operator + (Pair a, Pair b) {
  Pair c;
  c.x = a.x + b.x;
  c.y = a.y + b.y;
  return c;
}
Pair operator - (Pair a, Pair b) {
  Pair c;
  c.x = a.x - b.x;
  c.y = a.y - b.y;
  return c;
}
Pair operator * (Pair a, Pair b) {
  Pair c;
  c.x = a.x * b.x;
  c.y = a.y * b.y;
  return c;
}

Pair add(Pair a, Pair b) {
  return a + b;
}

Pair sub(Pair a, Pair b) {
  return a - b;
}

Pair mul(Pair a, Pair b) {
  return a * b;
}

//operator < ??
//operator > ??

int main(int argc, char** argv) {
  Pair A = {2, -9};
  Pair B = {-1, 1};
  Pair C = add(A, B);
  printf("%i %i\n", C.x, C.y);
  C = sub(A, B);
  printf("%i %i\n", C.x, C.y);
  C = mul(A, B);
  printf("%i %i\n", C.x, C.y);
  return 0;
}