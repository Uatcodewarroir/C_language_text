//
//  main.c
//  Prac_003
//
//  Created by QY on 15/12/4.
//  Copyright © 2015年 QY. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define DECKSIZE 52
#define SUITSIZE 13
int main(int argc, const char * argv[]) {
    // insert code here...
    int ncards=DECKSIZE;
    char deck[DECKSIZE];
    size_t deckp;
    unsigned int seed;
    
    if (argc>1) {
        if ((ncards=abs(atoi(argv[1]))%DECKSIZE)==0) {
            ncards=DECKSIZE;
        }
    }
    seed=(unsigned int)time(NULL);
    srand(seed);
    deckp=0;
    while (deckp<ncards) {
        int num=rand()%DECKSIZE;
        if (memchr(deck, num, deckp)==NULL) {
            deck[deckp++]=(char)num;
        }
    }
    for (deckp=0; deckp<ncards; ++deckp) {
        div_t card=div(deck[deckp], SUITSIZE);
        printf("%c(%c)%c","A23456789JQK"[card.rem],
        "CDHS"[card.quot],
        (deckp+1)%SUITSIZE? ' ':'\n'
               );
    }
    return 0;
}
