#include <stdio.h>

int main() {
    char str[5] = "china";
    for (int i = 0; i < 5; ++i) {
        str[i] += 4;
    }
    for (int j = 0; j < 5; ++j) {
        printf("%c", str[j]);
    }
    return 0;
}
