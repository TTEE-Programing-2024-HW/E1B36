#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <algorithm>
#include <vector>
#include<iostream>
#include<limits>
using namespace std;
struct student
{
	char name[50];
	int id;
	int math;
	int physics;
	int english;
	double average;
};
void clearScreen()
{
	system("cls");
}
bool password()
{//密碼 
	char password[]="2024";
	char a[5];
	for(int i=0;i<3;i++)
	{
		printf("請輸入密碼:");
		scanf("%s",&a);
		if(strcmp(a,password)==0)
		{
			return true; 
		}
		else
		{
			printf("密碼錯誤,重試");
		} 
	 } 
	 printf("連續輸入三次錯誤,程序結束");
	 return false;
}
void showMenu()
{
	printf("***********[Grade System]************");
	printf("|     a.Enter student grades        |");
	printf("|     b.Display student grades      |");
	printf("|     c.Search for student grades   |");
	printf("|     d.Grade ranking               |");
	printf("|     e.Exit system                 |");
	printf("|************************************");
 } 
