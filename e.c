#include<stdio.h>
int josephus(int n,int k ){
    int a; 
    
    if(n==1){
        return 1;
    }
    a = (josephus(n-1,k)+k)%n;
    return a;
}

int main(){
    int n;
    printf("enter number of people : ");
    scanf("%d",&n);
    
 int   sur = josephus(n,2) + 1;
 printf("survivor is %d ",sur);
    return 2;
}
