#include <stdio.h>
#include <stdlib.h>
struct time{
int hour;
int minutes;
int seconds;
};
int main(){
struct time t;
printf("Enter total number of seconds\n");
scanf("%d",&t.seconds);
t.hour=t.seconds/3600;
t.minutes=((t.seconds-(t.hour*3600))/60);
t.seconds=t.seconds-(t.hour*3600)-(t.minutes*60);
printf("HH:MM:SS - %d:%d:%d\n",t.hour,t.minutes,t.seconds);
return 0;
}
/*
long long int sec;
long long int H , M , S;
printf("Enter total number of seconds\n");
scanf("%llf",&sec);
H=sec/3600;
M=((sec-(H*3600))/60);
S=sec-(H*3600)-(M*60);
printf("HH:MM:SS - %.0lli:%.0lli:%.0lli\n",H,M,S);
*/


/*
#include<stdio.h>
#include<stdlib.h>

struct time{
int hour;
int minutes;
int seconds;
};
int main(void)
{
    struct time timeUpdate (struct time now);
struct time currentTime, nextTime;
printf ("Enter the time (hh:mm:ss): ");
scanf ("%i:%i:%i", &currentTime.hour,
&currentTime.minutes, &currentTime.seconds);
nextTime = timeUpdate (currentTime);
printf ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour,
nextTime.minutes, nextTime.seconds );

return 0;
}
struct time timeUpdate(struct time now){
now.seconds++;
if(now.seconds==60){
    now.seconds=0;
    now.minutes++;
    if ( now.minutes == 60 ) { // next hour
      now.minutes = 0;
       ++now.hour;
       if ( now.hour == 24 ) // midnight
        now.hour = 0;
}

}
return now;
}
*/
