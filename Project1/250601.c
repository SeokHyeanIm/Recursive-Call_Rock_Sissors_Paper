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
//	char chRCP[3][10] = { "가위", "바위", "보" };
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
//		printf("%d 라운드 무승부\n", nRound++);
//		return;
//	}
//	else if (nWin == -2)
//	{
//		printf("값 오류 : %d, %d, %d, %d\n값오류로 인해 프로그램 종료합니다.",
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
//	if (nResult[0] == TRUE) { printf("플레이어 %s %s로 승리!\n", chName[0], chRCP[nRCP[0]]); }
//	if (nResult[1] == TRUE) { printf("플레이어 %s %s로 승리!\n", chName[1], chRCP[nRCP[1]]); }
//	if (nResult[2] == TRUE) { printf("플레이어 %s %s로 승리!\n", chName[2], chRCP[nRCP[2]]); }
//	if (nResult[3] == TRUE) { printf("플레이어 %s %s로 승리!\n", chName[3], chRCP[nRCP[3]]); }
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
//		printf("가위바위보 참가자의 이름을 적어주세요.\n");
//		printf("%d번 참가자 : ", nPlayer);
//		scanf("%s", chName[nPlayer++]);
//	}
//	if (nPlayer < nWinCount)
//	{
//		printf("가위바위보 참가자의 이름을 적어주세요.\n");
//		printf("%d번 참가자 : ", nPlayer);
//		scanf("%s", chName[nPlayer++]);
//	}
//	if (nPlayer < nWinCount)
//	{
//		printf("가위바위보 참가자의 이름을 적어주세요.\n");
//		printf("%d번 참가자 : ", nPlayer);
//		scanf("%s", chName[nPlayer++]);
//	}
//	if (nPlayer < nWinCount)
//	{
//		printf("가위바위보 참가자의 이름을 적어주세요.\n");
//		printf("%d번 참가자 : ", nPlayer);
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
//	else { printf("승리판정 오류\n"); nRet  = -1; return nRet; }
//	
//	if (nPlayerCnt == nPlayerCount) {return nRet;}
//	
//	/******************************/
//
//	if (RCP[nPlayerCount] == nWin) { nResult[nPlayerCount++] = TRUE; }
//	else if (RCP[nPlayerCount] != nWin) { nResult[nPlayerCount++] = FALSE; }
//	else { printf("승리판정 오류\n"); nRet = -1; return nRet;}
//
//	if (nPlayerCnt == nPlayerCount) { return nRet; }
//	
//	/******************************/
//	
//	if (RCP[nPlayerCount] == nWin) { nResult[nPlayerCount++] = TRUE; }
//	else if (RCP[nPlayerCount] != nWin) { nResult[nPlayerCount++] = FALSE; }
//	else { printf("승리판정 오류\n"); nRet = -1; return nRet;	}
//
//	if (nPlayerCnt == nPlayerCount) { return nRet; }
//	
//	/******************************/
//	
//	if (RCP[nPlayerCount] == nWin) { nResult[nPlayerCount++] = TRUE; }
//	else if (RCP[nPlayerCount] != nWin) { nResult[nPlayerCount++] = FALSE; }
//	else { printf("승리판정 오류\n"); nRet = -1; return nRet;	}
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
//	printf("%d번 참가자 : ", nValue);
//	printf("1. 가위		2.바위		3. 보\n답 : ");
//	scanf("%d", &nRCP);
//	if (nRCP < 1 || nRCP > 3)
//	{
//		printf("잘못된 숫자 입력으로 인해 프로그램을 종료합니다.\n");
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
//	printf("\n1. %d원어치.\t2.%d원어치\t3.%d원어치 : ", nPrice1, nPrice2, nPrice3);
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
//		printf("\n잘못 선택되었습니다. 프로그램을 종료합니다.");
//		return -1;
//	}
//	else
//	{
//		if (nAnswer == ONE) nPrice = nPrice1;
//		if (nAnswer == TWO) nPrice = nPrice2;
//		if (nAnswer == THREE) nPrice = nPrice3;
//	}
//	
//	printf("\n%s %d원어치를 선택하셨습니다.", chFruit, nPrice);
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
//	printf("1. 감자.\t2.옥수수\t3.수박 \n원하시는 물건을 골라주세요. : ");
//	scanf("%d", &nAnswer);
//
//	if (nAnswer == ONE)
//	{
//		nPrice = C5_1("감자", 1000, 2000, 3000);
//	}
//	else if (nAnswer == TWO)
//	{
//		nPrice = C5_1("옥수수", 4000, 5000, 6000);
//	}
//	else if (nAnswer == THREE)
//	{
//		nPrice = C5_1("수박", 10000, 20000, 30000);
//	}
//	else
//	{
//		printf("잘못 선택되었습니다. 프로그램을 종료합니다.");
//		return;
//	}
//
//	printf("\n몇 개를 주문하시겠습니까? : ");
//	scanf("%d", &nCount);
//	printf("\n총 가격은 %d원 입니다.", nPrice * nCount);
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
//		printf("정답입니다.");
//	}
//	else if (nTotal == 7)
//	{
//		printf("모두 잘못되었습니다.");
//	}
//	else
//	{
//		if (A == 1)
//		{
//			printf("a가 ");
//		}
//		if (B == 1)
//		{
//			printf("b가 ");
//		}
//		if (C == 1)
//		{
//			printf("c가 ");
//		}
//		if (D == 1)
//		{
//			printf("d가 ");
//		}
//		if (E == 1)
//		{
//			printf("e가 ");
//		}
//		if (F == 1)
//		{
//			printf("f가 ");
//		}
//		if (G == 1)
//		{
//			printf("g가 ");
//		}
//		printf("잘못 되었습니다.");
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
//		printf("정답입니다.\n");
//
//		printf("1. %d , 2. %d 어느 숫자가 더 큽니까 : ", nNum, nNum2);
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
//			printf("정답입니다.\n");
//		}
//		else if(nAnswer == nNum2 && nNum2 > nNum)
//		{
//			printf("정답입니다.\n");
//		}
//		else
//		{
//			printf("오답입니다.\n");
//		}
//	}
//	else
//	{
//		printf("오답입니다.\n");
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
//	printf("이름을 입력해주세요 : ");
//	scanf("%s", &chName1);
//
//	printf("다음사람 이름을 입력해주세요 : ");
//	scanf("%s", &chName2);
//
//	printf("마지막 사람 이름을 입력해주세요 : ");
//	scanf("%s", &chName3);
//
//	
//	printf("집 사이의 거리(km) : ");
//	scanf("%d", &nDistance);
//
//
//	int nTotal = nDistance * 3;
//	int nAnswer = 0;
//
//
//
//	printf("%s , %s , %s 집을 차례대로 방문하려면 몇 km를 걸어가야 하는가.\n 답 : ", chName1, chName2, chName3);
//	scanf("%d", &nAnswer);
//
//	if (nAnswer >= nTotal)
//	{
//		printf("정답입니다.\n");
//	}
//	else
//	{
//		printf("오답입니다.\n");
//		printf("답은 %d km 입니다.", nTotal);
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
//	printf("이름을 입력해주세요 : ");
//	scanf("%s", &chName);
//
//	printf("다음 사람 이름을 입력해주세요 : ");
//	scanf("%s", &chName2);
//
//	printf("현재 입력하신 이름은 %s 와 %s 입니다.\n", chName, chName2);
//
//
//	printf("토마토의 가격을 입력해주세요 : ");
//	scanf("%d", &nTomato);
//
//	printf("감자의 가격을 입력해주세요 : ");
//	scanf("%d", &nPotato);
//
//	printf("주스의 가격을 입력해주세요 : ");
//	scanf("%d", &nJuice);
//
//
//	printf("떡의 가격을 입력해주세요 : ");
//	scanf("%d", &nDuk);
//
//	printf("마늘의 가격을 입력해주세요 : ");
//	scanf("%d", &nGalic);
//
//	printf("양파의 가격을 입력해주세요 : ");
//	scanf("%d", &nOnion);
//
//
//	nPrice1 = nTomato + nPotato + nJuice;
//	nPrice2 = nDuk + nGalic + nOnion;
//	int nTotal = nPrice2 + nPrice1;
//	int nMore = nPrice2 - nPrice1;
//
//	//총 합은 ? 원이 나왔습니다.
//	//철수는 ? 원을 지불하고
//	//영희는 ? 원을 지불하였습니다.
//	//영희는 철수보다 ? 원을 더 지불했습니다
//
//
//	printf("총합은 %d 원이 나왔습니다.\n", nTotal);
//
//	printf("%s는 %d 원을 지불하고.\n", chName, nPrice1);
//
//	printf("%s는 %d 원을 지불하였습니다.\n", chName2, nPrice2);
//
//	printf("%s는 %s보다 %d 원을 더 지불했습니다.\n", chName, chName2, nMore);
//
//}