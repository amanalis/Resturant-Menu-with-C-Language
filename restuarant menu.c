#include<stdio.h>
#include<stdlib.h>
struct info
{
  char code[10];
  char name[20];
  char email[200];
  char mob[20];
}i;
void dine(void);
void delivery(void);
void About(void);
void bio(void);
void adr(void);
void menu(void);
void star(void);
void mainc(void);
void desert(void);
void beverages(void);
void bill(void);
void reset(void);
void treset(void);
void keys(void);
void sign(void);
void login(void);
void deals(void);
char name[100],addr[100];
int total,qua,choice,key,num,wait;
void main(void){
	int chk;
	system("COLOR 4F");
	system("cls");
	printf("\t\t\t==================================\n");
	printf("\t\t\t|| WELCOME TO LAZEEZ PAKWAAN :D ||\n");
	printf("\t\t\t==================================\n");
	printf("Enter your preference =>\n");
	printf("\t\t\t 1)Dine-In.\n");
	printf("\t\t\t 2)Delivery.\n");
	printf("\t\t\t 3)About us.\n");
	printf("\t\t\t 4)Exit\n");
	scanf("%d",&chk);
	switch(chk){
		case 1:{
			printf("You choose Dine-In\n");
			printf("\n");
			printf("\t\t\t 1)Sign-Up for Exclusive Deals:\n");
	        printf("\t\t\t 2)Login to Get Exclusive Deals:\n");
	        printf("\t\t\t 3)Normal Menu:\n");
	        scanf("%d",&chk);
	        switch(chk){
	     	case 1:{
		    	printf("SIGN-UP\n");
		    	sign();
		    	login();
		    	break;
	    	}
			case 2:{
		    	printf("LOGIN\n");
		    	login();
		    	break;
	     	}  
			case 3:{
				menu();
				break;
			}	
			
			default:{
				printf("Wrong Input.\n");
				keys();
				break;
			}
	    	}
		    break;
	 	}
		case 2:{
			printf("You choose Delivery\n");
			printf("\n");
			adr();
			printf("Your Address: %s\n",addr);
			printf("\n");
			printf("\n");
			menu();
			break;
		}
		case 3:{
			printf("============\n");
			printf("||About Us||\n");
			printf("============\n");
			About();
			break;
		}
		case 4:{
			printf("\t\t\t*****************\n");
			printf("\t\t\t**             **\n");
			printf("\t\t\t**Thank You For**\n");
			printf("\t\t\t** using  our  **\n");
			printf("\t\t\t**   Service   **\n");
			printf("\t\t\t**             **\n");
			printf("\t\t\t*****************\n");
			break;
		}
		default:{
			printf("Wrong Input\n");
		    keys();
			break;
		}
	}	
}
void menu(void){
	int chk;
	
	printf("What would you like to have?\n");
	printf("\n");
	printf("1)Starters\n");
	printf("2)Main Course\n");
	printf("3)Desert\n");
	printf("4)Beverages \n");
	printf("5)Back to home screen and reset?\n");
	scanf("%d",&chk);
	switch(chk){
		case 1:{
			printf("\n");
			printf("\t\t\t============\n");
			printf("\t\t\t||Starters||\n");
			printf("\t\t\t============\n");
			star();			
			break;
		}
		case 2:{
			printf("\n");
			printf("\t\t\t============\n");
			printf("\t\t\t||Main Course||\n");
			printf("\t\t\t============\n");
			mainc();
			break;
		}
		case 3:{
			printf("\n");
			printf("\t\t\t============\n");
			printf("\t\t\t||Deserts||\n");
			printf("\t\t\t============\n");
			desert();
			break;
		}
		case 4:{
			printf("\n");
			printf("\t\t\t============\n");
			printf("\t\t\t||Beverages||\n");
			printf("\t\t\t============\n");
			beverages();
			break;
		}
		case 5:{
			reset();	
	        main();
			break;
		}
		default:{
			printf("Wrong Input");
			keys();
			break;
		}		
	}
}
void star(void){
	int st;
	printf("\n");
    printf("1)Finger Fish and Fries                200rs\n");
    printf("2)Paneer Tikka                         300rs\n");
	printf("3)Indian Onion Salad                   200rs\n");
	printf("4)Garlic Bread                         250rs\n");
	printf("5)Back to menu\n");
	scanf("%d",&st);
	switch(st){
		case 1:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+200*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total \t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}
			break;
		}
		case 2:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+300*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}	
			break;
		}
		case 3:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+200*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}		
			break;
		}
		case 4:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+250*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}	
			break;
		}
		case 5:{
			menu();
			break;
		}
		default:{
			printf("Wrong input.");
		    keys();
			break;
		}
	}
}
void mainc(void){
int st;
	printf("\n");
    printf("1)Biryani                   400rs\n");
    printf("2)Tandoori Chicken          1200rs\n");
	printf("3)Malai Kofta               800rs\n");
	printf("4)Chicken Kerhai            1000rs\n");
	printf("5)Back to menu\n");
	scanf("%d",&st);
	switch(st){
		case 1:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+400*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}
			break;
		}
		case 2:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+1200*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}	
			break;
		}
		case 3:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+800*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}		
			break;
		}
		case 4:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+1000*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}	
			break;
		}
		case 5:{
			menu();
			break;
		}
		default:{
			printf("Wrong input.");
			keys();
			break;
		}
	}	
}
void desert(void){
int st;
	printf("\n");
    printf("1)Mint Oreo Cake                                 400rs\n");
    printf("2)Brownies                                       400rs\n");
	printf("3)Molten Chocolate Crackle Pie                   550rs\n");
	printf("4)Gulab Jamun                                    300rs\n");
	printf("5)Back to menu\n");
	scanf("%d",&st);
	switch(st){
		case 1:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+400*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}
			break;
		}
		case 2:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+400*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}	
			break;
		}
		case 3:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+550*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}		
			break;
		}
		case 4:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+300*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}	
			break;
		}
		case 5:{
			menu();
			break;
		}
		default:{
			printf("Wrong input.");
		  	keys();
			break;
		}
	}	
}
void beverages(void){
int st;
	printf("\n");
    printf("1)Lamonade                       100rs\n");
    printf("2)Coffee                         200rs\n");
	printf("3)Hot Choclate                   250rs\n");
	printf("4)Cold Drinks                    80rs\n");
	printf("5)Back to menu\n");
	scanf("%d",&st);
	switch(st){
		case 1:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+100*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}
			break;
		}
		case 2:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+200*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}	
			break;
		}
		case 3:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+250*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}		
			break;
		}
		case 4:{
			printf("Quantity=",qua);
			scanf("%d",&qua);
			total=total+80*(qua);
			printf("Enter your prference:\n");
			printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
			scanf("%d",&choice);
			if(choice==1){
				menu();
			}
			else if(choice==2){
				bill();
			}
			else if(choice==3){
				reset();
			}	
			break;
		}
		case 5:{
			menu();
			break;
		}
		default:{
			printf("Wrong input.");
 			keys();
			break;
		}
	}	
}
void bill(void){
	float gtotal,tax;
	tax=total*0.16;
	bio();
	printf("\n\n");
	gtotal=total+tax;
	printf("\t\t\tTotal Amount=%d\n\n\n",total);
	printf("\t\t\tGST=%.2f\n\n\n",tax);
	printf("\t\t\tTotal Amount to pay:%.2f\n\n\n",gtotal);
	printf("%s Your Order would be ready in 40 minutes,Pay your bill at counter/delivery guy.\n\n\n",name);
	printf("\t\t\t*****************\n");
	printf("\t\t\t**             **\n");
	printf("\t\t\t**Thank You For**\n");
	printf("\t\t\t**for using our**\n");
	printf("\t\t\t**   Service   **\n");
	printf("\t\t\t**             **\n");
	printf("\t\t\t*****************\n");	
}
void About(void){
	system("cls");
	printf("People behind the project:\n\n\n  -->Aman-2012375\n\n  -->Hasnain Ali-2012384\n\n  -->Ali Mohammad-2012389\n\n ");
	keys();
}
void reset(void){
	total=total*0;
	main();
}
void treset(void){
	total=total*0;
	deals();
}
void bio(void){
	printf("Enter your name:");
	scanf(" %[^\n]%*c",name);
	printf("Enter your Contact Number:");
	scanf("%d",&num);
}
void adr(void){
	printf("Enter your address:\n");
	scanf(" %[^\n]%*c",addr);
}
void keys(void){
	int key;
	printf("\nPress any Number key:\n");
    scanf("%d",&key);
    if(key>=0 && key<=999){
    	main();
	}
}
void sign(void){
	FILE *fp;
	struct info;
	printf("Enter Code(alpha-numeric):");
	scanf(" %s",&i.code);
	printf("Enter name(first name only):");
	scanf(" %s",&i.name);
	printf("Email address:");
	scanf(" %s",&i.email);
	printf("Enter mobile number:");
	fflush(stdin);
	gets(i.mob);
	
	fp=fopen("signup.txt","a");
	if(fp==NULL){
		printf("File not found");
		for(wait=0;wait<=100000;wait++)
       	{
	   	printf("\rIn progress : %d",wait/1000);
       	}		
	}
	else{
		fprintf(fp,"%s %s %s %s \n",i.code,i.name,i.email,i.mob);
		printf("Sign-up Confirm.");
	}
	printf("\n");
	fclose(fp);
}
void login(void){
	int wait;
	struct info;
	FILE *fp;
	
	char ch[5];
	printf("Enter code:");
	scanf(" %s",&ch);
	
	fp=fopen("signup.txt","r");
	if(fp==NULL){
		printf("File not found");
		for(wait=0;wait<=100000;wait++)
       	{
	   	printf("\rIn progress : %d",wait/1000);
       	}
		main();
	}
	else{
		while(getc(fp) != EOF){
			fscanf(fp,"%s %s %s %s",&i.code,&i.name,&i.email,&i.mob);
			if(strcmp(ch,i.code)==0){
				printf("%s %s %s %s",i.code,i.name,i.email,i.mob);
				printf("\nRecord Found\n");
				printf("Name: %s\n",i.name);
				printf("\n");
					for(wait=0;wait<=100000;wait++)
             	{
	          	printf("\rIn progress : %d",wait/1000);
             	}
            	printf("\n\n");
				deals();
				break;
			}	
		}
	}
	fclose(fp);
	printf("Record not Found.\n");
	keys();
}
void deals(void){
	int chk,key;
	system("cls");
	printf("\t\t\t=========\n");
    printf("\t\t\t||DEALS||\n");
	printf("\t\t\t=========\n");
	printf("Deal 1: 1 finger fish and fries, 2 karhai , and 1 gulab jamun=                                          2500rs\n");
	printf("Deal 2: 2 Indian Onion Salad, 1Biryani, 2Malai Kofta and 1 Molten Chocolate Crackle Pie=                2600rs\n");
	printf("Deal 3: 2Garlic Bread, 1Paneer Tikka, 1Tandoori Chicken=                                                2000rs\n");
	printf("Deal 4: 2Malai Kofta, 1Tandoori Chicken,3Brownies, 3Cold Drink=                                         4000rs\n");
	printf("Deal 5: Order From normal menu\n");
	scanf("%d",&chk);
	if(chk == 1){
		printf("Quantity=",qua);
		scanf("%d",&qua);
		total=total+2500*(qua);
		printf("Enter your prference:\n");
		printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
		scanf("%d",&choice);
		if(choice==1){
			deals();
		}
		else if(choice==2){
			bill();
		}
		else if(choice==3){
			treset();
		}			
	}
	else if(chk == 2){
		printf("Quantity=",qua);
		scanf("%d",&qua);
		total=total+2600*(qua);
		printf("Enter your prference:\n");
		printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
		scanf("%d",&choice);
		if(choice==1){
			deals();
		}
		else if(choice==2){
			bill();
		}
		else if(choice==3){
			treset();
		}	
		
	}
	else if(chk == 3){
		printf("Quantity=",qua);
		scanf("%d",&qua);
		total=total+2000*(qua);
		printf("Enter your prference:\n");
		printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
		scanf("%d",&choice);
		if(choice==1){
			deals();
		}
		else if(choice==2){
			bill();
		}
		else if(choice==3){
			treset();
		}	
	}
	else if(chk == 4){
		printf("Quantity=",qua);
		scanf("%d",&qua);
		total=total+4000*(qua);
		printf("Enter your prference:\n");
		printf("1) Order Again \t\t\t\t2)Get your total\t\t\t3)reset your order\n");
		scanf("%d",&choice);
		if(choice==1){
			deals();
		}
		else if(choice==2){
			bill();
		}
		else if(choice==3){
			treset();
		}		
	}
	else if(chk == 5){
		menu();
	}
	else{
		printf("wrong input\n");
		printf("\nPress any Number key:\n");
        scanf("%d",&key);
        if(key>=0 && key<=999){
    	deals();
	     }	
	}
}
