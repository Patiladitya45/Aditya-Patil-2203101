#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n); 

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}






// linearSearch  //


#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30;
    int n = 5;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);

    return 0;
}


//factorial //


#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}



// I/o file //


#include <stdio.h>

int main() {
    FILE *fptr;
    char str[100];

    // Writing to file
    fptr = fopen("sample.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "Hello, this is a file I/O example in C.\n");
    fclose(fptr);

    // Reading from file
    fptr = fopen("sample.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while (fgets(str, 100, fptr)) {
        printf("File content: %s", str);
    }
    fclose(fptr);

    return 0;
}




// Multiplication //


#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int c[2][2];

    // Multiplication
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}




// prime_number.c //
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num = 29;

    if (isPrime(num))
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is not a Prime Number\n", num);

    return 0;
}
