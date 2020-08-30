#include <stdio.h>
//#include <memory.h>
int strlen(char* msg);
/*Khai bao bien toan cuc ko can phai set gia tri ban dau*/
// int *px
void main()
{
	//int x=10;
	//printf("diachi x: 0x%02x\r\n",&x);
	//printf("giatri x: 0x%02x\r\n",x);
	//int* px=&x;
	//*px=10;
	//printf("diachi px: 0x%02x\r\n",px);
	//printf("giatri px: 0x%02x\r\n",*px);
	int i = 0, giaithua = 1;
	int j = 0;
	/*
		for (i = 0; i < 10; i++)
	{
		printf("%d\r\n", i);
	}
	*For /

	/*
		while (i < 10)
	{
		printf("%d\r\n", i);
			i++;
	}
	while
	*/


	/*
		for (i = 1; i <= 10; i++)
	{
		giaithua *= i;
	}
	printf("Gia tri cua 10! la %d \r\n", giaithua);
	*/


	/*
	Bang cuu chuong tu 2 den 9
	
	for (j = 2; j < 10; j++)
	{
		if (j == 7) break;
		for (i = 1; i < 10; i++)
		{

			
			if (i == 1 )
			{
				printf("Bang cuu chuong  %d\r\n", j);

			}
		
			giaithua = j * i;
			printf("giaithua= ");
			printf("%d*%d=%d\r\n", j, i, giaithua);

		}
	}
	*/
	char *a = "Hello World";// "" may da cap cho Hello world 1 dia chi de luu tru va bien a chua dia chi dau tien 'H'.
	/*printf("%02x\r\n", a);
	printf("%c", *a);
	a la dia chi va *a la gia tri cua a;
	*/
	printf("Do dai chuoi nhap vo la :%d\r\n", strlen(a));
}
/* Luu y 'A' = doi A ra ma asII con "A" de truyen chuoi 1 ky tu A va cap cho 1 dia chi*/
/* Ham con lay so phan tu chuoi */
int strlen(char* msg)
{
	int count = 0;
	int i=0;
	//for (i=0; *(msg+i)!=0 ; i++)
	//{
	//	count = i+1;
	//}
	while ( *(msg + i)!= 0 )
	{
		i++;
		count=i;
	}
	//printf("count = %d", count);
	return count;
}
/*
Luu y khi int x; tuc nghia la x la gia tri con &x la dia chi

khi int*x ;tuc nghia la *x la gia tri con x la dia chi.
int *px=maclloc(1); malloc sinh ra vung nho cua bien va gan vao px.
*px=10;

// char *msg =(char*)"hello";
*/

//BTVN: tinh tich phan