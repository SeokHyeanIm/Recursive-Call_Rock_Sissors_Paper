

#include "RCP.h"

int main()
{
	memset(m_chName, 0, sizeof(char) * 4 * 50);
	Player_NameSet(Player_Static_Count);
	Play_Game(REPEAT);
	print_Lank();
	printf("���� ����\n");
	return TRUE;
}

void Play_Game(int nRepeatValue)
{
	printf("\n\n======================================\n\n");
	printf("\n%d %s ���� ����\n", m_nRound, m_chRepeat[nRepeatValue]);
	Player_RCP_Scan(nRepeatValue);

	int nMatchResult = get_MatchResult(nRepeatValue);

	if (nMatchResult == -2) { printf("��ġ ��� ����.\n"); }
	else if (nMatchResult == -1)
	{
		printf("%d ���� ���\n", m_nRound++);
		set_Draw(nRepeatValue);
		Play_Game(REPEAT);
	}
	else if(nMatchResult >= ROCK)
	{
		get_Winner(nRepeatValue, nMatchResult);
		get_Loser(nRepeatValue, nMatchResult);
		printf("%d ���� �¸��� %d�� ź��!\n", m_nRound++, get_Winner_Count());
	}

	int nWinner = WINNER_Dupl_Check();
	if (nWinner > 1)
	{
		Play_Game(WIN_REPEAT);
	}
	else if(nWinner == 1)
	{
		change_Winner_Stauts();
	}

	int nLoser = LOSER_Dupl_Check();
	if (nLoser > 1)
	{
		Play_Game(LOSE_REPEAT);
	}
}
void change_Winner_Stauts()
{
	// Player 1
	if (m_nRepeatPlayer[0] == WIN_REPEAT)
	{
		m_nRepeatPlayer[0] = DONE;
		m_nResult[0] = m_nWinLate++;
	}
	// Player 2
	if (m_nRepeatPlayer[1] == WIN_REPEAT)
	{
		m_nRepeatPlayer[1] = DONE;
		m_nResult[1] = m_nWinLate++;
	}
	// Player 3
	if (m_nRepeatPlayer[2] == WIN_REPEAT)
	{
		m_nRepeatPlayer[2] = DONE;
		m_nResult[2] = m_nWinLate++;
	}
	// Player 4
	if (m_nRepeatPlayer[3] == WIN_REPEAT)
	{
		m_nRepeatPlayer[3] = DONE;
		m_nResult[3] = m_nWinLate++;
	}
}
void Player_RCP_Scan(int nRepeatValue)
{
	int nPlayerCount = 0;
	int nRet = 0;

	int nPlayer = 0;

	if (m_nRepeatPlayer[nPlayerCount] == nRepeatValue)
	{
		nRet = RCP_Scanf(nRepeatValue, nPlayerCount);
		if (nRet < 0) { printf("�߸��� ���� �Է����� ���� ���α׷��� �����մϴ�.\n"); }
		else nPlayer++;
	}
	nPlayerCount++;
	if (m_nRepeatPlayer[nPlayerCount] == nRepeatValue)
	{
		nRet = RCP_Scanf(nRepeatValue, nPlayerCount);
		if (nRet < 0) { printf("�߸��� ���� �Է����� ���� ���α׷��� �����մϴ�.\n"); }
		else nPlayer++;
	}
	nPlayerCount++;
	if (m_nRepeatPlayer[nPlayerCount] == nRepeatValue)
	{
		nRet = RCP_Scanf(nRepeatValue, nPlayerCount);
		if (nRet < 0) { printf("�߸��� ���� �Է����� ���� ���α׷��� �����մϴ�.\n"); }
		else nPlayer++;
	}
	nPlayerCount++;
	if (m_nRepeatPlayer[nPlayerCount] == nRepeatValue)
	{
		nRet = RCP_Scanf(nRepeatValue, nPlayerCount);
		if (nRet < 0) { printf("�߸��� ���� �Է����� ���� ���α׷��� �����մϴ�.\n"); }
		else nPlayer++;
	}
	

	if (nPlayer <= 0)
	{
		printf("�÷��̾� �� ���� %d.\n", nPlayer);
	}
	else
	{
		printf("%d���� �÷��̾ �� �½��ϴ�.\n", nPlayer);
	}
}

int RCP_Scanf(int nRepeatValue, int nPlayer)
{
	int nRCP = 0;
	int nScan = -1;
	if (m_nRepeatPlayer[nPlayer] == nRepeatValue)
	{
		printf("%d�� ������ : ", nPlayer + 1);
		printf("1. ����		2.����		3. ��\n�� : ");
		scanf("%d", &nRCP);
		if (nRCP < 1 || nRCP > 3)
		{
			printf("�߸��� ���� �Է����� ���� ���α׷��� �����մϴ�.\n");
			nRCP = -1;
		}
		else
		{
			switch (nRCP)
			{
			case 1:
			{
				nScan = SISSORS;
				break;
			}
			case 2:
			{
				nScan = ROCK;
				break;
			}
			case 3:
			{
				nScan = PAPER;
				break;
			}
			default:
				printf("�߸��� ���� �Է����� ���� ���α׷��� �����մϴ�.\n");
				nRCP = -1;
				return nRCP;
			}
			m_nRCP[nPlayer] = nScan;
		}
	}
	return nRCP;
}

void get_Winner(int nRepeatValue, int nMatchResult)
{
	// Player 1
	if (m_nRepeatPlayer[0] == nRepeatValue)
	{
		if (m_nRCP[0] == nMatchResult)
		{
			m_nRepeatPlayer[0] = WIN_REPEAT;
		}
	}
	// Player 2
	if (m_nRepeatPlayer[1] == nRepeatValue)
	{
		if (m_nRCP[1] == nMatchResult)
		{
			m_nRepeatPlayer[1] = WIN_REPEAT;
		}
	}
	// Player 3
	if (m_nRepeatPlayer[2] == nRepeatValue)
	{
		if (m_nRCP[2] == nMatchResult)
		{
			m_nRepeatPlayer[2] = WIN_REPEAT;
		}
	}
	// Player 4
	if (m_nRepeatPlayer[3] == nRepeatValue)
	{
		if (m_nRCP[3] == nMatchResult)
		{
			m_nRepeatPlayer[3] = WIN_REPEAT;
		}
	}
}

void get_Loser(int nRepeatValue, int nMatchResult)
{
	int nLoseRCP = -1;
	if (nMatchResult == ROCK)
	{
		nLoseRCP = SISSORS;
	}
	else if (nMatchResult == SISSORS)
	{
		nLoseRCP = PAPER;
	}
	else if (nMatchResult == PAPER)
	{
		nLoseRCP = ROCK;
	}

	// Player 1
	if (m_nRepeatPlayer[0] == nRepeatValue)
	{
		if (m_nRCP[0] == nLoseRCP)
		{
			m_nRepeatPlayer[0] = LOSE_REPEAT;
		}
	}
	// Player 2
	if (m_nRepeatPlayer[1] == nRepeatValue)
	{
		if (m_nRCP[1] == nLoseRCP)
		{
			m_nRepeatPlayer[1] = LOSE_REPEAT;
		}
	}
	// Player 3
	if (m_nRepeatPlayer[2] == nRepeatValue)
	{
		if (m_nRCP[2] == nLoseRCP)
		{
			m_nRepeatPlayer[2] = LOSE_REPEAT;
		}
	}
	// Player 4
	if (m_nRepeatPlayer[3] == nRepeatValue)
	{
		if (m_nRCP[3] == nLoseRCP)
		{
			m_nRepeatPlayer[3] = LOSE_REPEAT;
		}
	}

}

int get_MatchResult(int nRepeatValue)
{
	int nRet = -1;
	int nPlayerCount = 0;
	int nCount = 0;
	int nResult[3] = { 0,0,0 };

	if (m_nRepeatPlayer[0] == nRepeatValue)
	{
		nResult[m_nRCP[0]]++;
	}
	if (m_nRepeatPlayer[1] == nRepeatValue)
	{
		nResult[m_nRCP[1]]++;
	}
	if (m_nRepeatPlayer[2] == nRepeatValue)
	{
		nResult[m_nRCP[2]]++;
	}
	if (m_nRepeatPlayer[3] == nRepeatValue)
	{
		nResult[m_nRCP[3]]++;
	}

	if (nResult[ROCK] > 0) nCount++;
	if (nResult[SISSORS] > 0) nCount++;
	if (nResult[PAPER] > 0) nCount++;

	if (nCount == 2)
	{
		if (nResult[ROCK] > 0 && nResult[SISSORS] > 0)
		{
			nRet = ROCK;
		}
		else if (nResult[ROCK] > 0 && nResult[PAPER] > 0)
		{
			nRet = PAPER;
		}
		else if (nResult[PAPER] > 0 && nResult[SISSORS] > 0)
		{
			nRet = SISSORS;
		}
	}
	else if (nCount < 1 || nCount > 3)
	{
		nRet = -2;
	}
	return nRet;
}

void print_Lank()
{
	int nPlayer = 0;
	if (m_nResult[nPlayer] == 0) { m_nResult[nPlayer] = 4; }
	printf("%d �÷��̾� %s�� ��� : %d\n", 
		nPlayer + 1, m_chName[nPlayer], m_nResult[nPlayer]);
	nPlayer++;
	
	if (m_nResult[nPlayer] == 0) { m_nResult[nPlayer] = 4; }
	printf("%d �÷��̾� %s�� ��� : %d\n",
		nPlayer + 1, m_chName[nPlayer], m_nResult[nPlayer]);
	nPlayer++;

	if (m_nResult[nPlayer] == 0) { m_nResult[nPlayer] = 4; }
	printf("%d �÷��̾� %s�� ��� : %d\n",
		nPlayer + 1, m_chName[nPlayer], m_nResult[nPlayer]);
	nPlayer++;

	if (m_nResult[nPlayer] == 0) { m_nResult[nPlayer] = 4; }
	printf("%d �÷��̾� %s�� ��� : %d\n",
		nPlayer + 1, m_chName[nPlayer], m_nResult[nPlayer]);
	nPlayer;
}

void Player_NameSet(int nPlayer_Count)
{
	int nPlayer = 0;
	if (nPlayer < nPlayer_Count)
	{
		printf("���������� �������� �̸��� �����ּ���.\n");
		printf("%d�� ������ : ", nPlayer+1);
		scanf("%s", m_chName[nPlayer++]);
	}
	if (nPlayer < nPlayer_Count)
	{
		printf("���������� �������� �̸��� �����ּ���.\n");
		printf("%d�� ������ : ", nPlayer + 1);
		scanf("%s", m_chName[nPlayer++]);
	}
	if (nPlayer < nPlayer_Count)
	{
		printf("���������� �������� �̸��� �����ּ���.\n");
		printf("%d�� ������ : ", nPlayer + 1);
		scanf("%s", m_chName[nPlayer++]);
	}
	if (nPlayer < nPlayer_Count)
	{
		printf("���������� �������� �̸��� �����ּ���.\n");
		printf("%d�� ������ : ", nPlayer + 1);
		scanf("%s", m_chName[nPlayer++]);
	}
}



int get_Winner_Count()
{
	int nCnt = 0;
	if (m_nRepeatPlayer[0] == WIN_REPEAT) nCnt++;
	if (m_nRepeatPlayer[1] == WIN_REPEAT) nCnt++;
	if (m_nRepeatPlayer[2] == WIN_REPEAT) nCnt++;
	if (m_nRepeatPlayer[3] == WIN_REPEAT) nCnt++;

	return nCnt;
}

void set_Draw(int nRepeatValue)
{
	// Player 1
	if (m_nRepeatPlayer[0] == nRepeatValue)
	{
		m_nRepeatPlayer[0] = REPEAT;
	}
	// Player 2
	if (m_nRepeatPlayer[1] == nRepeatValue)
	{
		m_nRepeatPlayer[1] = REPEAT;
	}
	// Player 3
	if (m_nRepeatPlayer[2] == nRepeatValue)
	{
		m_nRepeatPlayer[2] = REPEAT;
	}
	// Player 4
	if (m_nRepeatPlayer[3] == nRepeatValue)
	{
		m_nRepeatPlayer[3] = REPEAT;
	}
}

int WINNER_Dupl_Check()
{
	int nCount = 0;
	if (m_nRepeatPlayer[0] == WIN_REPEAT) nCount++;
	if (m_nRepeatPlayer[1] == WIN_REPEAT) nCount++;
	if (m_nRepeatPlayer[2] == WIN_REPEAT) nCount++;
	if (m_nRepeatPlayer[3] == WIN_REPEAT) nCount++;

	return nCount;
}

int LOSER_Dupl_Check()
{
	int nCount = 0;
	if (m_nRepeatPlayer[0] == LOSE_REPEAT) nCount++;
	if (m_nRepeatPlayer[1] == LOSE_REPEAT) nCount++;
	if (m_nRepeatPlayer[2] == LOSE_REPEAT) nCount++;
	if (m_nRepeatPlayer[3] == LOSE_REPEAT) nCount++;

	return nCount;
}
