#include <stdio.h>
int main() 
{
    int acc_type,op;
    float balance=5000.0,amount;

    printf("1. Savings Account\n");
    printf("2. Current Account\n");
    printf("Enter account type:");
    scanf("%d", &acc_type);

    switch(acc_type){
        case 1:
            printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\nChoice:");
            scanf("%d", &op);

            switch(op){
                case 1:
                    printf("Enter deposit amount:");
                    scanf("%f",&amount);
                    balance=balance+amount;
                    printf("Amount deposited in Savings. New balance: %.2f\n", balance);
                break;

                case 2:
                    printf("Enter withdrawal amount:");
                    scanf("%f",&amount);
                    if(amount<=balance){
                        balance=balance-amount;
                        printf("Amount withdrawn from Savings. Remaining balance: %.2f\n", balance);
                    } else {
                        printf("Insufficient balance!\n");
                    }
                break;

                case 3:
                    printf("Savings Account Balance: %.2f\n",balance);
                break;

                default:
                    printf("Invalid transaction option!\n");
                break;
            }
        break;

        case 2:
            printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\nChoice:");
            scanf("%d",&op);

            switch(op){
                case 1:
                    printf("Enter deposit amount:");
                    scanf("%f",&amount);
                    balance=balance+amount;
                    printf("Amount deposited in Current. New balance: %.2f\n",balance);
                break;

                case 2:
                    printf("Enter withdrawal amount:");
                    scanf("%f",&amount);
                    if(amount<=balance){
                        balance=balance-amount;
                        printf("Amount withdrawn from Current. Remaining balance: %.2f\n", balance);
                    }else{
                        printf("Insufficient balance!\n");
                    }
                break;

                case 3:
                    printf("Current Account Balance: %.2f\n",balance);
                break;

                default:
                    printf("Invalid transaction option!\n");
                break;
            }
        break;

        default:
            printf("Invalid account type selected!\n");
        break;
    }

return 0;
}
