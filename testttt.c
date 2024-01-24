#include <stdint.h>
#include <stdio.h>

int array1[5] = {0x1,0x3000,0x5000,0x15,0x1234};
char array2[20];
/*
0000 0000 0000 0001 = 0x1
0011 0000 0000 0000 = 0x3000
0000 0000 0001 0101 = 0x15
0001 0010 0011 0100 = 0x1234                */

//void main(void)
//{
//	int8_t i;
//	char* ptr = (char*)&array2;
//	
//	for(i = 0; i < 5; i++)
//	{
//		*(ptr)   = (char)(array1[i] >> 24);
//		*(ptr+1) = (char)(array1[i] >> 16);
//		*(ptr+2) = (char)(array1[i] >> 8);
//		*(ptr+3) = (char)(array1[i]);
//		ptr+=4;
//	}
//	/* Print to screen */
//	for(i = 0; i < 20; i++)
//	{
//		printf(" %0.2x",array2[i]);
//  }
//}


void main(void)
{
	int8_t i;
	int8_t k= 0;
	for(i = 0; i < 5; i++)
	{
		array2[k]  = (char)(array1[i] >> 24);
		array2[k + 1]  = (char)(array1[i] >> 16);
		array2[k + 2]  = (char)(array1[i] >> 8);
		array2[k + 3]  = (char)(array1[i]);
		k+=4;
	}
	/* Print to screen */
	for(i = 0; i < 20; i++)
	{
		printf(" %0.2x",array2[i]);
  }
}
