#include<stdio.h>
main(){

    float F,C;
    int x;

    printf("What you want to convert: \n");
    printf("1.Fahrenheit to celcius\n2.Celcius to fahrenheit\n");
    scanf("%d",&x);

    if (x==1)
    {
      printf("Input a Fahrenheit value:");
      scanf("%f",&F);
      C=(5.0/9.0)*(F-32.0);
      printf("Temperature in Celcius:%.2f",C);
    }
    
    else if (x==2)
    {
        printf("Input a celcius value:");
        scanf("%f",&C);
        F=(9.0*C)/5.0+32.0;
        printf("Temperature in Fahrenheit:%.2f",F);
    }
}


