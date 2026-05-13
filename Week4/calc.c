#include <stdio.h>
 void add(void);
 void sub(void);
 void mul(void);
 void div(void);

 int main(void)(
    int user_response;
    printf("Calculator\n");
    printf("Select an option\n");
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication \n");
    printf("4. division\n");
    scanf("%d" ,&user_response);

    if (user_response == 1){
        add();
    }else if (user_response == 2){
        sub();
    }else if (user_response == 2){
        mul();
    }else if (user_response == 2){
        div();
    }

    // printf ("Write your numbers");
    // scanf("%f %f", num1, num2);


    // if(user_response == 1){
    //  float =num1+num2;
    //  float num3=num1+num2;
    //  printf("%f+%f= %f" , num1,num2,num3);
    // } else if (user_response ==2){
    //  float =num1-num2;
    //  float num3=num1-num2;
    //  printf("%f-%f= %f" , num1,num2,num3);
    // } else if (user_response ==3){
    //  float =num1*num2;
    //  float num3=num1*num2;
    //  printf("%f*%f= %f" , num1,num2,num3);
    // } else if (user_response ==4){
    //  float num3=num1/num2;
    //  printf("%f/%f= %f" , num1,num2,num3);
    //}
}
    void add(void) {
        float num1;
        float num2;
        printf("What numbers are being added");
        scanf("%f %f" , &num1,&num2);
        float num3=num1+num2;
        printf("%.2f+%.2f= %.2f" , num1,num2,num3);
    }
    void sub(void){
        float num1;
        float num2;
        printf("What numbers are being substract");
        scanf("%f %f" , &num1,&num2);
        float num3=num1-num2;
        printf("%.2f-%.2f= %.2f" , num1,num2,num3);
    }
    void mul(void){
        float num1;
        float num2;
        printf("What numbers are being multiplied");
        scanf("%f %f" , &num1,&num2);
        float num3=num1*num2;
        printf("%.2f*%.2f= %.2f" , num1,num2,num3);
    }
    void div(void){
        float num1;
        float num2;
        printf("What numbers are being divide");
        scanf("%f %f" , &num1,&num2);
        float num3=num1/num2;
        printf("%.2f/%.2f= %.2f" , num1,num2,num3);
    }

