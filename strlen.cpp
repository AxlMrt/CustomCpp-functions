#include <iostream>
using namespace std;

size_t strlen(const char *str)
{
  size_t length = 0;

  while(str[length] != '\0')
  {
    length++;
  }

  return length;
}

int main()
{
  char str[] = "This is a string";
  cout << strlen(str);

  return 0;
}
