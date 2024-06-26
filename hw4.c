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
void enterGrades(vector<student>&students)
 {
 	int n;
 	printf("請輸入學生數量:");
 	while(!(scanf("%d",&n)==1&&n>=5&&n<=10))
 	{
 		printf("數量無效，請輸入5~10之間的整數");
 		while(getchar()!='\n');
	 }
	 for(int i=0;i<n;i++)
	 {
	 	printf("輸入學生%d的資訊:\n",i+1);
	 	printf("姓名:");
	 	scanf("%s",&student.name);
	 	printf("學號(6位):");
		while(!(scanf("%d",&student.id)==1&&student.id>=100000&&student.id<=999999))
		{
			printf("無效學號,請重新輸入");
			while (getchar()!='\n');
		}
		printf("數學成績(0~100):");
		while(!(scanf("%d",&student.math)==1&&student.math>=0&&student.math<=100))
		{
			printf("成績無效,請輸入0~100之間的整數:");
			while (getchar()!='\n');
		 } 
		printf("物理成績(0~100):");
		while(!(scanf("%d",&student.physics)==1&&student.physics>=0&&student.physics<=100))
		{
			printf("成績無效，請輸入0~100之間的整數:");
			while(getchar()!='\n');
		}
		printf("英文成績(0~100):");
		while(!(scanf("%d",&student.english)==1&&student.english>=0&&student.english<=100))
		{
			printf("成績無效，請輸入0~100之間的整數");
			while(getchar()!='\n');
		}
		student.average=(student.math+student.physics+student.english)/3.0;
		student.push_back(student);
	 }
	 clearScreen();
	 printf("學生成績登入完成\n");
 }
void displayGrades(const vector<student>&student)
{
	printf("所有學生成績如下:\n");
	printf("%-s %-s %-s %-s %-s %-s","姓名","學號","數學","物理","英文","平均");
	for(const auto&student:students)
	{
		printf("%-s %-d %-d %-d %-d %-.1f",student.name,student.id,student.math,student.physics,student.english,student.average);
	}
	printf("按任意鍵返回菜單");
	while(getchar()!='\n');
	getchar();
	clearScreen;
}
 void searchGrades(const vector<student>&student)
 {
 	char name[50];
 	printf("請輸入要搜索的學生姓名:");
 	scanf("%s",&name);
 	bool found=false;
 	for(const auto&student:students)
 	{
 		if(strcmp(student.name,name)==0)
 		{
 			printf("姓名:%s",student.name);
 			printf("學號:%d",student.id);
 			printf("數學成績:%d",student.math);
 			printf("物理成績:%d",student.physics);
 			printf("英文成績:%d",student.english);
 			printf("平均成績:%d",student.average);
 			found=true;
 			break;
		 }
	 }
	 if(!found)
	 {
	 	printf("未找到該學生資訊");
	 }
	 printf("按任意鍵返回菜單");
	 while (getchar()!='\n');
	 getchar();
	 clearScreen();
 }
 void gradeRanking(vector<student>&student)
 {
 	sort(student.begin(),student.end(),[](const Studen&a,const Student&b))
 	{
 		return a.average>b.average;
	 };
	 printf("按照平均成績排序的結果如下:\n");
	 printf("%-s %-s %-s","姓名","學號","平均成績");
	 for(const auto&student:student)
	 {
	 	printf("%-s %-d %0.1f\n",student.name,student.id,student.average);
	 }
	 printf("按任意鍵返回菜單");
	 while(getchar()!='\n');
	 getchar();
	 clearScreen();
 }
 bool exitSystem()
 {
 	char q;
 	printf("確定離開?(Y/N):");
 	scanf("%d",&q);
 	return(q=='Y'||q=='y');
 }
 int main()
 {
	for(int i=0;i<21;i++)
	{
		for (int j=0;j<21;j++)
		{
			printf("*");
		 } 
		 printf("\n");
	}
 	if(!password())
 	{
 		return 0;
	 }
vector<student>students;
	 char h;
	 do
	 {
	 	showMenu();
	 	printf("請選擇選項輸入:");
		scanf("%c",&h); 
		switch(h)
		{
			case'a':
			case'A':
				claerScreen();
				enterGrades(students);
				break;
			case'b':
			case'B':
				clearScreen();
				dispalyGrades(students);
				break;
			case'c':
			case'C':
				clearScreen();
				searchGrades(students);
				break;
			case'd':
			case'D':
				clearScreen();
				gradeRanking(students);
				break;
			case'e':
			case'E':
				clearscreen();
				if(exitSystem())
				return 0;
			default:
			printf("無效選項"); 
		}
	 }
	 while(ture);
	 return 0;
 }
