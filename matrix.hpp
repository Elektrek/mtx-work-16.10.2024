#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <cstddef>


class Matrix
{
  int** t_ = nullptr;
  size_t m_ = 0;
  size_t n_ = 0;

  int** createMtx();
  void rmMtx();

public:
  Matrix(size_t m, size_t n);
  Matrix(matrix &mtx);

  ~Matrix();

  size_t getRows() const;
  size_t getCols() const;

  void inMtx();
  void outMtx() const;
  int** changeSize(size_t m, size_t n);
};

#endif
