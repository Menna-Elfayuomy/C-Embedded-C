#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50

typedef struct {
	char name;
	s32 grade;
}student_t;

int main(){
	u32 i, students_number=0, flag=-1;
	student_t Arr[SIZE];
	
	printf("Please enter the number of students: ");
	scanf("%d", &students_number);
	
	while (flag == -1){
		students_number++;
		printf("Enter student name");
		scanf("%s", &Arr[i].name);
		printf("Enter student score");
		scanf("%d", &Arr[i].score);
		printf("More data? -1 to stop, others to continue: ");
		scanf("%d", &flag);
	}
	
	return 0;
}