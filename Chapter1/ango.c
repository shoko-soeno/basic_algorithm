#include <stdio.h>

// int main()
// {
// 	int c, key=0x07;
// 	while ((c=getchar())!=EOF)
// 	{
// 		if (c=='\n')
// 			putchar(c);
// 		else
// 			putchar(c^key);
// 	}
// }

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c != '\n') c ^= 0x07;  // XOR with key 0x07
        putchar(c);
    }
    return 0;
}