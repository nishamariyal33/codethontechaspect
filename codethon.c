# codethontechaspect
#include<stdio.h>
#include<conio.h>
#include<string.h>

struct username
{
char name[20];
long int phoneno;
char address[70];
char uplan[20];
}
u[5];

struct plan
{ char pname[20];
  char ptype[15];
  float datacharge;
  float smscharge;
  float callcharge;

}
p[5];

void main()
{
int i; char username[20],mynewplan[20];
char ch;
printf("Creation of Plans \n");

for(i=0;i<5;i++)
{
printf("\nEnter plan name:");	
scanf("%s",p[i].pname);
printf("\nEnter plan type:");
scanf("%s",p[i].ptype);
printf("\nEnter the data charge:");
scanf("%f",p[i].datacharge);
printf("\nEnter smscharge:");
scanf("%f",p[i].smscharge);
printf("\nEnter call charge:");
scanf("%f",p[i].callcharge);
}

printf("Creation of User Information\n");
for(i=0;i<5;i++)
{
printf("\nEnter your name:");
scanf("%s",u[i].name);
printf("\nEnter your phoneno:");
scanf("%d",u[i].phoneno);
printf("\nEnter your address:");
scanf("%s",u[i].address);
printf("\nEnter your planname:");
scanf("%s",u[i].uplan);

}

printf("\nDetails of your plan \n");

printf("Enter your full name\n");

scanf("%s",username);

for(i=0;i<5;i++)

{ if (strcmp(username,u[i].name)==0)
	 if(strcmp(u[i].uplan,p[i].pname)==0)
	 {
		 printf("The details of your plan are:\n");
		 printf("%s\n",p[i].pname);
         printf("%s\n",p[i].ptype);
         printf("%f\n",p[i].datacharge);
         printf("%f\n",p[i].smscharge);
         printf("%f\n",p[i].callcharge);

}}

printf("The details of all the plans in the database are:\n");

for(i=0;i<5;i++)
{
printf("\n plan name:");	
printf("%s",p[i].pname);
printf("\nplan type:");
printf("%s",p[i].ptype);
printf("\n data charge:");
printf("%f",p[i].datacharge);
printf("\nsmscharge:");
printf("%f",p[i].smscharge);
printf("\ncall charge:");
printf("%f",p[i].callcharge);
}

printf("\nDo you want to update your plan? enter Y or y else N or n");
scanf("%c",ch);
if(ch=='Y' || ch=='y')
{
	printf("\nEnter your name");
	scanf("%s",username);
	for(i=0;i<5;i++)
	{
		if (strcmp(username,u[i].name)==0)
		{
			printf("\n Enter your new plan");
			scanf("%s",mynewplan);
			strcpy(u[i].uplan,mynewplan);
		}
		
	}
	
}

return 0;
}
	 

