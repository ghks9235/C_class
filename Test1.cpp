#include <stdio.h>

int main(void)
{
	printf("Good Morning!");
/*	printf("�ȳ��ϼ��� . Hi");
	printf("Hello world");
	*/
	printf("�� �̸�����~ %s �̱���\n\n", "ȫ�浿");
	printf("�� ���̴¿� %d �Դϴ�\n" , 29); 
	
	printf("\\a : ����� �߻�\n");
	printf("%d%d\n", 123,456); 
	printf("%d%5d%5d\n",123,456,789);
	printf("data type �� byte ��(int) : %d\n", sizeof(int));
	printf("data type �� byte ��(char) : %d\n", sizeof(char));
	printf("data type �� byte ��(long) : %d\n", sizeof(long));
	printf("data type �� byte ��(float) : %d\n", sizeof(float));
	printf("data type �� byte ��(double) : %d\n", sizeof(double));
}

