#include <stdio.h>
#include <stdlib.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

#define SIZE 100
#define Exams 2

s32 getMax(s32 arr[][Exams], s32 rows);
s32 getMin(s32 arr[][Exams], s32 rows);

int main(){
	s32 grades_arr[SIZE][Exams];
	s32 rw, col=Exams, x, y, max_grade, min_grade;
	
	printf("Pleae enter no of students: ");
	scanf("%d", &rw);
	
	for (x=0; x<rw; x++){
		for (y=0; y<col; y++){
			printf("Please enter student %d grade in subject %d: ", x+1, y+1);
			scanf("%d", &grades_arr[x][y]);
		}
	}
	
	max_grade = getMax(grades_arr, rw);
	min_grade = getMin(grades_arr, rw);
	
	printf("Max existing grade = %d\n", max_grade);
	printf("Min existing grade = %d\n", min_grade);
	
	return 0;
}


s32 getMax(s32 arr[][Exams], s32 rows){
	s32 max, i, j;
	
	max = arr[0][0];
	for(i=0; i<rows; i++){
		for (j=0; j<2; j++){
			if (arr[i][j]>max){
				max = arr[i][j];
			}
		}
	}
	
	return max;
}


s32 getMin(s32 arr[][Exams], s32 rows){
	s32 min, i, j;
	min = arr[0][0];
	
	for(i=0; i<rows; i++){
		for (j=0; j<2; j++){
			if (arr[i][j]<min){
				min = arr[i][j];
			}
		}
	}
	
	return min;
}
