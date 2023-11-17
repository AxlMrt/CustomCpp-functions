#include <iostream>

using namespace std;

char* myTo_string(int value) {
  int length = 1;
  int temp = value;

  if (temp < 0) {
    length++;
    temp = -temp;
  }

  int tempLength = temp;
  while (tempLength /= 10) {
    length++;
  }

  char* converted = new char[length + 1];
  char* start = converted;
  start[length] = '\0';

  do {
    start[--length] = '0' + (temp % 10);
    temp /= 10;
  } while (temp);

  if (value < 0) {
    *start = '-';
  }

  return start;
}

int main()
{
  int nb = 123;
  int nb2 = -123;
  char *converted = myTo_string(nb);
  char *converted2 = myTo_string(nb2);

  cout << converted << endl;
  cout << converted2 << endl;

  delete[] converted;
  delete[] converted2;
  return 0;
}
