
#include <stdio.h>

int main()
{
    int year, month, day;
    int days, firstDay;
    
    char *months[] = {
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    int monthDays[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    printf("Enter year: ");
    scanf("%d", &year);

    if (year < 1)
    {
        printf("Invalid year!");
        return 0;
    }

    // Check leap year
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        monthDays[1] = 29;
    }

    // Calculate first day of the year
    long long totalDays = 365LL * (year - 1)
        + (year - 1) / 4
        - (year - 1) / 100
        + (year - 1) / 400;

    firstDay = (totalDays + 1) % 7;

    printf("\n          CALENDAR %d\n", year);

    for (month = 0; month < 12; month++)
    {
        printf("\n\n       %s\n", months[month]);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        for (day = 0; day < firstDay; day++)
        {
            printf("    ");
        }

        for (day = 1; day <= monthDays[month]; day++)
        {
            printf("%4d", day);

            if ((day + firstDay) % 7 == 0)
                printf("\n");
        }

        firstDay = (firstDay + monthDays[month]) % 7;
    }

    printf("\n");

    return 0;
}

