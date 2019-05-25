#include<stdio.h>

void pointerEx1() {
	int i;
	char string[20] = "Dreams come true!", string2[20], *ptr1, ptr2;

	ptr1 = string;

	printf("%s, %u\n", ptr1 + 7, string);

	for (i = 16; i >= 0; i--)
	{
		putchar(*(ptr1 + i));
	}

	for (i = 0; i < sizeof(string2); i++)
	{
		string2[i] = *(ptr1 + i);
	}

	for (i = 0; i < 5; i++)
	{
		ptr1 = "peace";
		string[i] = ptr1;
	}

	printf("\n%s", string);

}

int main(void)
{
	char *name[] = { "kiminyoung", "honggildong" };
	char **name2;

	name2 = name;

	printf("%s\n", name2[0]);

 	return 0;
}