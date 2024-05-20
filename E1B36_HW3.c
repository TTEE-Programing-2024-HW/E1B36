#include <stdio.h>
#include <stdlib.h.>
#include <time.h>
#include <conio.h>
#idefine ROWS 9
#idefine COLS 9
void clearScreen()
	{
		system("cls");//清除螢幕
		getch();//按下任意鍵
	}
void gisplaymenu()
{
	\\主選單
		printf("-----[Booking System]-----\n");
		printf("| a.Available seats      |\n");
		printf("| b.Arrange for you      |\n");
		printf("| c.Choose by yourself   |\n");
		printf("| d.Exit                 |\n");
 		printf("--------------------------\n");
	}
void generateSeats(char seats[ROWS][COLS])\\隨機選十個標示已預定
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			seats[i][j]='-';
		}
	 } 
	 for(int s=0;s<10;s++)
	 {
	 	int row=rand()%ROWS;
	 	int col=rand()%COLS;
	 	if(seats[row][col]=='-')
			seats[row][col]='*';
		else
			k--;
}
void displaySeats(char seats[ROWS][COLS])
{
	printf("123456789\n");
	for(int i=ROW-1;i>=0;i--)
	{
		printf(%d,i+1);
	for(int j=0;j<COLS;j++)
	{
		printf("%c",seats[i][j]);
	}
	printf("\n");
	}
	printf("按任意鍵返回")
	getch();
}
void arrangSeatsforuser(char seats[ROWS][COLS],int nSeats)
{
	int found=0
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			if(seats[i][j]=='-'&&j+nSeats<=COLS)
			{
				int available=1;
			for(int s=0;s<nSeats;s++)
			{
				if(seats[i][j+s]!='-')
				{
					available=0;
					break;
				}
			}
			if(available)
			{
				for(int s=0;s<nSeats;s++)
				{
					seats[i][j+k]!='@';	
				}				
				found=1;
				break;
			}	
		}
	}
	if(found) break;
}
if(!found&&nSeats==4)
{
	for(int i=0;i<ROWS-1;i++)
	{
		for(int j=0j<COLS;j++)
		{
			if(seats[i][j]=='-'&&seats[i+1][j]=='-')
			{
				seats[i][j]='@';
				seats[i+1][j]='@';
				if(j+1<COLS&&seats[i][j+1]=='-'&&seats[i+1][j]=='-')
				{
					seats[i][j+1]='@';
					seats[i+1]{j}='-';
					found=1
					break;
				}
				else
				{
					seats[i][j]='-';
					seats[i+1][j]='-';
				}
			}
		}
		if(found) break;
	}
}
displaySeats(seats);
char response;
printf("對安排滿意嗎?(Y/N):");
scanf("%c",&response);
if(response=='Y'){
	for(int i=0;i<COLS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			if(seats[i][j]=="@")
			{
				seats[i][j]='*';
			}
		}
	}
}
else
{
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			if(seats[i][j]=='@')
			{
				seats[i][j]='-';
			}
		}
	}
}
}
void chooseSeatsbyuser(char seats[ROWS][COLS])
{
	int row,col;
	char d;
	printf("輸入座位位置(ex.1-1,2-2)輸入q停止\n");
	while(1){
		printf("輸入座位位置:");
		if(scanf("%d-%d",&row,&col)!=2)
		break;
		if(row<1||ros>ROWS||col<1||col>COLS||seats[row-1][col-1]!='-')
		{
			printf("失敗,請再試一次");
			while((d=getchar())!='\n'&&d!=EOE);
			continue; 
		}
		seats[row-1][col-1]='@';
	}
	displaySeats(seats);
	printf("按任意鍵確認選擇");
	getch();
	for(int i=0;i<ROWS;i++)
	{
		for(int j=0;j<COLS;j++)
		{
			if(seats[i][j]=='@')
			{
				seats[i][j]='*';
			}
		}
	}
}
int main (void){
//1.個人圖片 星星 
	puts(".............................................:::....................................................");
	puts(".............................................::::::::...............................................");
	puts("............................................::::..::::..............................................");
	puts("...........................................:::  ....:::.............................................");
	puts("..........................................::. ..:.:.::::.      .....................................");
	puts("............................. ......::::::^: .:::::::::::..........  ...............................");
	puts(".............................:::^^:::::::::..::::::::::::::::::::^^:................................");
	puts("............................^^^^:....::::::::::::::::::::::::.:::^^~~:..............................");
	puts("............................:^^^::::::::::::::::::::::::::::::::^~~^~:..............................");
	puts(".............................:^^^::::::::::::::::::::::::::^:::^~~~~:...............................");
	puts("............................. .:^^^^:::::::::::::::::::::::^^^~~~^:. ...............................");
	puts("............................... .:^^^^^::::::::::::::::^^~~!!~~^:. .................................");
	puts("................................. ..~~^:^^^^^^^^^^^^^^^~~~~!~^.. ...................................");
	puts(".................................. :~~:^^^^^^^^^^^^^^^^^^^~~^^......................................");
	puts("...................................~~^:^~~^^^^^^^^^^^^^^~^^~~~: ....................................");
	puts("................................. :~~^^~~~~^^^~~!~~^^^^^^^^~!~^.....................................");
	puts("................................. ^!~~^~~~~~~!!~~~~~~~~~^^~~!~~.....................................");
	puts("................................. :!~~!!!!!!~^:...:^~~!!!!!!~!~.....................................");
	puts("...................................^~~~~~^:..  ...  ..:^~~~!!~:.....................................");
	puts("....................................................................................................");
	system("pause");//暫停程序 
	system("cls");//清除畫面
  	int a,i,n;
	for(i=0;i<=3;i++)
	{
		printf("請輸入密碼:");
		scanf("%d",&a);
		if(a==2024)
		{	
			//2.主選單
			printf("-----[Booking System]-----\n");
			printf("| a.Available seats      |\n");
			printf("| b.Arrange for you      |\n");
			printf("| c.Choose by yourself   |\n");
			printf("| d.Exit                 |\n");
 			printf("--------------------------\n");
			break;
		}
		else
			printf("請重新輸入\n");
	}
char ch;
	switch(ch){
		case 'a':
		system("cls");
		displaySeats(seats);
		break;
		case 'b':
			system("cls");
			int nSeats;
			printf("需要幾個位置(1~4)");
			scanf("%d",&nSeats);
			if(nSeats<1||nSeats>4)
			{
				printf("無效");
		 	} 
		 	else
		 	{
		 		arrangeSeatsforuser(seats,nSeats);
		 	}
		 	break;
		case 'c':
			system("cls")
			chooseSeatsbyuser(seats);
			break;
		case 'd'://輸入d
			char confirm;
			printf("繼續?(Y/N):");
			scanf("%c",&confirm);//輸入Y或N
			if(confirm=='N')//如果輸入N
			{
				printf("退出中");//印出退出中
				return 0;
			}
		default://其他
			printf("再試一次");
			break;
	return 0;
	
}
//這次的作業很難，大多是查找資料拼拼湊湊，一開始熬無頭緒想說先寫第一題，但應該先把後面的題目布置好才能從一開始的題目開始，很努力的想辦法寫了這次作業，這代表寫程式有待加強，會多利用暑假時間複習。
