#include <stdio.h>

int main()
{
	int i;
	printf("#include <stdio.h>\n\nint main()\n{\n");
	for (i = 0; i < 1000001; i++) printf("printf(\".\");\n");
	printf("return 0;\n}\n");
	return 0;
}