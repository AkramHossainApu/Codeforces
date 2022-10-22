#include<stdio.h>

int main(){
    int numOfProblem, int1, int2, int3, i, count=0;
    scanf("%d", &numOfProblem);

    for(i==0;i<numOfProblem;i++){
        scanf("%d %d %d", &int1, &int2, &int3);
        if (int1+int2+int3>1) count++;
    }
    printf("%d", count);

    return 0;
}
