#include<stdio.h>
int m1();int m11();int m2();int m3();int m4();int m44();int m5();int m6();int m7();int m8();int m88();int m9();
void s1();void s2();void s3();
void check();
void main()
{
	char user[100],password[100];
	char user1[10]="Laasya",password1[10]="12345",user2[10]="Sriya",password2[10]="1999",user3[10]="Nishi",password3[10]="10052004";
	printf("=========================================================================\n");
printf("|                                                                       |\n");
printf("|        WELCOME TO GOKARAJU LAILAVATHI MOVIE TICKETS BOOKING!          |\n");
printf("|                                                                       |\n");
printf("=========================================================================\n");
printf("|                    Enter user id                 :                    |\n");
gets(user);
printf("|                    Enter password                :                    |\n");
gets(password);
printf("=========================================================================\n");
if((strcmp(user1,user)==0 && strcmp(password1,password)==0) || (strcmp(user2,user)==0 && strcmp(password2,password)==0) || (strcmp(user3,user)==0 && strcmp(password3,password)==0))
	check();
else
{printf("Invalid Credentials!\nTRY AGAIN\n");
main();}
}
void check()
{
	
	int movie;
printf("                              HOME PAGE                                  \n");
printf("*-----------------------------------------------------------------------*\n");
printf("                         SELECT LANGUAGE!                                \n");
printf("\n");
printf("|                              1.Telugu                                 |\n");
printf("|                              2.Hindi                                  |\n");
printf("|                              3.English                                |\n");
printf("Enter your choice (ex: 1 for Telugu):");
scanf("%d",&movie);
switch (movie)
{
case 1:
s1();
break;
case 2:
s2();
break;
case 3:
s3();
break;
default:
printf("\n1.Sarkaar vaari paata\n2.Aachaarya\n3.KGF Chapter2(Telugu version)\n4.Bhoolbhulaiya2\n5.KGF Chapter2(Hindi version)\n6.Gangubai Kathiawadi\n7.Multiverse of madness(MARVEL)\n8.Top Gun\n9.PAW Patrol\n");
break;
}
}
void s1()
{
	int choice,slot;
	
printf("Telugu movies available:\n");
printf("|                        1.Sarkaar vaari paata                          |\n|                        2.Aachaarya                                    |\n|                        3.KGF Chapter2(Telugu version)                 |\n");
printf("|                   Press 4 for return to home page                     |\n");
printf("Enter your choice(ex:1.SVP):");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("__________________________________________________________________________\n");
printf("\n                            Sarkaar vaari paata                \n");
printf("--------------------------------------------------------------------------\n");
printf("\n                              ***RATINGS***                    \n");
printf("                             U/A Certificate\n                             IMDB:6.5/10\n                             Rotten tomatoes:10% ");
printf("\n                         Available Show Timings:\n                         1.Matinee show(2:00 p.m.)\n");
printf("Press 1 for booking  OR Press 2 for return to home page: \n");
scanf("%d",&slot);
printf("\n__________________________________________________________________________\n");
switch(slot)
{
case 1:
m1();
break;
case 2:
check();
default:
printf("INVALID CHOICE");
break;
}
break;
case 2:
printf("__________________________________________________________________________\n");
printf("\n                                 Aachaarya                                \n");
printf("--------------------------------------------------------------------------\n");
printf("\n                               ***RATINGS***                               \n");
printf("                             U/A Certificate\n                             IMDB:5/10\n                             Rotten tomatoes:40%");
printf("\n                            Available Show Timings:\n                             Morning show(11:00 a.m.)\n");
printf("Press 1 for booking OR Press 2 for return to home page: ");
scanf("%d",&slot);
printf("\n__________________________________________________________________________\n");
if(slot==1)
	m2();
else if(slot==2)
	check();
    else
		printf("INVALID CHOICE");
break;
case 3:
printf("__________________________________________________________________________\n");
printf("\n                        KGF Chapter2(Telugu version)                     \n");
printf("--------------------------------------------------------------------------\n");
printf("\n                             ***RATINGS***                              \n");
printf("                            U/A Certificate\n                            IMDB:9/10\n                            Rotten tomatoes:5%");
printf("\n                          Available Show Timings:\n                           First show(6:00 p.m.)\n");
printf("Press 1 for booking OR Press 2 for return to home page: ");
scanf("%d",&slot);
printf("\n__________________________________________________________________________\n");
if(slot==1)
	m3();
else if(slot==2)
	check();
    else
		printf("INVALID CHOICE");
break;
case 4:
check();
default:
printf("\n CHOICE NOT AVAILABLE, PLEASE CHECK AGAIN\n");
break;
}
}
void s2()
{
	int choice,slot;
printf("                        Hindi movies available:\n");
printf("|                        1.Bhoolbhulaiya                                |\n");
printf("|                        2.KGF Chapter2(Hindi version)                  |\n");
printf("|                        3.Gangubai Kathiawadi                          |\n");
printf("|                         Press 4 for return                            |\n");
printf("Enter your choice(ex:1.Bhoolbhulaiya2):");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("__________________________________________________________________________\n");
printf("\n                              Bhoolbhulaiya                               \n");
printf("--------------------------------------------------------------------------\n");
printf("\n                              ***RATINGS***                               \n");
printf("                             U/A Certificate\n                             IMDB:6.3/10\n                             Rotten tomatoes:20%");
printf("\n                         Available Show Timings:\n                         Matinee show(2:00 p.m.)\n");
printf("Press 1 for booking OR Press 2 for return to home page: \n");
scanf("%d",&slot);
printf("\n__________________________________________________________________________\n");
switch(slot)
{
case 1:
m4();
break;
case 2:
check();
break;
default:
printf("INVALID CHOICE");
break;
}
break;
case 2:
printf("__________________________________________________________________________\n");
printf("\n                        KGF Chapter2(Hindi version)                     \n");
printf("--------------------------------------------------------------------------\n");
printf("\n                              ***RATINGS***                             \n");
printf("                               U/A Certificate\n                               IMDB:9/10\n                               Rotten tomatoes:5%");
printf("\n                         Available Show Timings:\n                          Morning show(11:00 a.m.)\n");
printf("Press 1 for booking OR Press 2 for return to home page: ");
scanf("%d",&slot);
printf("\n__________________________________________________________________________\n");
if(slot==1)
	m5();
else if(slot==2)
	check();
    else
		printf("INVALID CHOICE");
break;
case 3:
printf("__________________________________________________________________________\n");
printf("\n                           Gangubai Kathiawadi                          \n");
printf("--------------------------------------------------------------------------\n");
printf("                             ***RATINGS***                                \n");
printf("                            U/A Certificate\n                            IMDB:7/10\n                            Rotten tomatoes:15%");
printf("\n                         Available Show Timings:\n                          First show(6:00 p.m.)\n");
printf("Press 1 for booking OR Press 2 for return to home page: ");
scanf("%d",&slot);
printf("\n__________________________________________________________________________\n");
if(slot==1)
	m6();
else if(slot==2)
	check();
    else
		printf("INVALID CHOICE");
break;
case 4:
check();
break;
default:
printf("\n CHOICE NOT AVAILABLE, PLEASE CHECK AGAIN\n");
break;
}
}
void s3()
{
	int choice,slot;
printf("                         English movies available:\n");
printf("|                       1.Multiverse of madness(MARVEL)                 |\n");
printf("|                       2.Top Gun                                       |\n");
printf("|                       3.PAW Patrol                                    |\n");
printf("|                   Press 4 for return to home page                     |\n");
printf("Enter your choice(ex:Top Gun) :");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf("__________________________________________________________________________\n");
	printf("\n                         Multiverse of madness(MARVEL)                   \n");
	printf("--------------------------------------------------------------------------\n");
	printf("\n                            ***RATINGS***                                 \n");
	printf("                             U/A Certificate\n                             IMDB:7.4/10\n                             Rotten tomatoes:15%");
	printf("\n                           Available Show Timings:\n                            First show(6:00 p.m.)\n");
printf("Press 1 for booking OR Press 2 for return to home page: ");
scanf("%d",&slot);
	printf("\n__________________________________________________________________________\n");
	if(slot==1)
	m7();
    else if(slot==2)
		check();
	else
		printf("INVALID CHOICE");
	break;
	case 2:
	printf("__________________________________________________________________________\n");
	printf("\n                                  Top Gun                                \n");
	printf("--------------------------------------------------------------------------\n");
	printf("                               ***RATINGS***                              \n");
	printf("                                IMDB:6/10\n                Rotten tomatoes:40%");
	printf("\n                          Available Show Timings:\n                            Matinee show(2:00 p.m.)\n");
	printf("Press 1 for booking OR Press 2 for return to home page: \n");
	scanf("%d",&slot);
	printf("\n__________________________________________________________________________\n");
	switch(slot)
{
case 1:
m8();
break;
case 2:
check();
break;
default:
printf("INVALID CHOICE");
break;
}
	break;
	case 3:
	printf("__________________________________________________________________________\n");
	printf("\n                                PAW Patrol                               \n");
	printf("--------------------------------------------------------------------------\n");
	printf("\n                              ***RATINGS***                               \n");
	printf("                              U Certificate\n                              IMDB:6.1/10\n                              Rotten tomatoes:40%");
	printf("\n                          Available Show Timings:\n                           Morning show(11:00 a.m.)\n");
printf("Press 1 for booking OR Press 2 for return to homepage: ");
scanf("%d",&slot);
	printf("\n__________________________________________________________________________\n");
	if(slot==1)
	m9();
    else if(slot==2)
		check();
		printf("INVALID CHOICE");
	break;
	case 4:
	check();
	break;
default:
printf("\n CHOICE NOT AVAILABLE, PLEASE CHECK AGAIN\n");
break;
}
}
int m1()
{
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}
	
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                          SUCCESSFULLY BOOKED !                      \n");
	printf("__________________________________________________________________________\n");
    printf("\n                          Sarkaar vaari paata                \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 1                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nMatinee show                                                    2:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	int opt;
	   printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{

	scanf("%d",&seat[k+num]);
		k++;}
		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                          SUCCESSFULLY BOOKED !                      \n");
	printf("__________________________________________________________________________\n");
    printf("\n                           Sarkaar vaari paata                \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 1                                                                  \n");
printf("Seats :  ");
 k=0;
while(k<nb){
printf("%d, ",seat[k+num]);
k++;}
printf("\nMatinee show                                                    2:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
    printf("\nYou have chosen an already booked seat(s)");
	printf("\nPlease try again \n");
m1();
	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;	  
}
int m2()
{
	
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}
	
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                            SUCCESSFULLY BOOKED !                       \n");
	printf("__________________________________________________________________________\n");
    printf("\n                                 Aachaarya                                \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 1                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nMorning show                                                    11:00 a.m. \n");
printf("\n__________________________________________________________________________\n");
	int opt;
	   printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{

	scanf("%d",&seat[k+num]);
		k++;}
		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                            SUCCESSFULLY BOOKED !                       \n");
	printf("__________________________________________________________________________\n");
    printf("\n                                 Aachaarya                                \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 1                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<nb){
printf("%d, ",seat[k+num]);
k++;}
printf("\nMorning show                                                    11:00 a.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
     printf("\nYou have chosen an already booked seat(s)");
	 printf("\nPlease try again \n");
	 m2();
	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
	 
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;	  
}
int m3()
{
	
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}	
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                          SUCCESSFULLY BOOKED !                      \n");
	printf("__________________________________________________________________________\n");
    printf("\n                       KGF Chapter2(Telugu version)                   \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 1                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nFirst show                                                      6:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	int opt;
	  printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{

	scanf("%d",&seat[k+num]);
		k++;}
		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                          SUCCESSFULLY BOOKED !                      \n");
	printf("__________________________________________________________________________\n");
    printf("\n                       KGF Chapter2(Telugu version)                   \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 1                                                                  \n");
printf("Seats :  ");
k=0;
 while(k<nb){
printf("%d, ",seat[k+num]);
k++;}
printf("\nFirst show                                                      6:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
    printf("\nYou have chosen an already booked seat(s)");
	printf("\nPlease try again \n");
	m3();

	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;
	  
}
int m4()
{	
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}
	
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	int opt;
	   printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{

	scanf("%d",&seat[k+num]);
		k++;}
		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
printf("\n                          SUCCESSFULLY BOOKED !                      \n");
printf("__________________________________________________________________________\n");
printf("\n                             Bhoolbhulaiya                           \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 2                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nMatinee show                                                    2:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
     printf("\nYou have chosen an already booked seat(s)");
	printf("\nPlease try again \n");
	m4();
	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;	  
}
int m5()
	{
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}
	
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                          SUCCESSFULLY BOOKED !                      \n");
	printf("__________________________________________________________________________\n");
    printf("\n                       KGF Chapter2(Hindi version)                   \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 1                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nMorning show                                                    11:00 a.m. \n");
printf("\n__________________________________________________________________________\n");
	int opt;
	   printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{

	scanf("%d",&seat[k+num]);
		k++;}
		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                          SUCCESSFULLY BOOKED !                      \n");
	printf("__________________________________________________________________________\n");
    printf("\n                       KGF Chapter2(Hindi version)                   \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 2                                                                  \n");
printf("Seats :  ");
 k=0;
while(k<nb){
printf("%d, ",seat[k+num]);
k++;}
printf("\nMorning show                                                    11:00 a.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
     printf("\nYou have chosen an already booked seat(s)");
	printf("\nPlease try again \n");
	m5();
	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;	  
}
int m6()
{
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                          SUCCESSFULLY  BOOKED !                      \n");
	printf("__________________________________________________________________________\n");
    printf("\n                           Gangubai Kathiawadi                        \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 2                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nFirst show                                                      6:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	int opt;
	   printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{

	scanf("%d",&seat[k+num]);
		k++;}
		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
		printf("\n                          SUCCESSFULLY  BOOKED !                      \n");
	printf("__________________________________________________________________________\n");
    printf("\n                           Gangubai Kathiawadi                        \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 2                                                                  \n");
printf("Seats :  ");
 k=0;
while(k<nb){
printf("%d, ",seat[k+num]);
k++;}
printf("\nFirst show                                                      6:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
     printf("\nYou have chosen an already booked seat(s)");
	printf("\nPlease try again \n");
	m6();
	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;	  
}	 
int m7()
{
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}
	
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
		printf("\n                          SUCCESSFULLY  BOOKED !                      \n");
	    printf("__________________________________________________________________________\n");
        printf("\n                       Multiverse of madness(MARVEL)                   \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 3                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nFirst show                                                      6:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	int opt;
	   printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{

	scanf("%d",&seat[k+num]);
		k++;}
		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	    printf("\n                          SUCCESSFULLY  BOOKED !                      \n");
	    printf("__________________________________________________________________________\n");
        printf("\n                       Multiverse of madness(MARVEL)                   \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 3                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<nb){
printf("%d, ",seat[k+num]);
k++;}
printf("\nFirst show                                                      6:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
     printf("\nYou have chosen an already booked seat(s)");
	printf("\nPlease try again \n");
	m7();
	return 0;
	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;
	  
}
int m8()
{
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}
	
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	    printf("\n                          SUCCESSFULLY  BOOKED !                      \n");
	    printf("__________________________________________________________________________\n");
        printf("\n                                 Top Gun                              \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 3                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nMatinee show                                                    2:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	int opt;
	  printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{

	scanf("%d",&seat[k+num]);
		k++;}
		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	  printf("\n                          SUCCESSFULLY  BOOKED !                      \n");
	    printf("__________________________________________________________________________\n");
        printf("\n                                 Top Gun                              \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 3                                                                  \n");
printf("Seats :  ");
 k=0;
while(k<nb){
printf("%d, ",seat[k+num]);
k++;}
printf("\nMatinee show                                                    2:00 p.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
     printf("\nYou have chosen an already booked seat(s)");
	printf("\nPlease try again \n");
m8();
	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;	  
}
int m9()
{
	int a[10][10],i,j,n=1,b=65,no=1,seat[100],num,k=0,nb,count=0,l;
	int amt;
		for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d ",no);
	    no++;
		}
		printf("\n");		
	}
	no=1;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
		a[i][j]=no;
		no++;
		}
	}
	
    printf("Enter the number of seats required:");
	scanf("%d",&num);
	printf("enter the required seat no:");
	while(k<num)
	{

	scanf("%d",&seat[k]);
		k++;}
		for(k=0;k<num;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*num;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	  printf("\n                          SUCCESSFULLY  BOOKED !                      \n");
	    printf("__________________________________________________________________________\n");
      printf("\n                               PAW Patrol                             \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 3                                                                  \n");
printf("Seats :  ");
 k=0;
 while(k<num){
printf("%d, ",seat[k]);
k++;}
printf("\nMorning show                                                      11:00 a.m. \n");
printf("\n__________________________________________________________________________\n");
	int opt;
	  printf("\nEnter\n1-->To book again\n2-->To exit\n3-->To choose other movies\n");
	  scanf("%d",&opt);
	  switch(opt)
	 {	
	   case 1:
	   	{ 
	   	for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
		   printf("Enter the number of seats required:");
	scanf("%d",&nb);
	printf("enter the required seat no:");
	k=0;
	while(k<nb)
	{
	scanf("%d",&seat[k+num]);
		k++;}		
	for(k=0;k<num;k++)
	{
		for(l=num;l<num+nb;l++)
	{
		if(seat[k]==seat[l])
	count++;
	}
	}
	if(count==0)
		{for(k=0;k<nb;k++)
		{
    	 for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		if(seat[k+num]==a[i][j])
    			{
    			a[i][j]=0;
				}
			} 
	    }
	   }
for(i=0;i<10;i++)
         {
		  for(j=0;j<10;j++)
    	   {
    		printf("%d ",a[i][j]);
			} 
			printf("\n");
	    }
	amt=250*nb;
	printf("\n         Each ticket           : Rs.250 \n         Amount to be paid     : Rs.%d\n",amt);
	printf("\n                          SUCCESSFULLY  BOOKED !                      \n");
	    printf("__________________________________________________________________________\n");
      printf("\n                               PAW Patrol                             \n");
printf("--------------------------------------------------------------------------\n");
printf("\nScreen 3                                                                  \n");
printf("Seats :  ");
 k=0;
while(k<nb){
printf("%d, ",seat[k+num]);
k++;}
printf("\nMorning show                                                      11:00 a.m. \n");
printf("\n__________________________________________________________________________\n");
	}
	else
	{
     printf("\nYou have chosen an already booked seat(s)");
	printf("\nPlease try again \n");
	m9();
	}
		}
	  case 2:printf("The movie booking has been completed\nThankyou!!");
    break;
	case 3:check();
	break;
	default:printf("please try again");
	break;
	}
	return 0;
}