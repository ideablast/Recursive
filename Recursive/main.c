#include"ALL.h"

int main()
{
	char str[] = "apple";
	digit1(5); puts("");
	digit2(7); puts("");
	reverse_integer(1234567); puts("");
	reverse_string(str, strlen(str));
	puts("");
	printf("피보나치 7:%d", fibonacci(7));
	puts("");
	puts("");
	crazy_rule(4);
	puts("");
	puts("");
	hanoi(4, 'a', 'b', 'c');
	
}