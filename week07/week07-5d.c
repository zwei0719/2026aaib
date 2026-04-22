// week07-5d.cpp SOIT107_Base_012
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') printf("U");       // U 代表 Upper (大寫)
    else if (c >= 'a' && c <= 'z') printf("L");  // L 代表 Lower (小寫)
    else if (c >= '0' && c <= '9') printf("D");  // D 代表 Digit (數字)
    else printf("O");                             // O 代表 Other (其他符號)
}
