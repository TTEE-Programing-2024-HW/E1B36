#include <stdio.h>
#include <stdlib.h>
 int main(void)
 {
 	//1.�ӤH�Ϥ� �P�P 
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
	system("pause");//�Ȱ��{�� 
	system("cls");//�M���e�� 
	int a,i,n;
	printf("�п�J�K�X:");
	scanf("%d",&a);
	for(i=0;i<3;i++){
	if(a==2024)
	{
		printf("�w����{\n");	
		//2.�D���
		printf("--------------------\n");
		printf("| a.�e�X�����T���� |\n");
		printf("| b.��ܭ��k��     |\n");
		printf("| c.����           |\n");
		printf("--------------------\n");
	}
	else
	{
		printf("�Э��s��J:");
		scanf("%d",&a);
		i+=1;
	}
}
	//3.
		char world;
		int c;
		printf("�п�J�@��'a'~'n'���r��:");
		scanf("%c",&world);
		switch(world){
		case'a':
		case'A':
		system("cls");//�M���e�� 
		printf("�п�J�@��'a'~'n'���r��:");
		scanf("%c",&world);
		if (world>'a'||world<'n')
		{
			for(char i=world;i>='a';i--)//��i���� 
			{
				for(char j=i-'a';j>0;j--)//�T�w�O�����T���� 
				{
					printf(" ");//��� 
				}
				for(char j=i;j<=world;j++)//�qi�}�l���W 
				{
					printf("%c",j);
				}
				printf("\n");//����
			}
		}
		system("cls");//�M���e�� 
		//4.
		case'b':
		case'B':
		printf("�п�J1-9�����:");
		scanf("%c",&n);
		if(n>=1||n<=9)
		{
			for(int i=1;i<=n;i++)
			{
				 for(int j=1;j<=9;j++)
				 {
				 	printf("%d*%d=%d",i,j,i*j);
				 }
			}
		}
	}
		system("pause");
}