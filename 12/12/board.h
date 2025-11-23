//
//  board.h
//  12
//
//  Created by 한서윤 on 11/19/25.
//

#ifndef board_h
#define board_h

#include <stdio.h>

#endif /* board_h */

void board_printBoardStatus(void);
int board_getBoardStatus(int pos);
int board_getBoardCoin(int pos);
int board_initBoard(void);
int board_stepShark(void);

#define N_BOARD                 20
#define BOARDSTATUS_OK          1
#define BOARDSTATUS_NOK         0
