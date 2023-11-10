#include<stdio.h>
#include<string.h>
// typedef
  struct Players{
    char pname[20];
    int totalmatch;
    int runs;
    int wickets;
}; //Players;
int main(){
   struct  Players player[3];
    for(int i=0;i<3;i++){
    printf("player no %d\n ",i+1);

    printf("enter player name");
    scanf("%s",player[i].pname);
     printf("enter total match");
     scanf("%d",&player[i].totalmatch);
     printf("enter runs");
     scanf("%d",&player[i].runs);
     printf("enter wickets");
     scanf("%d",&player[i].wickets);
    
    }
    printf("detail all plaeyr");
     for(int i=0;i<3;i++){
        printf("pname= %s\n tmatch= %d\n runs= %d\n wickets= %d",player[i].pname,player[i].totalmatch,player[i].runs,player[i].wickets);
        printf("\n");
     }

struct Players maxruns=player[0];
struct Players maxwicket=player[0];
for(int i=0;i<3;i++){
if(player[i].runs>maxruns.runs){
    maxruns.runs=player[i].runs;
}
if(player[i].wickets>maxwicket.wickets){
maxwicket.wickets=player[i].runs;

}
// printf(" maxruns= %d\t  maxwickets=%d\t  name=%s",maxruns.runs,maxwicket.wickets,maxruns.pname);
    }
    printf(" maxruns= %d\t  maxwickets=%d\t  name=%s",maxruns.runs,maxwicket.wickets,maxruns.pname);

}