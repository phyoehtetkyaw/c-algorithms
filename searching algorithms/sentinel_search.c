#include <stdio.h>
#include <stdlib.h>

void sentinelSearch(int find, int *array, int length);

int main(void)
{
    // enter array length
    int length;
    printf("Enter array length: ");
    scanf("%i", &length);

    // enter array numbers
    int i = 0;
    int array[length];
    do
    {
        printf("Enter number %i: ", i);
        scanf("%i", &array[i]);
        i++;
    }while (i < length);

    // enter find number
    int find;
    printf("Find number: ");
    scanf("%i", &find);
    printf("\n");

    // linear search algorithm
    sentinelSearch(find, array, length);
}

void sentinelSearch(int find, int *array, int length)
{
    int last = array[length - 1];
    array[length - 1] = find;

    int i = 0;
    while(array[i] != find)
    {
        i++;
    }

    if((i < length - 1) || (array[length - 1] == find))
    {
        printf("Found number: %i\n", array[i]);
        printf("Found in: %i\n", i);
    }else
    {
        printf("Number can't found!\n");
    }
}
