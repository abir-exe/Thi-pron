#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int X, V;
    scanf("%d %d", &X, &V);
    
    // Update the Xth index with the value V
    A[X] = V;
    
    // Print the array in reverse order
    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", A[i]);
    }
    
    return 0;
}
