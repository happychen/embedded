#include <stdio.h>

struct y_m_d
{
    int year;
    int month;
    int day;
}date;
int main(int argc, const char *argv[])
{
    int days(struct y_m_d date1);
    printf("input year, month, day:\n");
    scanf("%d, %d, %d", &date.year, &date.month, &date.day);
    printf("%d-%d is the %dth day in %d.\n", date.month, date.day, days(date), date.year);
    return 0;
}
