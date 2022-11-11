#include <stdio.h>
#include <stdlib.h>

int main()
{
    char item1[10],item2[10];
    double item1_price,item2_price,item1_quantity,item2_quantity,total_cost,cash_paid,cash_to_pay;
    printf("_______________\n");
    printf("POINT OF SALE\n");
    printf("_______________\n");

    printf("ENTER ITEM 1:");
    scanf("%s",&item1);
    printf("QUANTITY IN KGS:");
    scanf("%lf",&item1_quantity);
    printf("PRICE PER KG:");
    scanf("%lf",&item1_price);
    printf("TOTAL COST: %.2lf\n",item1_quantity*item1_price);

    printf("ENTER ITEM 2:");
    scanf("%s",&item2);
    printf("QUANTITY IN KGS:");
    scanf("%lf",&item2_quantity);
    printf("PRICE PER KG:");
    scanf("%lf",&item2_price);
    printf("TOTAL COST: %.2lf\n",item2_quantity*item2_price);
    printf("ALL ITEMS COST: %.2lf\n",item1_quantity*item1_price+item2_quantity*item2_price);

    printf("ENTER TOTAL COST:");
    scanf("%lf",&total_cost);
    printf("CASH TO PAY: %.2lf\n",total_cost*0.16+total_cost);


    printf("ENTER CASH PAID:");
    scanf("%lf",&cash_paid);
    printf("ENTER CASH TO PAY:");
    scanf("%lf",&cash_to_pay);
    printf("CHANGE: %.2lf",cash_paid-cash_to_pay);

    return 0;
}
