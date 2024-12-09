#include <stdio.h>
#include <math.h>

int main() {
    int a[31];
    int i = 0, j;
    long long s = 0;
    char c;

    while (scanf("%d%c", &a[i], &c) == 2) {
        i++;
        if (c == '\n') break;
    }

    for (j = 0; j < i; j++) {
        s += a[j];
    }

    s *= (long long) pow(2, i - 1);
    
    printf("%lld\n", s);

    return 0;
}