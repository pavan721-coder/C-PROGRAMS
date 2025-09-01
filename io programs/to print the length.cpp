#include<stdio.h>
int main()

{
	int a;
	char b;
	float c;
	double d;
	scanf("%zu",&a);
	printf("%zu",sizeof(a));
	scanf("%c",b);
	printf("%zu",sizeof(b));
	scanf("%f",&c);
	printf("%zu",sizeof(c));
	scanf("%lf",&d);
	printf("%zu",sizeof(d));
	return 0;
}