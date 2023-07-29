(1)

#include<stdio.h>
int main()
{
int n1,n2,max;
printf("Enter two numbers");
scanf("%d %d",&n1,&n2);
max=n1;
if(n2>max)
max=n2;
printf("The highest number is%d\n",max);
}


(2)
#include<stdio.h>
int main()
{
int n1,n2,n3,min,max;
      printf("Enter three numbers");
      scanf("%d %d %d",&n1,&n2,&n3);

      max=n1;
      if(N2>max)
      max=n2;

     if(n3>max)
     max=n3;

    min=n1;
    if(n2<min)
    min=n2;

    if(n3<min)
    min=n3;

   printf("The smallest number is%d\n",min);
   printf("The highest number is%d\n",max);
}

(3)
#include<stdio.h>
int main()
{
char empname[20];
float bs,inc,ns;
printf("Enter employee name");
scanf("%s",&empname);
printf("Enter basic salary");
scanf("%f",&bs);
if(bs>=10000)
inc=bs*0.15;
else if(bs>=5000)
inc=bs*0.10;
else
inc=bs*0.05;
ns=bs+inc;
printf("Employee name%s\n",empname);
printf("New salary%.2f\n",ns);
}


(4)
  #include<stdio.h>
     #define PI 3.14159
     int main()
    {
         float radius,diameter,circumference,area;

         printf("Enter the radius of the circle:");
         scanf("%f",&radius);

         printf("Diameter:%2f\n",2*radius);
         printf("Circumference:%2f\n",2*PI*radius);
         printf("Area:%2f\n",PI*radius*radius);

return 0;
}


(5)
    #include<stdio.h>
    int main()
   {
          int num1,num2;

         printf("Enter the first integer:");
         scanf("%d",&num1);
         printf("Enter the second integer:");
         scanf("%d",&num2);

          if(num2=0&& num1%num2==0)
        {
                printf("%d is a multiple of%d\n",num1,num2);
         }

 }


(6)
    #include <stdio.h>
    int main()
   {
    char characters[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};
    int num_characters = sizeof(characters) / sizeof(char);

    for (int i = 0; i < num_characters; i++)
 {
        printf("The integer equivalent of '%c' is %d\n", characters[i],
characters[i]);
    }

    return 0;
}
