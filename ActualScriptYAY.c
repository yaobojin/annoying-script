#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{

FILE *f=fopen("AnnoyingScript","w");

time_t now1;
int hours;

now1 = time(NULL);
hours=now1/3600;
printf("Hours since January 1, 1970 = %ld\n", hours);

for(;;)
{
    if ((hours%12)==0)
    {
        fprintf(f,":)\n");
        printf("%d\n", hours);
        now1=time(NULL);
    }
    else
    {
        now1=time(NULL);
        continue;
    }
}
return (0);
}
