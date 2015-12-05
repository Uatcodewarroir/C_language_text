//
//  main.cpp
//  Practise_08
//
//  Created by QY on 15/11/17.
//  Copyright © 2015年 QY. All rights reserved.
//

#include <iostream>
#include "main.h"
//#include <cassert>
#include <stdio.h>
#include <stdlib.h>





void __assert(char *cond,char *fname,long lineno)
{
    fprintf(stderr, "assertion failed:%s,file %s ,line%ld\n",cond,fname,lineno);
    abort();
}


using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    /*std::cout << "Hello, World!\n";
    std::cout << "__DATA__==" << __DATE__ <<  std::endl;
    std::cout << "__FILE__==" << __FILE__ << std::endl;
    std::cout << "__LINE__==" << __LINE__ << std::endl;
    std::cout << "__TIME__==" << __TIME__ << std::endl;
    //std::cout << "__cplusplus" <<_cplusplus__ << std::endl;
    
    //／／int i=0;
    //／／assert(i>0);
    int i=1;
    float x = 2.0;
    //char *s = "three";
    trace(i, d);
    trace(x, f);
    //trace(s, s);*/
    
    int x1=1,x2=2,x3=3;
    tracet(1);
    tracet(2);
    tracet(3);
    
    
    
    
    
    
    
    
    return 0;
}