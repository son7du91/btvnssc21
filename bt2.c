#include <stdio.h>
int main() {
    FILE *f;
    char c;
    f = fopen("C:\\BAITAPC\\btvnssc21\\bt01.txt", "r");
    if (f == NULL) {
        printf("Không thể mở file!\n");
        return 1;
    }
    c = fgetc(f);
    if (c != EOF) {
        printf("Ký tự đầu tiên trong file: %c\n", c);
    } else {
        printf("File rỗng!\n");
    }
    fclose(f);
    return 0;
}
