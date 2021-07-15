#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,x,y,i,j,q,p1,p2,pl1,pl2;
int b1,b2,b3,b4,b5,b6,b7,b8,b9;
char a[20],b[20];
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
//Workspace
line(500,200,620,200);
line(500,240,620,240);
line(540,160,540,280);
line(580,160,580,280);
//Name Input
printf("Enter the name of player 1 : ");
scanf("%s",&a);
printf("Enter the name of player 2 : ");
scanf("%s",&b);
//Player 1
for(i=1;i<=5;i++)
{
printf(a);
printf(" enter your choice\n");
scanf("%d",&p1);
if(p1==1&&b1!=pl1&&b1!=pl2)
{
b1=pl1;
setcolor(RED);
line(508,168,532,192);
line(508,192,532,168);
}
else if(p1==2&&b2!=pl1&&b2!=pl2)
{
b2=pl1;
x=40;
y=0;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==3&&b3!=pl1&&b3!=pl2)
{
b3=pl1;
x=80;
y=0;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==4&&b4!=pl1&&b4!=pl2)
{
b4=pl1;
x=0;
y=40;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==5&&b5!=pl1&&b5!=pl2)
{
b5=pl1;
x=40;
y=40;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==6&&b6!=pl1&&b6!=pl2)
{
b6=pl1;
x=80;
y=40;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==7&&b7!=pl1&&b7!=pl2)
{
b7=pl1;
x=0;
y=80;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==8&&b8!=pl1&&b8!=pl2)
{
b8=pl1;
x=40;
y=80;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==9&&b9!=pl1&&b9!=pl2)
{
b9=pl1;
x=80;
y=80;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else
{
printf("You have entered wrong choice.\n");
printf("Enter the correct choice.\n");
scanf("%d",&p1);
//Re input when entered wrong input
if(p1==1&&b1!=pl1&&b1!=pl2)
{
b1=pl1;
setcolor(RED);
line(508,168,532,192);
line(508,192,532,168);
}
else if(p1==2&&b2!=pl1&&b2!=pl2)
{
b2=pl1;
x=40;
y=0;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==3&&b3!=pl1&&b3!=pl2)
{
b3=pl1;
x=80;
y=0;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==4&&b4!=pl1&&b4!=pl2)
{
b4=pl1;
x=0;
y=40;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==5&&b5!=pl1&&b5!=pl2)
{
b5=pl1;
x=40;
y=40;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==6&&b6!=pl1&&b6!=pl2)
{
b6=pl1;
x=80;
y=40;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==7&&b7!=pl1&&b7!=pl2)
{
b7=pl1;
x=0;
y=80;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==8&&b8!=pl1&&b8!=pl2)
{
b8=pl1;
x=40;
y=80;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else if(p1==9&&b9!=pl1&&b9!=pl2)
{
b9=pl1;
x=80;
y=80;
setcolor(RED);
line(508+x,168+y,532+x,192+y);
line(508+x,192+y,532+x,168+y);
}
else
{
printf("You have entered wrong choice again.\n");
}
}
//Checking for tic tac toe pattern
if(b1==pl1&&b2==pl1&&b3==pl1)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(500+q,180,YELLOW);
delay(15);
}
printf(a);
printf(" won the game !\n");
}
if(b4==pl1&&b5==pl1&&b6==pl1)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(500+q,220,YELLOW);
delay(15);
}
printf(a);
printf(" won the game !\n");
}
if(b7==pl1&&b8==pl1&&b9==pl1)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(500+q,260,YELLOW);
delay(15);
}
printf(a);
printf(" won the game !\n");
}
if(b1==pl1&&b4==pl1&&b7==pl1)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(520,160+q,YELLOW);
delay(15);
}
printf(a);
printf(" won the game !\n");
}
if(b2==pl1&&b5==pl1&&b8==pl1)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(560,160+q,YELLOW);
delay(15);
}
printf(a);
printf(" won the game !\n");
}
if(b3==pl1&&b6==pl1&&b9==pl1)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(600,160+q,YELLOW);
delay(15);
}
printf(a);
printf(" won the game !\n");
}
if(b1==pl1&&b5==pl1&&b9==pl1)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(500+q,160+q,YELLOW);
delay(15);
}
printf(a);
printf(" won the game !\n");
}
if(b3==pl1&&b5==pl1&&b7==pl1)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(620-q,160+q,YELLOW);
delay(15);
}
printf(a);
printf(" won the game !\n");
}
//Player 2
printf(b);
printf(" enter your choice\n");
scanf("%d",&p2);
if(i>>0&&i<<6)
{
if(p2==1&&b1!=pl1&&b1!=pl2)
{
b1=pl2;
setcolor(GREEN);
circle(520,180,10);
}
else if(p2==2&&b2!=pl1&&b2!=pl2)
{
b2=pl2;
x=40;
y=0;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==3&&b3!=pl1&&b3!=pl2)
{
b3=pl2;
x=80;
y=0;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==4&&b4!=pl1&&b4!=pl2)
{
b4=pl2;
x=0;
y=40;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==5&&b5!=pl1&&b5!=pl2)
{
b5=pl2;
x=40;
y=40;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==6&&b6!=pl1&&b6!=pl2)
{
b6=pl2;
x=80;
y=40;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==7&&b7!=pl1&&b7!=pl2)
{
b7=pl2;
x=0;
y=80;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==8&&b8!=pl1&&b8!=pl2)
{
b8=pl2;
x=40;
y=80;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==9&&b9!=pl1&&b9!=pl2)
{
b9=pl2;
x=80;
y=80;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else
{
printf("You have entered wrong choice.\n");
//Re input when entered wrong input
printf("Now enter the correct choice.\n");
scanf("%d",&p2);
if(p2==1&&b1!=pl1&&b1!=pl2)
{
b1=pl2;
setcolor(GREEN);
circle(520,180,10);
}
else if(p2==2&&b2!=pl1&&b2!=pl2)
{
b2=pl2;
x=40;
y=0;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==3&&b3!=pl1&&b3!=pl2)
{
b3=pl2;
x=80;
y=0;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==4&&b4!=pl1&&b4!=pl2)
{
b4=pl2;
x=0;
y=40;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==5&&b5!=pl1&&b5!=pl2)
{
b5=pl2;
x=40;
y=40;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==6&&b6!=pl1&&b6!=pl2)
{
b6=pl2;
x=80;
y=40;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==7&&b7!=pl1&&b7!=pl2)
{
b7=pl2;
x=0;
y=80;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==8&&b8!=pl1&&b8!=pl2)
{
b8=pl2;
x=40;
y=80;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else if(p2==9&&b9!=pl1&&b9!=pl2)
{
b9=pl2;
x=80;
y=80;
setcolor(GREEN);
circle(520+x,180+y,10);
}
else
{
printf("You have entered wrong choice again.\n");
}
}
}
//Checking for tic tac toe pattern
if(b1==pl2&&b2==pl2&&b3==pl2)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(500+q,180,YELLOW);
delay(15);
}
printf(b);
printf(" won the game !\n");
}
if(b4==pl2&&b5==pl2&&b6==pl2)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(500+q,220,YELLOW);
delay(15);
}
printf(b);
printf(" won the game !\n");
}
if(b7==pl2&&b8==pl2&&b9==pl2)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(500+q,260,YELLOW);
delay(15);
}
printf(b);
printf(" won the game !\n");
}
if(b1==pl2&&b4==pl2&&b7==pl2)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(520,160+q,YELLOW);
delay(15);
}
printf(b);
printf(" won the game !\n");
}
if(b2==pl2&&b5==pl2&&b8==pl2)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(560,160+q,YELLOW);
delay(15);
}
printf(b);
printf(" won the game !\n");
}
if(b3==pl2&&b6==pl2&&b9==pl2)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(600,160+q,YELLOW);
delay(15);
}
printf(b);
printf(" won the game !\n");
}
if(b1==pl2&&b5==pl2&&b9==pl2)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(500+q,160+q,YELLOW);
delay(15);
}
printf(b);
printf(" won the game !\n");
}
if(b3==pl2&&b5==pl2&&b7==pl2)
{
i=6;
for(q=0;q<=120;q++)
{
putpixel(620-q,160+q,YELLOW);
delay(15);
}
printf(b);
printf(" won the game !\n");
}
}
getch();
closegraph();
}