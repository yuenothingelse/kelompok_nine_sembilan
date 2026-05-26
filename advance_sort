#include <stdio.h>
#include <string.h>
#include "advanced_sort.h"




void merge(char arr[][100], int left, int mid, int right) {

    char temp[1000][100];

    int i = left;
    int j = mid + 1;
    int k = left;

    while(i <= mid && j <= right) {

        if(strcmp(arr[i], arr[j]) <= 0) {
            strcpy(temp[k], arr[i]);
            i++;
        } else {
            strcpy(temp[k], arr[j]);
            j++;
        }

        k++;
    }

    while(i <= mid) {
        strcpy(temp[k], arr[i]);
        i++;
        k++;
    }

    while(j <= right) {
        strcpy(temp[k], arr[j]);
        j++;
        k++;
    }

    for(i = left; i <= right; i++) {
        strcpy(arr[i], temp[i]);
    }
}





void mergeSort(char arr[][100], int left, int right) {

    if(left < right) {

        int mid = (left + right) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}






int partition(char arr[][100], int low, int high) {

    char pivot[100];
    strcpy(pivot, arr[high]);

    int i = low - 1;

    for(int j = low; j < high; j++) {

        if(strcmp(arr[j], pivot) < 0) {

            i++;

            if(i != j) {

                char temp[100];

                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    if(i + 1 != high) {

        char temp[100];

        strcpy(temp, arr[i + 1]);
        strcpy(arr[i + 1], arr[high]);
        strcpy(arr[high], temp);
    }

    return i + 1;
}
void quickSort(char arr[][100], int low, int high) {

    if(low < high) {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}





void shellSort(char arr[][100], int n) {

    for(int gap = n / 2; gap > 0; gap /= 2) {

        for(int i = gap; i < n; i++) {

            char temp[100];
            strcpy(temp, arr[i]);

            int j;

            for(j = i;
                j >= gap &&
                strcmp(arr[j - gap], temp) > 0;
                j -= gap) {

                strcpy(arr[j], arr[j - gap]);
            }

            strcpy(arr[j], temp);
        }
    }
}
