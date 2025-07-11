/* time example */
#include <stdio.h>     /* printf */
#include <time.h>      /* time_t, struct tm, difftime, time, mktime */

int main() {
    time_t timer;
    struct tm y2k;
    double seconds;

    y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
    y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;

    time(&timer);  /* get current time; same as: timer = time(NULL) */

    seconds = difftime(timer, mktime(&y2k));

    printf("%.f seconds since January 1, 2000 in the current timezone\n", seconds);
    return 0;
}
