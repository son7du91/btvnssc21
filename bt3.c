#include <stdio.h>
int main() {
    FILE *f;
    char str[100];
    // Mở file ở chế độ "a" (append)
    f = fopen("C:\\BAITAPC\\btvnssc21\\bt01.txt", "a");
    if (f == NULL) {
        printf("Không thể mở file!\n");
        return 1;
    }
    printf("Nhập chuỗi cần ghi thêm vào file: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, f);
    fclose(f);
    printf("Đã ghi vào file thành công!\n");
    return 0;
}
