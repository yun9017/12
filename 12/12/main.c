//
//  main.c
//  12
//
//  Created by 한서윤 on 11/18/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "board.h"

int main(int argc,char * argv[]) {
    srand( (unsigned)(time(NULL)) );
    
    //opening
    printf("=========================================\n");
    printf("=====+=====+=====+=====+=====+=====+=====\n");
    printf("=====    SHARK ISLAND GAME START    =====\n");
    printf("=====+=====+=====+=====+=====+=====+=====\n");
    printf("=========================================\n");
    
    //step 1. initialization (player name setting, variables) 초기화
    
    //step 2. turn play (do-while)
    // 2-1. status printing
    // 2-2. roll dice
    // 2-3. move (result)
    // 2-4. change turn, shark move
    
    //step 3. game end (winner printing)
    
    //ending
    printf("\n\n\n\n\n\n\n");
    printf("=========================================\n");
    printf("=====+=====+=====+=====+=====+=====+=====\n");
    printf("=====     SHARK ISLAND GAME END     =====\n");
    printf("=====+=====+=====+=====+=====+=====+=====\n");
    printf("=========================================\n\n");
    return 0;
}
