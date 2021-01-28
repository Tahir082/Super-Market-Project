#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
//In order to clear the cmd screen everytime instead of showing the printf commands line by line:
void clrscr()
{
    system("cls");
}

int grandtotal;

int grocerytotal=0;
int home_decorationstotal=0;
int handwashtotal=0;
int shampoototal=0;
int soaptotal=0;
int bsptotal=0;
int face_wash_total=0;
int oilstotal=0;
int stationarytotal=0;
int creamstotal=0;
int keyboardstotal=0;
int mousestotal=0;
int headphonestotal=0;
int pendrivestotal=0;
int speakerstotal=0; //Some global variable for counting various total cost.

//USER DEFINED FUNCTIONS:

void all_products();
void home_products();
void electronics();
void grocery();
void home_decorations();
void stationary();

//in home products:
void handwash();
void shampoo();
void soap();
void body_spray_perfumes();
void face_wash();
void oils();
void creams();

//in electronics:
void keyboards();
void mouses();
void headphones();
void pendrives();
void speakers();

//while making payments:

void in_cart();
void payment();

//starting program

void main()
{

    int n, grandtotal;
    printf("\n\n\n\n\t\t\tWELCOME TO JAGORON BD ONLINE\n");
    printf("\n\n\n\n ENTER YOUR CHOICE!!!!\n\n\n");
    printf("\n Press [0] for Cancel shopping\n");
    printf("\n Press [1] to take a look at the products\n");
    printf("\n Press [2] to take a look at purchased  items\n");
    printf("\n Press [3] to Enter the payment menu (END SHOPPING) \n");
    printf("\n\n Enjoy 10 Percent Discount on more than 4000Taka Shopping\n\n");
    printf("\n Choice:");
    scanf("\n%d", &n);
    if(n==0)
    {
        return 0;
    }
   switch(n){
   case 1:
       {
           clrscr();
           all_products();
           }
           break;
   case 2:
    {
        clrscr();
        in_cart();
        break;
    }
   case 3:
    {
        clrscr();
        payment();
        break;
    }
    default:
       {clrscr();
       printf("\n ***CAUTION!! WRONG KEYWORD!!***\n\n ");
       main();
        break;}

}
getch();
}
void all_products()
{
    int n;
    printf("\n\t\t\tWhich Type of item do you need?? \n\n\t\t\t\tWe have all :) \n");
    printf("\n\n\n\nPress [1] for your needs at Home\n");
    printf("\n Press [2] for Electronics\n");
    printf("\n Press [3] for Groceries\n");
    printf("\n Press [4] for Home Decorator Items\n");
    printf("\n Press [5] for Staionary Items\n\n");
    printf("\n Press [0] key to go to main menu\n");
    printf("\n Choice:");
    scanf("\n%d", &n);
        switch(n){
    case 1:
        {clrscr();
        home_products();
        break;
        }
    case 2:
        {
            clrscr();
            electronics();
            break;
        }
    case 3:
        {
            clrscr();
            grocery();
            break;
        }
    case 4:
        {
            clrscr();
            home_decorations();
            break;

        }
        case 5:
            {
                clrscr();
                stationary();
                break;
            }
        default:
            {
                clrscr();
                printf("\n ***CAUTION!! WRONG KEYWORD!!***\n\n ");
                main();
                break;
            }


}

}
void home_products()
{
    int n;
    printf("\n\t\t\t\t HOME PRODUCTS:\t\t\t\t\t");
    printf("\n\n\n\n Press [1] to buy Handwash\n");
    printf("\n Press [2] to buy Shampoo\n");
    printf("\n Press [3] to buy Soaps\n");
    printf("\n Press [4] to buy Body sprays and perfumes\n");
    printf("\n Press [5] to buy Face Washes\n");
    printf("\n Press [6] to buy Oils\n");
    printf("\n Press [7] to buy creams\n\n");
    printf("\n Press [0] key to go back to main menu!\n");
    printf("\n Choice:");
    scanf("\n%d", &n);
    switch(n){
    case 1:
        {
            clrscr();
            handwash();
            break;

        }
    case 2:
        {
            clrscr();
            shampoo();
            break;
        }
    case 3:
        {
        clrscr();
        soap();
        break;
        }
    case 4:
        {
            clrscr();
            body_spray_perfumes();
            break;
        }
        case 5:
        {
            clrscr();
            face_wash();
            break;

        }
        case 6:
        {
            clrscr();
            oils();
            break;

        }
        case 7:
            {
                clrscr();
                creams();
                break;

            }
        default:
            {
                clrscr();
                printf("\n ***CAUTION!! WRONG KEYWORD!!***\n\n ");
                main();
                break;
            }
}
}
void electronics()
{
    int n;
    printf("\n\t\t\t\t ELECTRONICS\t\t\t\t");
    printf("\n\n\n\n Press [1] to buy Keyboards\n");
    printf("\n Press [2] to buy Mouses\n");
    printf("\n Press [3] to buy Headphones\n");
    printf("\n Press [4] to buy Pendrives\n");
    printf("\n Press [5] to buy Speakers\n\n");
    printf("\n Press [0] key to go back to main menu\n");
    printf("\n Choice:");
    scanf("%d", &n);
    switch (n){
case 1:
    {
        clrscr();
        keyboards();
        break;
}
case 2:{
clrscr();
mouses();
break;
}
case 3:
    {
        clrscr();
        headphones();
        break;

    }
case 4:
    {
        clrscr();
        pendrives();
        break;

    }
case 5:
    {
        clrscr();
        speakers();
        break;
    }
default:
    {
        clrscr();
        printf("\n ***CAUTION!! WRONG KEYWORD!!***\n\n ");
        main();
        break;
    }
    }
}
void grocery()
{
    clrscr();
    char c;
    int choice, qty, rice=48, sugar=65, bread=35, onion=25, garlic=175, salt=35, egg=96, polao_rice=90, ginger=75, rt=0, sugt=0, bt=0, ot=0, gt=0, sat=0, et=0, prt=0, gint=0, subtotal;
    printf("\n\n\n\t\t\t\t\t GROCERIES\t\t\t\n");
    printf("\n\nENTER YOUR CHOICE:\n\n");
    printf("\n Press [1] for 1kg Miniket Rice====Price: 48/kg\n");
    printf("\n Press [2] for 1kg Fresh Sugar Bag====Price: 65/kg \n");
    printf("\n Press [3] for 1 Packet Jagoron Bread====Price: 35\n");
    printf("\n Press [4] for 1kg Deshi Onion====Price: 25/kg\n");
    printf("\n Press [5] for 1kg Garlic====Price: 175/kg\n");
    printf("\n Press [6] for 1kg Fresh Salt Bag====Price: 35/kg\n");
    printf("\n Press [7] for 1 Dozen Eggs====Price: 96/Dozen\n");
    printf("\n Press [8] for 1kg Pran Chinigura Rice====Price: 100/kg\n");
    printf("\n Press [9] for 1kg Ginger====Price: 75/kg\n");
    printf("\n**** Press [0] to go back to main menu****\n");
    printf("\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {clrscr();
    main();}
    if(choice==1)
    {
        clrscr();
        printf("\n\n How many Kgs of Miniket Rice do you want?:\n");
        scanf("%d", &qty);
        rt=48*qty;
        printf("\n Total price for %dkg(s) Miniket rice is %d Taka\n\n Added to cart!!\n", qty, rt);
    }
    if(choice==2)
    {
        clrscr();
        printf("\n\n How many Kgs of Fresh Sugar Bag do you want?:\n");
        scanf("%d", &qty);
        sugt=65*qty;
        printf("\n Total price for %dkg(s) Fresh Sugar bag is %d Taka\n\n Added to cart!!\n", qty, sugt);

    }
        if(choice==3)
    {
        clrscr();
        printf("\n\n How many Packets of Jagoron Bread do you want?:\n");
        scanf("%d", &qty);
        bt=35*qty;
        printf("\n Total price for %d Packet(s) of Jagoron Bread is %d Taka\n\n Added to cart!!\n", qty, bt);

    }
        if(choice==4)
    {
        clrscr();
        printf("\n\n How many Kg(s) of Deshi Onion do you want?:\n");
        scanf("%d", &qty);
        ot=25*qty;
        printf("\n Total price for %dkg(s) Deshi Onion is %d Taka\n\nAdded to cart!!\n", qty, ot);

    }
            if(choice==5)
    {
        clrscr();
        printf("\n\n How many Kg(s) of Garlic do you want?:\n");
        scanf("%d", &qty);
        gt=175*qty;
        printf("\n Total price for %dkg(s) Deshi Garlic is %d Taka\n\n Added to cart!!\n", qty, gt);

    }
            if(choice==6)
    {
        clrscr();
        printf("\n\n How many Kg(s) of Fresh Salt Bag do you want?:\n");
        scanf("%d", &qty);
        sat=35*qty;
        printf("\n Total price for %dkg(s) of Fresh Salt Bag is %d Taka\n\n Added to cart!!\n", qty, sat);

    }
            if(choice==7)
    {
        clrscr();
        printf("\n\n How many Dozens of Eggs do you want?:\n");
        scanf("%d", &qty);
        et=96*qty;
        printf("\n Total price for %d Dozens of Eggs is %d Taka\n\n Added to cart!!\n", qty, et);

    }
            if(choice==8)
    {
        clrscr();
        printf("\n\n How many Kg(s) of Pran Chinigura Rice do you want?:\n");
        scanf("%d", &qty);
        prt=100*qty;
        printf("\n Total price for %dkg(s) of Pran Chinigura Rice is %d Taka\n\n Added to cart!!\n", qty, prt);

    }
                if(choice==9)
    {
        clrscr();
        printf("\n\n How many Kg(s) Ginger do you want?:\n");
        scanf("%d", &qty);
        gint=75*qty;
        printf("\n Total price for %dkg(s) Ginger is %d Taka\n\n Added to cart!!\n", qty, gint);


    }
    subtotal=rt+sugt+bt+ot+gt+sat+et+prt+gint;
if(subtotal>0)
        {grocerytotal=grocerytotal+subtotal;
       main();

        }

     getch();
}

void home_decorations()
{
    clrscr();
    int choice, qty, Dinnerset=6000, Plasticflower=300, Arts=1500, Mug=50, Jug=60, Mat=320, Woolen_carpet=7000, dt=0, pft=0, at=0, mt=0, jt=0, matk=0 , wct=0, subtotal;
    printf("\n\t\t\t\t HOME DECORATOR ITEMS\t\t\t\n");
    printf("\n\n ENTER YOUR CHOICE:\t\t\t\t\n");

    printf("\n press [1] for Dinnerset === price:6000 tk\n");
    printf("\n press [2] for Plasticflower ==== price:300 tk\n");
    printf("\n press [3] for Arts === price:1500 tk\n");
    printf("\n press [4] for Mug === price:50 tk\n");
    printf("\n press [5] for Jug === price:60 tk\n");
    printf("\n press [6] for Mat === price:320 tk\n");
    printf("\n press [7] for Woolen_carpet === price:7000\n");
    printf("\n*** press[0] to go back to main menu***\n");
    scanf("%d",&choice);
    if(choice==0)
    {
        clrscr();
        main();
    }
    else if(choice==1)
    {
        clrscr();
        printf("\n How many set of Dinnerset?\n");
        scanf("%d",&qty);
        dt=6000*qty;
        printf("\n Total price of %dset Dinnerset is %d Taka\n\n Added to cart!!\n",qty,dt);

    }
    else if(choice==2)
    {
        clrscr();
        printf("\n How many set of Plasticflower?\n");
        scanf("%d",&qty);
        pft=300*qty;
        printf("\n Total price of %dset Plasticflower is %d Taka\n\n Added to cart!!\n\n",qty,pft);
    }
    else if(choice==3)
    {
        clrscr();
        printf("\n How many set of Arts?\n");
        scanf("%d",&qty);
        at=1500*qty;
        printf("\n Total price of %dset Arts is %d Taka\n\n Added to cart!!\n\n",qty,at);
    }
    else if(choice==4)
    {
        clrscr();
        printf("\n How many piece of Mug?\n");
        scanf("%d",&qty);
        mt=50*qty;
        printf("\n Total price of %dset Mug is %d Taka\n\n Added to cart!!\n\n", qty,mt);

    }
    else if(choice==5)
    {
        clrscr();
        printf("\n How many piece of Jug?\n");
        scanf("%d",&qty);
        jt=60*qty;
        printf("\n Total price of %dset Jug is %d Taka\n\n Added to cart!!\n\n",qty,jt);
    }
    else if(choice==6)
    {
        clrscr();
        printf("\n How many piece of Mat?\n");
        scanf("%d",&qty);
        matk=320*qty;
        printf("\n Total price of %dset Mat is %d Taka\n\n Added to cart!!\n\n",qty,matk);
    }
    else if(choice==7)
    {
        clrscr();
        printf("\n How many sets of Woolen carpet?\n");
        scanf("%d",&qty);
        wct=7000*qty;
        printf("\n Total price of %dset Woolen carpet is %d Taka\n\n Added to cart!!\n\n",qty,wct);
    }
    subtotal=dt+pft+at+mt+jt+matk+wct;
    if(subtotal>0);
    {
        home_decorationstotal=home_decorationstotal+subtotal;
        main();
    }



    getch();
}

void stationary()
{
    clrscr();
    int choice, qty, subtotal, notebook120=40, notebook250=60, notebook300=70, pen=10, pencil=8, rubber=6, sharpner=7;
    int notebook120t=0, notebook250t=0, notebook300t=0, pent=0, pencilt=0, rubbert=0, sharpnert=0;
    printf("\n\t\t\t\t STATIONARY ITEMS\n");
    printf("\n Press [1] for 120 Page Notebook===== Price: 40Taka\n");
    printf("\n Press [2] for 250 Page Notebook===== Price: 60Taka\n");
    printf("\n Press [3] for 300 Page Notebook===== Price: 70Taka\n");
    printf("\n Press [4] for Matador pen====== Price: 10Taka\n");
    printf("\n Press [5] for Linc HB Pencil====== Price: 8Taka\n");
    printf("\n Press [6] for Matador rubber====== Price: 6Taka\n");
    printf("\n Press [7] for Linc Sharpner======Price: 7Taka\n");
    printf("\n**** Press [0] to go back to main menu!\n");
    printf("\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main;
    }
    if(choice==1)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    notebook120=40*qty;
    printf("\n Total price for  %d 120 Page Notebook(s) are %d Taka\n\n Added to cart!!\n", qty, notebook120t);
}
if(choice==2)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    notebook250=60*qty;
    printf("\n Total price for %d 250 Page Notebook(s) are %d Taka\n\n Added to cart!!\n", qty, notebook250t);
}
if(choice==3 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    notebook300t=70*qty;
    printf("\n Total price for %d 300 Page Notebook(s) are %d Taka\n\n Added to cart!!\n", qty, notebook300t);
}
if(choice==4)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    pen=10*qty;
    printf("\n Total price for %d Matador Pen(s) are %d Taka\n\n Added to cart!!\n", qty, pent);
}
if(choice==5)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    pencilt=8*qty;
    printf("\n Total price for %d Linc HB Pencil(s) are %d Taka\n\n Added to cart!!\n", qty, pencilt);

}
if(choice==6)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    rubbert=6*qty;
    printf("\n Total price for %d Matador Rubber(s) are %d Taka\n\n Added to cart!!\n", qty, rubbert);

}
if(choice==7)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    sharpnert=7*qty;
    printf("\n Total price for %d Linc Sharpner(s) are %d Taka\n\n Added to cart!!\n", qty, sharpnert);

}
 subtotal=notebook120t+notebook250t+notebook300t+pent+pencilt+rubbert+sharpnert;


    stationarytotal=stationarytotal+subtotal;
    main();


    getch();
}


void handwash()
{
    int subtotal, choice, qty, lifebuoy=75, detol=165, savlon=125, lt=0, dt=0, st=0;
    printf("\n\n\t\t\t\tHand Wash\t\t");
    printf("\n\n ENTER YOUR CHOICE:\n\n");
    printf("\n Press [1] for Lifebuoy Handwash==== Price: 75 Taka\n");
    printf("\n Press [2] for Detol Handwash==== Price: 165 Taka\n");
    printf("\n Press [3] for Savlon Handwash==== Price: 125 Taka\n");
    printf("\n*** Press [0] to go back to main menu! ***\n");
    printf("\n\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main();
    }
    if(choice== 1)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    lt=75*qty;
    printf("\n Total price for %d Lifebuoy handwash is %d Taka\n\n Added to cart!!\n", qty, lt);
}
if(choice==2 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    dt=165*qty;
    printf("\n Total price for  %d Detol handwash is %d Taka\n\n Added to cart!!\n", qty, dt);
}
if(choice==3 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    st=125*qty;
    printf("\n Total price for %d Savlon Handwash is %d Taka\n\n Added to cart!!\n", qty, st );
}

subtotal=lt+dt+st;
if(subtotal>0)
{
    handwashtotal=handwashtotal+subtotal;
    main();
}
   getch();
}

void shampoo()
{
    int choice, qty, subtotal, pantine=250 ,clearmen=300, sunsilk=230, st=0, pt=0, ct=0;
    printf("\n\n\t\t\t\t SHAMPOO\t\t\t");
    printf("\n\n ENTER YOUR CHOICE:\n\n\n");
    printf("\n Press [1] for Pantine 350gm==== Price: 250 Tk\n");
    printf("\n Press [2] for Clear (men) 350gm==== Price: 300 Tk\n");
    printf("\n Press [3] for Sunsilk HFS 350gm==== Price: 230 Tk\n");
  printf("\n*** Press [0] to go back to main menu! ***\n");
    printf("\n\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main();
    }

    if(choice==1 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    pt=250*qty;
    printf("\n Total price for %d Pantine Shampoo is %d Taka\n\n Added to cart!!\n", qty, pt );
}
if(choice==2)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    ct=300*qty;
    printf("\n Total price for %d Clear (men) Shampoo is %d Taka\n\n Added to cart!!\n", qty, ct);
}
if(choice==3)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    st=230*qty;
    printf("\n Total price for %d Sunsilk HFS Shampoo is %d Taka\n\n Added to cart!!\n", qty, st);
}

subtotal=pt+ct+st;
if(subtotal>0)
{
    shampoototal=shampoototal+subtotal;
    main();
}

getch();

}
void soap()
{
    int choice, qty, subtotal, lifebuoy=26, meril=26, dove=85, famen=90, lt=0, mt=0, dt=0, ft=0;
    printf("\n\t\t\t\tSOAPS\t\t\t");
    printf("\n ENTER YOUR CHOICE:\n\n");
    printf("\n Press [1] for Lifebuoy soap==== Price:26 Tk\n");
    printf("\n Press [2] for Meril soap==== Price: 26 Tk\n");
    printf("\n Press [3] for Dove soap==== Price: 85 Tk\n");
    printf("\n Press [4] for Fa men soap==== Price: 90 Tk\n");
     printf("\n*** Press [0] to go back to main menu! ***\n");
    printf("\n\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main();
    }

    if(choice==1 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    lt=26*qty;
    printf("\n Total price for %d Lifebuoy soap is %d Taka\n\n Added to cart!!\n", qty, lt );
}
if(choice== 2)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    mt=26*qty;
    printf("\n Total price for %d Meril soap is %d Taka\n\n Added to cart!!\n", qty, mt);
}
if(choice== 3)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    dt=85*qty;
    printf("\n Total price for %d Dove soap is %d Taka\n\n Added to cart!!\n", qty, dt);
}
if(choice==4)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    ft=90*qty;
    printf("\n Total price for %d Fa men soap is %d Taka\n\n Added to cart!!\n", qty, ft );
}
subtotal=lt+mt+dt+ft;
if(subtotal>0)
{
    soaptotal=soaptotal+subtotal;
    main();
}
    getch();
}
void body_spray_perfumes()
{
    int choice,qty, subtotal, nevia=250, havoc=232, axe=250, fogg=350, gameofparis=2000, nt=0, ht=0, at=0, ft=0, gt=0;
    printf("\n\t\t\t BODY SPRAYS & PERFUMES\t\t\t");
    printf("\n\n ENTER YOUR CHOICE:\n\n");
    printf("\n Press [1] for Nevia 250ml Deodorant==== Price: 250Tk\n");
    printf("\n Press [2] for Havoc 250ml Deodorant==== Price: 232 Tk\n");
    printf("\n Press [3] for Axe Dark Temptation 250ml==== Price: 250tk\n");
    printf("\n Press [4] for Fogg Black 300ml==== Price: 350Tk\n ");
    printf("\n Press [5] for Game of Paris Perfume 200ml==== Price: 2000Tk\n");
  printf("\n*** Press [0] to go back to main menu! ***\n");
    printf("\n\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main();
    }

    if(choice==1 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    nt=250*qty;
    printf("\n Total price for  %d Nevia Deodorant is %d Taka\n\n Added to cart!!\n", qty, nt);
}
if(choice==2 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    ht=232*qty;
    printf("\n Total price for %d Havoc Deodorant is %d Taka\n\n Added to cart!!\n", qty, ht);
}
if(choice==3 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    at=250*qty;
    printf("\n Total price for %d Axe Deodorant is %d Taka\n\n Added to cart!!\n", qty, at);
}
if(choice==4 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    ft=350*qty;
    printf("\n Total price for %d Fogg Black is %d Taka\n\n Added to cart!!\n", qty, ft);
}
if(choice== 5)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    gt=2000*qty;
    printf("\n Total price for %d Game of Paris Perfume is %d Taka\n\n Added to cart!!\n", qty, gt);
}
subtotal=at+ft+nt+ht+gt;
if(subtotal>0)
{
    bsptotal=bsptotal+subtotal;
    main();
}
getch();

}
void face_wash()
{
    int choice, subtotal, qty, garnier=250, loreal=350, everyouth=150, gt=0, lt=0, et=0;
    printf("\n\t\t\t\t FACE WASH\t\t\t");
    printf("\n\n ENTER YOUR CHOICE:\n");
    printf("\n Press [1] for Garnier 150ml==== Price: 250 TK\n");
    printf("\n Press [2] for L'oreal 100ml ==== Price: 350 Tk\n");
    printf("\n Press [3] for Ever Youth Lemon 150ml==== Price: 150 Tk\n");
    printf("\n*** Press [0] to go back to main menu!!****\n");
    printf("\n\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main();
    }
    if(choice==1)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    gt=250*qty;
    printf("\n Total price for %d Garnier Face wash is %d Taka\n\n Added to cart!!\n", qty, gt);
}
if(choice==2)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    lt=350*qty;
    printf("\n Total price for %d L'oreal Face Wash is %d Taka\n\n Added to cart!!\n", qty, lt);
}
if(choice==3)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    et=150*qty;
    printf("\n Total price for  is %d Taka\n\n Added to cart!!\n", qty, et);
}
subtotal=lt+gt+et;
if(subtotal>0)
{
    face_wash_total=face_wash_total+subtotal;
    main();
}
    getch();
}
void oils()
{
    int choice, subtotal, qty, parachute=300, zui=350, pt=0, zt=0;
    printf("\n\t\t\t\tHAIR OILS\t\t\t");
    printf("\n\n\n ENTER YOUR CHOICE:\n");
    printf("\n Press [1] for Parachute 350ml==== Price: 300 Tk\n");
    printf("\n Press [2] for Zui 200ml 350ml==== Price: 350 Tk\n");
    printf("\n*** Press [0] to go back to main menu!!****\n");
    printf("\n\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main();
    }
    if(choice==1)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    pt=300*qty;
    printf("\n Total price for %d Parachute Hair Oil is %d Taka\n\n Added to cart!!\n", qty, pt);
}
if(choice==2)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    zt=350*qty;
    printf("\n Total price for %d Zui Hair Oil is %d Taka\n\n Added to cart!!\n", qty, zt);
}
subtotal=zt+pt;
if(subtotal>0)
{
    oilstotal=oilstotal+subtotal;
    main();
}



    getch();
}
void creams()
{
    int choice, qty, subtotal, nevia=300, ponds=400, meril=250, loreal=450, Garnier=350, nt=0, pt=0, mt=0, lt=0, gt=0;
    printf("\n\t\t\t\t CREAMS \t\t\t\n\n");
    printf("\n ENTER YOUR CHOICE:\n");
    printf("\n Press [1] for Nevia ==== Price: 300 Tk\n");
    printf("\n Press [2] for Ponds ==== Price: 400 Tk\n");
    printf("\n Press [3] for Meril ==== Price: 250 Tk\n");
    printf("\n Press [4] for L'oreal ==== Price: 450 Tk\n");
    printf("\n Press [5] for Garnier ==== Price: 350 Tk\n");
    printf("\n*** Press [0] to go back to main menu!!***");
    printf("\n\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main();
    }
    if(choice== 1)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    nt=300*qty;
    printf("\n Total price for %d Nevia Cream(s) is %d Taka\n\n Added to cart!!\n", qty, nt);
}
if(choice== 2)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    pt=400*qty;
    printf("\n Total price for %d Ponds cream(s) is %d Taka\n\n Added to cart!!\n", qty, pt );
}
if(choice== 3)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    mt=250*qty;
    printf("\n Total price for %d Meril Cream(s) is %d Taka\n\n Added to cart!!\n", qty, mt);
}
if(choice==4)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    lt=450*qty;
    printf("\n Total price for %d L'oreal Cream(s) is %d Taka\n\n Added to cart!!\n", qty, lt);
}
if(choice==5)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    gt=350*qty;
    printf("\n Total price for %d Garnier Cream(s) is %d Taka\n\n Added to cart!!\n", qty,gt);
}
subtotal=gt+lt+nt+mt+pt;
if(subtotal>0)
{
    creamstotal=creamstotal+subtotal;
    main();
}



    getch();
}
void keyboards()
{
    int logitech=400, a4tech=550, prolink=780;
    int choice, qty, subtotal;
    int logitechtotal=0, a4techtotal=0, prolinktotal=0;
    printf("\n\t\t\t\t KEYBOARDS\t\t\t");
    printf("\n\n\t\t ENTER YOUR CHOICE:");
    printf("\n Press [1] for Logitech USB Keyboard==== Price:400 Taka\n");
    printf("\n Press [2] for a4tech USB Laptop Keyboard==== Price: 550 Taka\n");
    printf("\n Press [3] for Prolink Wireless Keyboard===== Price: 780 Taka\n");
    printf("\n*** Press [0] to go back to main menu!***\n");
    printf("\n Choice:");
    scanf("%d", &choice);
    if(choice==1 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    logitechtotal=400*qty;
    printf("\n Total price for %d Logitech USB Keyboard is %d Taka\n\n Added to cart!!\n", qty, logitechtotal);

}
if(choice==2 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    a4techtotal=550*qty;
    printf("\n Total price for %d A4tech USB Laptop Keyboard is %d Taka\n\n Added to cart!!\n", qty, a4techtotal);

}
if(choice==3 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    prolinktotal=780*qty;
    printf("\n Total price for %d Prolink Wireless Keyboard is %d Taka\n\n Added to cart!!\n", qty,  prolinktotal);

}
subtotal=a4techtotal+prolinktotal+logitechtotal;
if(subtotal>0)
{
    keyboardstotal=keyboardstotal+subtotal;
    main();
}

  getch();
}
void mouses()
{
    int choice, subtotal, qty, logitech=250, a4tech=680, prolink=700, apple=4000, lt=0, at=0, pt=0, apt=0;
        printf("\n\t\t\t\t MOUSES\t\t\t\n\n");
        printf("\n ENTER YOUR CHOICE:\n\n");
        printf("\n Press [1] for Logitech USB Mouse==== Price: 250 Tk\n");
        printf("\n Press [2] for a4tech Wireless Mouse==== Price: 680 Tk\n");
        printf("\n Press [3] for Prolink Wireless Mouse==== Price: 700 Tk \n");
        printf("\n Press [4] for Wireless Apple Mouse ==== Price: 4000 Tk\n");
        printf("\n*** Press [0] to go back to main menu!! ***");
        printf("\n\n Choice:");
        scanf("%d", &choice);
        if(choice==0)
        {
            clrscr();
            main();
        }
        if(choice==1 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    lt=250*qty;
    printf("\n Total price for %d Logitech Wired Mouse(s) is %d Taka\n\n Added to cart!!\n", qty, lt);
}
if(choice==2 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    at=680*qty;
    printf("\n Total price for %d a4tech Wireless Mouse(s) is %d Taka\n\n Added to cart!!\n", qty, at);
}
if(choice==3 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    pt=700*qty;
    printf("\n Total price for %d Prolink Wireless mouse(s) is %d Taka\n\n Added to cart!!\n", qty, pt);
}
if(choice==4 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    apt=4000*qty;
    printf("\n Total price for %d Apple Wireless Mouse(s) is %d Taka\n\n Added to cart!!\n", qty, apt);
}
subtotal=lt+pt+at+apt;
if(subtotal>0)
{
    mousestotal=mousestotal+subtotal;
    main();
}

    getch();
}
void headphones()
{
    int choice, qty, subtotal, skullcandy=4500, beats=8500, awei=1500, ipod=2500,st=0,bt=0,at=0,it=0;
        printf("\n\t\t\t\t HEADPHONES\t\t\t\n\n");
        printf("\n\n ENTER YOUR CHOICE:\n\n");
        printf("\n Press [1] for Skullcandy Ink'd2==== Price: 4500 Tk\n");
        printf("\n Press [2] for Beats Dr. Dre Edition==== Price: 8500Tk\n");
        printf("\n Press [3] for Awei s80==== Price: 1500 Tk\n");
        printf("\n Press [4] for ipod/iphone headphone==== 2500 Tk\n");
        printf("\n*** Press [0] to go back to main menu!!***\n");
        printf("\n\n Choice:");
        scanf("%d", &choice);
        if(choice==0)
        {
            clrscr();
            main();
        }
        if(choice== 1)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    st=4500*qty;
    printf("\n Total price for %d SkullCandy Headphone(s) is %d Taka\n\n Added to cart!!\n", qty, st);
}
if(choice==2 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    bt=8500*qty;
    printf("\n Total price for %d Beats Headphone(s) is %d Taka\n\n Added to cart!!\n", qty, bt);
}
if(choice== 3)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    at=1500*qty;
    printf("\n Total price for %d Awei Headphone(s) is %d Taka\n\n Added to cart!!\n", qty, at);
}
if(choice== 4)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    it=2500*qty;
    printf("\n Total price for %d iphone Headphone(s) is %d Taka\n\n Added to cart!!\n", qty, it);
}
subtotal=it+at+bt+st;
if(subtotal>0)
{
    headphonestotal=headphonestotal+subtotal;
    main();
}

    getch();
}
void pendrives()
{
    int choice, subtotal, qty, transcend=1400, verbatim=1600, havit=800, tt=0, vt=0, ht=0;
    printf("\n\t\t\t\tPENDRIVES\t\t\t\n\n");
    printf("\n ENTER YOUR CHOICE:\n\n");
    printf("\n Press [1] for Transcend 32GB ==== Price: 1000 Tk\n");
    printf("\n Press [2] for Verbatim 32 GB==== Price: 1600 Tk\n");
    printf("\n Press [3] for Havit 16 GB ==== Price: 800 Tk\n");
    printf("\n*** Press [0] to go back to main menu!!***\n\n");
    printf("\n Choice:");
    scanf("%d", &choice);
    if(choice==0)
    {
        clrscr();
        main();
    }
    if(choice==1 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    tt=1400*qty;
    printf("\n Total price for %d Transcend Pendrive(s) is %d Taka\n\n Added to cart!!\n", qty, tt);
}
if(choice==2 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    vt=1600*qty;
    printf("\n Total price for %d Verbatim Pendrive(s) is %d Taka\n\n Added to cart!!\n", qty, vt);
}
if(choice== 3)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    ht=800*qty;
    printf("\n Total price for %d Havit Pendrive(s) is %d Taka\n\n Added to cart!!\n", qty, ht);

}
subtotal=ht+vt+tt;
if(subtotal>0)
{
    pendrivestotal=pendrivestotal+subtotal;
    main();
}

getch();


}
void speakers()
{
    int subtotal, choice, qty, digitalx=4500, microlab=7000, a4tech=2500, creative=3500,dt=0, ct=0, mt=0, at=0;
        printf("\n\t\t\t\t SPEAKERS\t\t\t\n");
        printf("\n\n ENTER YOUR CHOICE:\n\n");
        printf("\n Press [1] for Digitalx 1:3 ==== Price: 4500 Tk\n");
        printf("\n Press [2] for MicroLab 1:4 ==== Price: 7000 Tk\n");
        printf("\n Press [3] for a4tech 1:2==== Price: 2500Tk\n");
        printf("\n Press[4] for Creative 1:2==== Price: 3500 Tk\n");
        printf("\n*** Press [0] to go back to main menu***\n");
        printf("\n\n Choice:");
        scanf("%d", &choice);
        if(choice==0)
        {
            clrscr();
            main();

        }
        if(choice==1 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    dt=4500*qty;
    printf("\n Total price for %d DigitalX Speaker is %d Taka\n\n Added to cart!!\n", qty, dt);
}
if(choice==2 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    mt=7000*qty;
    printf("\n Total price for %d Microlab Speaker is %d Taka\n\n Added to cart!!\n", qty, mt);
}
if(choice== 3)
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    at=2500*qty;
    printf("\n Total price for %d a4tech Speaker is %d Taka\n\n Added to cart!!\n", qty, at);
}
if(choice==4 )
{
    clrscr();
    printf("\n How many do you want?: \n");
    scanf("%d", &qty);
    ct=3500*qty;
    printf("\n Total price for %d Creative Speaker is %d Taka\n\n Added to cart!!\n", qty, ct );
}
subtotal=at+ct+mt+dt;
if(subtotal>0)
{
    speakerstotal=speakerstotal+subtotal;
    main();
}
    getch();

}
void in_cart()
{
    int choice;
    if(grocerytotal>0)
    {
        printf("\n You Shopped From Grocery: %d Taka\n", grocerytotal);
    }
    if(home_decorationstotal>0)
    {
        printf("\n You Shopped From Home Decorator Items: %d Taka \n", home_decorationstotal);
    }
    if(stationarytotal>0)
        {
            printf("\n You Shopped from Stationary: %d Taka\n", stationarytotal);

        }
        if(handwashtotal>0)
        {
            printf("\n You bought Handwash: %d Taka\n", handwashtotal);
        }
        if(shampoototal>0)
        {
            printf("\n You bought shampoo: %d Taka\n", shampoototal);

        }
        if(soaptotal>0)
        {
            printf("\n You bought soap: %d Taka\n", soaptotal);

        }
        if(bsptotal>0)
        {
            printf("\n You shopped from Body Sprays and Perfumes: %d Taka", bsptotal);

        }
        if(face_wash_total>0)
        {
            printf("\n You shopped from Face Washes: %d Taka\n", face_wash_total);

        }
        if(oilstotal>0)
        {
            printf("\n You bought Hair Oil: %d Taka \n", oilstotal);
        }
        if(creamstotal>0)
        {
            printf("\n You bought Face cream: %d Taka\n", creamstotal);

        }
        if(mousestotal>0)
        {
            printf("\n You bought Mouse from Electronics: %d Taka \n", mousestotal);

        }
        if(headphonestotal>0)
        {
            printf("\n You bought Headphone from Electronics: %d Taka\n", headphonestotal);
        }
        if(pendrivestotal>0)
        {
            printf("\n You bought Pendrive from Electronics: %d Taka\n", pendrivestotal );

        }
        if(speakerstotal>0)
        {
            printf("\n You bought SoundBox/Speaker from Electronics: %d Taka\n", speakerstotal);

        }
        if(keyboardstotal>0)
        {
            printf("\n You Bought Keyboard: %d Taka \n", keyboardstotal);
        }

        grandtotal=grocerytotal+home_decorationstotal+stationarytotal+handwashtotal+shampoototal+soaptotal+bsptotal+face_wash_total+oilstotal+creamstotal+keyboardstotal+mousestotal+headphonestotal+pendrivestotal+speakerstotal;
    printf("\n\n Press [0] to go to main menu");
    scanf("%d", &choice);
        if(choice==0)
        {
            clrscr();
            main();
        }

   getch();
}
void payment()
{
    int choice, paid, change, total;
    float discount;
     grandtotal=grocerytotal+home_decorationstotal+stationarytotal+handwashtotal+shampoototal+soaptotal+bsptotal+face_wash_total+oilstotal+creamstotal+keyboardstotal+mousestotal+headphonestotal+pendrivestotal+speakerstotal;
    printf("\n\t\t\t\tPAYMENT\t\t\t\t");

    total = grandtotal;
    printf("\n Your Total Bill is: %d\n", total);
    if(total>=4000)
    {
        discount=total*0.10;
        printf("\n\n Congratulations!!\n\n Discount: 10 Percent");
        total=total-discount;
        printf("\n\n Now Your Total Bill is: %d", total);



    }


    printf("\n\n\n You paid:  ");
    scanf("\n%d", &paid);
    if(paid>=total)
        {change=paid-total;
printf("\n Change= %d Taka", change);}


if(paid<total)
{
    change=total-paid;
    printf("\n You have to Pay %d Taka more!!\n\n", change);
}

printf("\n\n\n\n\n\n\t==================THANKS FOR STAYING WITH US===================\t\n");
getch();

}
