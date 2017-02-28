#include <stdio.h>
#include <conio.h>
void main()
{
	float S,l,r;
	char mode;
	const float pi=3.14;
	scanf("%f",&r);
	scanf("\n%c",&mode);
	l=2*pi*r;
	S=pi*r*r;
	if(mode=='l')
		printf("l=%.2fm",l);
else 
	if (mode=='S')
	printf("S=%.2fm2",S);
	else printf("Wrong operation");
getch();
}