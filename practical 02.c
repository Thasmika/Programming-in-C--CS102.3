NO:01
1)	#include<stdio.h>
2)	int main()
3)	{
4)	    int age;
5)	    printf("HI HOW OLD ARE YOU?");
6)	    scanf("%d",&age);
7)	    printf("\n\nWELCOM%d\n",age);
8)	    printf("LET'S BE FRIENDS!\n");
9)
10)	    return 0;
11)
12)	}




No:02
1)	#include<stdio.h>
2)	int main()
3)	{
4)	    printf("%\n",2,4,8); //Right Align
5)	    printf("%5d%5d%5d\n",3,9,27); //Right Align
6)
7)	    printf("%5d%5d%5d\n",4,16,64); //Right Align
8)	    printf("%5d%5d%5d\n",5,25,125); //Right Align
9)	    printf("\n\n\n\n");
10)
11)	    return 0;
12)
13)	    }





Remark:
1)	#include<stdio.h>
2)	int main()
3)	{
4)	    printf("%5d%5d%\n", 1, 2); //Right Align
5)	    printf("%5d%5d%\n", 10, 20); //Right Align
6)	    printf("\n\n\n");
7)	    printf("%-5d%-5d%\n", 1, 2); //Left Align
8)	    printf("%-5d%-5d\n", 10, 20); //Left Align
9)
10)	    return 0;
11)
12)	    }




No:03
1)	#include<stdio.h>
2)	int main()
3)	{
4)	   float avg,dt,time;
5)	   printf("Enter the distance travelled");
6)	   scanf("%f",&dt);
7)
8)	   printf("Enter the time taken");
9)	   scanf("%f",&time);
10)
11)	   avg=(dt/time);
12)
13)	   printf("The average distance travelled%2f",avg);
14)
15)	    }




No:04
1)	#include<stdio.h>
2)	int main()
3)	{
4)	  float C,F;
5)	  printf("Enter the fahrenhight");
6)	  scanf("%f",&F);
7)
8)	  C=(5.00/9.00)*(F-32.00);
9)
10)	  printf("The fahrenhight%.2f value is Eqal to Celsius %.2f%",F,C);
11)
    }

