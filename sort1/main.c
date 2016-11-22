#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

const int maxlen1= 1000;

int main(int argc, char **argv)
{

    int n;
    char *numofstrch = malloc(maxlen1 * sizeof(char));
    char *filestr = malloc(maxlen1 * sizeof(char));
    //printf("enter the Number of lines\n");
    //gets(numofstrch);
    n = atoi(argv[1]);
    //printf("enter the name of file\n");
    filestr = argv[2];
    freopen(filestr, "r", stdin);
    /*freopen("output.txt", "w", stdout);
    fscanf(stdin, "%d\n", &n);*/
    int k = 0;
    int i;
    char **a = malloc(n * sizeof(char*));
    for (i = 0; i < n; i++)
        a[i] = malloc(maxlen1 * sizeof(char));
    for (i = 0; i < n; i++)
    {
        if (feof(stdin)) break;
        fgets(a[i], maxlen1, stdin);
        char *pos;
if ((pos = strchr(a[i], '\n')) != NULL)
*pos = '\0';
        k++;
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
            bubble(a, k);
            break;
        }
    case 2:
        {
            mergesort(a, 0, k - 1);
            break;
        }
    case 3:
        {
            insertSort(a, k);
            break;
        }
    case 4:
        {
            quicksort(a, 0, k - 1);
            break;
        }
    default:
        {
            break;
        }
        break;
    }

    for (i = 0; i < k; i++)
    {
        puts(a[i]); //, stdout);
        puts("\n"); //, stdout);
        }
    //fclose(stdout);

return 0;
}
