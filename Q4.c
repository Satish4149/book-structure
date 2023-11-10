 #include<stdio.h>
 #include<stdlib.h>
  #include<string.h>

//   typedef struct Salesystem{
//     char name[20];
//     double price;
//     int quantity;
//  }Salesystem;
// void main(){
//   Salesystem product[2];
//  for(int i=0;i<2;i++){
//  printf("product num=%d\n",i+1);
//  printf("enter product name");
//  scanf("%s",product[i].name);
//  printf("enter price");
//  scanf("%lf",&product[i].price);
//  printf("enter quantity");
//  scanf("%d",&product[i].quantity);
//  }
//  printf("\ndisplay product detail with total cost\n");
//  for(int i=0;i<2;i++){
//  printf("name=%s\n price=%lf\n quantity=%d\n",product[i].name,product[i].price,product[i].quantity);

//  printf("total cost %d %lf",productcart[i].price*productcart[i].quantity);

 //}

//}

// Define a structure to represent a sales card
 typedef struct Salesystem {
    char itemName[50];
    double itemPrice;
    int quantity;
}Salesystem;
void addCard(Salesystem*,int*);
void calcuCost(Salesystem*,int);
int main() {
     Salesystem cards[100];
    int cardCount = 0;
    int choice;

    do {
        printf("\n1. Add a card\n");
        printf("2. Calculate total cost\n");
        printf("3. Exit\n");
        printf("Enter your choice ");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                addCard(cards, &cardCount);
                break;
            case 2:
                 calcuCost(cards, cardCount);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

// Function to add a card to the sales system
void addCard( Salesystem* cards, int *cardCount) {
    int size=*cardCount+1;
        printf("Sales system add more cards\n");
    

     Salesystem newCard;
    printf("\nEnter item name: ");
    scanf("%s", newCard.itemName);
    printf("Enter item price: ");
    scanf("%lf", &newCard.itemPrice);
    printf("Enter quantity: ");
    scanf("%d", &newCard.quantity);

    cards[*cardCount] = newCard;
    (*cardCount)++;
}

// Function to calculate the total cost of all cards
void calcuCost(Salesystem* cards, int cardCount) {
    double totalCost = 0.0;
    for (int i = 0; i < cardCount; i++) {
        totalCost= totalCost +cards[i].itemPrice * cards[i].quantity;
    }
    printf("\ntotalcost= %.3lf",totalCost);
}


