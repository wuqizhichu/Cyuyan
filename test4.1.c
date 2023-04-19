#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	//int i;
	//for (i = 0; i <= 100; i++)
	//{
	//	if ( i % 2 == 1);
	//		printf("%d ", i);
	//}
	return 0;
}
	
	
	    
	/*int age = 45;
	if (age < 18)
	    printf("未成年\n");
	else if (age >= 18 && age < 30)
		printf("成年\n");
	else if (age >= 30 && age < 50)
		printf("壮年\n");
	else if (age >= 50 && age < 100)
		printf("老年\n");*/
	//if (age < 18);
	//    printf("未成年\n");
//    return 0;
//}