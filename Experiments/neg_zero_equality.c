#include <stdio.h>

int main()
{
	int zero = 0;
	int neg_zero = -0;
	if (zero == neg_zero) printf("Integer zero (%i) and integer negative-zero (%i) are tested to be equal.\n", zero, neg_zero);
		else printf("Integer zero (%i) and negative-zero (%i) are tested to be different.\n", zero, neg_zero);
	double dbl_zero = 0;
	double dbl_neg_zero = -0;
	if (dbl_zero == dbl_neg_zero) printf("Double zero (%f) and double negative-zero (%f) are tested to be equal.\n", dbl_zero, dbl_neg_zero);
		else printf("Double zero (%f) and negative-zero (%f) are tested to be different.\n", dbl_zero, dbl_neg_zero);
	return 0;
}