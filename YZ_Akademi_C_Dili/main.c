#include <stdio.h>
int main()
{
    int dizi1[3];
    int dizi2[3];
    int AliceScore=0,BobScore=0;

     for(int i=0; i<3; i++)
   {
       printf("Lutfen Alice  %d .Elemanini Giriniz\n",i+1);
       scanf("%d",&dizi1[i]);
       printf("Lutfen Bob %d .Elemanini Giriniz\n",i+1);
       scanf("%d",&dizi2[i]);
   }
    for(int i=0;i<3;i++){
        if (dizi1[i]>dizi2[i]){
            AliceScore++;
        }
        else if(dizi2[i]>dizi1[i]){
            BobScore++;
        }
        else{
            AliceScore=AliceScore;
            BobScore=BobScore;
        }
    }

    printf("Alice point: %d\n",AliceScore);
    printf("Bob point: %d\n",BobScore);
    return 0;
}
