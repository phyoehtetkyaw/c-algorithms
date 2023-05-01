#include <stdio.h>
#include <stdlib.h>

void linearSearch(int find, int *array, int length);

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
    linearSearch(find, array, length);

    return 0;
}


void linearSearch(int find, int *array, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] == find)
        {
            printf("Found number: %i\n", array[i]);
            printf("Found in: %i\n", i);
        }
    }
}

