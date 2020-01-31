#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Hello world!\n");

	// type here
	printf("Be happy\n");
	printf("1234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	printf("\n");
	printf("============================\n");
	printf("\n");

	printf("%d\n",100);
	printf("%lf\n",3.14);
	printf("%.1lf\n",3.141592);
	printf("%.10lf\n",3.14);
	printf("%.1lf + %.1lf = %.1lf\n", 10.2, 3.4, 10.2 + 3.4);



	system("pause");
	return 0;
}