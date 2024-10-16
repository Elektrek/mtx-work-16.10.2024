#ifndef MATRIX_HPP
#define MATRIX_HPP
int** createMatrix(size_t m, size_t n);
void destroyMemory(int** t, size_t m, size_t n);
void input(int** t, size_t m, size_t n);
void out(const int * const * t, size_t m, size_t n);
#endif
