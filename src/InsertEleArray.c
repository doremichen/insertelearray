/*
 ============================================================================
 Name        : InsertEleArray.c
 Author      : doremi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
//	puts("!!!Hello Doremi!!!"); /* prints !!!Hello Doremi!!! */

	int array[100], position, c, n, value;

	printf("Enter the number of the array\n");
	scanf("%d", &n);

	printf("please input %d element\n", n);
	for(c = 0; c < n; ++c) {
		scanf("%d", &array[c]);
	}

	printf("the array is\n");
	for(c = 0; c < n; ++c ) {
		printf("%d", array[c]);
	}

	printf("\n");

	do {

		printf("Enter intert the position\n");
			scanf("%d", &position);

		printf("Enter the new value\n");
			scanf("%d", &value);

	}while(position > n);



	for(c = n-1; c >= position-1; --c) {

		array[c+1] = array[c];

	}

	array[position-1] = value;

	printf("the result array is\n");
	for(c = 0; c < n+1; ++c ) {
		printf("%d", array[c]);
	}

	printf("\n");


	while(!kbhit());
	return 0;
}
