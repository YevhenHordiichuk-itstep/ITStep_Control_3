#include <cstdio>
#include <math.h>

struct Pair {
  int x;
  int y;
};

int distance(Pair a, Pair b) {
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

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

bool operator < (Pair a, Pair b) {
  Pair ZERO = {0, 0};
  if (distance(a, ZERO) < distance(b, ZERO)) {
    return true;
  }
  return false;
}
  
bool operator > (Pair a, Pair b) {
  Pair ZERO = {0, 0};
  if (distance(a, ZERO) > distance(b, ZERO)) {
    return true;
  }
  return false;
}

int main(int argc, char** argv) {
  return 0;
}