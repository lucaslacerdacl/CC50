#include <cs50.h>
#include <stdio.h>

void printSharp(int pyramidIndex)
{
  for (int sharpQuantity = pyramidIndex + 1; sharpQuantity > 0; sharpQuantity--)
  {
    printf("#");
  }
}

void printEmptySpace(int pyramidIndex, int size)
{
  for (int emptySpaceQuantity = size - pyramidIndex; emptySpaceQuantity > 0; emptySpaceQuantity--)
  {
    printf(" ");
  }
}

int askPyramidSize()
{
  int size = get_int("Tamanho: ");

  return size;
}

int main(void)
{
  int size = askPyramidSize();

  for (int pyramidIndex = 0; pyramidIndex < size; pyramidIndex++)
  {
    printEmptySpace(pyramidIndex, size);
    printSharp(pyramidIndex);
    printf("\n");
  }
}