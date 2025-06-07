//
//#include"static.h"
//#include"string.h"
//
//void	C1();
//void	C2();
//void	C3();
//void	C4();
//void	C5();
//int		C5_1(char* chFruit, int nPrice1, int nPrice2, int nPrice3);
//
//void	C6(char* chName[], int nWinCount, int* nResult);
//void	Player_Scan(char* chName[], int nWinCount);
//int		RCP_Scan(char* chName, int nValue);
//int		RCP_WIN_Check(int* nCnt, int* nRCP, int nWinCount);
//int		RCP_WINNER(int* RCP, int nWin, int* nResult, int nPlayerCnt);
//int		RCP_WINNER_Check(int* RCP, int* nResult);
//
//int main(void)
//{
//	int nPlayer = 4;
//	char chName[4][50];
//	int nResult[4] = { 0,0,0,0 };
//	memset(chName, 0, sizeof(char) * 4 * 50);
//	Player_Scan(chName, nPlayer);
//	C6(chName, nPlayer, nResult);
//}
//
//void C6(char* chName[], int nWinCount, int* nResult)
//{
//	int nPlayer_Count = 0;
//
//	int nRCP[4] = { 0,0,0,0 };
//
//	int nRepeat = TRUE;
//	int nRound = 1;
//	int nWin = 0;
//
//	char chRCP[3][10] = { "����", "����", "��" };
//
//	int nCnt[3] = { 0, 0, 0 };
//
//	if (nPlayer_Count < nWinCount)
//	{
//		nRCP[nPlayer_Count] = RCP_Scan(chName[nPlayer_Count], nPlayer_Count+1);
//		if (nRCP[0] == -1) { return; }
//		nPlayer_Count++;
//	}
//	if (nPlayer_Count < nWinCount)
//	{
//		nRCP[nPlayer_Count] = RCP_Scan(chName[nPlayer_Count], nPlayer_Count + 1);
//		if (nRCP[0] == -1) { return; }
//		nPlayer_Count++;
//	}
//	if (nPlayer_Count < nWinCount)
//	{
//		nRCP[nPlayer_Count] = RCP_Scan(chName[nPlayer_Count], nPlayer_Count + 1);
//		if (nRCP[0] == -1) { return; }
//		nPlayer_Count++;
//	}
//	if (nPlayer_Count < nWinCount)
//	{
//		nRCP[nPlayer_Count] = RCP_Scan(chName[nPlayer_Count], nPlayer_Count + 1);
//		if (nRCP[0] == -1) { return; }
//		nPlayer_Count++;
//	}
//
//	nWin = RCP_WIN_Check(nCnt, nRCP, nWinCount);
//
//	if (nWin == -1)
//	{
//		printf("%d ���� ���º�\n", nRound++);
//		return;
//	}
//	else if (nWin == -2)
//	{
//		printf("�� ���� : %d, %d, %d, %d\n�������� ���� ���α׷� �����մϴ�.",
//			nRCP[0], nRCP[1], nRCP[2], nRCP[3]);
//		return;
//	}
//
//	int nWinCnt = 0;
//	if (RCP_WINNER(nRCP, nWin, nResult, nWinCount) == TRUE)
//	{
//		nWinCnt = RCP_WINNER_Check(nRCP, nResult);
//	}
//	nPlayer_Count = 0;
//
//	if (nResult[0] == TRUE) { printf("�÷��̾� %s %s�� �¸�!\n", chName[0], chRCP[nRCP[0]]); }
//	if (nResult[1] == TRUE) { printf("�÷��̾� %s %s�� �¸�!\n", chName[1], chRCP[nRCP[1]]); }
//	if (nResult[2] == TRUE) { printf("�÷��̾� %s %s�� �¸�!\n", chName[2], chRCP[nRCP[2]]); }
//	if (nResult[3] == TRUE) { printf("�÷��̾� %s %s�� �¸�!\n", chName[3], chRCP[nRCP[3]]); }
//
//	if (nWinCnt > ONE)
//	{
//		C6(chName, nWinCnt, nResult);
//	}
//}
//
//void Player_Scan(char* chName[], int nWinCount)
//{
//	int nPlayer = 0;
//	if (nPlayer < nWinCount)
//	{
//		printf("���������� �������� �̸��� �����ּ���.\n");
//		printf("%d�� ������ : ", nPlayer);
//		scanf("%s", chName[nPlayer++]);
//	}
//	if (nPlayer < nWinCount)
//	{
//		printf("���������� �������� �̸��� �����ּ���.\n");
//		printf("%d�� ������ : ", nPlayer);
//		scanf("%s", chName[nPlayer++]);
//	}
//	if (nPlayer < nWinCount)
//	{
//		printf("���������� �������� �̸��� �����ּ���.\n");
//		printf("%d�� ������ : ", nPlayer);
//		scanf("%s", chName[nPlayer++]);
//	}
//	if (nPlayer < nWinCount)
//	{
//		printf("���������� �������� �̸��� �����ּ���.\n");
//		printf("%d�� ������ : ", nPlayer);
//		scanf("%s", chName[nPlayer++]);
//	}
//}
//
//
//
//int	RCP_WINNER_Check(int* RCP, int* nResult)
//{
//	int nWinCnt = 0;
//	int nLoseCnt = 0;
//	if (nResult[0] == TRUE) 
//	{ 
//		nWinCnt++; 
//	}
//	if (nResult[1] == TRUE) 
//	{ 
//		nWinCnt++; 
//	}
//	if (nResult[2] == TRUE) 
//	{ 
//		nWinCnt++; 
//	}
//	if (nResult[3] == TRUE) 
//	{ 
//		nWinCnt++; 
//	}
//	return nWinCnt;
//}
//
//int	RCP_WINNER(int* RCP, int nWin, int* nResult, int nPlayerCnt)
//{
//	int nRet = TRUE;
//	int nPlayerCount = 0;
//
//	/******************************/
//
//	if (RCP[nPlayerCount] == nWin) { nResult[nPlayerCount++] = TRUE; }
//	else if (RCP[nPlayerCount] != nWin) { nResult[nPlayerCount++] = FALSE; }
//	else { printf("�¸����� ����\n"); nRet  = -1; return nRet; }
//	
//	if (nPlayerCnt == nPlayerCount) {return nRet;}
//	
//	/******************************/
//
//	if (RCP[nPlayerCount] == nWin) { nResult[nPlayerCount++] = TRUE; }
//	else if (RCP[nPlayerCount] != nWin) { nResult[nPlayerCount++] = FALSE; }
//	else { printf("�¸����� ����\n"); nRet = -1; return nRet;}
//
//	if (nPlayerCnt == nPlayerCount) { return nRet; }
//	
//	/******************************/
//	
//	if (RCP[nPlayerCount] == nWin) { nResult[nPlayerCount++] = TRUE; }
//	else if (RCP[nPlayerCount] != nWin) { nResult[nPlayerCount++] = FALSE; }
//	else { printf("�¸����� ����\n"); nRet = -1; return nRet;	}
//
//	if (nPlayerCnt == nPlayerCount) { return nRet; }
//	
//	/******************************/
//	
//	if (RCP[nPlayerCount] == nWin) { nResult[nPlayerCount++] = TRUE; }
//	else if (RCP[nPlayerCount] != nWin) { nResult[nPlayerCount++] = FALSE; }
//	else { printf("�¸����� ����\n"); nRet = -1; return nRet;	}
//
//	if (nPlayerCnt == nPlayerCount) { return nRet; }
//
//	return nRet;
//}
//
//int RCP_WIN_Check(int* nCnt, int* nRCP, int nWinCount)
//{
//	int Cnt = 0;
//	int nWin = 0;
//	int nPlayer = 0;
//
//	if (nPlayer < nWinCount)
//	{
//		if (nRCP[nPlayer] > -1) { nCnt[nRCP[nPlayer]]++; }
//		nPlayer++;
//	}
//	if (nPlayer < nWinCount)
//	{
//		if (nRCP[nPlayer] > -1) { nCnt[nRCP[nPlayer]]++; }
//		nPlayer++;
//	}
//	if (nPlayer < nWinCount)
//	{
//		if (nRCP[nPlayer] > -1) { nCnt[nRCP[nPlayer]]++; }
//		nPlayer++;
//	}
//	if (nPlayer < nWinCount)
//	{
//		if (nRCP[nPlayer] > -1) { nCnt[nRCP[nPlayer]]++; }
//		nPlayer++;
//	}
//	
//
//	if (nCnt[ROCK] > 0) { Cnt++; }
//	if (nCnt[SISSORS] > 0) { Cnt++; }
//	if (nCnt[PAPER] > 0) { Cnt++; }
//
//
//	if (Cnt == TWO)
//	{
//		if (nCnt[ROCK] > 0 && nCnt[SISSORS] > 0 )
//		{
//			nWin = ROCK;
//		}
//		else if (nCnt[ROCK] > 0 && nCnt[PAPER] > 0)
//		{
//			nWin = PAPER;
//		}
//		else if(nCnt[PAPER] > 0 && nCnt[SISSORS] > 0)
//		{
//			nWin = SISSORS;
//		}
//		else
//		{
//			nWin = -1;
//		}
//	}
//	else if(Cnt < ONE)
//	{
//		nWin = -2;
//	}
//	else
//	{
//		nWin = -1;
//	}
//
//	return nWin;
//}
//
//int RCP_Scan(char* chName, int nValue)
//{
//	int nRCP = 0;
//	int nRepeat = TRUE;
//	printf("%d�� ������ : ", nValue);
//	printf("1. ����		2.����		3. ��\n�� : ");
//	scanf("%d", &nRCP);
//	if (nRCP < 1 || nRCP > 3)
//	{
//		printf("�߸��� ���� �Է����� ���� ���α׷��� �����մϴ�.\n");
//		nRCP = -1;
//	}
//	return nRCP -1;
//}
//
//
//
//
//int C5_1(char* chFruit, int nPrice1, int nPrice2, int nPrice3)
//{
//	int nAnswer = 0;
//	int nPrice = 0;
//	printf("\n1. %d����ġ.\t2.%d����ġ\t3.%d����ġ : ", nPrice1, nPrice2, nPrice3);
//	scanf("%d", &nAnswer);
//	if (nAnswer == nPrice1)
//	{
//		nAnswer = ONE;
//		nPrice = nPrice1;
//	}
//	else if (nAnswer == nPrice2)
//	{
//		nAnswer = TWO;
//		nPrice = nPrice2;
//	}
//	else if (nAnswer == nPrice3)
//	{
//		nAnswer = THREE;
//		nPrice = nPrice3;
//	}
//
//	if (nAnswer > THREE || nAnswer < ONE)
//	{
//		printf("\n�߸� ���õǾ����ϴ�. ���α׷��� �����մϴ�.");
//		return -1;
//	}
//	else
//	{
//		if (nAnswer == ONE) nPrice = nPrice1;
//		if (nAnswer == TWO) nPrice = nPrice2;
//		if (nAnswer == THREE) nPrice = nPrice3;
//	}
//	
//	printf("\n%s %d����ġ�� �����ϼ̽��ϴ�.", chFruit, nPrice);
//	return nPrice;
//}
//void C5()
//{
//	
//	int nAnswer = 0;
//	int nFruit = 0;
//	int nCount = 0;
//
//	int nPrice = 0;
//
//	printf("1. ����.\t2.������\t3.���� \n���Ͻô� ������ ����ּ���. : ");
//	scanf("%d", &nAnswer);
//
//	if (nAnswer == ONE)
//	{
//		nPrice = C5_1("����", 1000, 2000, 3000);
//	}
//	else if (nAnswer == TWO)
//	{
//		nPrice = C5_1("������", 4000, 5000, 6000);
//	}
//	else if (nAnswer == THREE)
//	{
//		nPrice = C5_1("����", 10000, 20000, 30000);
//	}
//	else
//	{
//		printf("�߸� ���õǾ����ϴ�. ���α׷��� �����մϴ�.");
//		return;
//	}
//
//	printf("\n�� ���� �ֹ��Ͻðڽ��ϱ�? : ");
//	scanf("%d", &nCount);
//	printf("\n�� ������ %d�� �Դϴ�.", nPrice * nCount);
//}
//void C4()
//{
//	int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0;
//	
//	int nA = 0, nB = 0, nC = 0, nD = 0, nE = 0, nF = 0, nG = 0;
//
//	printf("A : ");
//	scanf("%d", &nA);
//	printf("B : ");
//	scanf("%d", &nB);
//	printf("C : ");
//	scanf("%d", &nC);
//	printf("D : ");
//	scanf("%d", &nD);
//	printf("E : ");
//	scanf("%d", &nE);
//	printf("F : ");
//	scanf("%d", &nF);
//	printf("G : ");
//	scanf("%d", &nG);
//
//	if (nA < 5000 && nA > 10000)
//	{
//		A = 1;
//	}
//	if (nB < 4000)
//	{
//		B = 1;
//	}
//
//	if (nB > nA)
//	{
//		if (nC != nB + nA)
//		{
//			C = 1;
//		}
//	}
//	else if (nB < nA)
//	{
//		if (nC != nB + nA - 300)
//		{
//			C = 1;
//		}
//	}
//
//	if (nD != (nA + nB + nC))
//	{
//		D = 1;
//	}
//
//	if (nE >= (nD / 3))
//	{
//		E = 1;
//	}
//	
//	if (nF <= (nA + nB + nC + nD + nE + 5000))
//	{
//		F = 1;
//	}
//	if (nG != (nF * 2))
//	{
//		G = 1;
//	}
//
//	int nTotal = A + B + C + D + E + F + G;
//	if (nTotal == 0)
//	{
//		printf("�����Դϴ�.");
//	}
//	else if (nTotal == 7)
//	{
//		printf("��� �߸��Ǿ����ϴ�.");
//	}
//	else
//	{
//		if (A == 1)
//		{
//			printf("a�� ");
//		}
//		if (B == 1)
//		{
//			printf("b�� ");
//		}
//		if (C == 1)
//		{
//			printf("c�� ");
//		}
//		if (D == 1)
//		{
//			printf("d�� ");
//		}
//		if (E == 1)
//		{
//			printf("e�� ");
//		}
//		if (F == 1)
//		{
//			printf("f�� ");
//		}
//		if (G == 1)
//		{
//			printf("g�� ");
//		}
//		printf("�߸� �Ǿ����ϴ�.");
//	}
//}
//void C3()
//{
//	
//	int nNum = 0, nNum2 = 0;
//	int nAnswer = 0;
//
//	printf("Number1 : ");
//	scanf("%d", &nNum);
//	printf("Number2 : ");
//	scanf("%d", &nNum2);
//
//	printf("%d + %d : ", nNum, nNum2);
//	scanf("%d", &nAnswer);
//
//	if (nAnswer == (nNum + nNum2))
//	{
//		printf("�����Դϴ�.\n");
//
//		printf("1. %d , 2. %d ��� ���ڰ� �� Ů�ϱ� : ", nNum, nNum2);
//		scanf("%d", &nAnswer);
//
//		if (nAnswer == 1)
//		{
//			nAnswer = nNum;
//		}
//		else if (nAnswer == 2)
//		{
//			nAnswer = nNum2;
//		}
//		
//		if (nAnswer == nNum && nNum > nNum2)
//		{
//			printf("�����Դϴ�.\n");
//		}
//		else if(nAnswer == nNum2 && nNum2 > nNum)
//		{
//			printf("�����Դϴ�.\n");
//		}
//		else
//		{
//			printf("�����Դϴ�.\n");
//		}
//	}
//	else
//	{
//		printf("�����Դϴ�.\n");
//	}
//
//}
//void C2()
//{
//	char chName1[100];
//	char chName2[100];
//	char chName3[100];
//
//	int nDistance = 0;
//
//	printf("�̸��� �Է����ּ��� : ");
//	scanf("%s", &chName1);
//
//	printf("������� �̸��� �Է����ּ��� : ");
//	scanf("%s", &chName2);
//
//	printf("������ ��� �̸��� �Է����ּ��� : ");
//	scanf("%s", &chName3);
//
//	
//	printf("�� ������ �Ÿ�(km) : ");
//	scanf("%d", &nDistance);
//
//
//	int nTotal = nDistance * 3;
//	int nAnswer = 0;
//
//
//
//	printf("%s , %s , %s ���� ���ʴ�� �湮�Ϸ��� �� km�� �ɾ�� �ϴ°�.\n �� : ", chName1, chName2, chName3);
//	scanf("%d", &nAnswer);
//
//	if (nAnswer >= nTotal)
//	{
//		printf("�����Դϴ�.\n");
//	}
//	else
//	{
//		printf("�����Դϴ�.\n");
//		printf("���� %d km �Դϴ�.", nTotal);
//	}
//
//}
//void C1()
//{
//
//	char chName[100];
//	char chName2[100];
//	int nTomato = 0;
//	int nPotato = 0;
//	int nJuice = 0;
//	int nDuk = 0;
//	int nGalic = 0;
//	int nOnion = 0;
//
//	int nPrice1 = 0;
//	int nPrice2 = 0;
//
//
//	printf("�̸��� �Է����ּ��� : ");
//	scanf("%s", &chName);
//
//	printf("���� ��� �̸��� �Է����ּ��� : ");
//	scanf("%s", &chName2);
//
//	printf("���� �Է��Ͻ� �̸��� %s �� %s �Դϴ�.\n", chName, chName2);
//
//
//	printf("�丶���� ������ �Է����ּ��� : ");
//	scanf("%d", &nTomato);
//
//	printf("������ ������ �Է����ּ��� : ");
//	scanf("%d", &nPotato);
//
//	printf("�ֽ��� ������ �Է����ּ��� : ");
//	scanf("%d", &nJuice);
//
//
//	printf("���� ������ �Է����ּ��� : ");
//	scanf("%d", &nDuk);
//
//	printf("������ ������ �Է����ּ��� : ");
//	scanf("%d", &nGalic);
//
//	printf("������ ������ �Է����ּ��� : ");
//	scanf("%d", &nOnion);
//
//
//	nPrice1 = nTomato + nPotato + nJuice;
//	nPrice2 = nDuk + nGalic + nOnion;
//	int nTotal = nPrice2 + nPrice1;
//	int nMore = nPrice2 - nPrice1;
//
//	//�� ���� ? ���� ���Խ��ϴ�.
//	//ö���� ? ���� �����ϰ�
//	//����� ? ���� �����Ͽ����ϴ�.
//	//����� ö������ ? ���� �� �����߽��ϴ�
//
//
//	printf("������ %d ���� ���Խ��ϴ�.\n", nTotal);
//
//	printf("%s�� %d ���� �����ϰ�.\n", chName, nPrice1);
//
//	printf("%s�� %d ���� �����Ͽ����ϴ�.\n", chName2, nPrice2);
//
//	printf("%s�� %s���� %d ���� �� �����߽��ϴ�.\n", chName, chName2, nMore);
//
//}