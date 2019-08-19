//Robin Woodbury Unity Toolsmith Assignment 2 Linked Lists

#include "List.h"

void InsertIntoEmpty(void)
{
  List list;
  int numbers[] = {5};
  int size = sizeof(numbers) / sizeof(*numbers);

  for (int i = 0; i < size; i++)
    {
      list.Insert(numbers[i]);
      std::cout << "Inserting " << numbers[i] << std::endl;
      std::cout << list << std::endl;
    }
}

void InsertTest(void)
{
  List list;
  int numbers[] = { 5, 13, 3, 12, 19, 4, 1, 1, 1, 20, 20, 5, 5};
  int size = sizeof(numbers) / sizeof(*numbers);

  for (int i = 0; i < size; i++)
  {
    list.Insert(numbers[i]);
    std::cout << "Inserting " << numbers[i] << std::endl;
    std::cout << list << std::endl;
  }
}

void InsertZeros(void)
{
  List list;
  int numbers[] = { 0, 0, 0, 0, 0, 0};
  int size = sizeof(numbers) / sizeof(*numbers);

  for (int i = 0; i < size; i++)
  {
    list.Insert(numbers[i]);
    std::cout << "Inserting " << numbers[i] << std::endl;
    std::cout << list << std::endl;
  }
}

void InsertNegatives(void)
{
  List list;
  int numbers[] = { -5, -13, -3, -12, -19, -4, -1, -1, -1, -20, -20, -5, -5};
  int size = sizeof(numbers) / sizeof(*numbers);

  for (int i = 0; i < size; i++)
  {
    list.Insert(numbers[i]);
    std::cout << "Inserting " << numbers[i] << std::endl;
    std::cout << list << std::endl;
  }
}

void InsertMixed(void)
{
  List list;
  int numbers[] = { 5, -5, 13, 0, -13, 3, -2, 12, -12, 19, 0, -19, 4, -4, 1, -1, 1, -1, 20, -20, 5, -5};
  int size = sizeof(numbers) / sizeof(*numbers);

  for (int i = 0; i < size; i++)
  {
    list.Insert(numbers[i]);
    std::cout << "Inserting " << numbers[i] << std::endl;
    std::cout << list << std::endl;
  }
}

int main(void)
{
  InsertIntoEmpty();
  InsertTest();
  InsertZeros();
  InsertNegatives();
  InsertMixed();

  return 0;
}