#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

void generateRandom(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 10000;
    }
}

void shuffleArray(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void printArray(int arr[], int size, int limit) {
    int count = (size < limit) ? size : limit;
    for(int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("... (menampilkan %d data pertama)\n", count);
}

int loadWords(const char *filename, char words[][100]) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Tidak dapat membuka file %s!\n", filename);
        printf("Pastikan file tersebut berada di folder yang sama dengan program.\n");
        return 0;
    }

    int count = 0;
    while (fscanf(file, "%99s", words[count]) == 1) {
        count++;
        if(count >= 1000) {
            break;
        }
    }

    fclose(file);
    return count;
}

void shuffleWords(char words[][100], int size) {
    char temp[100];
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        
        strcpy(temp, words[i]);
        strcpy(words[i], words[j]);
        strcpy(words[j], temp);
    }
}

void printWords(char words[][100], int size, int limit) {
    int count = (size < limit) ? size : limit;
    for(int i = 0; i < count; i++) {
        printf("%s ", words[i]);
    }
    printf("\n... (menampilkan %d kata pertama)\n", count);
}