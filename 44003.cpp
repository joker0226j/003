#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float he,m,we,BMI; 
    printf("======該使用者的BMI資訊======\n"); 
    printf("您的身高為：");
    scanf("%f",&he);
    printf("您的體重為：");
    scanf("%f",&we);
    printf("=============================\n");
    m=he/100;
    BMI=we/(m*m);
    printf("BMI = %.2f\n\n",BMI);
 	system("pause");
 	return 0;
}
