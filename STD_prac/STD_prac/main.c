//
//  main.c
//  STD_prac
//
//  Created by QY on 15/12/2.
//  Copyright © 2015年 QY. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int i,n;
    int * pData;
    printf("amount of numbers to be entered:");
    scanf("%d",&i);
    pData=(int*)calloc(i, sizeof(int));
    if (pData==NULL) {
        exit(1);
    }
    for (n=0;n<i; n++) {
        printf("enter number #%d:",n+1);
        scanf("%d",&pData[n]);
    }
    printf("You entered ");
    for (n=0; n<i; n++) {
        printf("%d\n",pData[n]);
    }
    free(pData);
    //printf("Hello, World!\n");
    return 0;
}
