/* シェーカーソート */

#include <stdio.h>

#define N 9

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(void)
{
    int a[]={3,5,6,9,2,7,8,10,4};
    int left,right,i,shift,t;
// leftは配列の左端、rightは配列の右端を指す
// shiftは最後に交換が行われた位置を記録

    left=0;right=N-1;
    while (left<right){
        for (i=left;i<right;i++){
            if (a[i]>a[i+1]){
                t=a[i];a[i]=a[i+1];a[i+1]=t;
                shift=i;
            }
        }
        right=shift;
        printArray(a, N);
        for (i=right;i>left;i--){
            if (a[i]<a[i-1]){
                t=a[i];a[i]=a[i-1];a[i-1]=t;
                shift=i;
            }
        }
        left=shift;
        printArray(a, N);
    }
    printf("ソート後の配列: ");
    printArray(a, N);
}
