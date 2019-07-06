#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct cust
    {char name[20];
    long int phone_no;

    };
    struct cust e;
    char ch1;
    int ch,total=0,gst=5;
    printf("\n1.view menu\n2.place order\n3.add customer\n4.calculate bill\n0.exit");

        printf("\n\nmake ur choice:");
        scanf("%d",&ch);
        while(ch!=0)
        {
            switch(ch)
        {

        case 1:

        {
            struct menu
            {

            };
            struct menu m;
            printf("************OUR MENU*************");
            printf("\nS.no.\t\tItem\t\tPrice");
            printf("\n1.\t\tchicken curry\t\t300/-");
            printf("\n2.\t\tFish curry\t\t150/-");
            printf("\n3.\t\tice cream\t\t100/-");
            break;
        }
        case 2:
        {
            struct order
            {
                char ans;
                int bill,qty;
            };
            struct order a;
            printf("\nClick y for yes");
            printf("\nDo u want chicken curry?");
            a.ans=getch();
            a.bill=0;
            if(a.ans=='y')
            {
                printf("\nEnter its qty:");
                scanf("%d",&a.qty);
                a.bill+=(a.qty*300);
                printf("\nNow ur bill=%d",a.bill); total=a.bill;
            }
            printf("\nDo u want Fish curry?");
            a.ans=getch();
            if(a.ans=='y')
            {
                printf("\nEnter its qty:");
                scanf("%d",&a.qty);
                a.bill+=(a.qty*150);
                printf("\nNow ur bill=%d",a.bill);total=a.bill;
            }

            printf("\nDo u want ice cream ?");
            a.ans=getch();
            if(a.ans=='y')
            {
                printf("\nEnter its qty:");
                scanf("%d",&a.qty);
                a.bill+=(a.qty*100);total=a.bill;
                printf("\nNow ur bill=%d",total);

            }
            break;
        }
        case 3:
        {

            printf("\nenter name:");
            scanf("%s",&e.name);
            printf("\nenter the phone no.");
            scanf("%d",&e.phone_no);
            break;
        }
        case 4:
        {
            struct bill
            {
                int tbill,fbill;
            };
            struct bill b;
            b.tbill=total;
            b.fbill=gst+(total);
            printf("customer name=%s\n",e.name);
            printf("customer phone no=%d\n",e.phone_no);

    printf("\nur total bill=%d",b.fbill);
    printf("thanks for order");

      break;  }



        }




        printf("\n\nmake ur choice:");
        scanf("%d",&ch);

    }

    return 0;
}
