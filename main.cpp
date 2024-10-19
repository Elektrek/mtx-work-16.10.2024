#include "matrix.cpp"
#include <iostream>

int main()
{
  size_t n = 0, m = 0;
  std::cin >> m >> n;

  if (!std::cin || std::cin.eof())
  {
    std::cerr << "Wrong input!\n";
    return 1;
  }

  int** t = nullptr;

  try
  {
    t = createMatrix(m, n);
  }
  catch (const std::bad_alloc & e)
  {
    destroyMatrix(t, m);
    std::cerr << "Out of memory!\n";
    return 1;
  }

  input(t, m, n);
  if (!std::cin || std::cin.eof())
  {
    std::cerr << "Wrong input!\n";
    return 1;
  }

  out(t, m, n);
  destroyMatrix(t, m);
}

