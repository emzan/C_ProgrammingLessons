#include <stdio.h>

int main()
{
    struct record{
        int account;
        float balance;
    };
    struct record my_bank = {
        0054, 87.876
    };
    
    printf("I have the account %d with %f dollars in \n",my_bank.account,my_bank.balance);
    
    return(0);
}

