#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
struct login{
    char first_name[20];
    char last_name[20];
    char username[20];
    char password[20];
};

struct alogin{
    char afirst_name[20];
    char alast_name[20];
    char ausername[20];
    char apassword[20];
};

struct offer
{
    int oprice;
    char name[30],/*shortcode[20],*/day[20];

};

struct payments
{
    long ph,price,mn;
    char pass[30];
}pay;
/************************************************* Login Admin ********************************************/

aregiste (){
    FILE *log;
    log=fopen("Alogin.dll","w");
    struct alogin l;
    printf("\n\n\n\t\t\t **************** Enter your information **************** \n");
    printf("\n\t Enter your first name : ");
    scanf("%s",l.afirst_name);
    printf("\n\tEnter your last name : ");
    scanf("%s",l.alast_name);
    printf("\n\tEnter your username : ");
    scanf("%s",l.ausername);
    printf("\n\tEnter your password : ");
    scanf("%s",l.apassword);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\n\n \t\t*****Registration Successful***** \t\t\nNow login with your username and password : ");
    printf("\t\t\n\n press any key to continue....... ");
    getch();
    system("CLS");
    alogin();
}
alogin(){
    char ausername [20],apassword[20];
    FILE *log;
    log =fopen("Alogin.dll","r");
    struct alogin l;
    printf("\n\n\n\t\t\t ****************Enter your Username & Password*************");
    printf("\n\n\t\t\tUsername:");
    scanf("%s",&ausername);
    printf("\n\n\t\t\tPassword:");
    scanf("%s",&apassword);

     while(fread(&l,sizeof(l),1,log)){
        if (strcmp(ausername,l.ausername)==0 && strcmp (apassword,l.apassword)==0)
        {
             printf("\n\n\n\t\t\t\t **************** Welcame  ****************\n");
             printf("\t\t\t\t\t****** *** ***** ***** ***** **** ****** \n\n");
              printf("\t\t\t\t****** **** Admin DashBoard **** ****** \n\n");
             printf("\t\t\t\t****** **** Enter What you Want **** ****** \n\n");
             printf("\t\t\t\t\t\t\t1. ADMIN SECTION--> \n");
             printf("\t\t\t\t\t\t\t2. CUSTOMER SECTION--> \n");
             printf("\t\t\t\t\t\t\t3. Exit--> \n\n");
             printf("\t\t\t\t\t\t\tEnter Your Choice --->");
             int ch;
                scanf("%d", &ch);
                switch(ch)
                {
                case 1:
                    ADMIN_SECTION();
                    break;
                case 2:
                    CUSTOMER_SECTION();
                    break;
                case 3:
                    Exit();
                    break;
                default:
                    printf("Wrong Input\n");

                }

        }

        else{
          printf("\t\t\tPlease Enter Correct UserID And Password\n");
        }
     }
     fclose(log);

}

//*************************User Login

registe (){
    FILE *log;
    log=fopen("Ulogin.dll","w");
    struct login l;
    printf("\n\n\n\t\t\t **************** Enter your information **************** \n");
    printf("\n\t Enter your first name : ");
    scanf("%s",l.first_name);
    printf("\n\tEnter your last name : ");
    scanf("%s",l.last_name);
    printf("\n\tEnter your username : ");
    scanf("%s",l.username);
    printf("\n\tEnter your password : ");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\n\n \t\t*****Registration Successful***** \t\t\nNow login with your username and password : ");
    printf("\t\t\n\n press any key to continue....... ");
    getch();
    system("CLS");
    login();
}
login(){
    char username [20],password[20];
    FILE *log;
    log =fopen("Ulogin.dll","r");
    struct login l;
    printf("\n\n\n\t\t\t ****************Enter your Username & Password*************");
    printf("\n\n\t\t\tUsername:");
    scanf("%s",&username);
    printf("\n\n\t\t\tPassword:");
    scanf("%s",&password);

     while(fread(&l,sizeof(l),1,log)){
        if (strcmp(username,l.username)==0 && strcmp (password,l.password)==0)
        {
             printf("\n\n\n\t\t\t\t **************** Successful Login ****************\n");
             printf("\t\t\t\t\t****** *** ***** ***** ***** **** ****** \n\n");
              printf("\t\t\t\t****** **** User DashBoard **** ****** \n\n");
             printf("\t\t\t\t****** **** Enter What you Want **** ****** \n\n");
             printf("\t\t\t\t\t\t\t1. CUSTOMER SECTION--> \n");
             printf("\t\t\t\t\t\t\t2. Exit--> \n\n");
             printf("\t\t\t\t\t\t\tEnter Your Choice --->");
             int ch;
                scanf("%d", &ch);
                switch(ch)
                {
                case 1:
                    CUSTOMER_SECTION();
                    break;
                case 2:
                    Exit();
                    break;
                default:
                    printf("Wrong Input\n");

                }

        }

        else{
          printf("\t\t\tPlease Enter Correct UserID And Password\n");
        }
     }
     fclose(log);

}

//************************User Login End

/******************************************** Login End ***********************************************/

//Admin SECTION StartL--->

int ADMIN_SECTION()
{
             printf("\t\t\t\t\t\t\t1. Add Offer--> \n");
             printf("\t\t\t\t\t\t\t2. Update Offer--> \n");
             printf("\t\t\t\t\t\t\t3. Delete Offer--> \n");
             printf("\t\t\t\t\t\t\t4. Recharge--> \n");
             printf("\t\t\t\t\t\t\t5. Exit--> \n\n");
             printf("\t\t\t\t\t\t\tEnter Your Choice --->");
             int ch;
                scanf("%d", &ch);
                switch(ch)
                {
                case 1:
                    AddOffer();
                    break;
                case 2:
                    UpdateOffer();
                    break;
                case 3:
                    DeleteOffer();
                    break;
                case 4:
                   Recharge();
                   break;
                case 5:
                    Exit();
                    break;
                default:
                    printf("Wrong Input\n");

                }

}

int AddOffer()
{

    {
    char name[30],day[20];
    FILE *fp;
    int oprice;

    //float intake, section;
    fp = fopen("offer.dat", "w+");/*  open for writing */
    if (fp == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("\t\t\tOffer Price:");
    scanf("%d", &oprice);
    fprintf(fp, "Offer Price = %d\n", oprice);
    printf("\t\t\tEnter Data pack Name:");
    scanf("%s", name);
    fprintf(fp, "Name= %s\n", name);
    printf("\t\t\tEnter Validity Day :");
    scanf("%s", &day);
    fprintf(fp, "Validity = %s\n", day);

    fclose(fp);

    FILE *ft;
   char buff[255];//creating char array to store data of file
   ft = fopen("offer.dat", "r");
   while(fscanf(ft, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(ft);
}
   int ch;
   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
     ADMIN_SECTION();
    break;
}
}
int UpdateOffer()
{


     char name[30],day[20];
    FILE *fp;
    //int oprice;

     FILE *fp1, *fp2;
    struct offer O1, O2;
    int oprice;
    printf("Enter the Offer Price you want to update:");
    scanf("%d",&oprice);
    fp1=fopen("offer.dat","r+");
    fp2=fopen("copy.dat","a+");
    if(fp1==NULL)
    {
        fprintf(stderr,"Error opening the file");
        exit(1);
    }
    while(fread(&O1,sizeof(struct offer),1,fp1))
    {
        if(O1.oprice!=oprice)
        {
            fwrite(&O1,sizeof(struct offer),1,fp2);
        }
    }
    printf("\t\t\tOffer Price:");
    scanf("%d", &oprice);
    fprintf(fp2, "Offer Price = %d\n", oprice);
    printf("\t\t\tEnter Data pack Name:");
    scanf("%s", name);
    fprintf(fp2, "Name= %s\n", name);
    printf("\t\t\tEnter Validity Day :");
    scanf("%s", &day);
    fprintf(fp2, "Validity = %s\n", day);
    fclose(fp1);
    fclose(fp2);
    remove("offer.dat");
    rename("copy.dat","offer.dat");
    printf("Record updated successfully");

    int ch;
   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
     ADMIN_SECTION();
    break;
}
    return 0;

}




int DeleteOffer()
{

    FILE *fp1, *fp2;
    struct offer O1;
    int oprice;
    printf("Enter the Data price you want to delete:");
    scanf("%d",&oprice);
    fp1=fopen("offer.dat","r+");
    fp2=fopen("copy.dat","a+");
    if(fp1==NULL)
    {
        fprintf(stderr,"can't open file");
        exit(0);
    }
    while(fread(&O1,sizeof(struct offer),1,fp1))
    {
        if(O1.oprice!=oprice)
        {
            fwrite(&O1,sizeof(struct offer),1,fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove("offer.dat");
    rename("copy.dat","offer.dat");
    printf("Record deleted successfully");
    int ch;
   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
     ADMIN_SECTION();
    break;
}
    return 0;

}

int Exit()
{

}


//*******************CUSTOMER_SECTION
int CUSTOMER_SECTION()
{
             printf("\t\t\t\t\t\t\t1. Data Offer--> \n");
             printf("\t\t\t\t\t\t\t2. Minute Offer--> \n");
             printf("\t\t\t\t\t\t\t3. SMS Offer--> \n");
             printf("\t\t\t\t\t\t\t4. Balance--> \n");
             printf("\t\t\t\t\t\t\t5. Mix Bundill--> \n");
             printf("\t\t\t\t\t\t\t6. Today Offer--> \n");
             printf("\t\t\t\t\t\t\t7. Offer For Special character--> \n");
             printf("\t\t\t\t\t\t\t8. Exit--> \n");
             printf("\t\t\t\t\t\t\tEnter Your Choice --->");

              int ch;

             scanf("%d", &ch);
            switch(ch)
            {

                case 1:
                 DataOffer();
                break;
             case 2:
                 MinuteOffer();
                break;
             case 3:
                 SMSOffer();
                break;
             case 4:
                 Balance();
                break;
             case 5:
                 MixBundill();
                break;
             case 6:
                 TodayOffer();
                break;
             case 7:
                 Specialcharacter();
                break;
             case 8:
                 Exit();
                break;

            }

}

int DataOffer()
{

             printf("1.Weekly\n");
             printf("2.Monthly\n");
             printf("\n\t\t\t Select One:");


             int c;

             scanf("%d",&c);
             if(c==1)
             {
                 printf("\n\t\t\t***Quantity||Price||Validity||***\n");
                 printf("\n\t\t\t***1. 1GB  || 27tk|| 7 Day  ||***\n");
                 printf("\n\t\t\t***2. 400MB|| 17tk|| 3 Day  ||***\n");
                 printf("\n\t\t\t***3. 250MB|| 10tk|| 1 Day  ||***\n");
                 printf("\t\t\tFor Buy Now Select One:");
                 int b;
                scanf("%d",&b);
             if(b==1)
             {
                 printf("We Receive Your Request\n\t 1GB,27tk,Valid 7 Day\n\tThank You! ");
             }
            else if(b==2)
            {
                printf("We Receive Your Request\n\t 400MB,17tk,Valid 3 Day\n\tThank You! ");
            }
            else if(b==3)
            {
                printf("We Receive Your Request\n\t 250MB,10tk,Valid 1 Day\n\tThank You! ");
            }
             }
             else if(c==2)
            {
                 printf("\n\t\t\t***Quantity||Price ||Validity  ||***\n");
                 printf("\n\t\t\t***1. 5GB  || 277tk|| 1 Month  ||***\n");
                 printf("\n\t\t\t***2. 3GB  || 150tk|| 1 Month  ||***\n");
                 printf("\n\t\t\t***3. 1GB  || 99tk|| 1 Month   ||***\n");
                  printf("\t\t\tFor Buy Now Select One:");
                 int b;
             scanf("%d",&b);
             if(b==1)
             {
                 printf("We Receive Your Request\n\t 5GB,277tk,Valid 1 Month\n\tThank You! \n");
             }
            else if(b==2)
            {
                printf("We Receive Your Request\n\t 3GB,150tk,Valid 1 Month\n\tThank You! \n");
            }
            else if(b==3)
            {
                printf("We Receive Your Request\n\t 1GB,99tk,Valid  1 Month\n\tThank You! \n");
            }
            }

            else
                printf("Invalid Code");
              int ch;
   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    CUSTOMER_SECTION();
    break;
}

}

int MinuteOffer()
{


                 printf("\n\t\t\t***Quantity||Price||Validity||***\n");
                 printf("\n\t\t\t***1. 100M  || 27tk|| 7 Day  ||***\n");
                 printf("\n\t\t\t***2. 25M   || 5tk || 2 Hours||***\n");
                 printf("\n\t\t\t***3. 80M   || 10tk|| 1 Day  ||***\n");
                 printf("\t\t\tFor Buy Now Select One:");

             int c;
             scanf("%d",&c);

             if(c==1)
             {
                printf("We Receive Your Request\n\t 100 Munite,27 tk,Valid  7 Day \n\tThank You! \n");

             }
            else if (c==2)
            {
                 printf("We Receive Your Request\n\t 25 Munite,5 tk,Valid  2 Hours \n\tThank You! \n");
            }
            else if(c==3)
            {
                 printf("We Receive Your Request\n\t 80 Munite,10 tk,Valid  1 Day \n\tThank You! \n");
            }
            else
                printf("Invalid Code");
            int ch;
       printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
       scanf("%d", &ch);
      switch(ch)
{

    case 0:
    CUSTOMER_SECTION();
    break;
}

}
int SMSOffer()
{


                 printf("\n\t\t\t***Quantity||Price||Validity||***\n");
                 printf("\n\t\t\t***1. 100SMS  || 27tk|| 7 Day  ||***\n");
                 printf("\n\t\t\t***2. 25SMS   || 5tk || 1 Day  ||***\n");
                 printf("\n\t\t\t***3. 80SMS   || 10tk|| 1 Day  ||***\n");
                 printf("\t\t\tFor Buy Now Select One:");

             int c;
             scanf("%d",&c);

             if(c==1)
             {
                printf("We Receive Your Request\n\t 100 SMS,27 tk,Valid  7 Day \n\tThank You! ");

             }
            else if (c==2)
            {
                 printf("We Receive Your Request\n\t 25 SMS,5 tk,Valid  1 Day \n\tThank You! ");
            }
            else if(c==3)
            {
                 printf("We Receive Your Request\n\t 80 SMS,10 tk,Valid  1 Day \n\tThank You! ");
            }
            else
                printf("Invalid Code");
            int ch;
   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    CUSTOMER_SECTION();
    break;
}

}
int MixBundill()
{


                 printf("\n\t\t\t***Quantity||Price||Validity||***\n");
                 printf("\n\t\t\t***1. 100M,1 GB   || 150tk || 7 Day  ||***\n");
                 printf("\n\t\t\t***2. 25M ,500MB  || 25tk || 3 Day  ||***\n");
                 printf("\n\t\t\t***3. 80MB,15SMS  || 10tk || 1 Day  ||***\n");
                 printf("\t\t\tFor Buy Now Select One:");

             int c;
             scanf("%d",&c);

             if(c==1)
             {
                printf("We Receive Your Request\n\t 100 Munite,1 GB,150 tk,Valid  7 Day \n\tThank You! ");

             }
            else if (c==2)
            {
                 printf("We Receive Your Request\n\t 25 Munite,500MB,25 tk,Valid  2 Day \n\tThank You! ");
            }
            else if(c==3)
            {
                 printf("We Receive Your Request\n\t 80 Munite,15 SMS,10 tk,Valid  1 Day \n\tThank You! ");
            }
            else
                printf("Invalid Code");


            int ch;
   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    CUSTOMER_SECTION();
    break;
}



}
int TodayOffer ()
{

            printf("1.Minute\n");
            printf("2.Data\n");
            printf("3.Mix Bundill\n");
            printf("\n\t\t\t Select One:");

            int c;
             scanf("%d",&c);
             if(c==1)
             {

                 printf("\n\t\t\t***1.100M  || 27tk|| 5 Day  ||***\n");


                  printf("Buy Now Press (1)");
                 int b;
                 scanf("%d",&b);
                 if(b==1)
                 {
                     printf("We Receive Your Request\n\t 400M,137tk,Valid 15 Day\n\tThank You! ");
                 }

             }
             else if (c==2)
            {

                 printf("\n\t\t\t***1. 2GB  || 22tk|| 10 Day  ||***\n");
                 printf("Buy Now Press (1)");
                 int b;
                 scanf("%d",&b);
                 if(b==1)
                 {
                     printf("We Receive Your Request\n\t 2GB,22tk,Valid 10 Day\n\tThank You! ");
                 }

            }
             else if  (c==3)
            {

                 printf("\n\t\t\t***1. 1GB,50M,25SMS  || 57tk|| 5 Day  ||***\n");
                 printf("Buy Now Press (1)");
                 int b;
                 scanf("%d",&b);
                 if(b==1)
                 {
                     printf("We Receive Your Request\n\t 1GB,50M,25SMS,57tk,Valid 5 Day\n\tThank You! ");
                 }

            }
            else
                printf("Invalid Code");
            int ch;
   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    CUSTOMER_SECTION();
    break;
}

}
int Specialcharacter()
{


            printf("\n\t\t For Special character\n\t\t 1.77 \n\t\t 2.03\n\t\t 3.71\n");
            printf("\n\t\t Enter Your Special character-->");

             int ch;
             scanf("%d",&ch);
             if(ch==77)
             {

                 printf("\n\t\t\t*** 1GB  || 13tk|| 5 Day  ||***\n");
                 printf("Buy Now Press (1)");
                 int b;
                 scanf("%d",&b);
                 if(b==1)
                 {
                     printf("We Receive Your Request\n\t 1GB,13tk,Valid 5 Day\n\tThank You! ");
                 }

             }
             else if  (ch==03)
            {
                printf("\n\t\t\t*** 1.5Gb|| 15tk|| 9 Day  ||***\n");
                printf("Buy Now Press (1)");
                 int b;
                 scanf("%d",&b);
                 if(b==1)
                 {
                     printf("We Receive Your Request\n\t 1.5GB,15tk,Valid 9 Day \n\tThank You! ");
                 }



            }
             else if (ch==71)
            {
                 printf("\n\t\t\t*** 100 Minute|| 9tk||  21 Hours  ||***\n");
                 int b;
                 scanf("%d",&b);
                 if(b==1)
                 {
                     printf("We Receive Your Request\n \t100 Minute,9tk,Valid 21 Hours \n\tThank You! ");
                 }

            }
            else
                printf("Invalid Code ||  ");

   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    CUSTOMER_SECTION();
    break;
}

}

 int Balance()
 {
    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("Recharge.dll", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(fp);
   int ch;
   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    CUSTOMER_SECTION();
    break;
}
 }

/***********************************************Payment***************************************************/
int Recharge()
{

   printf("\n\t\t\t Select Your Recharge System:  \n ");
   printf("\n\t\t\t  1.Mobile Banking\n");

   printf("\n\t\t\t Enter Here:   ");

   int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        Mobile_banking();
        break;
    default:
        printf("Wrong Input\n");

    }
}

int Mobile_banking()
{

   printf("\n\t\t\t Select Your Payment System:  \n ");
   printf("\n\t\t\t  1.Bkash\n");
   printf("\n\t\t\t  2.Roket\n");
   printf("\n\t\t\t  3.Nagad\n");
   printf("\n\t\t\t Enter Here:   ");

   int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        bkash();
        break;
    case 2:
        roket();
        break;
    case 3:
        nagad();
        break;

    default:
        printf("Wrong Input\n");

    }



}




int bkash ()

{

            long ph,price,mn;
            char pass[30];
            FILE *fptr;
            fptr = fopen("Recharge.dll", "w+");/*  open for writing */
            if (fptr == NULL)
            {
                printf("File does not exists \n");
                return;
            }
            fflush(stdin);
            printf("Enter Your Bkash Number :");
            scanf("%ld",&pay.ph);

            fflush(stdin);
            printf("Enter Your Mobile Number :");
            scanf("%ld",&pay.mn);

            fflush(stdin);
            printf("Enter Recharge Amount:");
            scanf("%ld",&pay.price);
            fprintf(fptr, "Your Balance= %ld\n",pay.price );

            fflush(stdin);
            printf("Enter Your Bkash PassWord :");
            scanf("%[^\n]",&pay.pass);
            fclose(fptr);


            printf("\t\t\tIf all information is ok than select (1) for Conform\n");
            printf("\n\t\t\t Enter (1) Here:   ");

            int ch;
           scanf("%d", &ch);
          if(ch==1)
          {
            printf("-->Mobile Number:%ld",pay.mn);
            printf("\t\t-->Recharge Amount:%ld\n",pay.price);
            printf("\n\t\t\t***Recharge Successful***\n");
          }
          else
            printf("Invalid Code");

   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    ADMIN_SECTION();
    break;
}
    }








int roket ()
{
            long ph,price,mn;
            char pass[30];
            FILE *fptr;
            fptr = fopen("Recharge.dll", "w+");/*  open for writing */
            if (fptr == NULL)
            {
                printf("File does not exists \n");
                return;
            }

            fflush(stdin);
            printf("Enter Your Roket Number :");
            scanf("%ld",&pay.ph);

            fflush(stdin);
            printf("Enter Your Mobile Number :");
            scanf("%ld",&pay.mn);

            fflush(stdin);
            printf("Enter Recharge Amount:");
            scanf("%ld",&pay.price);
            fprintf(fptr, "Your Balance= %ld\n",pay.price );

            fflush(stdin);
            printf("Enter Your Roket PassWord :");
            scanf("%[^\n]",&pay.pass);
            fclose(fptr);



            printf("\t\t\tIf all information is ok than select (1) for Conform\n");
            printf("\n\t\t\t Enter (1) Here:   ");

             int ch;
           scanf("%d", &ch);
          if(ch==1)
          {
            printf("Mobile Number:%ld",pay.mn);
            printf("Recharge Amount:%ld",pay.price);
            printf("\n\t\t\tRecharge Successful  \n");
          }
          else
            printf("Invalid Code");

   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    ADMIN_SECTION();
    break;
}


}

int nagad ()

{

            long ph,price,mn;
            char pass[30];
            FILE *fptr;
            fptr = fopen("Recharge.dll", "w+");/*  open for writing */
            if (fptr == NULL)
            {
                printf("File does not exists \n");
                return;
            }
            fflush(stdin);
            printf("Enter Your Nagad Number :");
            scanf("%ld",&pay.ph);

            fflush(stdin);
            printf("Enter Your Mobile Number :");
            scanf("%ld",&pay.mn);

            fflush(stdin);
            printf("Enter Recharge Amount:");
            scanf("%ld",&pay.price);
            fprintf(fptr, "Your Balance= %ld\n",pay.price );

            fflush(stdin);
            printf("Enter Your Nagad PassWord :");
            scanf("%[^\n]",&pay.pass);
            fclose(fptr);



            printf("\t\t\tIf all information is ok than select (1) for Conform\n");
            printf("\n\t\t\t Enter (1) Here:   ");
            printf("\n\t\t\tRecharge Successful  \n");
            int ch;
           scanf("%d", &ch);
          if(ch==1)
          {
            printf("Mobile Number:%ld",pay.mn);
            printf("Recharge Amount:%ld",pay.price);
            printf("\n\t\t\tRecharge Successful  \n");
          }
          else
            printf("Invalid Code");

   printf("\n\t\t\t\t\t\t\tEnter 0 for back to main manu --->");
    scanf("%d", &ch);
      switch(ch)
{

    case 0:
    ADMIN_SECTION();
    break;
}

}
//**************payment End


//********************Main Manu
int main(){
    printf("\n\n\n\t\t\t  ----------------------------------------------------------------------\n");
    printf("\t\t\t||----------------------------------------------------------------------||\n");
    printf("\t\t\t||             WELCOME TO Telecom Company MANAGEMENT SYSTEM             ||\n");
    printf("\t\t\t||----------------------------------------------------------------------||\n");
    printf("\t\t\t  ----------------------------------------------------------------------\n\n\n");

    int cho;
    printf("\t\t\t 1.Became a User-->");
    printf("\n\t\t\t 2.Login(User)-->\n\n\t\t   \t******  ***   ******\n\t\t\t 3.Became an admin--> \n\t\t\t 4.Login(Admin)--> \n\n\t Please Enter What you want :" );
    scanf("%d",&cho);
    if (cho==1)
    {
        system ("CLS");
        registe();

    }
    else if (cho==2)
    {
        system ("CLS");
        login();

    }
    else if (cho==3)
    {
        system ("CLS");
        aregiste();

    }
    else if (cho==4)
    {
        system ("CLS");
        alogin();

    }
}
