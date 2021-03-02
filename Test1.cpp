#include <stdio.h>

int main(void)
{
	printf("Good Morning!");
/*	printf("안녕하세요 . Hi");
	printf("Hello world");
	*/
	printf("내 이름은요~ %s 이구요\n\n", "홍길동");
	printf("내 나이는요 %d 입니다\n" , 29); 
	
	printf("\\a : 경고음 발생\n");
	printf("%d%d\n", 123,456); 
	printf("%d%5d%5d\n",123,456,789);
	printf("data type 별 byte 수(int) : %d\n", sizeof(int));
	printf("data type 별 byte 수(char) : %d\n", sizeof(char));
	printf("data type 별 byte 수(long) : %d\n", sizeof(long));
	printf("data type 별 byte 수(float) : %d\n", sizeof(float));
	printf("data type 별 byte 수(double) : %d\n", sizeof(double));
}

