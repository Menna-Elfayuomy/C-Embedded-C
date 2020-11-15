#include <stdio.h>
#include "D:\NTI\C_projects\Labs\07-Labs\STD_TYPES.h"

typedef struct {
	s32 second;
	s32 minute;
	s32 hour;
}Time_t;

Time_t timeDelta(Time_t t1, Time_t t2);

int main(){
	Time_t Time_period1, Time_period2, difference_Time_period;
	printf("Please enter the first time period in hours minutes seconds consectively with 'Enter' separeting them: \n");
	scanf("%d%d%d", &Time_period1.hour, &Time_period1.minute, &Time_period1.second);
	printf("Please enter the second time period in hours minutes seconds consectively with 'Enter' separeting them: \n");
	scanf("%d%d%d", &Time_period2.hour, &Time_period2.minute, &Time_period2.second);
	
	difference_Time_period = timeDelta(Time_period1, Time_period2);
	
	printf("The difference between the two input time periods = %dhr %dmin %dsec\n", difference_Time_period.hour, difference_Time_period.minute, difference_Time_period.second);
	
	return 0;
}


Time_t timeDelta(Time_t t1, Time_t t2){
	Time_t delta;
	delta.second = t2.second - t1.second;
	delta.minute = t2.minute - t1.minute;
	delta.hour = t2.hour - t1.hour;

	while (delta.second <0){
		delta.second+=60;
		delta.minute--;
	}
	while (delta.minute <0){
		delta.minute+=60;
		delta.hour--;
	}

	
	return delta;
}