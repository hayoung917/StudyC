#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

void space()
{
	printf("\n");
	printf("============================\n");
	printf("\n");
}

int main()
{
	printf("Hello world!\n");

	// type here
	printf("Be happy\n");
	printf("1234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	space();

	printf("%d\n",100);
	printf("%lf\n",3.14);
	printf("%.1lf\n",3.141592);
	printf("%.10lf\n",3.14);
	printf("%.1lf + %.1lf = %.1lf\n", 10.2, 3.4, 10.2 + 3.4);

	space();

	printf("%lf\n", 1e10);
	printf("%.8lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	space();

	printf("%c\n", 'A');
	printf("%s\n", "ABC");
	printf("%c is sub of %s\n", 'a', "abc");
	printf("%d\n", 'A');

	system("pause");
	return 0;
}