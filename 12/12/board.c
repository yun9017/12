//
//  board.c
//  12
//
//  Created by 한서윤 on 11/19/25.
//

#include "board.h"
int board_initBoard(void);
int board_getBoardStatus(int pos);
int board_getSharkPosition(void);
int board_stepShark(void);
int board_getBoardCoin(int pos);
void board_printBoardStatus(void);

#define N_BOARD       20

static int board_status[N_BOARD];
static int board_coin[N_BOARD];
static int shark_position;
