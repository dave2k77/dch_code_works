#include<stdio.h>
#include<stdbool.h>

// Creating a date object data type.
typedef struct
{
    int day;
    int month;
    int year;
} date;

bool isLeapYear(date d)
{
    bool lyFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
    {
        lyFlag = true;
    }
    else
    {
        lyFlag = false;
    }
    return lyFlag;
}

int numberOfDays(date d)
{
    int days;
    const int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(d) == true && d.month == 2)
    {
        days = 29;
    }
    else
    {
        days = daysPerMonth[d.month - 1];
    }
    
    return days;
}

int main(void)
{
    date today, tomorrow;
    
    printf("Enter today's date (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &today.day, &today.month, &today.year);

    if (today.day != numberOfDays(today))
    {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12)
    {
        tomorrow.day = today.day;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else
    {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("Tomorrow's date is %d-%d-%d\n", tomorrow.day, tomorrow.month, tomorrow.year);
    
    return 0;
}