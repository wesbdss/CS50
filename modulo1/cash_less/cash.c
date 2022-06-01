#include<stdio.h>
#include<math.h>
int main(){
    float input = -1.0;
    // disponible coins
    float coins[] = {0.25,0.10,0.05,0.01};
    int result = 0,count = 0;

    // Input user
    while(input <= 0 ){
        printf("Troca Devida: ");
        scanf("%f",&input);

        //round values
        input = round(input*100);
        input = input/100.0;
    }

    //Check multiples
    while(count <= (sizeof(coins)/sizeof(coins[0]))){
        int r = (int) (input/coins[count]);
        if(r >= 1){
            result = result + r;
            input = input - (coins[count]*r);
            // Bug in division 0.999999
            input = input + 0.00001;
        }else count++;

    }
    printf("%d\n",result);

    return 0;
}