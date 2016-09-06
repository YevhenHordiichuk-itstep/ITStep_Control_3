#include <cstdio> 

template<typename T>
T arithm(T array[], size_t SIZE) {
  T c = array[0];
  for (size_t i = 1; i < SIZE; ++i) {
    c +=array[i];
  }
  c /= SIZE;
  return c;
}

int main(int argc, char** argv) {
  int array_int[] = {5, 9, -1, 3};
  size_t SIZE_int = sizeof(array_int) / sizeof(array_int[0]);
  float array_float[] = {3.14, 0.05, 1.06, 5.00};
  size_t SIZE_float = sizeof(array_float) / sizeof(array_float[0]);
  
  int result_int = arithm(array_int, SIZE_int);
  float result_float = arithm(array_float, SIZE_float);
  
  printf("a) %i\nb) %.2f", result_int, result_float);
  return 0;
}