#include<stdio.h>
int main()
{
	char c;
	int lowercase_vowel,uppercase_vowel;
	printf("enter an alphabet:");
	scanf("%c",&c);
	//evaluate to 1 if variable c is a lower case vowel
	lowercase_vowel=(c=='a'||c=='e'||c=='i'|| 
