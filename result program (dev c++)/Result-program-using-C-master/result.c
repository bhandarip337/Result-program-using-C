#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "custom.h"

int main()
{
        float e,n,m,s,o,totx;
        float per ;
        char nme[20],roll[20],sec[10],cls[10];
        char *rem,*pem;
		clrscr();
		gotoxy(15,1);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
		gotoxy(15,2);printf("\xB1 ######  #######  #####  #     # #     ####### \xB1\n");
	    gotoxy(15,3);printf("\xB1 #     # #       #     # #     # #        #    \xB1\n");
	    gotoxy(15,4);printf("\xB1 #     # #       #       #     # #        #    \xB1\n");
	    gotoxy(15,5);printf("\xB1 ######  #####    #####  #     # #        #    \xB1\n");
	    gotoxy(15,6);printf("\xB1 #  #    #             # #     # #        #    \xB1\n");
	    gotoxy(15,7);printf("\xB1 #   #   #       #     # #     # #        #    \xB1\n");
	    gotoxy(15,8);printf("\xB1 #    #  #######  #####   #####  #######  #    \xB1\n");
		gotoxy(15,9);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 CALCULATOR \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");

		gotoxy(25,12);printf("Enter any key to Continue.... ");
		getch();
		clrscr();
		printf("Student Name:");
		gets(nme);
		printf("Roll Number:");
		gets(roll);
		printf("Section:");
		gets(sec);
		printf("Class:");
		gets(cls);
		aa:
		printf("\nMarks In English:");
		scanf("%f",&e);
		if(e<0||e>100)
		goto aa;
		bb:
		printf("\nMarks In Nepali:");
		scanf("%f",&n);
		if(n<0||n>100)
		goto bb;
		cc:
		printf("\nMarks In Maths:");
		scanf("%f",&m);
		if(m<0||m>100)
		goto cc;
		ee:
		printf("\nMarks In Science:");
		scanf("%f",&s);
		if(s<0||s>100)
		goto ee;
		ff:
		printf("\nMarks In Opt.Maths:");
		scanf("%f",&o);
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
		gotoxy(22,1);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		gotoxy(22,2);printf("\xB1\xB1\xB1\xB1\xB1\xB1XYZ Higher Secondary School\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		gotoxy(22,3);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 Birtamode,Jhapa \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		gotoxy(22,4);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 R E P O R T  C A R D \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
		gotoxy(22,5);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
	
		gotoxy(1,7);printf(" Student's Name: %s",nme);
		gotoxy(1,8);printf(" Roll Numbers: %s    Class: %s(%s)",roll,cls,sec);
		gotoxy(1,9);printf("\xD5==============================================================================\xB8");
		gotoxy(1,10);printf("\xB3SUBJECTS          FULL MARKS       PASS MARKS                 MARKS OBTAINED  \xB3");
		gotoxy(1,11);printf("\xC3------------------------------------------------------------------------------\xB4");
		gotoxy(1,12);printf("\xB3 English");
		gotoxy(1,13);printf("\xB3 Nepali");
		gotoxy(1,14);printf("\xB3 Maths");
		gotoxy(1,15);printf("\xB3 Science");
		gotoxy(1,16);printf("\xB3 Opt.Maths");
		gotoxy(24,12);printf("100             35                          %.1f",e);
		gotoxy(24,13);printf("100             35                          %.1f",n);
		gotoxy(24,14);printf("100             35                          %.1f",m);
		gotoxy(24,15);printf("100             35                          %.1f",s);
		gotoxy(24,16);printf("100             35                          %.1f",o);
		gotoxy(80,12);printf("\xB3");
		gotoxy(80,13);printf("\xB3");
		gotoxy(80,14);printf("\xB3");
		gotoxy(80,15);printf("\xB3");
		gotoxy(80,16);printf("\xB3");
		gotoxy(1,17);printf("\xB3______________________________________________________________________________\xB3");
		gotoxy(1,18);printf("\xB3Total Marks:%.1f",totx);
		gotoxy(1,19);printf("\xB3Percentage:%.2f%%",per);
		gotoxy(80,18);printf("\xB3");
		gotoxy(80,19);printf("\xB3");
		gotoxy(1,20);printf("\xD4==============================================================================\xBE");
		gotoxy(1,21);printf(" Result: %s\n",pem);
		gotoxy(1,22);printf(" Division: %s",rem);
		getch();
		return (0);
}
