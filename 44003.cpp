#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float he,m,we,BMI; 
    printf("======�ӨϥΪ̪�BMI��T======\n"); 
    printf("�z���������G");
    scanf("%f",&he);
    printf("�z���魫���G");
    scanf("%f",&we);
    printf("=============================\n");
    m=he/100;
    BMI=we/(m*m);
    printf("BMI = %.2f\n\n",BMI);
 	system("pause");
 	return 0;
}
