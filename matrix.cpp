#include "matrix.hpp"
#include <iostream>

void Matrix::inMtx()
{
  std::cout << '\n';
  for (size_t i = 0; i < m_; i++)
  {
    for (size_t j = 0; j < n_; j++)
    {
      std::cin >> t_[i][j];
    }
  }
  std::cout << '\n';
}

void Matrix::outMtx() const
{
  for(size_t i = 0; i < m_; i++)
  {
    std::cout << t_[i][0];
    for (size_t j = 1; j < n_; j++)
    {
      std::cout << " " << t_[i][j];
    }
    std::cout << "\n";
  }
}

void Matrix::rmMtx()
{
  for (size_t i = 0; i < m_; i++)
  {
    delete[] t_[i];
  }
  delete[] t_;
}

int** Matrix::createMtx()
{
  int** t = new int* [m_];
  size_t created = 0;
  try
  {
    for(; created < m; created++)
    {
      t_[created] = new int[n_];
    }
  }
  catch(const::std::bad_alloc & e)
  {
    destroyMtx();
    throw;
  }
  return t;
}

Matrix::~Matrix()
{
  rmMtx();
}

size_t Matrix::getRows() const
{
  return m_;
}

size_t Matrix::getCols() const
{
  return n_;
}

Matrix:Matrix(Matrix& mtx)
{
  this->m_ = mtx.m_;
  this->n_ = mtx.n_;
  this->t_ = createMtx();

  for (size_t i = 0; i < m_; i++)
  {
    for (size_t j = 0; j < n_; j++)
    {
      this->t_[i][j] = mtx.t_[i][j];
    }
  }
}

Matrix::Matrix(size_t m, size_t n)
{
  this->m_ = m;
  this->n_ = n;

  t_ = createMtx();
}
