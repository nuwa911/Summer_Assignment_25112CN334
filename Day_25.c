//Q98. Merge Two Sorted Arrays

#include<stdio.h>
int main(){
int a[100],b[100],c[200],n,m,i=0,j=0,k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&m);
for(i=0;i<m;i++)
scanf("%d",&b[i]);
i=0;
while(i<n&&j<m){
if(a[i]<b[j])
c[k++]=a[i++];
else
c[k++]=b[j++];
}
while(i<n)
c[k++]=a[i++];
while(j<m)
c[k++]=b[j++];
for(i=0;i<k;i++)
printf("%d ",c[i]);
return 0;
}


//Q99. Find Common Characters in Strings

#include<stdio.h>
int main(){
char a[100],b[100];
int i,j;
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++){
for(j=0;b[j]!='\0';j++){
if(a[i]==b[j]){
printf("%c ",a[i]);
break;
}
}
}
return 0;
}


//Q100. Sort Names Alphabetically

#include<stdio.h>
#include<string.h>
int main(){
char s[20][50],t[50];
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s",s[i]);
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(strcmp(s[i],s[j])>0){
strcpy(t,s[i]);
strcpy(s[i],s[j]);
strcpy(s[j],t);
}
}
}
for(i=0;i<n;i++)
printf("%s\n",s[i]);
return 0;
}



//Q101. Sort Words by Length


#include<stdio.h>
#include<string.h>
int main(){
char s[20][50],t[50];
int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s",s[i]);
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(strlen(s[i])>strlen(s[j])){
strcpy(t,s[i]);
strcpy(s[i],s[j]);
strcpy(s[j],t);
}
}
}
for(i=0;i<n;i++)
printf("%s\n",s[i]);
return 0;
}