#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    int price;
    int number_of_notes;
    int number_of_coins;
    int credit;
    int change;

    //welcome to vending machine project//
   printf("Select an item: \n");
    printf("1. Coke       - 1500 UGX\n");
    printf("2. Pepsi     - 1000 UGX\n");
    printf("3. Sprite     - 1500 UGX\n");
    printf("4. Fanta    - 1500 UGX\n");
    printf("5. Mirinda - 1000 UGX\n");
    printf("6. Exit\n\n");

   //Prompt the user for item number
printf("Enter your choice: \n");
scanf("%d",&choice);

if (choice ==1)
{
    {
price =1500;
printf("You selected Coke. Insert UGX%d: ", price);
}
else if (choice ==2)
{
price =1000;
printf("You selected Pepsi. Insert UGX%d: ", price);
}
else if (choice ==3) {
price =1500;
printf("You selected Sprite. Insert UGX%d: ", price);
}
else if (choice ==4) {
price =1500;
printf("You selected Fanta. Insert UGX%d: ", price);
}
else if (choice == 5) {
price =1000;
printf("You selected Mirinda. Insert UGX%d: ", price);
}
else if (choice ==6)
{printf("Thank you! Have a nice day.\n");

return 0;
}
    else
     printf("Invalid selection Please try again.\n");
return 0;
} 

//Prompt the user to insert the amount//
printf("Enter your credit: \n");
scanf("%d", &credit);
//Compare credit with the price
if(credit >= price) {
printf("Dispensing your item.\n);

  

    if (credit > price) {
        change = credit - price;
        printf("Your change is %d UGX.\n", change);

        
//CALCULATE AND DISPLAY DENOMINATIONS
if (change >=50000){
number_of_notes =change/50000;
change = change-(number_of_notes*50000);
printf("Change = %d\n", change);
}
if (change >=20000){
number_of_notes =change/20000;
change = change-(number_of_notes*20000);
printf("Change = %d\n", change);
}
if (change >=10000){ 
number_of_notes =change/10000;
change = change-(number_of_notes*10000);
printf("Change = %d\n", change);
}
if (change >=5000){      
number_of_notes =change/5000;
change = change-(number_of_notes*5000);
printf("Change = %d\n", change);
}
if (change >=2000){
number_of_notes =change/2000;
change = change-(number_of_notes*2000);
printf("Change = %d\n", change);
}
if (change >=1000){
       number_of_notes =change/1000;
       change = change-(number_of_notes*1000);
       printf("Change = %d\n", change);
}
if (change >=500){
       number_of_coins =change/500;
       change = change-(number_of_coins*500);
       printf("Change = %d\n", change);
}
if (change >=200){ 
number_of_coins =change/200;
       change = change-(number_of_coins*200);
       printf("Change = %d\n", change);
}
if (change >=100){
       number_of_coins =change/100;
       change = change-(number_of_coins*100);
       printf("Change = %d\n", change);
}
if (change >=50){
       number_of_coins =change/50;
       change = change-(number_of_coins*50);
       printf("Change = %d\n", change);
}
}
}
        
if (credit <price) {
    printf("Insufficient funds. Please top up: UGX.%d\n" price - credit);
  return 0;
}
return 0;



}   
