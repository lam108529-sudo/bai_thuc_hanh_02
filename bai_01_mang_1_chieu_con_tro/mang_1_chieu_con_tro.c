#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);
    float *arr = (float *)malloc(n*sizeof(float));
    if (arr==NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    for (int i=0; i<n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%f", arr+i);
    }
    printf("Mang vua nhap: ");
    for (int i=0; i<n; i++) {
        printf("%.2f ", *(arr+i));
    }
    printf("\n");
    free(arr);
    return 0;
}
