#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
	int ID;
	char name[10];
	double grade;
	}; 
int main(int argc, char *argv[]) {
	struct student s1={24,"JIUN",4.3};
	
	printf("%d",s1.ID);
	
	return 0;
}
 