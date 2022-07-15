#include <stdio.h>

int main()
{
	int num = 0;
	short option;
	do
	{

		printf("1.faulty type 1 in switch\n2.switch unbuckle\n3.switch buckle\n4.faulty type 2 in switch\n5.stop\nEnter Option : \n");
		fflush(stdout);
		scanf("%d", &option);
		switch(option)
		{
				case 1 : num = (num | 0x300003);

				for (int i = 23; i >= 0; i--)
				{

					(1 << i) & num  ? printf("1 ") : printf("0 ");
				    if (i % 8 == 0)
				    {

				        printf("\n");
				    }

				}
				printf("\n");
				num = 0;
				break;
				case 2 : num = (num | 0x00C300);

				for (int i = 23; i >= 0; i--)
				{
					(1 << i) & num  ? printf("1 ") : printf("0 ");
					if (i % 8 == 0)
				    {
				        printf("\n");
				    }
				}
				printf("\n");
				num = 0;
				break;
				case 3 : num = (num | 0xC03000);

				for (int i = 23; i >= 0; i--)
				{
					(1 << i) & num  ? printf("1 ") : printf("0 ");
					if (i % 8 == 0)
				    {
				        printf("\n");
				    }
				}
				printf("\n");
				num = 0;
				break;
			case 4 : num = (num | 0xC03000);

				for (int i = 23; i >= 0; i--)
				{
					(1 << i) & num  ? printf("1 ") : printf("0 ");
					if (i % 8 == 0)
				    {
				        printf("\n");
				    }
				}
				printf("\n");
				num = 0;
				break;
		}
	}while(option != 5);
}