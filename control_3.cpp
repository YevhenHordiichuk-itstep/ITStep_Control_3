#include <cstdio>
#include <math.h>

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

bool operator == (Pair a, Pair b) {
  if (a.x == b.x && a.y == b.y) {
    return true;
  }
  return false;
}

bool operator < (Pair left, Pair right) {
  if ((sqrt(left.x * left.x + left.y * left.y)) < (sqrt(right.x * right.x + right.y * right.y))) {
    return true;
  }
  return false;
}
  
bool operator > (Pair left, Pair right) {
  if ((sqrt(left.x * left.x + left.y * left.y)) > (sqrt(right.x * right.x + right.y * right.y))) {
    return true;
  }
  return false;
}

int main(int argc, char** argv) {
  return 0;
}