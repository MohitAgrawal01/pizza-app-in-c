#include <stdio.h>
int main() {

//Defining variable and its types

    int r,k,q;
    int p1 = 1, p2=2, p3=3; //stored product prices
    int q1=34, q2=25, q3=24; //stored quantity of products
    int uid,pin, aid, apin; // for taking input for login details from user
    int user_id=2021, user_pin=9999; //user id and password
    int admin_id=1234,admin_pin=9876; // admin id and password
    int quantity,option,total,count=0; 
    int manage,newquantity; // for changing stocks and its quantity

        printf("Kindly Login First before Using  \n\nEnter [1] for User\nEnter [2] for Admin\n\n");
      
          scanf("%d",&r);
       
        
         if(r>2) {
        printf("Command Not exists");
        
        }
        
        else if(r==1) {
        printf("\nEnter User Id\n");
        scanf("%d",&uid);  
        
        
        // matching user input with predefined user id
         
        
        if(uid != user_id){
        
        printf("Invalid Username Entered"); 
        }
        else{
        // matching user input with predefined user pin
         
        printf("\nEnter User Pin\n");
        scanf("%d",&pin);
        if(pin != user_pin){
        
        printf("Incorrect Password entered");

        }else{

        printf("\n             Welcome User\n");

            //user logon done
            
        while(1==1){
        
        //using infinite loop for never ending of program till logout
        
        printf("\n\n\t ********************\n\n[1] Menu\n[2] Order\n[3]Logout\n");
        scanf("%d",&option);

        if(option==1){

        printf("\nBelow are the products for order \n\n[1] Pizza - %d$(%d left) \n[2] Burger- %d$(%d left) \n[3] Chips - %d$(%d left) \n",p1,q1,p2,q2,p3, q3);
        
        }
        if(option==2){
        printf("\nHere are the products with quantity and prices \n\n[1] Pizza - %d$(%d left) \n[2] Burger- %d$(%d left) \n[3] Chips - %d$(%d left) \n",p1,q1,p2,q2,p3, q3);
        
        
        printf("\nEnter Quantity of pizza to be ordered.\n\n");
        scanf("%d",&quantity); //taking quantity from user for order
        count = quantity+count; // counting total order items quantity
        total = total+p1*quantity; //adding whole order amount 
       
        
         printf("\nEnter Quantity of Burger to be ordered.\n\n");
        scanf("%d",&quantity);
        count = quantity+count;
        total = total+p2*quantity;
       
        
         printf("\nEnter Quantity of Chips to be ordered.\n\n");
        scanf("%d",&quantity);
        count = quantity+count;
        total = total+p3*quantity;


        printf("You order quantity is %d and Cost%d$. Are you confirm?? \n Press [1] for continue \n Press [2] for cancel order\n",count,total);
       
         scanf("%d", &q);
        if(q==1) {
            printf("You have successfully Placed you order");
       // Order placing Success
         }
        else if(q==2){
            printf("You have successfully Cancelled Your order");
       //order cancelling success
         }else if(q>2){ 
        
        printf("Invalid option selected"); 

	        	}else{
        printf("\n\nCan't enter Unsupported words/characters\n\n");
         
        //taking prevent from entering non integer value and executing infinte loop continously without input
        break; //loop terminated
        }

    }
    if(option==3){

        printf("Logout successfully Done, Kindly rerun for login again\n\n");
        //logout done
        break; // loop terminated
        }
        }}
        }} else if(r==2) {

        printf("\nEnter Admin Id\n");
       
         scanf("%d",&aid);
        // matching user input with predefined admin id
         
        if(aid != admin_id){
        printf("\n You have Entered an invalid id"); 

        }else{

        printf("\nEnter Admin Pin\n");
        
        scanf("%d",&apin);
       // matching user input with predefined admin pin
         
         if(apin != admin_pin){
        
        printf("\nYou have Entered Inavlid Pin\n"); 

        }else{

      
          printf("\nWelcome Admin\n");
        // Admin logon success
        
        
        while(2==2){
       
         printf("\n\n\t ********************\n\n[1] View Stocks\n[2] Manage Stocks\n[3]Logout\n");
        
        scanf("%d",&option);
        
        if(option==1){
       
         printf("\n      All Products are shows below \n\n1.Pizza - %d$(%d left) \n2. Burger- %d$(%d left) \n3. Chips - %d$(%d left) \n",p1,q1,p2,q2,p3, q3);
   
        }//end of option1
        
        
        if(option==3){
        printf("You have successfully Logged out");
        break;
        }//end of option 3
        
        if(option==2){
        
        
        printf("\n      Choose the product for managing stocks \n\n1.Pizza - %d$(%d left) \n2. Burger- %d$(%d left) \n3. Chips - %d$(%d left) \n",p1,q1,p2,q2,p3, q3);
   scanf("%d",&manage);

        //asking product serial no. for modification of stocks
       
         if(manage==1){
       printf("Enter the new Quantity for Pizza\n");
    scanf("%d",&newquantity); //taking new quantity from admin
    q1=newquantity; //updating quantity
        }//end of manage 1
    
    
        if(manage==2){
       printf("Enter the new Quantity for Burger\n");
    scanf("%d",&newquantity);
    q2=newquantity;
        }//end of manage 2
        
        
    if(manage==3){
       printf("Enter the new Quantity for Chips\n");
    scanf("%d",&newquantity);
    q3=newquantity;
    
    }//end of manage 3
    
        
        }//end of option2
    }//end of while
    }//end of pin check block
    }//end of username check block
    }//end of type check block
    }//end of main function
