#include<stdio.h>
int main()
{
FILE*fp;
char ch;
fp=fopen("data,txt","w");
fprintf(fp,"C is a general purpose programming language.It was developed by dennis ritchie in 1972,C is a simple and powerful programming language,It is used to develop software and application,C supports function,loops and arrays");
fclose(fp);
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF);
{
printf("%c",ch);
}
fclose(fp);
fp=fopen("data.txt","a");
fprintf(fp,"sir teaches C programming in an easy and understandable way,he explains every concept clearly,his teaching makes programming intresting,he encourages us to practice coding,thank you,sir,for your excellent teaching and support");
fclose(fp);
return 0;
}