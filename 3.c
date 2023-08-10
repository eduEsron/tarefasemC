#include <stdio.h>
void menu();
double k = 0,c =0,f = 0;
int choice = 0;
int main(){
    printf("-------------MENU-------------");
    printf("\n escolha uma das opções de conversão: ");
    printf("\n 1- Celsius para Kelvin \n 2- Celsius para Fahrenheit \n 3- Kelvin para Fahrenheit");
    scanf("%d",&choice);
    menu();
    return 0;

}
void menu(){
    switch(choice){
        case 1:
            scanf("%f",&c);
            k = c+273;
            printf("%f",k);
        break;
        case 2:
            scanf("%f",&c);
            f = 1.8*c+32;
            printf("%f",f);
        break;
        case 3:
            scanf("%f",&k);
            f = 1.8 * (f - 273) + 32;
            printf("%f",f);
        break;
    }
}
