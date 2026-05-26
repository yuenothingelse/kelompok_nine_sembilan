#ifndef UTILS_H
#define UTILS_H

void generateRandom(int arr[], int size);
void shuffleArray(int arr[], int size);
void printArray(int arr[], int size, int limit);

int loadWords(const char *filename, char words[][100]);
void shuffleWords(char words[][100], int size);
void printWords(char words[][100], int size, int limit);

#endif