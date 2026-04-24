#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char* argv[])
{
	size_t c = 0, nLen;
	float fltPart;
	char szLine[256], chSym;
	printf("Input a string\r\n");
	scanf("%255[^\n]", &szLine);
	printf("Input a symbol\r\n");
	scanf(" %c", &chSym);
	nLen = strlen(szLine);
	for (unsigned int i = 0; i < nLen; i++)
	{
		if (szLine[i] == chSym)
			c++;
	}
	fltPart = ((float)c / nLen) * 100.0f;
	printf("The symbol \"%c\" occurs %llu times\r\n", chSym, c);
	printf
	(
		"The symbol \"%c\" occupies %.2f %% of the string \"%s\"\r\n",
		chSym, fltPart, szLine
	);
	getchar();
	getc(stdin);
	return 0;
}