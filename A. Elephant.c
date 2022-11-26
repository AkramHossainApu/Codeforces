#include<stdio.h>

int main(){
    int i, step, ele = 0;
    scanf("%d", &step);

        for(i = 1;step != 0; i++){
            if(step>=5){
                step = step - 5;
            }else if(step<5 && step>=4){
                step = step - 4;
            }else if(step<4 && step>=3){
                step = step - 3;
            }else if(step<3 && step>=2){
                step = step - 2;
            }else{
                step = step - 1;
            }
            ele ++;
        }
        printf("%d", ele);
        return 0;
}
