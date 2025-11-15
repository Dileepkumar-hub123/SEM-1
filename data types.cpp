#include <stdio.h>
int main()
{
    int a;
    float b;
    char d;
    char name[20];

    printf("enter a value: ");
    scanf("%d", &a);

    printf("enter b decimal: ");
    scanf("%f", &b);

    printf("enter grade: ");
    scanf(" %c", &d);   // Added space before %c to skip newline/whitespace

    printf("enter name: ");
    scanf("%19s", name);   // Limit input to avoid buffer overflow

    printf("\n%d\n%f\n%c\n%s", a, b, d, name); 
	return 0;
}
