// DMART_INVOICE_USING_STRUCTURE_MINI_PROJECT_2

#include <stdio.h>

struct Product
{
    int id;
    char item[20];
    char category[20];
    float mrp;
    int offer;
    int stock;
};

int main()
{
    struct Product p[15] = {
        {101,"Amul milk","Grocery",60,5,100},
        {102,"Amul butter","Grocery",55,10,80},
        {103,"Paneer","Grocery",90,8,50},
        {104,"Maggi","Grocery",70,15,120},

        {201,"Jeans","Clothes",2499,18,20},
        {202,"T-Shirt","Clothes",999,22,25},
        {203,"Track pants","Clothes",1999,10,15},
        {204,"Shirt","Clothes",1799,5,18},

        {301,"Iron","Appliances",1499,10,10},
        {302,"Mixer","Appliances",3499,12,8},
        {303,"Cooker","Appliances",2999,15,12},

        {401,"Notebook","Stationary",120,5,60},
        {402,"Pens","Stationary",80,8,70},
        {403,"Sketch pens","Stationary",150,10,40},
        {404,"Calculator","Stationary",450,12,25}
    };

    int choice, pid, qty, i, found;
    float amount, bill = 0;

    printf("\n\n");
    printf("**************************************************************\n");
    printf("*                                                            *\n");
    printf("*                WELCOME TO DMART STORE                      *\n");
    printf("*                                                            *\n");
    printf("**************************************************************\n");

    do
    {
        printf("\n1. View Inventory\n");
        printf("2. Purchase Item\n");
        printf("3. Checkout & Exit\n");
        printf("**************************************************************\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n================================================================================");
                printf("\n%-5s %-18s %-15s %-10s %-10s %-10s",
                       "ID","ITEM","CATEGORY","MRP","OFFER","STOCK");
                printf("\n================================================================================");

                for(i = 0; i < 15; i++)
                {
                    printf("\n%-5d %-18s %-15s %-10.2f %-8d%% %-5d",
                           p[i].id,
                           p[i].item,
                           p[i].category,
                           p[i].mrp,
                           p[i].offer,
                           p[i].stock);
                }

                printf("\n================================================================================\n");
                break;

            case 2:
                printf("\nEnter Item ID : ");
                scanf("%d", &pid);

                found = 0;

                for(i = 0; i < 15; i++)
                {
                    if(p[i].id == pid)
                    {
                        found = 1;

                        printf("\n-----------------------------------");
                        printf("\nItem Name : %s", p[i].item);
                        printf("\nCategory  : %s", p[i].category);
                        printf("\nMRP       : %.2f", p[i].mrp);
                        printf("\nDiscount  : %d%%", p[i].offer);
                        printf("\nAvailable : %d", p[i].stock);
                        printf("\n-----------------------------------");

                        printf("\nEnter Quantity : ");
                        scanf("%d", &qty);

                        if(qty <= 0)
                        {
                            printf("\nINVALID QUANTITY!\n");
                        }
                        else if(qty <= p[i].stock)
                        {
                            amount = qty * p[i].mrp;
                            amount = amount - (amount * p[i].offer / 100.0);

                            p[i].stock -= qty;
                            bill += amount;

                            printf("\n-----------------------------------");
                            printf("\nPurchase Successful!");
                            printf("\nAmount Payable : %.2f", amount);
                            printf("\nCurrent Bill   : %.2f", bill);
                            printf("\n-----------------------------------\n");
                        }
                        else
                        {
                            printf("\nINSUFFICIENT STOCK!\n");
                        }

                        break;
                    }
                }

                if(found == 0)
                {
                    printf("\nINVALID ITEM ID!\n");
                }

                break;

            case 3:
            {
                float gst = bill * 0.05;
                float grandtotal = bill + gst;

                printf("\n\n");
                printf("==============================================================\n");
                printf("                      DMART FINAL BILL                        \n");
                printf("==============================================================\n");
                printf("Subtotal          : %.2f\n", bill);
                printf("GST (5%%)          : %.2f\n", gst);
                printf("--------------------------------------------------------------\n");
                printf("Grand Total       : %.2f\n", grandtotal);
                printf("==============================================================\n");
                printf("        THANK YOU FOR SHOPPING WITH US!                       \n");
                printf("                  VISIT AGAIN :)                              \n");
                printf("==============================================================\n");
                break;
            }

            default:
                printf("\n************************************************\n");
                printf(" INVALID CHOICE!\n");
                printf(" Please Enter Only 1, 2 or 3.\n");
                printf("************************************************\n");
        }

    } while(choice != 3);

    return 0;
}

/* OUTPUT


**************************************************************
*                                                            *
*                WELCOME TO DMART STORE                      *
*                                                            *
**************************************************************

1. View Inventory
2. Purchase Item
3. Checkout & Exit
**************************************************************
Enter Your Choice : 1

================================================================================
ID    ITEM               CATEGORY        MRP        OFFER      STOCK     
================================================================================
101   Amul milk          Grocery         60.00      5       % 100  
102   Amul butter        Grocery         55.00      10      % 80   
103   Paneer             Grocery         90.00      8       % 50   
104   Maggi              Grocery         70.00      15      % 120  
201   Jeans              Clothes         2499.00    18      % 20   
202   T-Shirt            Clothes         999.00     22      % 25   
203   Track pants        Clothes         1999.00    10      % 15   
204   Shirt              Clothes         1799.00    5       % 18   
301   Iron               Appliances      1499.00    10      % 10   
302   Mixer              Appliances      3499.00    12      % 8    
303   Cooker             Appliances      2999.00    15      % 12   
401   Notebook           Stationary      120.00     5       % 60   
402   Pens               Stationary      80.00      8       % 70   
403   Sketch pens        Stationary      150.00     10      % 40   
404   Calculator         Stationary      450.00     12      % 25   
================================================================================

1. View Inventory
2. Purchase Item
3. Checkout & Exit
**************************************************************
Enter Your Choice : 2

Enter Item ID : 101

-----------------------------------
Item Name : Amul milk
Category  : Grocery
MRP       : 60.00
Discount  : 5%
Available : 100
-----------------------------------
Enter Quantity : 5

-----------------------------------
Purchase Successful!
Amount Payable : 285.00
Current Bill   : 285.00
-----------------------------------

1. View Inventory
2. Purchase Item
3. Checkout & Exit
**************************************************************
Enter Your Choice : 2

Enter Item ID : 203

-----------------------------------
Item Name : Track pants
Category  : Clothes
MRP       : 1999.00
Discount  : 10%
Available : 15
-----------------------------------
Enter Quantity : 2

-----------------------------------
Purchase Successful!
Amount Payable : 3598.20
Current Bill   : 3883.20
-----------------------------------

1. View Inventory
2. Purchase Item
3. Checkout & Exit
**************************************************************
Enter Your Choice : 2

Enter Item ID : 301

-----------------------------------
Item Name : Iron
Category  : Appliances
MRP       : 1499.00
Discount  : 10%
Available : 10
-----------------------------------
Enter Quantity : 1

-----------------------------------
Purchase Successful!
Amount Payable : 1349.10
Current Bill   : 5232.30
-----------------------------------

1. View Inventory
2. Purchase Item
3. Checkout & Exit
**************************************************************
Enter Your Choice : 2

Enter Item ID : 402

-----------------------------------
Item Name : Pens
Category  : Stationary
MRP       : 80.00
Discount  : 8%
Available : 70
-----------------------------------
Enter Quantity : 4

-----------------------------------
Purchase Successful!
Amount Payable : 294.40
Current Bill   : 5526.70
-----------------------------------

1. View Inventory
2. Purchase Item
3. Checkout & Exit
**************************************************************
Enter Your Choice : 3


==============================================================
                      DMART FINAL BILL                        
==============================================================
Subtotal          : 5526.70
GST (5%)          : 276.33
--------------------------------------------------------------
Grand Total       : 5803.03
==============================================================
        THANK YOU FOR SHOPPING WITH US!                       
                  VISIT AGAIN :)                              
==============================================================

*/