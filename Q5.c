#include<stdio.h>
#include<string.h>
struct Movies{
char title[20];
char director[20];
int  rlsyear;
char genre[10];
};
void main(){
 struct Movies  film[3];
 for(int i=0;i<3;i++){
    printf("movies %d\n",i+1);
    printf("enter movies title");
    scanf("%s",film[i].title);
     printf("enter movies title");
    scanf("%s",film[i].director);
     printf("enter movies title");
    scanf("%d",film[i].rlsyear);
     printf("enter movies title");
    scanf("%s",film[i].genre);
 }
 for(int i=0;i<3;i++){
    
 }

}