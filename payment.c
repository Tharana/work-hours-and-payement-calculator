#include<stdio.h>
int main()

{
	float pay , hou , tat , tat1,  tat2, emp_pay ; 
        printf("Enter you 1 hours payment");
        scanf("%f" ,&pay);
        printf("Enter your work hours");
        scanf("%f" ,&hou );

	if (hou >= 40 ){
	    tat = hou - 40;
	    tat1 = 40*pay;
	    tat2 = tat*pay*1.5;
	    emp_pay = tat1 + tat2;
	}
         else {
	    emp_pay =  hou*pay;
	 }

	 printf("payment is %f" , emp_pay );

	
	 return 0;
}
