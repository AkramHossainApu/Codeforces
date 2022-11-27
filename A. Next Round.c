#include<stdio.h>

int main(){
    int n, k, nextParticipants = 0;
    scanf("%d %d",&n, &k);
    int scoreArray[n];
    for(int i=0; i<n; i++){
        scanf("%d", &scoreArray[i]);
    }
    for(int i=0; i<n; i++){
        if( scoreArray[i]>0 && scoreArray[i]>=scoreArray[k-1]){
            nextParticipants++;
        }
    }
    printf("%d",nextParticipants);
    return 0;
}
