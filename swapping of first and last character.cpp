#include<stdio.h>
#include<string.h>

int swap_first_and_last(char* str) {

	char temp;
	int n;

	n = strlen(str);

	temp = str[0];
	str[0] = str[n - 1];
	str[n - 1] = temp;

}

int main() {

	char str[100];

	printf("Enter String: ");
	gets(str);
swap_first_and_last(str);

	printf("Output String: %s", str);

}
