//
//  main.c
//  Hello_world_crazy
//
//  Created by QY on 15/12/5.
//  Copyright © 2015年 QY. All rights reserved.
//

#include <stdio.h>
void func(void){
    char *string;
    while ((string= get_string())!= NULL) {
        process_string(string);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    while (1) {
        printf("Hello, World!\n");
    }
    
    return 0;
}
