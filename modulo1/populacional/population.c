#include<stdio.h>


int main(){
    int init_value = 0,fin_value = 0,years=0;

    while(1){
        printf("Start size: ");
        scanf("%d",&init_value);
        if(init_value >= 9 ) break;

    }
    while(1){
        printf("End size: ");
        scanf("%d",&fin_value);
        if(fin_value >= 0 && fin_value >= init_value ) break;
    }

    while(fin_value != init_value){
        init_value = init_value + (init_value/3) - (init_value/4);
        years++;
        if(init_value >= fin_value) break;
    }

    printf("Years: %d\n",years);
}