#include <stdio.h>
#include <stdlib.h>

typedef struct students
{
	int Math;
	int Language;
	int Physics;
	int Chemisrty;
	
}S_students_t;

S_students_t arr_students[10] = {
	{10,12,15,20},
	{15,13,14,12},
	{11,15,20,17},
	{18,17,19,20},
	{19,20,18,20},
	{16,15,20,20},
	{10,11,13,12},
	{17,18,12,17},
	{14,20,16,20},
	{19,20,18,6}
};

int main(){
	int ID, i;
	
	printf("Please enter the student ID number (from 1:10) : ");
	scanf("%d", &ID);
	
	if ((ID>0)&(ID<11)){
		printf("Math grade: %d\n", arr_students[ID-1].Math);
		printf("Language grade: %d\n", arr_students[ID-1].Language);
		printf("Physics grade: %d\n", arr_students[ID-1].Physics);
		printf("Chemisrty grade: %d\n", arr_students[ID-1].Chemisrty);

	}
	else{
		printf("Student ID is not correct. Exiting ...");
		exit(1);
	}
	return 0;
}