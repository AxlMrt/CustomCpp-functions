#include <iostream>
using namespace std;

char* strcpy(char *dest, const char *src)
{
  char *return_ptr = dest;
  
  while (*src != '\0')
  {
    *dest = *src;
    dest++;
    src++;
  }

  *dest = '\0';

  return return_ptr;
}

int main()
{
  char str[] = "Je suis une string";
  char dest[100];

  char *dest_ptr = strcpy(dest, str);

  cout << dest_ptr << endl;

  return 0;
}
