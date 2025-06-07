#pragma once
#include"static.h"
#include"string.h"

const int	ROCK = 0;
const int	SISSORS = 1;
const int	PAPER = 2;

const int	DONE = 0;
const int	REPEAT = 1;
const int	WIN_REPEAT = 2;
const int	LOSE_REPEAT = 3;

const int Player_Static_Count = 4;

char m_chName[4][50];

int m_nWinLate = 1;

char m_chRepeat[4][50] = { "끝", "처음", "승리자", "패배자" };

// 각 플레이어 별 결과
int m_nResult[4] = { 0,0,0,0 };
// 재 경기할 플레이어
int m_nRepeatPlayer[4] = { 1,1,1,1};
// 플레이어의 가위바위보 값
int m_nRCP[4] = { 0,0,0,0 };

int m_nRound = 1;

void	Play_Game(int nRepeatValue);
void	Player_NameSet(int nPlayer_Count);
void	change_Winner_Stauts();
void	Player_RCP_Scan(int nReapeatValue);
int		RCP_Scanf(int nRepeatValue, int nPlayer);
void	get_Winner(int nRepeatValue, int nMatchResult);
void	get_Loser(int nRepeatValue, int nMatchResult);
int		get_MatchResult(int nRepeatValue);
void	print_Lank();

int		get_Winner_Count();
void	set_Draw(int nRepeatValue);
int		WINNER_Dupl_Check();
int		LOSER_Dupl_Check();