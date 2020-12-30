// Program that illustrates how to use pointers to struct data type

#include<stdio.h>

int main(void) {
	// defining the date structure.
	struct date {
		int day;
		int month;
		int year;
	};
	/* intializing the today variable as struct date data type and datePtr as 
	a pointer to struct date today. */ 
	struct date today, *datePtr;

	datePtr = &today; // pointer that is referencing the today struct instance.
	datePtr->day = 25;
	datePtr->month = 9;
	datePtr->year = 2004;

	//  printing today's date.
	printf("Today's date is %d/%d/%d.\n", datePtr->day, datePtr->month, datePtr->year);

	return 0;
}
