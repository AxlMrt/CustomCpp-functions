#include <iostream>
using namespace std;

bool strcomp(const char *str1, const char *str2)
{
  while(*str1 && (*str1 == *str2))
  {
    str1++;
    str2++;
  }

  return (*str1 - *str2) == 0;
}

int main()
{
  char str1[] = "axe";
  char str2[] = "axel";

  cout << strcomp(str1, str2);

  return 0;
}
