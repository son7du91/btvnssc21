#include <stdio.h>
int main() {
    char chuoi[256];
    FILE *file;
    printf("Nhập một chuỗi bất kỳ: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    file = fopen("C:\\BAITAPC\\btvnssc21\\bt01.txt", "w");
    if (file == NULL) {
        printf("Không thể mở tệp để ghi!\n");
        return 1;
    }
    fprintf(file, "%s", chuoi);
    fclose(file);
    printf("Chuỗi đã được ghi vào tệp bt01.txt thành công!\n");
    return 0;
}
  