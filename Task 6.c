#include <stdio.h>
int main()
{
    char light,button;

    printf("Enter traffic light color (R for Red, Y for Yellow, G for Green):");
    scanf(" %c",&light);

    switch(light){
        case 'R':
            printf("Is pedestrian button pressed? (Y for Yes, N for No):");
            scanf(" %c", &button);

            switch(button){
                case 'Y':
                    printf("\nAction: Cars stop. Pedestrians can safely cross now!\n");
                     break;
                case 'N':
                    printf("\nAction: Cars stop and wait. No pedestrians crossing.\n");
                break;
                default:
                    printf("\nInvalid button response!\n");
                break;
            }
        break;

        case 'Y':
            printf("\nAction: Yellow light! Slow down and prepare to stop.\n");
        break;

        case 'G':
            printf("Is pedestrian button pressed? (Y for Yes, N for No):");
            scanf(" %c", &button);

            switch(button){
                case 'Y':
                    printf("\nAction: Cars go, but drive slowly and watch for pedestrians!\n");
                break;
                case 'N':
                    printf("\nAction: Green light! Go ahead.\n");
                break;
                default:
                    printf("\nInvalid button response!\n");
                break;
            }
        break;

        default:
            printf("\nInvalid traffic light color entered!\n");
        break;
    }

return 0;
}
