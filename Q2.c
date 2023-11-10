
#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time time1, time2,sum;
    printf("Enter the first time hours minutes seconds");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);
    printf("Enter the second time hours minutes seconds");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);
   
    sum.seconds = time1.seconds + time2.seconds;
    sum.minutes = time1.minutes + time2.minutes + (sum.seconds / 60);
    sum.hours = time1.hours + time2.hours + (sum.minutes / 60);

    sum.seconds= sum.seconds %60;
    sum.minutes=sum.minutes %60;
    printf("total sum of times- %d:%d:%d\n", sum.hours, sum.minutes, sum.seconds);

    return 0;
}

