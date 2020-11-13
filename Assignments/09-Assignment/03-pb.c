#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"
#define SIZE 30


int main(){
	u8 ip_Char[SIZE], *op_strgPtr = {'\0'};
	s32 ip_chars_number=0, i=0, j=0, m=0, iwhich, flag=0, correction_flag= -1; 
	f32 percentage=0.0;
	
	u8 *words_Ptr[10]={"property", "probability", "program", "process", "progress", "problem", "propagation", "performance", "perfect", "perfume"};
	
	for(m=0; m<12; m++){
		if (correction_flag !=1){
			
			//removing the wrong guess from the list of pointers
			if (m>0){
				for (i=iwhich; i<10-ip_chars_number; i++){
					words_Ptr[i]=words_Ptr[i+1];
				}
			}
			// read the letters from the user
			printf("Enter the charachter %d in the word: ", ip_chars_number+1
			);
			scanf(" %c", &ip_Char[ip_chars_number]);
			ip_chars_number++;
			
			//loop in the dictionary of words
			for (i=0; i<11-ip_chars_number; i++){
				flag=0;
				for (j=0; j<ip_chars_number; j++){
					//check similarity
					if (ip_Char[j]==(words_Ptr[i])[j]){
						flag++;
					}
				}
				if (flag == ip_chars_number){
					op_strgPtr=words_Ptr[i];
					correction_flag = 0;
					iwhich = i;
					break;
					}
				else{
					correction_flag = -1;
				}
			}
			
			if (correction_flag == -1){
				printf("Couldn't guess the word :( I'm Exiting.....\n");
				break;
			}
			else if(correction_flag == 0){
				printf("I guess the word is: %s\n", op_strgPtr);
				printf("If the guessing is right type 1 otherwise type 0: ");
				scanf("%d", &correction_flag);
			}
		}
		else{
			//print the percentage of the input characters out of the whole word
			percentage = ((float)ip_chars_number/(strlen(op_strgPtr)))*100;
			printf("The percentage of the input letters out of the whole word = %f\n", percentage);
			break;
		}
	}
	
	return 0;
}
