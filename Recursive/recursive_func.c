#include"ALL.h"

void digit1(int number)
{
	int num = 0;

	if (number != num)
	{
		digit1(number - 1);
		printf("%d", number);
	}
		
	else
	{
		return;
	}
		
}

void digit2(int number)
{
	int num = 0;

	if (number != num)
	{
		printf("%d", number);
		digit2(number - 1);
	}

	else
	{
		return;
	}

}

void reverse_integer(int number)
{
	if (number>0)
	{
		printf("%d", number % 10);
		reverse_integer(number / 10);
	}

	else
	{
		return;
	}
	

}

void reverse_string(char *string, int size)
{
	if (size != 0)
	{
		printf("%c", string[size-1]);
		reverse_string(string ,size-1);
	}

	else
	{
		return;
	}
}

int fibonacci(int num)
{
	if (num == 1 || num == 2)
		return 1;
	else
	{
		return fibonacci(num - 2) + fibonacci(num - 1);
	}
}

void crazy_rule(int number)
 {
	int num = 0;

	if (number != num)
	{
		crazy_rule(number-1);
		printf("%d", number);
		crazy_rule(number-1);
	}
	else
	{
		return;
	}

}

/*�ϳ�����ž ��Ģ
*�ѹ��� �ϳ��� ���Ǹ� �ű� �� �ִ�.
*ū ������ ���� ���� ���� �־�� �� �ȴ�.
*/

/*�ϳ�����ž �ùķ��̼�
* a,b,c ��� �� ���� ���� �ִ�.
* a�� ���� ������ n�� �������ִ�.(������ ������ ª��)
* �� ������ ��� c�� ������ �ű��.
* �� ������ �ѹ��� ���徿 �̵��Ѵ�.
* ū ������ ���� ���� ���� �÷� ���Ƽ��� �ȵȴ�.
*/
void hanoi(int n, int a, int b, int c)// n:���� ��ȣ, a,b,c:���� ��ġ
{
	if (n == 1)
	{
		printf("%c���� %d�� ������ %c�� �̵��Ѵ�. \n", a, n, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		printf("%c���� %d�� ������ %c�� �̵��Ѵ�. \n", a, n, c);
		hanoi(n - 1, b, a, c);
	}
}
