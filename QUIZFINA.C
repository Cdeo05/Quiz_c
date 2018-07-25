#include<stdio.h>
#include<conio.h>
void main()
{
int a,score=0;
clrscr();
printf("Quiz\n*Rules*\n1.For every correct ans you get 2 points\n2.For every wrong ans 1 point will be reduced\nEnter the option number of your fav tv series\n1)GOT   \t2)F.R.I.E.N.D.S\n3)Flash \n");
scanf("%d",&a);
switch(a)
{
case 1:score=got(a);break;
case 2:score=friends(a);break;
case 3:score=flash(a);break;
 }
printf("Total Score=%d\n*THANK YOU*:)",score);
getch();
}
int got(int n)
{
int i=0,a=0,b=0;
printf("1. Which of the following character DOES appear in season 1?\n");
printf("a)Stannis Baratheon\tb)Roose Bolton\nc)Craster       \td)Beric Dondarrion\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='d')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='D')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else
{
printf("Wrong Answer\nCorrect Answer=D\n");
i=i--;
b++;
}
printf("\n");
printf("2. Who was the first to stab Jon Snow in the Season 5 finale?\n");
printf("a)Olly          \tb)Othell Yarwyck\nc)Alliser Thorne\td)Bowen Marsh\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='c')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='C')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else
{
printf("Wrong Answer\nCorrect Answer=C\n");
i=i--;
b++;
}
printf("\n");
printf("3. What were the names of Aegon Targaryen's three dragons that Dany named her ships after?\n");
printf("a)Meraxes,Rhaegal and Vhagar\tb)Rhaegal,Drogon and Viserion\nc)Meraxes,Vhagar and Balerion\td)Balerion,Drogon and Viserion\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='c')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='C')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else
{
printf("Wrong Answer\nCorrect Answer=C\n");
i=i--;
b++;
}
printf("\n");
printf("4. Where does Robb Stark's wife come from?\n");
printf("a)Volantis\tb)Astapor\nc)Pentos \td)Braavos\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='a')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='A')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else
{
printf("Wrong Answer\nCorrect Answer=A\n");
i=i--;
b++;
}
printf("\n");
printf("5.Why did Oberyn Martell really come to Kings's Landing?\n");
printf("a)To kill Tywin Lannister\tb)For the wedding of Joffrey and Margaery Tyrellc)To resucue Tyrion fron execution\td)To avenge his sisters's death\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='d')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='D')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else
{
printf("Wrong Answer\nCorrect Answer=D\n");
i=i--;
b++;
}
printf("Total correct Answers=%d\nTotal Wrong answers=%d\n",a,b);
return(i);
}
int friends(int n)
{ int i=0,a=0,b=0;
printf("1.Which of these items isn't in Monica's secret closet?\n");
printf("a)A bird house\tb)A football\nc)A basket\td)A lampshade\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='b')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else if(n=='B')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=B\n");
i=i--;
b++;
}
printf("\n");
printf("2.What is Chandler's boss'wife's name?\n");
printf("a)Jenny \tb)Kara\nc)Petra \td)Lisa\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='b')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='B')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=B\n");
i=i--;
b++;
}
printf("\n");
printf("3.Which of these is Ross not allergic to?\n");
printf("a)Lobster \tb)Peanuts\nc)Kiwi  \td)Dust\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='d')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='D')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=D\n");
i=i--;
b++;
}
printf("\n");
printf("4.What was the name of Phoebe's ex who ate chalk?\n");
printf("a)Chris \tb)Luke\nc)Carl  \td)Matt\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='c')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='C')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=C\n");
i=i--;
b++;
}
printf("\n");
printf("5.How many claps are there in the theme song?\n");
printf("a)3 \tb)6\nc)4 \td)5\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='c')
{
printf("Correct Answer\n");
i=i+2 ;
a++;
}
else if(n=='C')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=C\n");
i=i--;
b++;
}
printf("Total correct Answers=%d\nTotal Wrong answers=%d\n",a,b);
return(i);
}
int flash(int n)
{ int i=0,a=0,b=0;
printf("1.Who was the first one to realize that Dr.Wells was actually The Reverse Flash?\n");
printf("a)Barry \tb)Caitlin\nc)Joe    \td)Cisco\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='d')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else if(n=='D')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=D\n");
i=i--;
b++;
}
printf("\n");
printf("2.Barry Allen tried to mentally change this villain?\n");
printf("a)Weather Wizard \tb)Doctor Alchemy\nc)Faust          \td)The Top\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='d')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else if(n=='D')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=D\n");
i=i--;
b++;
}
printf("\n");
printf("3.Which of these was NOT a super-speed villain of one of the Flashes? \n");
printf("a)Eobard Thawne \tb)Savitar\nc)Max Mercury   \td)The Rival\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='c')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else if(n=='C')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=C\n");
i=i--;
b++;
}
printf("\n");
printf("4.Which of these villains was not one of Flash's enemies?\n");
printf("a)Hush           \tb)Mirror Master\nc)Abra Kadabra  \td)Captain Boomerang\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='a')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else if(n=='A')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=A\n");
i=i--;
b++;
}
printf("\n");
printf("5.Who lives on earth 38,seen in the crossover?\n");
printf("a)Supergirl     \tb)Felicity earth 38\nc)Henry Allen    \td)Black Flash\n");
printf("Your Choice:");
scanf("%s",&n);
if(n=='a')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else if(n=='A')
{
printf("Correct Answer\n");
i=i+2 ;
a++ ;
}
else
{
printf("Wrong Answer\nCorrect Answer=A\n");
i=i--;
b++;
}
printf("Total correct Answers=%d\nTotal Wrong answers=%d\n",a,b);
return(i);
}