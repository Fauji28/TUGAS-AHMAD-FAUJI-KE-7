#include <stdio.h>

int main() {
    
    int A[11];
    int count = 0;  
    
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 25};
    for (int i = 0; i < 11; i++) {
        if (data[i] % 2 == 0) {
            A[count] = data[i];
            count++;
        }
    }
    printf("Isi array setelah menyimpan nilai genap:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}