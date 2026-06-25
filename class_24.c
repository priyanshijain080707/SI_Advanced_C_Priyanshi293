// class_24

#include<stdio.h>
struct product {
    int ID;
    int qty;
    int MRP;
    int offer;
    char name;
};
int main()
{
    struct product p1;
    p1.ID=10021;
    printf("p1_ID=%d\n",p1.ID);
    return 0;
}

/*OUTPUT
p1_ID=10021   */