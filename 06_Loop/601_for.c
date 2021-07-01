#include <stdio.h>
#pragma warning(disable:4996)

/*
* �� ��ȯ��(loop)
* 	- for
* 	- while
* 	- do ~ while
*
* �� for ��ȯ�� ����
*
*	for(���ʱ��; �����ǽ�; ��������){
* 			����๮;
*			..
*	}
*      ���ʱ�� : ���ʿ� ���ѹ� ����
*      �����ǽ� : �� / ���� �����
*      		�� ���ǽ��� ����� '����' �̸� for�� ����
*      ����๮ : �� ���ǽ��� '��' �̸�  ����
*      �������� : ���๮�� ������ ������ ����
*               �������� ������ �ٽ� �����ǽ� ����..
*
*	��ȯ���� �ۼ��� ���� ����� ��ȯ���� ���� ������ Ȯ���ϰ� �����ϰ� �ۼ��ؾ� �Ѵ�
*	  1. ��� ��ȯ�ϴ� ��?
*	  2. ��ȯ�߿� ���� �ε������� ���۰��� ������?
*	  3. ��ȯ���� ������ �ε�������?
*
*
*	for�� �ۼ��� TIP
*	  1) n�� ��ȯ �ϴ� ��� (�� Ƚ���� ������ ���)
*		for(int i = 0; i < n; i++){ .. }
*	  2) a ~ b ���� ��ȯ�ϴ� ��� (�� ���۰��� ������ �߿��� ���)
*		for(int i = a; i <= b; i++){ .. }
*/
int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("i = %d\n", i);
		printf("------\n");
	}

	printf("\n");

	for (int i = 10; i > 0; i -= 3)
	{
		printf("i = %d\n", i);
	}

	//printf("i = %d\n", i);  // for �ȿ��� ����� ���� i �� for ������ ��������

	int k; // for �����Ŀ��� �ε����� ���� ������ ����Ϸ���, for ����(�ٱ�)���� ��������
	for (k = 10; k <= 100; k += 10)
	{
		printf("%d ", k);
	}
	printf("\n");
	printf("for ������ k = %d\n", k);

	printf("---------------------------\n");
	int i, j;
	for (i = 10, j = 1; j < i; i--, j += 2) // �ʱ��, �������� ������ ���� ����.
	{
		printf("i = %d, j = %d\n", i, j);
	}


	printf("\nENTER �� ������ ���α׷��� ����˴ϴ�\n");
	getchar();
	return 0;
}