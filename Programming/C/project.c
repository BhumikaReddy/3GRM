#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <fcntl.h> // for open
#include <unistd.h>// for close

//#include<windows.h>
int main_exit;

void mu();

struct date
    {
        int day,month,year;
    };
struct room
    {
        char name[60];
        char address[100];
        double phone;
        struct date login;
        struct date dob;
        int rr1;
        int fb1,lb1,tb1;
    }add;

/*animations*/
void fordelay(int j)
{   
    int i,k;
    for(i=0;i<j;i++)
       k=i;
}
/////////////////////////////////registration////////////////////////////////////////
void reg()
{
    //system("color 3");

    FILE *ptr;
    ptr=fopen("record.dat","a+");
    printf("enter name:");
    scanf("%s",add.name);
    printf("enter address:-");
    scanf("%s",add.address);
    printf("enter phone number:");
    scanf("%lf",&add.phone);
    printf("enter date of birth(dd/mm/yy):");
    scanf("%d/%d/%d",&add.dob.day,&add.dob.month,&add.dob.year);
    printf("enter the date of checkin (dd/mm/yy):");
    scanf("%d/%d/%d",&add.login.day,&add.login.month,&add.login.year);
    fprintf(ptr,"%s %s %lf %d/%d/%d %d/%d/%d",add.name,add.address,add.phone,add.dob.day,add.dob.month,add.dob.year,add.login.day,add.login.month,add.login.year);
    //system("cls");
    printf("\n");
    fclose(ptr);
    printf("\nregistered  successfully!");
    
    
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    //system("cls");
    if (main_exit==1)
        mu();
    else if(main_exit==0)
            close(0);
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}
/////////////////////////////room rent//////////////////////////////////////////////
int rr()
{
    //system("color 4");

    int r,i12,j;
    printf("\n------ type of rooms available-------\n\n");
    printf("\n1.single:A room assigned to one person\n ");
    printf("2.double:A room assigned to two people\n");
    printf("3.triple:A room assigned to three people\n");
    printf("4.quad:A room assigned to four people\n");
    printf("5.queen:A room with queen-sized bed\n");
    printf("6.king:A room with king-sized bed\n");
    
        
        
    printf("\n room rent per day\n");
    printf("type 1---> rs 500\n");
    printf("type 2---> rs 600\n");
    printf("type 3---> rs 700\n");
    printf("type 4---> rs 800\n");
    printf("type 5---> rs 750\n");
    printf("type 6---> rs 750\n");
    printf("\nenter your choice:");
    scanf("%d",&r);
    printf("\n");
    printf("enter number of days of stay:");
    scanf("%d",&i12);
    if (r==1)
        {
            printf("you have opted single \n ");
            add.rr1=500*i12;
            printf("your room rent is %d",add.rr1);
            printf("\n");
        }
    
        else if (r==2)
        {
            printf("you have opted double");
            add.rr1=600*i12;
            printf("your room rent is %d",add.rr1);
            printf("\n");
        }
    
        else if (r==3)
        {
            printf("you have opted triple ");
            add.rr1=700*i12;
            printf("your room rent is %d",add.rr1);
            printf("\n");
        }
    
        else if (r==4)
        {
            printf("you have opted quad");
            add.rr1=800*i12;
            printf("your room rent is %d",add.rr1);
            printf("\n");
        }
    
        else if (r==5)
        {
            printf("you have opted queen");
            add.rr1=750*i12;
            printf("your room rent is %d",add.rr1);
            printf("\n");
        }
    
        else if (r==6)
        {
            printf("you have opted king");
            add.rr1=750*i12;
            printf("your room rent is %d",add.rr1);
            printf("\n");
        }
        
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
        //system("cls");
    if (main_exit==1)
        mu();
    else if(main_exit==0)
            close(0);
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }

}
////////////////////////restaurant bill///////////////////////////
int resta()
{
        //system("cls");
        //system("color 5");
    int i,j,k,l;
    while(1)
        {
            printf("\n1.Appetizers\n2.Meaty Treat\n3.Dessert\n4.beverages\n5.exit");
            printf("\nenter your choice:");
            scanf("%d",&i);
            if (i==1)
                {
                    printf("you have opted appetizers");
                    printf("enter quantity:");
                    scanf("%d",&j);
                    add.fb1=add.fb1+100*j;

                }
            
            if (i==2)
                {
                    printf("you have opted meaty treat");
                    printf("enter quantity:");
                    scanf("%d",&j);
                    add.fb1=add.fb1+200*j;

                }
            
            if (i==3)
                {
                    printf("you have opted meaty deserts");
                    printf("enter quantity:");
                    scanf("%d",&j);
                    add.fb1=add.fb1+100*j;
                }
            
            if (i==4)
                {
                    printf("you have opted meaty beverages");
                    printf("enter quantity:");
                    scanf("%d",&j);
                    add.fb1=add.fb1+200*j;
                }
            
            if (i==5)
                {
                    printf("your restaurant bill is :%d",add.fb1);
                    break;
                }
        }


    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
        //system("cls");
    if (main_exit==1)
        mu();
    else if(main_exit==0)
            close(0);
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }

}
//////////////////////////////laundary bill/////////////////////////////////
int lau()
{
    int i,j;
        //system("color 6");
    while(1)
        {
            printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 laundary service \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
            printf("\n1.shirt  100\n2.sock  20\n3.blazer  200\n3.saree 150\n4.pant 150\n5.exit");
            printf("enter choice");
            scanf("%d",&i);
            
            if (i==1)
                {
                    printf("you have opted shirts\n");
                    printf("enter quantity:");
                    scanf("%d",&j);
                    add.lb1=add.lb1+100*j;
                }
            
            if (i==2)
                {
                    printf("you have opted socks");
                    printf("enter quanity:");
                    scanf("%d",&j);
                    add.lb1=add.lb1+20*j;
                }
            
            if (i==3)
                {
                    printf("you have opted blazer");
                    printf("enter quanity:");
                    scanf("%d",&j);
                    add.lb1=add.lb1+200*j;
                }
            
            if (i==4)
                {
                    printf("you have opted pant");
                    printf("enter quanity:");
                    scanf("%d",&j);
                    add.lb1=add.lb1+150*j;
                }
            
            if (i==5)
                {
                    printf("your laundary bill is :%d",add.lb1);
                    printf("thank you");
                    break;
                }
        }

    
    


    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
        //system("cls");
    if (main_exit==1)
        mu();
    else if(main_exit==0)
            close(0);
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }

}
 
 //////////////////////////customer detail//////////////////////////
 void cd()

 {
     //system("color 10");
    
     FILE *view;
     view=fopen("record.dat","r");
     int test=0;
        //system("cls");
     printf("\n\t\tNAME\t\tADDRESS\t\t\tPHONE\t\tCHECKIN DATE\t\n");
     while(fscanf(view,"%s %s %lf %d/%d/%d %d/%d/%d %d ",add.name,add.address,&add.phone,&add.dob.day,&add.dob.month,&add.dob.year,&add.login.day,&add.login.month,&add.login.year,&add.tb1)!=EOF)
        {
            printf("\n\t%13s \t\t%6s \t\t\t%.0lf \t\t%4d/%d/%d \t\t",add.name,add.address,add.phone,add.login.day,add.login.month,add.login.year);
            test++;
        }
     

        fclose(view);
        if (test==0)
            {
                //system("cls");
                printf("\nNO RECORDS!!\n");
            }

        view_list_invalid:
        printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
            //system("cls");
        if (main_exit==1)
            mu();
        else if(main_exit==0)
            close(0);
        else
            {
                printf("\nInvalid!\a");
                goto view_list_invalid;
            }
 }
 //////////////////////////////total bill//////////////////////////////////////////
 void tb()
    {
        int choice,test=0;
        FILE *old,*newrec;
        old=fopen("record.dat","r");
        newrec=fopen("new.dat","w");
        int i,j,k;
        i=add.rr1+add.fb1+add.lb1;
        printf("\nyour hotel bill is:%d",i);
        j=i*0.1;
        printf("\ngst:%d",j);
        printf("\nservice charges:200");
        k=i+200+j;
        add.tb1=k;
        printf("\nyour total bill is:%d",add.tb1);
        while(fscanf(old,"%s %s %lf %d/%d/%d %d/%d/%d %d",add.name,add.address,&add.phone,&add.dob.day,&add.dob.month,&add.dob.year,&add.login.day,&add.login.month,&add.login.year,&add.tb1)!=EOF)
            {
    
                fprintf(newrec,"%s %s %lf %d/%d/%d %d/%d/%d %d",add.name,add.address,add.phone,add.dob.day,add.dob.month,add.dob.year,add.login.day,add.login.month,add.login.year,add.tb1);
            }
        fclose(old);
        fclose(newrec);
        remove("record.dat");
        rename("new.dat","record.dat");




        add_invalid:
        printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        // system("cls");
        if (main_exit==1)
            mu();
        else if(main_exit==0)
            close(0);
        else
            {
                printf("\nInvalid!\a");
                goto add_invalid;
            }
    
} 
//////////////////////////exit//////////////////////////////////////
void clo()
    {
            //system("color 9");

        printf("thank you\n");
        close(0);
    }
////////////////////////////main menu/////////////////////////////////////////
void mu()
    {
        int choice,x;
            //system("color 2");

   
        printf("1.enter customer detail\n2.room rent\n3.restaurant bill\n4.laundry bill\n5.total bill\n6.record \n7.exit");
        printf("\nenter your choice:-");
        scanf("%d",&choice);
        printf("\n");
        switch (choice)
            {
                case 1:reg();
                        break;
                case 2:rr();
                        break;
                case 3:resta();
                        break;
                case 4:lau();
                        break;
                case 5:tb();
                        break;
                case 6:cd();
                        break;
                case 7:clo();
                        break;
        
                default:printf("invalid option\n");
                printf("\nenter 1 to try again 0 to exit:");
                scanf("%d",&x);
                    if (x==1)
                        mu();
                    else if(x==0)
                        close(0);
            }

    }
///////////////////////////////////////main//////////////////////////////////////
int main()
{
        //system("color 1");

        //system("cls");
    int i=0;
    int x;
    int j;
    char pass[10];
    char password[10]="pro";
    char d[25]="Password Protected";
    for(j=0;j<20;j++)
        {
            sleep(50);
            printf("*");
        }
    for(j=0;j<20;j++)
        {
            sleep(50);
            printf("%c",d[j]);
        }
    for(j=0;j<20;j++)
        {
            sleep(50);
            printf("*");
        }
    printf("\n\t\t\nenter password:");
    scanf("%s",pass);
    if (strcmp(pass,password)==0)
        {
            printf("\n\npassword matched\nLOADING");
            for(i=0;i<=6;i++)
                {
                    fordelay(10000000);
                    printf(".");
                }
                //system("cls");

            printf("\n\n\t\t\t\t HOTEL MANAGEMENT SYSTEM");
            printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
            mu();
        
        }
    
    else
        {
            printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {
                            //system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                        //system("cls");
                    close(0);
                    }
            else
                    {
                    printf("\nInvalid!");
                    fordelay(1000000000);
                        //system("cls");
                    goto login_try;
                    }

        }
    return 0;
} 

