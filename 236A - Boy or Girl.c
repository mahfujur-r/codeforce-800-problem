#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);

    int count = 0;
    for (char c = 'a'; c <= 'z'; c++) {
        if (strchr(s, c)) {
            count++;
        }
    }

    if (count % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
