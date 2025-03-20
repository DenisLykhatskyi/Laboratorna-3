#include <stdio.h>

void swapOrNegate(int A[], int N) {
    for (int i = 0; i < N / 2; i++) {
        int j = N - 1 - i;

        if (A[i] == A[j]) {
            A[i] = -A[i];
            A[j] = -A[j];
        } else {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
}

int main() {
    int N;
    printf("Введіть розмір масиву N: ");
    scanf("%d", &N);

    int A[N];
    printf("Введіть %d елементів масиву A:\n", N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    swapOrNegate(A, N);

    printf("Змінений масив A:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
