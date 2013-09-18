#include <stdio.h>

int main()
{
	char braces[] = "{{[{{{{}}{{}}}[]}[][{}][({[(({{[][()()]}}{[{{{}}}]}))][()]{[[{((()))({}(())[][])}][]()]}{()[()]}]})][]]}{{}[]}}\0";
	int curly   = 0;
	int square  = 0;
	int rounded = 0;
	char * ptr = &braces[0];
	char c;
	while ((c = *ptr) != '\0') {
		switch (c) {
			case '{': curly++;
			break;
			case '[': square++;
			break;
			case '(': rounded++;
			break;
			case '}': curly--;
			break;
			case ']': square--;
			break;
			case ')': rounded--;
			break;
		}
		if (curly < 0 || square < 0 || rounded < 0)
			printf("%li\n", ptr - &braces[0]);
		ptr++;
	}
	return 0;
}