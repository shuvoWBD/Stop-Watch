#include <stdio.h>
#include <windows.h>
#define CYCLE 60

int main()
{
    int h, m, s;
    printf("Hour : Minute : Second\n");
    scanf("%d%d%d",&h, &m, &s);
    int hour=0, minute=0, second=0;
    while(1)
    {
        printf("                  ##### Stop Watch #####\n\n\n");
        printf("                    %.2d:%.2d:%.2d\n\n",hour, minute, second);
        printf("                 #####################\n\n\n");
        if(hour==h && minute==m && second==s)
        {
            break;
        }
        second++;
        sleep(1);
        if(second==CYCLE)
        {
            minute++;
            second=0;
        }
        if(minute==CYCLE)
        {
            hour++;
            minute=0;
        }
        system("CLS");


    }
    return 0;
}
