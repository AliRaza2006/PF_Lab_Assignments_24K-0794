#include<stdio.h>
int main()
{
	//Write a program that uses bitwise operators to perform encryption and decryption of a character.
	char c;
	printf("Enter a character:");
	scanf(" %c",&c);
	char enc,dec;
	enc=~c;
	dec=~enc;
	printf("Encrypted:%c\n",enc);
	printf("Decrypted:%c",dec);
	return 0;
}
