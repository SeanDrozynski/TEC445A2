#include <iostream>
#include <vector>

int
main ()
{
  std::vector<int> v;
  for (int i : {5, 4, 3, 2, 1})
  {
    v.push_back (i);
  }

  for (auto val : v)
  {
    std::cout << val << ' ';
  }
  std::cout << "\nHello, World!" << std::endl;

  int z = 22;
  int a = 14;

  std::cout << "Z is equal to 22" << std::endl;
  std::cout << "A is equal to 14" << std::endl;


  if (z > a) {
    std::cout << "Z is the bigger number" << std::endl;
  }
  else {
    std::cout << "A is the bigger number" << std::endl;
  }

  return 0;
}
