#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int z=0;
void mainmenue();
void create(int id[],char acN[][20],char cusN[][20],int balance[]);
void find(int id[],char acN[][20],char cusN[][20],int balance[]);
void delet(int id[],char acN[][20],char cusN[][20],int balance[]);
void sort(int id[],char acN[][20],char cusN[][20],int balance[]);
void display(int id[],char acN[][20],char cusN[][20],int balance[]);
void deposit(int id[],char acN[][20],char cusN[][20],int balance[]);
void withdraw(int id[],char acN[][20],char cusN[][20],int balance[]);
void transfer(int id[],char acN[][20],char cusN[][20],int balance[]);
int password(char pw[10]);
int search(int accountnumber);
int nid;int g=0;
int q=0;int Q=0;
int accountnumber;
int yesno(char yn[5]);
int a,b;int flag=0;
int j;int tran;
int dep;int i;
int e=0;
char na[20];
int flage=0;
int with;
int w,o,t,l,size=0;
char pass[5];char yn[10];
char pw[10];
int id[10];char acN[10][20];char cusN[10][20];int balance[10];
//======================================================================================================================////
 int main(){system("COLOR E0");
 int i,p=0;
 char ch;
 printf("\n\n\n\n\n\n\n\t\t\tEnter Passowrd To Start:");
 do{
 ch=getch();
 if(ch=='\r'){
 pass[p]='\0';
 break;
 }else{
 pass[p]=ch;
 printf("*");
 p++;
 }
 }while(1);
 
 if(strcmp(pass,"1234")==0) 
 {
 printf("\n\n\n\n\n\n\t\t    Done by Entesar Ell Banna");
 printf("\n\t\t\2\2\2\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\2\2\2");
 getch();
 mainmenue();}
 else{ 
 system("CLS");
 printf("\n\n\n\n\n\n\n\n\n\t\t\tError password!!!!!!!!!");
 }
 getch();
 return 1;}
 ////======================================================================================================================//
 void mainmenue(){
 int i;
 do{
 system("CLS");system("COLOR E0");
 printf("\n\n\n\n\n\t\t====================================================\n");
 printf("\n\t\t\t\t<<<<MAIN MENU>>>>\n");
 printf("\n\t\t====================================================\n"); 
 printf("\n\n\t\t 1. Create A New Account...");
 printf("\n\n\t\t 2. Find Any Customer by Using Customer Name...");
 printf("\n\n\t\t 3. Delete Any Customer by Using Account Number...");
 printf("\n\n\t\t 4. Sort All Information...");
 printf("\n\n\t\t 5. Display Information For All Account...");
 printf("\n\n\t\t 6. Deposit the balance...");
 printf("\n\n\t\t 7. Withdraw the balance...");
 printf("\n\n\t\t 8. Transfer balance to another account...");
 printf("\n\n\t\t 9. Exit...");
 printf("\n\n\n\tEnter your choice from [1 to 9] : ");
 
 scanf("%d",&i);
 switch(i){
 case 1:create( id,acN,cusN, balance);break;
 case 2:find(id,acN,cusN, balance);break;
 case 3:delet(id,acN,cusN, balance);break;
 case 4:sort(id,acN,cusN, balance);break;
 case 5:display(id,acN,cusN, balance);break;
 case 6:deposit(id,acN,cusN, balance);break;
 case 7:withdraw(id,acN,cusN, balance);break;
 case 8:transfer(id,acN,cusN, balance);break;
 case 9:exit(0);
 default:{printf("\n\n\n\t\t\tError input!!!\n");mainmenue();}
	break;
 
 }
 }while(1);
 getch();
 }
 ///===================================================================================================================///
 int search(int accountnumber){int o=0;system("cls");system("COLOR E0");
 	printf("\n\n\n\t      Enter account number to check if it exist or not...");
 	scanf("%d",&accountnumber);
 	for(int i=0;i<=size;i++)
 	if(id[i]==accountnumber)o++;
 	if(o>0)l=1;else l=-1;
 	system("cls");
 	o=0;
 	return l;
}
///===================================================================================================================//
int password(char pw[10]){system("cls");system("COLOR E0");

	printf("\n\n\n\n\n\n\n\n\t\t\tEnter password to continue  ");fflush(stdin);
	scanf("%s",pw);system("cls");
	if(strcmp(pw,"EIT")==0||strcmp(pw,"eit")==0||strcmp(pw,"Eit")==0)w=0;
	else{w=1;printf("\n\n\t\tError password!!!Press Enter to try again\n");getch();password(pw);}
	
	return w;
}
///=====================================================================================================================//
int yesno(char yn[5]){
	printf("\n\n\n\t\tDo you want to repeat the prosses(yes/no)???\n\n\t\t\t");
//	gets(yn);
    scanf("%s",yn);
	if(strcmp(yn,"yes")==0||strcmp(yn,"y")==0||strcmp(yn,"YES")==0||strcmp(yn,"Y")==0||strcmp(yn,"Yes")==0)t=0;else t=1;
	return t;
}
///==================================================================================================================//
void create(int id[],char acN[][20],char cusN[][20],int balance[]){int result;
int i;system("cls");system("COLOR E0");
password(pw);
if(w==0){
printf("\n\n\n\t\t\t********* Create Account **********\n\n");
search(accountnumber);
if(l==-1){

system("cls");
printf("\n\n\n\n  \2\2\2ReEnter the same new account number<%d>",size+1);scanf("%d",&id[size]);

printf("\n\n  Enter coustomer name<%d>",size+1);scanf("%s",cusN[size]);

printf("\n\n  Enter acconnt name <%d>",size+1);//<<with not less or more 8 characters>>
scanf("%s",acN[size]);fflush(stdin);

printf("\n\n  Enter balance <%d>",size+1);scanf("%d",&balance[size]);fflush(stdin);
if(balance[size]==0){balance[size]+=1;printf("\n\n\tOur bank will convert your new balance from 0 to 1 \2\2\2");getch();
}

++size;
fflush (stdin);system("cls");
printf("\n\n\n\n\n\n\n\t\2\2\2\2\2\2\2 Create Account process passed successfully \2\2\2\2\2\2\n\n\n");
yesno(yn);if(t==0)create( id,acN,cusN, balance);else mainmenue();//fflush (stdin);}
}
else 
if(l==1||l!=-1)

{system("cls");printf("\n\n\n\n\n\t\t       Sorry...This account is  found!!!\n\n");yesno(yn);
if(t==0)create( id,acN,cusN, balance);
else mainmenue();getch();}


	}else {printf("\n\n\t\tError password!!");password(pw);}
	fflush(stdin);
	 yesno(yn);if(t==0)create( id,acN,cusN, balance);else mainmenue();
	 getch();
}
//====================================================================================================================//
void display(int id[],char acN[][20],char cusN[][20],int balance[]){int i;system("cls");system("COLOR E0");

printf("\n\n\n\t\t   ********* Display Information **********\n\n\n");
printf("\n\tAccount Number\t  Account Name\t       CUstomer Name\t Balance");
for(i=0;i<size;i++){
printf("\n\t=================================================================\n\t");
 printf("\n\t\t%d\t\t%s\t\t%s \t    \t  %d ",id[i],acN[i],cusN[i],balance[i]); 
printf("\n\t=================================================================\n\t");

 }printf("\n\n\n\n\t\t Return to main minue ...");
 
getch();	
}
///=======================================================================================================================//
void find(int id[],char acN[][20],char cusN[][20],int balance[]){int i,g;char coustomername[10];
system("cls");system("COLOR E0");
printf("\n\n\n\t\t     ********* Find Coustmer **********\n\n");
printf("\n\t\tEntre Coustmer Name to search about: ");
scanf("%s",coustomername);
for( i=0;i<size;++i){if(strcmp(cusN[i],coustomername)==0){g=1;break;
}
}

 if(g==1){
	 
 printf("\n\n\t\tDetails about this account:\n\n");
	printf("\n\tAccount Number\t Account Name\t  CUstomer Name\t     Balance");
	printf("\n\t=============================================================\n\t");
 printf("\n\t\t%d\t  \t%s\t     \t%s \t\t%d ",id[i],acN[i],cusN[i],balance[i]); 
printf("\n\t==============================================================\n\t");fflush(stdin);

yesno(yn);if(t==0)find( id,acN,cusN, balance);else mainmenue();}
else 
 if(g!=1){
printf("\n\n\t\t This name is not exist!!\n") ;
	 yesno(yn);if(t==0)find( id,acN,cusN, balance);else mainmenue();}
getch();
	 }
//=======================================================================================================================//
void delet(int id[],char acN[][20],char cusN[][20],int balance[]){int i,num,p,flage=0;
system("cls");system("COLOR E0");
password(pw);
if(w==0){printf("\n\n\n\t\t\t********* Delete Coustmer **********\n\n");
printf("\n\n\t\tEnter any account number in order to delete ");
scanf("%d",&num);
for(i=0;i<size;++i)
if(id[i]==num){--size;flage=1;break;}
for(p=i;p<size;++p)
{id[p]=id[p+1];strcpy(acN[p],acN[p+1]);strcpy(cusN[p],cusN[p+1]);balance[p]=balance[p+1];}
system("cls");
if(flage==1)printf("\n\n\n\t\t\t\2\2\2\2\2\2\2 Delete is done \2\2\2\2\2\2\2\n\n");

else printf("\n\n\t\t  <<<<<Not found account to delete!!>>>>>");
}else {printf("\n\n\t\tError password!!");password(pw);}
yesno(yn);if(t==0)delet( id,acN,cusN, balance);else mainmenue();
flage=0;
getch();
}
//======================================================================================================================//	 
void sort(int id[],char acN[][20],char cusN[][20],int balance[]){system("cls");system("COLOR E0");//enought at the end
int i,j,tempbalance,tempid;char tempaccN[20];char tempcusN[20];
password(pw);
if(w==0){printf("\n\n\n\t\t********* Sort Information **********\n\n");
	for(i=0;i<size-1;++i)
	for(j=i+1;j<size;++j)
	if(id[i]>id[j]){
	tempid=id[i];
	id[i]=id[j];
	id[j]=tempid;
	   strcpy(tempaccN,acN[i]);
	   strcpy(acN[i],acN[j]);
	   strcpy(acN[j],tempcusN);
	       strcpy(tempcusN,cusN[i]);
	       strcpy(cusN[i],cusN[j]);
	       strcpy(cusN[j],tempcusN);
	            tempbalance=balance[i];
	            balance[i]=balance[j];
	            balance[j]=tempbalance;
	}
	system("cls");
	printf("%\n\n\n\n\t\t\t\2\2\2\2\2 Sorting done \2\2\2\2\2\2\n\n");
	printf("\n\n\tAccount Number\t  Account Name\t  CUstomer Name\t     Balance");
	for( i=0;i<size;++i){
	printf("\n\t ===============================================================\n\t");
 printf("\n\t\t%d\t    %s\t          \t%s \t\t%d ",id[i],acN[i],cusN[i],balance[i]); 
printf("\n\t ===============================================================\n\t");

}printf("\n\n\t\t Return to main minue ...");
	getch(); mainmenue();
}else{printf("\n\n\t\tError password!!");password(pw);}

}
//=======================================================================================================================//
void deposit(int id[],char acN[][20],char cusN[][20],int balance[]){system("cls");system("COLOR E0");
password(pw);
if(w==0){printf("\n\n\t********* Account Balance << Deposit Balance >> **********\n\n");

printf("\n Enter Account Number  you want to deposit to: ");//fflush(stdin);
 scanf("%d",&a);
 for( i=0;i<=size;++i){
 if(a==id[i]){
 flag=1;
 
 break;
 }}
 
if(flag==1){
if(balance[i]==0)printf("\n\n\t\t<<<<<< You cant deposit to this account !!! >>>>>>>\n\n");else{

printf ("\n\nYour Current Balance is: %d\n\n",balance[i]);
printf ("\n\n******** Deposit *********\n\n\n");
printf ("Enter Amount to Deposit :");
scanf ("%d",&dep);
balance[i]+=dep;
printf ("\n\nAmount deposited: %d",dep);

printf ("\n\nNew Balance: %d\n\n",balance[i]);}}

else if(flag==0)

 printf("\n\n\t\t<<<<<Not found account!!>>>>>");
}else {printf("\n\n\t\tError password!!");password(pw);fflush(stdin);}
yesno(yn);fflush(stdin);if(t==0){deposit( id,acN,cusN, balance);fflush(stdin);}else mainmenue();
flage=0;flage=0;
getch();
}
///=====================================================================================================================//
void transfer(int id[],char acN[][20],char cusN[][20],int balance[]){system("cls");system("COLOR E0");
password(pw);
if(w==0){int q=0;int Q=0;
 
system("CLS");

 printf("\n\n\t\t********* Transfer Balance **********\n\n");
 printf("\n Enter Account Number You Want To Transfer From It : ");
 scanf("%d",&a);
 for( i=0;i<size;++i){
 if(a==id[i]){
 q++;
break;
 }}
 fflush(stdin);
 if(q==0){
printf("\n\n\t<<<<<<<This account was not found !!!>>>>>>> ");
 yesno(yn);fflush(stdin);if(t==0){transfer( id,acN,cusN, balance);fflush(stdin);}else mainmenue();}

else if(q>0)
{if(balance[i]==0)printf("\n\n\tSorry!!!!You cant transfer from this account !!! ");else{

printf ("\n\nYour Current Balance is: %d\n\n",balance[i]);
printf ("\n\n\n******** Transfer *********\n\n\n");
printf("\n Enter Account Number You Want To Transfer to it: ");
 scanf("%d",&b);
 for( j=0;j<size;++j){
 if(b==id[j]){Q++;
 break;
 }}
if(Q==0)
 printf("\n\n\tSorry!!!!You cant transform to  this account !!! ");
 
else if(Q>0)
{printf ("\n\nEnter Amount to Transfer :");
fflush(stdin);
scanf ("%d",&tran);
balance[j]=balance[j]+tran;
balance[i]=balance[i]-tran;
printf ("\n\nAmount Transfered: %d",tran);
printf ("\n\n The past Balance For The account transferred to: %d\n\n",balance[i]);
printf ("\n\nNew Balance For The account transferred to it: %d\n\n",balance[j]);}}
}


}
else {printf("\n\n\t\tError password!!");password(pw);fflush(stdin);}
yesno(yn);fflush(stdin);if(t==0){transfer( id,acN,cusN, balance);fflush(stdin);}else mainmenue();
getch();
}
///=====================================================================================================================//
void withdraw(int id[],char acN[][20],char cusN[][20],int balance[]){system("cls");system("COLOR E0");
password(pw);
if(w==0){printf("\n\t********* Account Balance << Withdraw Balance >> *********\n\n");

printf("\n Enter Account Number  you want to withdraw from : ");
scanf("%d",&a);
 for( i=0;i<size;++i){
 if(a==id[i]){
 flag=1;
 break;}}
 if(balance[i]==0||flag==0){
printf("\n\n\n\t\t<<<<<< Not found Account >>>>>>>\n\n");}

else {

printf ("\n\nYour Current Balance is: %d\n\n",balance[i]);
printf ("\n\n******** Withdraw *********\n\n\n");
printf ("Enter Amount to Withdraw:");fflush(stdin);
scanf ("%d",&with);
balance[i]-=with;
printf ("\n\nAmount withdraw: %d",with);
printf ("\n\nYour new Balance is: %d\n\n",balance[i]);
if((balance[i]<0)){printf("\n\n\t\tSorry!!!!You cant withdraw %d from this account !!! ",with);
balance[i]+=with;
}
else if(balance[i]==0){balance[i]+=1;printf("\n\n\tOur bank will convert your new balance from 0 to 1 \2\2\2");
}
}



}else {printf("\n\n\t\tError password!!");password(pw);}

yesno(yn);if(t==0)withdraw( id,acN,cusN, balance);else mainmenue();flage=0;flage=0;
getch();
}
///=====================================================================================================================//
			
	
	
