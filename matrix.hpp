#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <cstddef>


void destroyMemory(int** t, size_t m);
int** createMatrix(size_t m, size_t n);
void input(int** t, size_t m, size_t n);
void out(const int* const* t, size_t m, size_t n);

#endif
