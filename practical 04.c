(1)
 #include<stdio.h>
    int main()
   {
        int no,ans;
        printf("Enter the number");
        scanf("%d",&no);

       ans=no%2;
       if(ans==1)
           printf("%d is an odd number\n",no);
       else
           printf("%d is an even number\n",no);
  }


     #include<stdio.h>
     int main()
    {
         int n,k;
         printf("Enter a number");
         scanf("%d",&n);
         k=n%2;
         switch(k)
             {
        case0:printf("%d is a even number",n);
break;
        default:printf("%d is a odd number",n);
break;
}
}


(2)
#include<stdio.h>
int main()
{
    int n1,n2,a,o,b;
    printf("Enter 1st number");
    scanf("%d",&n1);
    printf("Enter 2nd number");
    scanf("%d",&n2);
    printf("Choose a operation\n 1-->+\n 2-->-\n 3-->*\n 4-->/\n Enter
operation :");
    scanf("%d",&o);
    switch (o)
    {
        case 1 : a=n1+n2;
                    printf("Answer is =%d",a);
                    break;
        case 2 :if (n1<=n2)
                    a=n2-n1;
                else
                    a=n1-n2;
                    printf("Answer is = %d",a);
                    break;
        case 3 :a=n1*n2;
                    printf("Answer is = %d",a);
                    break;
        case 4 :if (n1<=n2)
                    a=n2/n1;
                else
                    a=n1/n2;
                    b=n1%n2;
                    printf("Answer is=%d\nReminder=%d",a,b);
                    break;
                    default:printf("Error:Invalid operation");
    }
}



(3)
    #include<stdio.h>
    int main()
   {
         float r,c,a,v,p=3.14159;
        int o;
        printf("Select what you need to calculate\n1.-->Circumference\n2.-->Area\n3.-->Volume");
       scanf("%d",&o);
       printf("Input the value of the radius");
       scanf("%f",&r);
       switch(0)
    {
        case 1:c=2*p*r;
        printf("Circumference=%f",c);
        break;
        case 2:a=p*r*r;
        printf("Area=%f",a);
        break;
        case 3:v=4*p*r*r*r/3;
        printf("Volume=%f",v);
        break;
        default:printf("Error!Invalid operation");
    }
    }


(4)
  #include<stdio.h>
  int main()
  {
     char l;

     printf("Enter a letter :");
     scanf("%c",&l);

     switch(l)
     {
          case 'a':printf("%c is a vowel",l);
                              break;
          case 'e':printf("%c is a vowel",l);
                              break;
          case 'i':printf("%c is a vowel",l);
                              break;
          case 'o':printf("%c is a vowel",l);
                              break;
          case 'u':printf("%c is a vowel",l);
                              break;
          case 'A':printf("%c is a vowel",l);
                              break;
          case 'E':printf("%c is a vowel",l);
                              break;
          case 'I':printf("%c is a vowel",l);
                              break;
          case 'O':printf("%c is a vowel",l);
                              break;
          case 'U':printf("%c is a vowel",l);
                              break;
          default :printf("%c is not a vowel",l);
          }
     #include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Enter numbers to add (-1 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == -1) {
            break;  // Exit the loop if -1 is entered
        }

        sum += number;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}}


(5)
  #include <stdio.h>
  int main()
  {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("Total number of days = 31");
            break;
        case 2:
            printf("Total number of days = 28");
            break;
        case 3:
            printf("Total number of days = 31");
            break;
        case 4:
            printf("Total number of days = 30");
            break;
        case 5:
            printf("Total number of days = 31");
            break;
        case 6:
            printf("Total number of days = 30");
            break;
        case 7:
            printf("Total number of days = 31");
            break;
        case 8:
            printf("Total number of days = 31");
            break;
        case 9:
            printf("Total number of days = 30");
            break;
        case 10:
            printf("Total number of days = 31");
            break;
        case 11:
            printf("Total number of days = 30");
            break;
        case 12:
            printf("Total number of days = 31");
            break;
        default:
            printf("Invalid input! Please enter month number
between (1-12).");
    }

    return 0;
}



         Part B
(1)

      #include<stdio.h>
      int main()
      {
           int x;
           for(x=0;x<=100;x++)
          {
        printf("%d  ",x);
         }
     }


 #include<stdio.h>
int main()
{
    int x=0;
    while(x<=100)
    {
        printf("%d  ",x);
        x++;
    }
}




#include<stdio.h>
int main()
{
    int x=0;
    do
    {
        printf("%d  ",x);
        x++;
    }
        while(x<=100);
}



(2)
   #include<stdio.h>
   int main()
   {
    int mark[10],i,sum,total;
    float avg;
    for(i=0;i<0;i++)
    {
        printf("Enter mark:\n");
        scanf("%f",&mark);
        sum+=mark;
    }
    avg=sum/10.0;
    printf("The sum%d \n",sum);
    if(avg<50.0)
    {
        printf("fail\n");
    }
    else{
        printf("pass\n");
    }
    }



(3)
     #include<stdio.h>
     int main()
     {
           int number;
           int i=1,factorial=1;
           printf("Enter number: ");
           scanf("%d",&number);
           while(i<=number)
           factorial=i;
           i++;
           printf("factorial is %d",factorial);
      }



(4)
     #include<stdio.h>
     int main()
     {
          int number;
          int total=0;
          int reminder;
          printf("Enter number: ");
          scanf("%d",&number);

         while(number!=0)
     {
        reminder=number%10;
        total+=reminder;
        number=number/10;
    }
    printf("The output is %d",total);
}



(5)
    #include <stdio.h>
    int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    do {
        remainder = number % 10;  // Get the last digit
reversedNumber = reversedNumber * 10 +
remainder;  // Append the digit to reversedNumber
number /= 10;  // Remove the last digit from number
} while (number != 0);
printf("Reversed number: %d\n", reversedNumber);
return 0;
}


(6)
#include <stdio.h>
int main()
{
int base,exponent;
printf("Enter the base: ");
scanf("%d", &base);
printf("Enter the exponent: ");
scanf("%d", &exponent);
int result = power(base, exponent);
printf("%d raised to the power of %d is: %d\n", base,
exponent, result);
return 0;
}



(7)
#include <stdio.h>
int main() {
int num1 = 0, num2 = 1, nextNum, count;
printf("The first 10 numbers of the Fibonacci sequence
are:\n");
printf("%d ", num1);
printf("%d ", num2);
for (count = 3; count <= 10; count++) {
nextNum = num1 + num2;
printf("%d ", nextNum);
        num1 = num2;
        num2 = nextNum;
       }

          return 0;
     }



(8)
     #include<stdio.h>
     int main() {
     int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrongNumber(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}


(9)
     #include <stdio.h>
     int main() {
     char letter;

     printf("ASCII values for letters A to Z:\n");

     for (letter = 'A'; letter <= 'Z'; letter++)
       {
        printf("Letter: %c, ASCII value: %d\n", letter, letter);
       }
          return 0;
       }


(10)
        #include <stdio.h>
        int main()
        {
              int x,y;
              for(x=1;x<=5;x++)
             {
                   for(y=1;y<=x;y++)
                   {
                      printf("* ");
                   }
                      printf("\n");
             }
      }


(11)
       #include <stdio.h>
       int main()
       {
                int number;

               printf("Enter a positive integer: ");
                scanf("%d", &number);

             if(isprime(number))
                printf("%d is a prime number.\n", number);
             else
                printf("%d is not a prime number.\n", number);

             return 0;
        }



(12)
      #include <stdio.h>
       int main()
     {
           int number;
           int sum = 0;
           printf("Enter numbers to add (-1 to stop):\n");

            while (1) {
             scanf("%d", &number);

             if (number == -1) {
            break;  // Exit the loop if -1 is entered
               }
                sum += number;
              }
                printf("The sum is: %d\n", sum);
               return 0;
         }


(13)
            #include <stdio.h>
            int main() {
            int size = 10;
            int arr[size];

             printf("Enter %d integers:\n", size);

             for (int i = 0; i < size; i++) {
             scanf("%d", &arr[i]);
              }
             printf("The array is:");

              for (int i = 0; i < size; i++)
            {
                  printf(" %d", arr[i]);
             }
                  printf("\n”);
                 return 0;
         }
