#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 200

typedef struct {
	u8 name[SIZE];
	u8 roll;
	s32 mark;
}student_t;


int main(){
	student_t student;
	printf ("Please enter the name of the student: ");
	scanf("%s", &student.name);
	printf("Please enter the roll of the student either p for present or a for absent: ");
	scanf(" %c", &student.roll);
	printf("Please enter the student mark: ");
	scanf("%d", &student.mark);;
	
	printf("Student data are as following: \n");
	printf("Student name: %s\n", student.name);
	printf("Student roll is: %c\n", student.roll);
	printf("Student mark is: %d\n", student.mark);

	return 0;
}
