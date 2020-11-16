#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 50

typedef struct {
	char name[SIZE];
	s32 score;
}student_t;

int main(){
	u32 i=0, students_number=0, flag=0, sum=0; 
	f32 avrg_score;
	student_t Arr[SIZE], highest;
	highest.score=0;
	
	while (flag != -1){
		
		printf("Enter student name: ");
		scanf("%s", &(Arr[students_number].name));
		printf("Enter student score: ");
		scanf("%d", &(Arr[students_number].score));
		printf("More data? -1 to stop, others to continue: ");
		scanf("%d", &flag);
		sum+= (Arr[students_number].score);
		students_number++;
	}
	
	avrg_score = (float)sum/students_number;
	printf("=================Report=================\n");
	printf("Student Name		Score\n");
	printf("------------		-----\n");

	for (i=0; i<students_number; i++){
		printf("%s				%d\n", (Arr[i].name), (Arr[i].score));
		//get the highest score
		if (highest.score < (Arr[i].score)){
			highest.score = (Arr[i].score);
			flag = i;
		}
	}
	i=0;
	while(Arr[flag].name[i] != '\0'){
		highest.name[i]=Arr[flag].name[i];
		i++;
	}
	
	printf("The number of students = %d\n", students_number);
	printf("The average score for this class is %f\n", avrg_score);
	printf("========================================\n");
	printf("Below The Average Students! Work Harder!\n");
	printf("========================================\n");
	for (i=0; (i<students_number); i++){
		if ((Arr[i].score < avrg_score)){
			printf("%s				%d\n", Arr[i].name, Arr[i].score);
		}
	}
	printf("========================================\n");
	printf("Top Score Student! Congratulation!\n");
	printf("========================================\n");
	printf("Student Name		Score\n");
	printf("------------		-----\n");
	printf("%s				%d\n", highest.name, highest.score);

	return 0;
}