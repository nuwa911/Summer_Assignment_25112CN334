//Q90. Find First Non-Repeating Character

#include<stdio.h>
int main(){
char s[100];
int i,j,c;
scanf("%s",s);
for(i=0;s[i]!='\0';i++){
c=0;
for(j=0;s[j]!='\0';j++){
if(s[i]==s[j])
c++;
}
if(c==1){
printf("%c",s[i]);
break;
}
}
return 0;
}



//Q91. Find First Repeating Character


#include<stdio.h>
int main(){
char s[100];
int i,j;
scanf("%s",s);
for(i=0;s[i]!='\0';i++){
for(j=i+1;s[j]!='\0';j++){
if(s[i]==s[j]){
printf("%c",s[i]);
return 0;
}
}
}
return 0;
}


//Q92. Check Anagram Strings


#include<stdio.h>
int main(){
char a[100],b[100];
int i,j,c1=0,c2=0;
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++)c1++;
for(i=0;b[i]!='\0';i++)c2++;
if(c1!=c2){
printf("Not Anagram");
return 0;
}
for(i=0;i<c1;i++){
int f=0;
for(j=0;j<c2;j++){
if(a[i]==b[j]){
b[j]='*';
f=1;
break;
}
}
if(f==0){
printf("Not Anagram");
return 0;
}
}
printf("Anagram");
return 0;
}


//Q93. Find Maximum Occurring Character


#include<stdio.h>
int main(){
char s[100],ch;
int i,j,c,m=0;
scanf("%s",s);
for(i=0;s[i]!='\0';i++){
c=0;
for(j=0;s[j]!='\0';j++){
if(s[i]==s[j])
c++;
}
if(c>m){
m=c;
ch=s[i];
}
}
printf("%c",ch);
return 0;
}
