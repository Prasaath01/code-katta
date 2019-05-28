#include <stdio.h>
 
struct time{
    int hour, minute, second;
};
 
int main(){
  struct  time t1, t2, t3;
    int seconds1, seconds2, totalSeconds;
 
    scanf("%d %d",&t1.hour, &t1.minute);
 
    scanf("%d %d",&t2.hour, &t2.minute);
 
    
    seconds1 = t1.hour*60*60 + t1.minute*60;
    seconds2 = t2.hour*60*60 + t2.minute*60;
 
    totalSeconds = seconds1-seconds2;
 
    //extract time in Hours, Minutes and Seconds
    t3.minute = totalSeconds/60;
    t3.hour = t3.minute/60;
    t3.minute = t3.minute%60;
    t3.second = totalSeconds%60;
 
    printf("%d %d\n", t3.hour, t3.minute);
}
