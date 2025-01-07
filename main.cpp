#include "matrix.cpp"
#include <iostream>

int main()
{
  size_t n = 0, m = 0;
  std::cin >> m >> n;

  if (!std::cin)
  {
    return 1;
  }

  Matrix arr(m, n);

  try
  {
    arr.inMtx();
  }
  catch (const std::bad_alloc & e)
  {
    std::cerr << "Out of memory!\n";
    return 1;
  }

  arr.outMtx();

  std::cin >> m >> n;
  if (!std::cin)
  {
    return 1;
  }

  arr.changeSize(m, n)
  arr.outMtx();

  Matrix scnd_arr(arr);
  second_arr.outMtx();
}

