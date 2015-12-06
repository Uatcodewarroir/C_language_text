//
//  main.c
//  Prac_time
//
//  Created by QY on 15/12/5.
//  Copyright © 2015年 QY. All rights reserved.
//

#include <stdio.h>
#include <time.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    time_t timer;
    struct tm y2k={0};
    double seconds;
    
    
    
    y2k.tm_hour=0;y2k.tm_min=0;y2k.tm_sec=0;
    y2k.tm_year=100;y2k.tm_mon=0;y2k.tm_mday=1;
    
    
    
    time(&timer);
    seconds=difftime(timer, mktime(&y2k));
    printf("%.f seconds since January 1,2000 in the current timezone",seconds);
    
    return 0;
}
