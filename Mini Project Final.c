#include<stdio.h>
#include<conio.h>
struct books
{
int id;
char nm[20];
char anm[20];
int q;
int r;
int s;
};

struct books b[10];
int bpos=-1;
void addbook()
{
bpos++;
printf("Enter the book id:");
scanf("%d",&b[bpos].id);
printf("\nEnter the book name:");
scanf("%s",b[bpos].nm);
printf("\nEnter the author name:");
scanf("%s",b[bpos].anm);
printf("\nEnter the quantity:");
scanf("%d",&b[bpos].q);
printf("\nEnter the rate:");
scanf("%d",&b[bpos].r);
b[bpos].s=1;
}
void delbook()
{
int sid,i;
printf("Enter book id:");
scanf("%d",&sid);
for(i=0;i<=bpos;i++)
{
if(b[i].id==sid)
{

b[i].s=0;
}
}
}



void viewbook()
{
int i;
for(i=0;i<=bpos;i++)
{
if(b[i].s==1)
{
printf("\nBook id:%d",b[i].id);
printf("\nBook name:%s",b[i].nm);
printf("\nAuthor name:%s",b[i].anm);
printf("\nQuantity:%d",b[i].q);
printf("\nRate:%d",b[i].r);
}
}
}
void search()
{
int i,sid;
printf("\nEnter book id to search :");
scanf("%d",&sid);

for(i=0;i<=bpos;i++)
{
if(sid==b[i].id && b[i].s==1)
{
printf("\nBook id:%d",b[i].id);
printf("\nBook name:%s",b[i].nm);
printf("\nAuthor name:%s",b[i].anm);
printf("\nQuantity:%d",b[i].q);
printf("\nRate:%d",b[i].r);
}
}
}

void main()
{
int n;
do
{
system("cls");
printf("1.Add Book\n2.Delete Book\n3.View Book\n4.Search Book\n");
scanf("%d",&n);
switch(n)
{
case 1:addbook();break;
case 2: delbook();break;
case 3:viewbook();break;
case 4:search();break;
}
getch();
}while(n<5);
}
