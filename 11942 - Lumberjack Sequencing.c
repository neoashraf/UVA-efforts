#include<stdio.h>
int main(){
    int n,j,flag,t,sample[105];
    scanf("%d",&n);
    puts("Lumberjacks:");
    while(n--){
        for(j=0;j<10;j++)
            scanf("%d",&sample[j]);
        flag=0;
        if(sample[0]<sample[1]){
            for(j=0;j<9;j++){
                if(sample[j]>sample[j+1]){
                    t=sample[j];
                    sample[j]=sample[j+1];
                    sample[j+1]=t;
                    flag=1;
                }
                if(flag==1)
                    break;
            }
        }
        else{
            for(j=0;j<9;j++){
                if(sample[j]<sample[j+1]){
                    t=sample[j];
                    sample[j]=sample[j+1];
                    sample[j+1]=t;
                    flag=1;
                }
                if(flag==1)
                    break;
            }
        }
        if(flag)
            puts("Unordered");
        else
            puts("Ordered");
    }
    return 0;
}
