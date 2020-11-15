#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 10
#define NAME_LENGTH 30

typedef struct {
	u8 name[NAME_LENGTH];
	u32 id;
	s32 grade;
}student_t;

void storeStudentsData(student_t *arrPtr);
void printStruct (student_t *ptr);

int main(){
	student_t students_array[SIZE];
	storeStudentsData(students_array);
	printStruct (students_array);

	return 0;
}

void storeStudentsData(student_t *arrPtr){
	s32 i;
	for (i=0; i<SIZE; i++){
		printf("Enter student %d name: ", i+1);
		scanf("%s", &((arrPtr+i)->name));
		printf("Enter student %d id: ", i+1);
		scanf("%d", &((arrPtr+i)->id));
		printf("Enter student grade: ", i+1);
		scanf("%d", &((arrPtr+i)->grade));
	}
	printf("\n");

}

void printStruct (student_t *ptr){
	s32 i;
	for (i=0; i<SIZE; i++){
		printf("Student %d name: %s\n", i+1 ,(ptr+i)->name);
		printf("Student %d ID: %d\n", i+1, (ptr+i)->id);
		printf("Student %d grade = %d\n", i+1, (ptr+i)->grade);
	}
}