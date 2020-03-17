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

/*하노이의탑 규칙
*한번에 하나의 원판만 옮길 수 있다.
*큰 원판이 작은 원판 위에 있어서는 안 된다.
*/

/*하노이의탑 시뮬레이션
* a,b,c 라는 세 개의 봉이 있다.
* a의 봉에 원반이 n장 끼워져있다.(위쪽의 직경이 짧다)
* 이 원반을 모두 c의 봉으로 옮긴다.
* 단 원반은 한번에 한장씩 이동한다.
* 큰 원반은 작은 원반 위에 올려 놓아서는 안된다.
*/
void hanoi(int n, int a, int b, int c)// n:원반 번호, a,b,c:봉의 위치
{
	if (n == 1)
	{
		printf("%c에서 %d의 원반을 %c로 이동한다. \n", a, n, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		printf("%c에서 %d의 원반을 %c로 이동한다. \n", a, n, c);
		hanoi(n - 1, b, a, c);
	}
}
