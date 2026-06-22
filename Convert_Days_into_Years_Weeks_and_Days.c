// Convert_Days_into_Years_Weeks_and_Days

#include <stdio.h>
int main()
{
    int totalDays, years, weeks, days;
    printf("Enter total days: ");
    scanf("%d", &totalDays);
    years = totalDays / 365;
    totalDays %= 365;
    weeks = totalDays / 7;
    days = totalDays % 7;
    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", days);
    return 0;
}

/* OUTPUT
Enter total days: 555
Years = 1
Weeks = 27
Days = 1   */