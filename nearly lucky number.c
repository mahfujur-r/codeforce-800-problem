#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_nearly_lucky(long long n) {
    char s[20];
    sprintf(s, "%lld", n);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '4' || s[i] == '7') {
            count++;
        }
    }
    return (count == 4 || count == 7);
}

int main() {
    long long n;
    scanf("%lld", &n);
    if (is_nearly_lucky(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
