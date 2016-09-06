#include <cstdio>

const size_t SIZE = 10;
int stack[SIZE];
int head = 0;

int top() {
  if (head == 0) {
    printf("Stack Underflow!\n");
    throw;
  }
  if (head >= SIZE) {
    printf("Stack Overflow!\n");
    throw;
  }
  return stack[head - 1];
}

void push(int element) {
  if (head >= SIZE) {
    printf("Stack Overflow!\n");
  } else {
    stack[head++] = element;
  }
}

void pop() {
  if (head == 0) {
    printf("Stack Underflow!\n");
  } else {
    --head;
  }
}

int main(int argc, char** argv) {
  push(2);
  push(5);
  pop();
  push(1);
  push(-9);
  pop();
  pop();
  top();
  return 0;
}