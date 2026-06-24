//Q70. Bubble Sort

#include<stdio.h>
int main(){
int a[100],n,i,j,t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
for(j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}


//Q71. Selection Sort


#include<stdio.h>
int main(){
int a[100],n,i,j,m,t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
m=i;
for(j=i+1;j<n;j++){
if(a[j]<a[m])
m=j;
}
t=a[i];
a[i]=a[m];
a[m]=t;
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}


//Q72. Binary Search

#include<stdio.h>
int main(){
int a[100],n,i,x,l,h,m;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&x);
l=0;
h=n-1;
while(l<=h){
m=(l+h)/2;
if(a[m]==x){
printf("%d",m);
return 0;
}
if(a[m]<x)
l=m+1;
else
h=m-1;
}
printf("-1");
return 0;
}


//Q73. Sort Array in Descending Order


#include<stdio.h>
int main(){
int a[100],n,i,j,t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(a[i]<a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
