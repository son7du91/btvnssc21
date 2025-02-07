#include <stdio.h>
int main() {
    FILE *f;
    char line[256]; 
    f = fopen("C:\\BAITAPC\\btvnssc21\\bt01.txt", "r");
    if (f == NULL) {
        printf("Không thể mở file!\n");
        return 1;
    }
    if (fgets(line, sizeof(line), f) != NULL) {
        printf("Dòng đầu tiên trong file: %s", line);
    } else {
        printf("File rỗng!\n");
    }
    fclose(f);
    return 0;
}
