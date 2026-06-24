//Q78. Multiply Matrices

#include<stdio.h>
int main(){
int a[10][10],b[10][10],c[10][10],n,i,j,k;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
c[i][j]=0;
for(k=0;k<n;k++)
c[i][j]+=a[i][k]*b[k][j];
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++)
printf("%d ",c[i][j]);
printf("\n");
}
return 0;
}


//Q79. Check Symmetric Matrix


#include<stdio.h>
int main(){
int a[10][10],n,i,j,f=1;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(a[i][j]!=a[j][i]){
f=0;
break;
}
}
}
if(f)
printf("Symmetric");
else
printf("Not Symmetric");
return 0;
}


//Q80. Find Row-wise Sum


#include<stdio.h>
int main(){
int a[10][10],r,c,i,j,s;
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(i=0;i<r;i++){
s=0;
for(j=0;j<c;j++)
s+=a[i][j];
printf("%d\n",s);
}
return 0;
}


//Q81. Find Column-wise Sum


#include<stdio.h>
int main(){
int a[10][10],r,c,i,j,s;
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(j=0;j<c;j++){
s=0;
for(i=0;i<r;i++)
s+=a[i][j];
printf("%d\n",s);
}
return 0;
}