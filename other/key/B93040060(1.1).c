//B093040060 紀伊友泰


#include<stdio.h>
int main (){
    
    int num1, num2, num3, num4;
    
    scanf("%d %d %d %d",&num1, &num2, &num3, &num4);
    printf("Num1:%d\n", num1);
    printf("Num2:%d\n", num2);
    printf("Num3:%d\n", num3);
    printf("Num4:%d\n", num4);
    
    printf("%d + %d - %d * %d = %d\n", num1, num2, num3, num4,num1 + num2 - num3 * num4);
    printf("%d + %d * %d - %d = %d\n", num1, num2, num3, num4,num1 + num2 * num3 - num4);
    printf("%d - %d + %d * %d = %d\n", num1, num2, num3, num4,num1 - num2 + num3 * num4);
    printf("%d - %d * %d + %d = %d\n", num1, num2, num3, num4,num1 - num2 * num3 + num4);
    printf("%d * %d + %d - %d = %d\n", num1, num2, num3, num4,num1 * num2 + num3 - num4);
    printf("%d * %d - %d + %d = %d\n", num1, num2, num3, num4,num1 * num2 - num3 + num4);
    
    return 0;
    
}
