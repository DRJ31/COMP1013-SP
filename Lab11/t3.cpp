#include <stdio.h>
#include <string.h>
typedef struct {
    int year, month, day;
} Date;
bool dayOfWeek(Date date, char wday[]);
int main(){
    Date day;
    char wday[20];
    puts("Please input a date (year, month, day): ");
    scanf("%d%d%d", &day.year, &day.month, &day.day);
    if (dayOfWeek(day, wday))
        printf("%d/%d/%d is %s.\n", day.year, day.month, day.day, wday);
    else
        puts("Please input a valid date!");
    return 0;
}
bool dayOfWeek(Date date, char wday[]){
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//Array to store days in every week;
    if (date.day > days[date.month-1] || date.day < 1){//Judge day in every month
        if (!(date.year % 4 == 0 && date.month == 2 && date.day == 29))//Judge Feburary
            return false;
    }
    else if (date.month > 12 || date.month < 1)//Judge input month
        return false;
    else if (date.year < 1)//Judge input year
        return false;
    int result = 0;//Calculate how many days has passed
    for (int i = 0; i < date.month - 1; i++){
        result += days[i];
    }
    result += date.day;
    result = (date.year - 1) + (date.year - 1) / 4 - (date.year - 1) / 100 +(date.year - 1) / 400 + result;//An algorithm to calculate which day is it
    switch (result % 7){
        case 0:
            strcpy(wday, "Sunday");
            break;
        case 1:
            strcpy(wday, "Monday");
            break;
        case 2:
            strcpy(wday, "Tuesday");
            break;
        case 3:
            strcpy(wday, "Wednesday");
            break;
        case 4:
            strcpy(wday, "Thursday");
            break;
        case 5:
            strcpy(wday, "Friday");
            break;
        case 6:
            strcpy(wday, "Saturday");
            break;
    }
    return true;
}