#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int *arr;
int *listed;

void *generateRandom()
{
	srand(time(NULL));
	int i;
	for (i=0; i<MAX; i++)
	{
	  arr[i] = rand() % 10001;
	  printf("\n%d\n", arr[i]);
	}
}

int swap(int a)
{
  int temp;
  
  temp = arr[a-1];
  arr[a-1] = arr[a];
  arr[a] = temp;
}
int main()
{
  arr = (int *) malloc(MAX * sizeof(int *));
  listed = (int *) malloc(MAX * sizeof(int *));
  int i, temp;
  
  generateRandom();
  
  for (i = 0; i < MAX; i++)
  {
    int j = i;
    while (j > 0 && arr[j-1] > arr[j])
    {
      swap(j);
      j--;
    }
  }
  printf("\n\nSorted: \n");
  for (i = 0; i < MAX; i++)
  {
    printf("%d\n", arr[i]);
  }
}
