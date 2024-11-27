#include <stdio.h>

int main(void) {
    int move;
    char password[100];
    scanf("%d %s",&move,password);
    for(int i = 0; password[i] != '\0';i++)
    {
        password[i] = 'a' + (password[i] - 'a' + move) % 26;
    }
    printf("%s\n",password);
    return 0;
}