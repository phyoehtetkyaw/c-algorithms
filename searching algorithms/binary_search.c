#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void binarySearch(int find, int *array, int length);

int main(void)
{
    // sorted array
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    // enter find number
    int find;
    printf("Find number: ");
    scanf("%i", &find);
    printf("\n");

    // linear search algorithm
    binarySearch(find, array, 8);
}

void binarySearch(int find, int *array, int length)
{
    int start = 0;
    int end = length - 1;
    int middle = length / 2;
    bool flag = false;

    while (!flag)
    {
        if (find != array[middle])
        {
            if (find < array[middle])
            {
                end = middle - 1;
            }else
            {
                start = middle + 1;
            }
            middle = (((end - start) + 1) / 2) + start;

            if(start == length || end < 0)
            {
                break;
            }
        }else{
            flag = true;
        }
    }

    if(flag)
    {
        printf("Found number: %i\n", find);
        printf("Found in: %i\n", middle);
    }else
    {
        printf("Number can't found!\n");
    }
}
