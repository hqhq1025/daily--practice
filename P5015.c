#include <stdio.h>
#include <string.h>
int main(void) {
    char s[10];
    gets(s);   //gets并不安全 会报warning
    int ans = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
		ans++;
		if(s[i]>='a'&&s[i]<='z')
		ans++;
		if(s[i]>='0'&&s[i]<='9')
		ans++;
    }
    printf("%d\n",ans);
    return 0;
}