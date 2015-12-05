//
//  main.h
//  Practise_08
//
//  Created by QY on 15/11/17.
//  Copyright © 2015年 QY. All rights reserved.
//

#ifndef main_h
#define main_h
#define trace(x,format) \
printf(#x"=%"#format"\n",x)

#define tracet(i) \
trace(x ## i ,d)


//#define assertt(cond) \
//if (!(cond)) _assert(#cond,_FILE_,_LINE_)

#define assert(cond) \
((cond)\
? (void) 0 \
 : __assert(#cond,__FILE_,__LINE__))




#if defined(__MSCVER)



#elif defined(__BCPLUSPLUS)

#else
//#error compiler not support.

#endif
#endif /* main_h */
