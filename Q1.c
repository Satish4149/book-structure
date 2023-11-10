#include<stdio.h>
struct Book{

    int id;
    char bname[20];
    char author[10];
    int price;

};
int main(){
    struct Book books[3];
     
    for(int i=0;i<3;i++){
        printf("BOOK No %d\n",i+1);

        printf("enter book id");
        scanf("%d",&books[i].id);
         printf("enter book name");
        scanf("%s",&books[i].bname);
         printf("enter book price");
        scanf("%d",&books[i].price);   
         printf("enter book author");
        scanf("%s",&books[i].author);
        
    }
    printf("your information");
    for(int j=0;j<3;j++){
      printf("id is= %d\n bname is %s \n  price= %d\n author is %s", books[j].id,books[j].bname,books[j].price,books[j].author); 
    // printf("id is= %d\n", books[j].id);
    // printf("bname is %s \n",books[j].bname);
    // printf("price= %d\n",books[j].price);
    // printf("author is %s",books[j].author);
   } 
}