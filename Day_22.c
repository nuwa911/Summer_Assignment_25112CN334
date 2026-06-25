//Q86. Check Palindrome String

#include<stdio.h>
int main(){
char s[100];
int i=0,j,f=1;
scanf("%s",s);
while(s[i]!='\0')
i++;
for(j=0;j<i/2;j++){
if(s[j]!=s[i-j-1]){
f=0;
break;
}
}
if(f)
printf("Palindrome");
else
printf("Not Palindrome");
return 0;
}


//Q87. Count Words in a Sentence

#include<stdio.h>
int main(){
char s[200];
int i=0,c=1;
fgets(s,sizeof(s),stdin);
while(s[i]!='\0'){
if(s[i]==' ')
c++;
i++;
}
printf("%d",c);
return 0;
}


//Q88. Character Frequency


#include<stdio.h>
int main(){
char s[100],ch;
int i=0,c=0;
scanf("%s",s);
scanf(" %c",&ch);
while(s[i]!='\0'){
if(s[i]==ch)
c++;
i++;
}
printf("%d",c);
return 0;
}


//Q89. Remove Spaces from String

#include<stdio.h>
int main(){
char s[200];
int i=0,j=0;
fgets(s,sizeof(s),stdin);
while(s[i]!='\0'){
if(s[i]!=' ')
s[j++]=s[i];
i++;
}
s[j]='\0';
printf("%s",s);
return 0;
}
