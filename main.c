#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*int grade;
        printf("Enter your garde:");
        scanf("%d",&grade);
        printf("I got a grade ");
        switch (grade){

            case 4: puts("A");break;
            case 3: puts("B");break;
            case 2: puts("c");break;
            case 1: puts("D");break;
            case 0: puts("F");break;
            default: puts ("IDK");


        }*/

        int a,b,c;
        float x1,x2;
        x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("input numbers: ");
        scanf("%d %d %d",&a,&b,&c);

    switch(a){
        case 1: printf("x^2");break;
        case 0: break;
        case -1: printf("-x^2");break;
        default: printf("%dx^2",a);
    }

        if(a!=0 && b>0) printf("+");

    switch(b){
        case 1: printf("x");break;
        case 0: break;
        case -1: printf("-x");break;
        default: printf("%dx",b);
    }

        if((a==0 && b==0) && c>0) printf("%d=0\n",c);
        else if((a!=0 || b!=0) && c>0) printf("+%d=0\n",c);
        else if((a!=0 || b!=0) && c<0) printf("%d=0\n",c);
        else if((a==0 && b==0) && c<0) printf("%d=0\n",c);
        else if(c==0) printf("=0\n");





        float sq=b*b-4.0*a*c;
                double Eq = (-c) / (double)b;



           if(a==0 && b==0 && (c>0 || c<0)) printf("No solution\n");

            else if(a==0) printf("%.2f",Eq);

            else if(sq<0) printf("No solution\n");
            else if(sq==0)
                    printf("The answer is %.2f\n",-b/(2.0*a));
            else
                printf("x1=%.2f\nx2=%.2f\n",(-b+(sqrt(b*b-4.0*a*c)))/(2.0*a),(-b-(sqrt(b*b-4.0*a*c)))/(2.0*a));





















    return 0;
}
