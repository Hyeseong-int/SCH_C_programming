/*
 * HW0803.c
 *
 *  Created on: 2018. 12. 4.
 *      Author: HyeSeong
 */
#include <stdio.h>

typedef struct	{
	int x, y;
}POINT;

int main (void)	{
	POINT pos = {0, 0};
	char str[]	 = {"UULDRUURRRLD"};
	char *p = str;

	while (*p != '\0'){
		if (*p == 'U')
			pos.y++;
		if (*p == 'D')
			pos.y--;
		if	(*p == 'L')
			pos.x--;
		if(*p =='R')
			pos.x++;
		printf("The position is (%+d, %+d)\n", pos.x, pos.y);
		p++;
		}
	return 0;
}
