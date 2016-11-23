#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

const int stringMaxLen = 1000;

int main(int argc, char **argv)
{
    int realNumberStr = 0;
    int i;
    int numberOfStr;
    char *filestr = malloc(stringMaxLen * sizeof(char));
    numberOfStr = atoi(argv[1]);
    filestr = argv[2];
    freopen(filestr, "r", stdin);

    char **arrStr = malloc(numberOfStr * sizeof(char*));
    for (i = 0; i < numberOfStr; i++)
        arrStr[i] = malloc(stringMaxLen * sizeof(char));

    for (i = 0; i < numberOfStr; i++)
    {
        if (feof(stdin))
            break;
        fgets(arrStr[i], stringMaxLen, stdin);
        char *pos;
        if ((pos = strchr(arrStr[i], '\n')) != NULL)
            *pos = '\0';
        realNumberStr++;
    }

    fclose(stdin);
    freopen("CON", "r", stdin);

    int method;
    printf("Choose the method of sorting:\n1 for BubbleSort\n2 for MergeSort\n3 for InsertionSort\n4 for QuickSort\n");
    scanf("%d", &method);

    switch(method)
    {
        case 1:
        {
            bubble(arrStr, realNumberStr);
            break;
        }
        case 2:
        {
            mergeSort(arrStr, 0, realNumberStr - 1);
            break;
        }
        case 3:
        {
            insertSort(arrStr, realNumberStr);
            break;
        }
        case 4:
        {
            quicksort(arrStr, 0, realNumberStr - 1);
            break;
        }
        default:
        {
            break;
        }
        break;
    }

    for (i = 0; i < realNumberStr; i++) {
        puts(arrStr[i]);
        puts("\n");
    }

return 0;
}
