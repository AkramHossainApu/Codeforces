#include<stdio.h>
#include<limits.h>

int main(){
    int n, winner, firstPrice, secondPrice;
    scanf("%d", &n);
    int biddersArray[n];
    for(int i=0; i<n; i++){
        scanf("%d", &biddersArray[i]);
    }
    firstPrice = INT_MIN;
    secondPrice = INT_MIN;
    for(int i=0; i<n; i++){
        if(firstPrice < biddersArray[i]){
            secondPrice = firstPrice;
            firstPrice = biddersArray[i];
            winner = i + 1;
        }else if(biddersArray[i] > secondPrice && biddersArray[i] < firstPrice){
            secondPrice = biddersArray[i];
        }
    }
    printf("%d %d", winner, secondPrice);
    return 0;
}
