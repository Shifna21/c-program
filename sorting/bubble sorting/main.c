#include <stdio.h>

int main()
{
  int array[100], n, i, j, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter the elements", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < n - 1; i++)
  {
    for (j= 0 ; j< n - j - 1; j++)
    {
      if (array[j] > array[j+1])
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in decending order:\n");

  for (i = 0; i < n; i++)
     printf("%d\n", array[i]);

  return 0;
}