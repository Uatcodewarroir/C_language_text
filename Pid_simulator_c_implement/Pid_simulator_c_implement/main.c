//
//  main.c
//  Pid_simulator_c_implement
//
//  Created by QY on 15/12/6.
//  Copyright © 2015年 QY. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


double IncreasementSpeed;
int count;
double Speed;


struct _pid{
    
    double SetSpeed;
    double ActualSpeed;
    double err;
    double err_last;
    double kp,ki,kd;
    double err_next;
    
}pid;


void pid_init()
{
    pid.ActualSpeed=0.0;
    pid.err=0.0;
    pid.err_last=0.0;
    pid.err_next=0.0;
    pid.SetSpeed=0.0;
    pid.kp=0.1;
    pid.ki=0.015;
    pid.kd=0;
    
}


double PID_realize(double Speed)
{
    pid.SetSpeed=Speed;
    pid.err=pid.SetSpeed-pid.ActualSpeed;
    IncreasementSpeed=pid.kp*(pid.err-pid.err_next)+pid.ki*pid.err+pid.kd*(pid.err-2*pid.err_next+pid.err_last);
    pid.ActualSpeed+=IncreasementSpeed;
    pid.err_last=pid.err_next;
    pid.err_next=pid.err;
    return pid.ActualSpeed;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    pid_init();
    while (count<1000) {
        double Speed=PID_realize(200.0);
        printf("%lf\t",Speed);
        count++;
    }
    return 0;
}
