#include <cctype>
#include <iostream>
#include <ostream>
using namespace std;

int stoi(const char *str, size_t *idx = 0, int base = 10)
{
  int sign = 1, result = 0;

  if (*str == '+' || *str == '-') {
    sign = *str == '-' ? -1 : 1;
    str++;
  }

  while (*str != '\0')
  {
    if (*str <= '0' && *str >= '9')
      return -1;
    
    int digit = *str - '0';
    result = result * base + digit;
    str++;
  }

  return result * sign;
}

int main()
{
  char nb[4] = "-12";
  
  int parse = stoi(nb);
  cout << parse << endl;

  return 0;
}
