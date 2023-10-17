#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void gen_random(char* s, const int len);
int main()
{
	char myString[32] = {0};
	const int lenString = 30;
	int i = 0;

	while (i <= 50)
	{

		gen_random(myString, lenString);
		printf("%s\r\n", myString);

		Sleep(1000);
		i++;
	}
	


	return 0;
}

void gen_random(char* s, const int len)
{
	srand( time(NULL) );
	for (int i = 0; i < len; ++i)
	{
		int randomChar = rand()%(26+26+10);
		if (randomChar < 26)
			s[i] = 'a' + randomChar;
		else if(randomChar < 26+26)
			s[i] = 'A' + randomChar - 26;
		else
			s[i] = '0' + randomChar - 26 - 26; 
	}
	s[len] = 0;
}