#include <stdio.h>
int main ()
{
	int num;
	printf("escolha um numero entre 1 e 7:\n");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
		{
			printf("segundou");
			break;
		}
		case 2:
		{
			printf("terça");
			break;
		}
		case 3:
		{
			printf("quak");
			break;
		}
		case 4:
		{
			printf("quin");
			break;
		}
		case 5:
		{
			printf("sex");
			break;
		}
		case 6:
		{
			printf("saba");
			break;
		}
		case 7:
		{
			printf("domin");
			break;
		}
		default: 
		{
			printf("tu é gay");
			break;
		}
	}
	return 0;
}