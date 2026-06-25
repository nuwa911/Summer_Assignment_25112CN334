//Q94. Check String Rotation

#include<stdio.h>
#include<string.h>
int main(){
char s1[100],s2[100],t[200];
scanf("%s%s",s1,s2);
strcpy(t,s1);
strcat(t,s1);
if(strstr(t,s2))
printf("Rotation");
else
printf("Not Rotation");
return 0;
}


//Q95. Compress a String


#include<stdio.h>
int main(){
char s[100];
int i,j,c;
scanf("%s",s);
for(i=0;s[i]!='\0';i=j){
c=1;
for(j=i+1;s[j]==s[i];j++)
c++;
printf("%c%d",s[i],c);
}
return 0;
}


//Q96. Find Longest Word


#include<stdio.h>
#include<string.h>
int main(){
char s[200],w[50],m[50];
int i=0,j=0,max=0;
fgets(s,sizeof(s),stdin);
while(1){
if(s[i]==' '||s[i]=='\0'||s[i]=='\n'){
w[j]='\0';
if(j>max){
max=j;
strcpy(m,w);
}
j=0;
if(s[i]=='\0'||s[i]=='\n')
break;
}
else{
w[j++]=s[i];
}
i++;
}
printf("%s",m);
return 0;
}


//Q97. Remove Duplicate Characters

#include<stdio.h>
int main(){
char s[100];
int i,j,f;
scanf("%s",s);
for(i=0;s[i]!='\0';i++){
f=0;
for(j=0;j<i;j++){
if(s[i]==s[j]){
f=1;
break;
}
}
if(f==0)
printf("%c",s[i]);
}
return 0;
}