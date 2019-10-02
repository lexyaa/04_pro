#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//practice 01

int main(int argc, char *argv[]) {
	int x=3;
	int cond1, cond2;
	
	cond1=2<x&&x<5;
	cond2=x>1||x<4&&x>3;
	
	printf("cond1=%d, cond2=%d",
	cond1, cond2);
    return 0;
}
//practice 02

int main(int argc, char *argv[]) {
	int x=3;
	int cond1, cond2;
	
	cond1=2<x&&x<5;
	cond2=x>1||x<4&&x>3;
	
	printf("cond1=%d, cond2=%d",
	cond1, cond2);
    return 0;
}

//practice 03

int main(int argc, char *argv[]) {
	int x, y;
	
	printf("enter 2 integers :");
	scanf("%d %d", &x, &y);
	
	printf("plus is %i\n:", x+y);
	printf("minus is %i\n:", x-y);
	printf("multiply is %i\n:", x*y);
	printf("division is %i\n:", x/y);
	printf("remainder is %i\n:", x%y);
	
	return 0;
}

