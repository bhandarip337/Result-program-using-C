#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>

int e,n,m,s,o,totx,per;
float pp;
char nme[20],roll[20],sec[10],cls[10],*rem,*pem;
void main()
{
		clrscr();
		textcolor(GREEN);
		gotoxy(15,1);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
		gotoxy(15,2);cprintf("\xB1 ######  #######  #####  #     # #     ####### \xB1\n");
	        gotoxy(15,3);cprintf("\xB1 #     # #       #     # #     # #        #    \xB1\n");
	        gotoxy(15,4);cprintf("\xB1 #     # #       #       #     # #        #    \xB1\n");
	        gotoxy(15,5);cprintf("\xB1 ######  #####    #####  #     # #        #    \xB1\n");
	        gotoxy(15,6);cprintf("\xB1 #  #    #             # #     # #        #    \xB1\n");
	        gotoxy(15,7);cprintf("\xB1 #   #   #       #     # #     # #        #    \xB1\n");
	        gotoxy(15,8);cprintf("\xB1 #    #  #######  #####   #####  #######  #    \xB1\n");
		gotoxy(15,9);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 CALCULATOR \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
		textcolor(RED);
		gotoxy(25,12);cprintf("Enter any key to Continue.... ");
		getch();
		clrscr();
		textcolor(RED);
		cprintf("Student Name:");
		gets(nme);
		cprintf("Roll Number:");
		gets(roll);
		cprintf("Section:");
		gets(sec);
		cprintf("Class:");
		gets(cls);
		aa:
		cprintf("\nMarks In English:");
		cscanf("%d",&e);
		if(e<0||e>100)
		goto aa;
		bb:
		cprintf("\nMarks In Nepali:");
		cscanf("%d",&n);
		if(n<0||n>100)
		goto bb;
		cc:
		cprintf("\nMarks In Maths:");
		cscanf("%d",&m);
		if(m<0||m>100)
		goto cc;
		ee:
		cprintf("\nMarks In Science:");
		cscanf("%d",&s);
		if(s<0||s>100)
		goto ee;
		ff:
		cprintf("\nMarks In Opt.Maths:");
		cscanf("%d",&o);
		if(o<0||o>100)
		goto ff;
		totx=e+n+m+s+o;
		per=totx/5;
		if((e>=32 && n>=32 && m>=32 && s>=32 && o>=32) )
		{
			if(per>=60)
			{
			     rem="First Division";
			     pem="Pass";
			}
			else if(per>=45&&per<59)
			{
			     rem="Second Division";
			     pem="Pass";
			}
			else
			{
			     rem="Third Division";
			     pem="Pass";
			}
		}
	        else if((e<32 || n<32 || m<32 || s<32 || o<32) )
		{
		    rem="Fail";
		    pem="Fail";
		}
		else
		{
		    rem="Null";
		    pem="Null";
		}
		clrscr();
		textcolor(LIGHTRED);
	        gotoxy(20,14);cprintf("LOADING...");
		gotoxy(20,15);cprintf("\xB1\xB1\xB1\xB1 (10%)");
		delay(1000);
		clrscr();
		gotoxy(20,14);cprintf("LOADING...");
		gotoxy(20,15);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 (20%)");
		delay(1500);
		clrscr();
		gotoxy(20,14);cprintf("PLEASE WAIT...");
		gotoxy(20,15);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 (35%)");
		delay(500);
		clrscr();
		gotoxy(20,14);cprintf("PLEASE WAIT...");
		gotoxy(20,15);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 (50%)");
		delay(700);
		clrscr();
		gotoxy(20,14);cprintf("OPENING...");
		gotoxy(20,15);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 (90%)");
		delay(700);
		clrscr();
		gotoxy(20,14);cprintf("OPENING...");
		gotoxy(20,15);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 (100%)");
		delay(1000);
		clrscr();
		textcolor(YELLOW);
		gotoxy(22,1);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		gotoxy(22,2);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1XYZ Higher Secondary School\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		gotoxy(22,3);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Birtamode,Jhapa \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		gotoxy(22,4);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 R E P O R T  C A R D \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		gotoxy(22,5);cprintf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		textcolor(RED);
		gotoxy(1,7);cprintf(" Student's Name: %s",nme);
		gotoxy(1,8);cprintf(" Roll Numbers: %s    Class: %s(%s)",roll,cls,sec);
		textcolor(GREEN);
		gotoxy(1,9);cprintf("\xD5==============================================================================\xB8");
		gotoxy(1,10);cprintf("\xB3SUBJECTS          FULL MARKS       PASS MARKS                 MARKS OBTAINED  \xB3");
		gotoxy(1,11);cprintf("\xC3------------------------------------------------------------------------------\xB4");
		gotoxy(1,12);cprintf("\xB3 English");
		gotoxy(1,13);cprintf("\xB3 Nepali");
		gotoxy(1,14);cprintf("\xB3 Maths");
		gotoxy(1,15);cprintf("\xB3 Science");
		gotoxy(1,16);cprintf("\xB3 Opt.Maths");
		textcolor(BLUE);
		gotoxy(24,12);cprintf("100             35                          %d",e);
		gotoxy(24,13);cprintf("100             35                          %d",n);
		gotoxy(24,14);cprintf("100             35                          %d",m);
		gotoxy(24,15);cprintf("100             35                          %d",s);
		gotoxy(24,16);cprintf("100             35                          %d",o);
		textcolor(GREEN);
		gotoxy(80,12);cprintf("\xB3");
		gotoxy(80,13);cprintf("\xB3");
		gotoxy(80,14);cprintf("\xB3");
		gotoxy(80,15);cprintf("\xB3");
		gotoxy(80,16);cprintf("\xB3");
		gotoxy(1,17);cprintf("\xB3______________________________________________________________________________\xB3");
		gotoxy(1,18);cprintf("\xB3Total Marks:%d",totx);
		gotoxy(1,19);cprintf("\xB3Percentage:%d%",per);
		gotoxy(80,18);cprintf("\xB3");
		gotoxy(80,19);cprintf("\xB3");
		gotoxy(1,20);cprintf("\xD4==============================================================================\xBE");
		textcolor(RED);
		gotoxy(1,21);cprintf(" Result: %s\n",pem);
		gotoxy(1,22);cprintf(" Division: %s",rem);
		getch();
		getch();
}
