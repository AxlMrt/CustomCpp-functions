#include <iostream>
using namespace std;

double stod(const char *str, size_t *idx = 0, int base = 10)
{
  int sign = 1;
  double result = 0.0;

  if (*str == '+' || *str == '-')
  {
    sign = *str == '-' ? -1 : 1;
    str++;
  }

  while (*str != '\0')
  {
    if (*str >= '0' && *str <= '9')
    {
      int digit = *str - '0';
      result = result * base + digit;
      str++;
    } 
    else if (*str == '.' && base == 10)
    {
      str++;
      double multiplier = 1.0 / base;

      while (*str != '\0' && *str >= '0' && *str <= '9')
      {
        int digit = *str - '0';
        result += digit * multiplier;
        multiplier /= base;
        str++;
      }

      break;
    }
    else
      return -1;
  }

  return result * sign;
}

int main()
{
  char nb[5] = "12.2";
  double parse = stod(nb);

  cout << parse << endl;

  return 0;
}
