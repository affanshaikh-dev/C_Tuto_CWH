#include <stdio.h>

typedef struct backacc
{
    int accNo;
    char name[34];
    char ifsc[12];
    float balance;
} bank;

int main()
{
    bank b1 = {2521, "Affan", "89189efs", 2584.58};
    bank *ptr = &b1;

    printf("Account Details\nAccount No.: %d\nName: %s\nIFSC: %s\nBalance: %.2f", ptr->accNo, ptr->name, ptr->ifsc, ptr->balance);

    return 0;
}
