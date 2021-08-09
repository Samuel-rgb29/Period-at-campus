#include <stdio.h>
#include <time.h>
int main()
{   

    int yearOfEntry;
    int month, year;
    time_t now;
    
    // Obtain current time
    // `time()` returns the current time of the system as a `time_t` value
    time(&now);
    
    // localtime converts a `time_t` value to calendar time and
    // returns a pointer to a `tm` structure with its members
    // filled with the corresponding values
    struct tm *local = localtime(&now);
    
    month = local->tm_mon + 1;      // get month of year (0 to 11)
    year = local->tm_year + 1900;   // get year since 1900
    
    
    printf("Enter your year of entry:\n ");
    scanf("%d", &yearOfEntry);
    // print the current date
    
    printf("You have so far spent %d years and %d months at the university.\n", year- yearOfEntry, month);
    printf("Compiled by OKOCI SAMUEL PETER 2020/EEE/102/PS");


    return 0;
}
