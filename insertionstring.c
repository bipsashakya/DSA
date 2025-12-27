#include <stdio.h>
#include <string.h>

void insert(char a[][20], int n) {
    int i, j;
    char temp[20];

    for (i = 1; i < n; i++) {
        strcpy(temp, a[i]);
        j = i - 1;

        while (j >= 0 && strcmp(temp, a[j]) < 0) {
            strcpy(a[j + 1], a[j]);
            j--;
        }

        strcpy(a[j + 1], temp);
    }

    printf("After Insertion sort in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", a[i]);
    }
}

int main() {
    char str[7][20] = {"Bipsa", "Aarati", "Nisha", "Epsita","Tina","Mina","Rina"};
    int n = 7;

    insert(str, n);

    return 0;
}



