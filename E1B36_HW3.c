#include <stdio.h>
#include <stdlib.h.>
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
	switch
	case'a':
	puts("\123456789");
	puts("9----*----");
	puts("8--*------");
}