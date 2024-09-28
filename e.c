#include<stdio.h>
int main(){
    int n;//number of people
    printf("enter number of people : ");
    scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
    a[i]=1;
}
for(int j = 0 ; j<n;j++){
    for(int i = 0;i<n;i++){
    if(a[i]!=0&&i+1+j<n){
        a[i+1+j]=0;
    }
    else if(a[i]!=0&&i+1+j>=n){
        a[n-i-1-j]=0;
    }
    }
}
for(int i=0;i<n;i++){
    if(a[i]!=0){
        printf("alive person is %d",i+1);
    }
}
return 0;
}