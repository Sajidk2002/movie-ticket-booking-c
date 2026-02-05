#include<stdio.h>
#include<string.h>
int main()
{
    int lang,tickets,seat,price;
    char ch;
    int movie;
    char moviename[50];
    char seatname[20];
    printf("Please choose a language by entering the option number (1–5): \n");
    printf("1 . Tamil\n");
    printf("2 . kannada\n");
    printf("3 . hindi\n");
    printf("4 . marathi\n");
    printf("5 . Malayalam\n");
    printf("Enter your choise : ");
    scanf("%d",&lang);
    if(lang<1||lang>5)
    {
        printf("Invalid language. Exiting...\n");
        return 0;
    }
    else if(lang == 1)
    {
        printf("Tamil movies:\n");
        printf("1. jananayagan\n");
        printf("2. parasakthi\n");
        printf("3. karuppu\n");

    }
       else if(lang == 2)
    {
        printf("\nKannada Movies:\n");
        printf("1. KGF\n");
        printf("2. Kantara\n");
        printf("3. Lucia\n");
    }
    else if(lang == 3)
    {
        printf("\nHindi Movies:\n");
        printf("1. Dangal\n");
        printf("2. 3 Idiots\n");
        printf("3. PK\n");
    }
    else if(lang == 4)
    {
        printf("\nMarathi Movies:\n");
        printf("1. Sairat\n");
        printf("2. Natsamrat\n");
        printf("3. Harishchandrachi Factory\n");
    }
    else if(lang == 5)
    {
        printf("\nMalayalam Movies:\n");
        printf("1. Eko\n");
        printf("2. Sarvam Maya\n");
        printf("3. Aaveesham\n");
    }

    printf("select movie 1-3: ");

    scanf("%d",&movie);
    if(movie<1||movie>3)
    {
        printf("Invalid movie. exiting..\n");
        return 0;
    }
    if(lang==1)
    {
        switch(movie)
        {
            case 1:
            strcpy(moviename,"jananayagan");
            break;
            case 2:
            strcpy(moviename,"parasakthi");
            break;
            case 3:
            strcpy(moviename,"karuppu");
        }
    }
  else if(lang == 2)
    {
        switch(movie)
        {
            case 1:
             strcpy(moviename, "KGF");
              break;
            case 2: 
            strcpy(moviename, "Kantara");
             break;
            case 3:
             strcpy(moviename, "Lucia");
              break;
        }
    }
    else if(lang == 3)
    {
        switch(movie)
        {
            case 1: 
            strcpy(moviename, "Dangal");
             break;
            case 2:
             strcpy(moviename, "3 Idiots");
             break;
            case 3:
             strcpy(moviename, "PK");
             break;
        }
    }
    else if(lang == 4)
    {
        switch(movie)
        {
            case 1: 
            strcpy(moviename, "Sairat");
             break;
            case 2: 
            strcpy(moviename, "Natsamrat");
             break;
            case 3:
             strcpy(moviename, "Harishchandrachi Factory");
              break;
        }
    }
    else if(lang == 5)
    {
        switch(movie)
        {
            case 1: 
            strcpy(moviename, "Eko");
             break;
            case 2:
             strcpy(moviename, "sarvam maya");
             break;
            case 3:
             strcpy(moviename, "Aaveesham");
             break;
        }
    }
    
    printf("Enter the number of tickets: ");
    scanf("%d",&tickets);
    if(tickets<=0)
    {
        printf("Invalid number of tickets.Exxiting ..\n");
        return 0;

    }
    printf("select the seat type: \n");
    printf("1. Regular (180)\n");
    printf("2. premium (300)\n");
    printf("Enter your choice; ");
    scanf("%d",&seat);
    if(seat==1)
    {
        price=180;
        strcpy(seatname,"regular");

    }
    else if(seat==2)
    {
        price=300;
        strcpy(seatname,"premium");
    }
    else{
        printf("Invalid seat type . Exiting...\n");
        return 0;
    }
    int total=tickets*price;
    printf("------Booking summary-------\n");
    printf("movie: %s\n",moviename);
    printf("seat Type: %s\n",seatname);
    printf("Number of tickets: %d\n",tickets);
    printf("total Amount: %d\n",total);



    printf("\ndo you want to confirm the Bookong? (Y/N): ");
    scanf(" %c", &ch);
    if(ch=='Y'||ch=='y')
    printf("Booking confirmed Enjoy Your movie.\n");
    else if(ch=='N'||ch=='n')
    printf("Booking cancelled.\n");
    else
    printf("Invalid input");
    return 0;


   
}
