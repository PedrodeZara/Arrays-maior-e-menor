#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    int arr[] = {10,34,634,63,432,0,15,45,65,874};
    int *ptr = arr;

    printf("\t\t\t\t\tBem vindo\nEste programa faz uma lista do maior para o menor e o menor para o maior de um array\n\n");

    printf("Maior para o menor:\n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < 9; j++) {
            if (*(ptr + j) < *(ptr + (j + 1))) {

                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + (j + 1));
                *(ptr + (j + 1)) = temp;
            }
        }
    } 
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("\n%d. %d ",i+1,*(ptr + i));
    }

     printf("\n\nMenor para o maior:\n");
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < 9; j++) {
            if (*(ptr + j) > *(ptr + (j + 1))) {

                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + (j + 1));
                *(ptr + (j + 1)) = temp;
            }
        }
    } 
    
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("\n%d. %d ",i+1,*(ptr + i));
    }
    
}