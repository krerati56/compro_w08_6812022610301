#include <stdio.h>

int main() {
    int start, stop;

    // รับค่าจากผู้ใช้
    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter stop number: ");
    scanf("%d", &stop);

    // แสดงค่าที่ป้อน
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("--------------------\n");

    // แสดงลำดับตัวเลข
    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i);
    }

    // แสดงคำขอบคุณ
    printf("\nThank you.\n");

    return 0;
}
