#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 typedef struct BOOK{

    int id;
     int price;
    double rating;
    char bname[20];
    char author[10];
   

} BOOK;
void allstored(BOOK*,int);
 void Addbook(BOOK*,int*);
void Removebook(BOOK*,int);
void Authorbook(BOOK*,int);
void Updatebook(BOOK* ,int);
void Displaytop3(BOOK*,int);
void Searchbook(BOOK*,int);
void Displayall(BOOK*,int);
int main(){
    int choice;
    BOOK* database;
     int n;
     printf(" Enter num how many books you want store in database");
     scanf("%d",&n);
     database=(BOOK*)malloc(sizeof(int)*n);

       allstored(database,n);

    //   void allstored(BOOK* database,int n){
     
    // for(int i=0;i<n;i++){
    //     printf("BOOK No %d\n...................................\n",i+1);

    //     printf("enter book id\n");
    //     scanf("%d",&database[i].id);
    //      printf("enter book price\n");
    //      scanf("%d",&database[i].price);   
    //     printf("enter book rating\n");
    //     scanf("%d",&database[i].rating);  
    //      printf("enter book name\n");
    //     scanf("%s",database[i].bname);
    //      printf("enter book author\n");
    //     scanf("%s",database[i].author);  
    // }
    // } 
        do{
       printf("\nMenu:\n");
        printf("1. Add  new book\n");
        printf("2. Remove  book\n");
        printf("3. Search for  book\n");
        printf("4. Show author books\n");
        printf("5. Update book data\n");
        printf("6. Display top books\n");
        printf("7. Display all books\n");
        printf("0. Exit\n");
        printf("Enter your choice= \n");
        scanf("%d", &choice);

    switch(choice){
        case 1:
            
               Addbook(database,&n);
        
        break;

        case 2:
              Removebook(database,n);
        break;

        case 3:
            Searchbook(database,n);
        break;

       case 4:
             Authorbook(database,n);
        break;
        
       case 5:
           Updatebook(database,n);
       break;

        case 6:
              Displaytop3(database,n);
         break;

    case 7:
          Displayall(database,n);      
    break;

    case 0:
    printf(" Goodbye radhe radhe ");
    break;
 }
        }
     while (choice!=0);

}

      void allstored(BOOK* database,int n){
     
    for(int i=0;i<n;i++){
        printf("BOOK No %d_____________________________________________________\n",i+1);

        printf("enter book id\n");
        scanf("%d",&database[i].id);
         printf("enter book price\n");
         scanf("%d",&database[i].price);   
        printf("enter book rating\n");
        scanf("%lf",&database[i].rating);  
         printf("enter book name\n");
        scanf("%s",database[i].bname);
         printf("enter book author\n");
        scanf("%s",database[i].author);  
    }
    } 
// search by id and name
    void Searchbook(BOOK* database,int n){
        int newid;
       char name[10];
        int choice;
        for(int j=0;j<n;j++){ 
    printf("\nid is------  %d\n", database[j].id);
    printf("price----- %d\n",database[j].price);
     printf("rating----- %lf\n",database[j].rating);
     printf("bname ------ %s \n",database[j].bname);
    printf("author----- %s\n",database[j].author);

   }   
    printf("enter your choice to search 1= byid and 2 name");
    scanf("%d",&choice);
    int found;
   switch (choice){

case 1:
       // int newid;
        // char name[10];
        printf("enter id of book for saerch\n");
        scanf("%d",&newid);
        //  printf("enter book name of book  for search\n");
        // scanf("%s",name);

        for(int i=0;i<n;i++){
        if(database[i].id==newid ){
           // found=1;
     // if (strcmp(database[i].bname, name) == 0) {
   
            printf("\nbook is found\n");
            printf("id =%d\nprice= %d\nrating= %lf\nname= %s\nauthor= %s\n", database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author);
            
        }
        
            else{
            printf("not found\n");
            break;
              }

   }
   break;

       case 2:
           //char name[10];
         printf("enter book name of book  for search\n");
         scanf("%s",name);
          
           for(int i=0;i<n;i++){
          if (strcmp(database[i].bname, name) == 0) {
           found=1;
            printf("\nbook is found\n");
            printf("id =%d\nprice= %d\nrating= %lf\nname= %s\nauthor= %s\n", database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author); 

            
            } 
            
             if(found!=1){
                printf("not found\n");
                break;
        }
           
        }
        break;

   }
    
 }
        
    

    void Displayall(BOOK* database,int n){
        
    printf("\nyour Database..info....for...all....book............\n");
    for(int i=0;i<n;i++){
    //  printf("id =%d\nprice= %d\nrating= %lf\nname= %s\nauthor= %s\n", database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author); 

    printf("\nbook no %d\n",i+1);
    printf("id is------  %d\n", database[i].id);
    printf("price----- %d\n",database[i].price);
   printf("rating----- %lf\n",database[i].rating);
    printf("bname ------ %s \n",database[i].bname);
     printf("author----- %s\n",database[i].author);

   // printf("|%-20d|%20d|%-20.3lf|%-20s|%-20s|\n",database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author);
   } 

}

void Displaytop3(BOOK* database,int n){

printf("TOP rating book from our database.................\n");
for(int i=0;i<n;i++){
 printf("display booknum %d\n",i+1);
 printf("\nid = %d\nprice-  %d \nrating= %lf\nname=  %s\nauthor=  %s\n ", database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author); 
}
//decemnding ordr
     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (database[j].rating < database[j + 1].rating) {
                 BOOK temp = database[j];
                database[j] = database[j + 1];
                database[j + 1] = temp;
           }
        }
     }
     printf("TOP 3 BOOK based on rating...........result..............\n");
     for(int i=0;i<n;i++){
        printf(" num of book ...%d.\n",i+1);
         printf("\nid =%d\n  price= %d\n   rating= %lf\n  name= %s\n  author= %s\n", database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author); 

    }
}

void Authorbook(BOOK* database,int n){
    
    char author[15];
    printf("Enter the Author Name to display his books= ");
     scanf("%s", author);
     printf(" found all detail\t  ID\t | Price\t | Rating\t |namebook\t| author |\n");
     printf("_________________|___________________________________________________|__________\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(database[i].author, author) == 0) {
    printf(" found all detail\t | %d\t |    %d\t  |  %lf\t   |   %s\t | %s  |\n", database[i].id, database[i].price, database[i].rating, database[i].bname,database[i].author);
            found = 1;
        

        }
    
    if (found!=1) {
        printf("No books found for author  %s  in the database\n", author);
        break;
    }
     }
}
void Removebook(BOOK* database,int n){
     
    int bookId;
    printf("Enter the Book ID to remove inform\n ");
    scanf("%d", &bookId);
int found=0;
    for (int i = 0; i < n; i++) {
        if (database[i].id == bookId) {
            for (int j = i; j < n - 1; j++) {
                database[j] = database[j + 1];
            }
            n--;
            found=1;
        } 
   }
         for(int i=0;i<n;i++){
            printf("after remove book no %d,--\n",i+1);
  // printf("\nid =%d\n price= %d\n rating= %lf\n name= %s\n author= %s\n", database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author); 

    printf("book no %d\n",i+1);
    printf("\nid is------  %d\n", database[i].id);
    printf("price----- %d\n",database[i].price);
    printf("rating----- %lf\n",database[i].rating);
    printf("bname ------ %s \n",database[i].bname);
    printf("author----- %s\n",database[i].author);
        }

        if(found!=1){
        printf("\ninvalid id.........................try again\n");
        }
 }
void Addbook(BOOK* database,int* n){
     int s=*n+1;
    int id1;
    //database=(BOOK*)realloc(sizeof(BOOK)*n+1);
    int price1; 
    double rating1;
    char name1[30];
    char author1[30];
    printf("THIS IS NEW ADDED BOOK\n");
        printf("enter book id\n");
        scanf("%d",&id1);
         printf("enter book price\n");
         scanf("%d",&price1);   
        printf("enter book rating\n");
        scanf("%lf",&rating1);  
         fflush(stdin);
         printf("enter book name\n");
         scanf("%s",name1);
          printf("enter book author\n");
         scanf("%s",author1);
         database[*n].id=id1;
         database[*n].price=price1;
         database[*n].rating=rating1;
       strcpy(database[*n].bname,name1);
       strcpy(database[*n].author,author1);

     *n=*n+1;
     printf("\n total book -%d",*n);
     printf("id =%d\nprice= %d\nrating= %lf\nname= %s\nauthor= %s\n", id1,price1,rating1,name1); 

    for(int i=0;i<n;i++){
    } 
  //Displayall(database,n);
  printf("\nsuccessfully added  you can check now by displayall\n ");
 // printf("id =%d\nprice= %d\nrating= %lf\nname= %s\nauthor= %s\n",database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author); 

 }  //}

void Updatebook(BOOK* database,int n) {
    int bookId;
    printf("\nEnter the Book ID for update \n");
    scanf("%d", &bookId);
//update based on id
    for (int i = 0; i < n; i++) {
        if (database[i].id == bookId) {
            printf("Enter update price ");
            scanf("%d", &database[i].price);
            printf("Enter update rating ");
            scanf("%lf", &database[i].rating);
            printf("Book data for ID %d update compltly\n", bookId);
            
        }
        else{
                printf("Book with ID %d not found in the database\n", bookId);
                break;

        }
    }

    for(int i=0;i<n;i++){
           printf("id =%d\n  newprice= %d\n  newrating= %lf\n  name= %s\n  author= %s\n", database[i].id,database[i].price,database[i].rating,database[i].bname,database[i].author); 

    }
}



