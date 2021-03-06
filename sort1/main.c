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


    char *methodStr = malloc(stringMaxLen * sizeof(char));
    printf("Choose the method of sorting:\n1 for BubbleSort\n2 for MergeSort\n3 for InsertionSort\n4 for QuickSort\n");
    fgets(methodStr, stringMaxLen, stdin);
    int method = atoi(methodStr);

    char *filestr = argv[2];
    numberOfStr = atoi(argv[1]);

    FILE *fp;
    if ((fp = fopen(filestr, "r") )== NULL)
    {
        return-1;
      }

    //freopen(filestr, "r", fp);

    char **arrStr = malloc(numberOfStr * sizeof(char*));
    for (i = 0; i < numberOfStr; i++)
        arrStr[i] = malloc(stringMaxLen * sizeof(char));

    for (i = 0; i < numberOfStr; i++)
    {
        if (feof(fp))
            break;
        fgets(arrStr[i], stringMaxLen, fp);
        char *pos;
        if ((pos = strchr(arrStr[i], '\n')) != NULL)
            *pos = '\0';
        realNumberStr++;
    }

    fclose(fp);
    freopen("CON", "r", fp);

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

    for (i = 0; i < numberOfStr; i++)
        free(arrStr[i]);
    free(arrStr);
    free(methodStr);

    return 0;
}
