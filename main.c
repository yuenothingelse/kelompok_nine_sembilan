#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "basic_sort.h"
#include "advanced_sort.h"
#include "utils.h"

#define SIZE 1000
#define WORD_LIMIT 1000
#define WORD_LENGTH 100

char words[WORD_LIMIT][WORD_LENGTH];



void sortingDasar() {

    int choice;

    do {

        int arr[SIZE];

        generateRandom(arr, SIZE);
        shuffleArray(arr, SIZE);

        printf("\n===== SORTING DASAR =====\n");
        printf("1. Bubble Sort\n");
        printf("2. Insertion Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Kembali\n");
        printf("Pilih metode: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 3) {

            printf("\nData sebelum sorting:\n");
            printArray(arr, SIZE, 20);

            clock_t start, end;
            double time_used;

            start = clock();

            switch(choice) {

                case 1:
                    bubbleSort(arr, SIZE);
                    break;

                case 2:
                    insertionSort(arr, SIZE);
                    break;

                case 3:
                    selectionSort(arr, SIZE);
                    break;
            }

            end = clock();

            time_used =
            ((double)(end - start)) / CLOCKS_PER_SEC;

            printf("\nData setelah sorting:\n");
            printArray(arr, SIZE, 20);

            printf("\nWaktu eksekusi: %.6f detik\n",
                   time_used);
        }

        else if(choice != 4) {
            printf("Pilihan tydack valid!\n");
        }

    } while(choice != 4);
}




void sortingAdvance() {

    int totalWords = loadWords("words.txt", words);

    if(totalWords == 0) {
        printf("0 word pada words.txt\n");
        return;
    }

    int choice;

    do {

        shuffleWords(words, totalWords);

        printf("\n===== ADVANCE SORTING =====\n");
        printf("1. Merge Sort\n");
        printf("2. Quick Sort\n");
        printf("3. Shell Sort\n");
        printf("4. Kembali\n");
        printf("Pilih metode: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 3) {

            printf("\nData sebelum sorting:\n\n");
            printWords(words, totalWords, 20);

            clock_t start, end;
            double time_used;

            start = clock();

            switch(choice) {

                case 1:
                    mergeSort(words, 0, totalWords - 1);
                    break;

                case 2:
                    quickSort(words, 0, totalWords - 1);
                    break;

                case 3:
                    shellSort(words, totalWords);
                    break;
            }

            end = clock();

            time_used =
            ((double)(end - start)) / CLOCKS_PER_SEC;

            printf("\nData setelah sorting:\n\n");
            printWords(words, totalWords, 20);

            printf("\nWaktu eksekusi: %.6f detik\n",
                   time_used);
        }

        else if(choice != 4) {
            printf("Pilihan tydack valid!\n");
        }

    } while(choice != 4);
}





int main() {

    srand(time(NULL));

    int choice;

    do {

        printf("\n===== MENU UTAMA =====\n");
        printf("1. Sorting Dasar\n");
        printf("2. Advance Sorting\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");

        scanf("%d", &choice);

        switch(choice) {

            case 1:
                sortingDasar();
                break;

            case 2:
                sortingAdvance();
                break;

            case 3:
                printf("Program selesai.\n");
                break;

            default:
                printf("Pilihan tydack valid!\n");
        }

    } while(choice != 3);

    return 0;
}