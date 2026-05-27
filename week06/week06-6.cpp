// week06-6.cpp SOIT107_Base_019
#include <stdio.h>
int main()
{ // Don't write this! This is easy but OOXX.
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a<=b && a<=c) printf("%d\n", a);
	else if (b<=a && b<=c) printf("%d\n", b);
	else printf("%d\n", c);
}
