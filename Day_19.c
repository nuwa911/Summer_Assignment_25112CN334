//Q74. Add Matrices

#include<stdio.h>
int main(){
int a[10][10],b[10][10],c[10][10],r,c1,i,j;
scanf("%d%d",&r,&c1);
for(i=0;i<r;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
for(j=0;j<c1;j++)
scanf("%d",&b[i][j]);
for(i=0;i<r;i++)
for(j=0;j<c1;j++)
c[i][j]=a[i][j]+b[i][j];
for(i=0;i<r;i++){
for(j=0;j<c1;j++)
printf("%d ",c[i][j]);
printf("\n");
}
return 0;
}


//Q75. Subtract Matrices


#include<stdio.h>
int main(){
int a[10][10],b[10][10],c[10][10],r,c1,i,j;
scanf("%d%d",&r,&c1);
for(i=0;i<r;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
for(i=0;i<r;i++)
for(j=0;j<c1;j++)
scanf("%d",&b[i][j]);
for(i=0;i<r;i++)
for(j=0;j<c1;j++)
c[i][j]=a[i][j]-b[i][j];
for(i=0;i<r;i++){
for(j=0;j<c1;j++)
printf("%d ",c[i][j]);
printf("\n");
}
return 0;
}


//Q76. Transpose Matrix


#include<stdio.h>
int main(){
int a[10][10],r,c,i,j;
scanf("%d%d",&r,&c);
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
for(i=0;i<c;i++){
for(j=0;j<r;j++)
printf("%d ",a[j][i]);
printf("\n");
}
return 0;
}


//Q77. Find Diagonal Sum


#include<stdio.h>
int main(){
int a[10][10],n,i,j,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
s+=a[i][i];
printf("%d",s);
return 0;
}