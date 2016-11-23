#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

const int maxlen = 1000;

void swap(char **t1, char **t2)
{
    char *t;
    t = *t1;
    *t1= *t2;
    *t2 = t;
}

void bubble(char **a, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1; j++)
            if (strcmp(a[j], a[j + 1]) > 0)
                swap(&a[j+1], &a[j]);
}
void insertSort(char **a, int n) {
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < i; j++)
            if (strcmp(a[i], a[j]) < 0)
                swap(&a[i], &a[j]);
}

void quicksort(char **arr, int first, int last)
{
    int i = first;
    int j = last;
    char *p = arr[(first + last) / 2];
    if (i <= j)
    {
        while (strcmp(arr[i], p) < 0)
            i++;
        while (strcmp(arr[j], p) > 0)
            j--;
        if (i <= j)
        {
            if (strcmp(arr[i], arr[j]) > 0)
                swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }
    if (i < last)
        quicksort(arr, i, last);
    if (first < j)
        quicksort(arr, first, j);
}

void merge(char **arr, int left, int middle, int right)
{
    int i;
    int j;
    int k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    char **leftBuff = malloc(n1 * sizeof(char*));
    char **rightBuff = malloc(n2 * sizeof(char*));

    for (i = 0; i < n1; i++)
    {
        leftBuff[i] = malloc((maxlen) * sizeof(char));
        leftBuff[i] = arr[left + i];
    }

    for (j = 0; j < n2; j++)
    {
        rightBuff[j] = malloc((maxlen) * sizeof(char));
        rightBuff[j] = arr[middle + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2)
    {
        if (strcmp(leftBuff[i], rightBuff[j]) < 0)
        {
            arr[k] = leftBuff[i];
            i++;
        }
        else
        {
            arr[k] = rightBuff[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = leftBuff[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = rightBuff[j];
        j++;
        k++;
    }
    free(leftBuff);
    free(rightBuff);
}

void mergeSort(char **arr, int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}
