/*Name:Eric kamau ng'ang'a
Reg. number:CT101/G/26471/25
Description gross pay 
*/
# include <stdio.h>
int main(){
float hours, wage,gross_pay ,taxes, net_pay;
     printf("Enter hours worked in a week: \n");
  scanf("%f" ,& hours);
printf("Enter hourly wage:\n");
 scanf("%f" ,& wage);
      if (hours<=40){
gross_pay = hours*wage ;
    }
else {
   float overtime_hours = hours -40 ;
   gross_pay =(40*wage) +(overtime_hours*wage*1.5);
   }
   //calculate taxes 
   if (gross_pay<=600){
   taxes = gross_pay*1.5;
   } else{
   taxes =(600*1.5) + (gross_pay - 600)*0.2;
   }
   //net_pay
   net_pay =gross_pay - taxes ;
   //output results
   printf("Gross_pay: $ %.2f \n" , gross_pay); 
   printf("Taxes: $ %.2f \n" ,taxes);
   printf("Net_pay : $ %.2f \n" , net_pay);
   
return 0;
}