#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[20];
	system("cls");
	puts("Enter your name : ");
	gets(name);
	puts("Hi there : ");
	puts(name);
	getch();
}
	
	return 0;
}
