#include<stdio.h>
int main(){
int i,n;
scanf("%d",&n);
int a[n],copy[n];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
copy[i]=a[i];
}
for(i=0;i<n;i++){
printf("%d",copy[i]);
}
return 0;

}









