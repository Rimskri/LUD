#include<stdio.h>
#include<ctype.h>
int main(){
char ch[10];
printf("enter any word for lower case or upper case or digit:\n");
scanf("%s",&ch);
if(islower(ch[i]))
{
    printf("this is lower case\n");
}
else if(isupper(ch[i]))
{
    printf("this is upper case\n");
}
else if(isdigit(ch[i]))
{
printf("this is digit\n");
}
else{
    printf("please enter any word or digit\n");
}
return 0;
}
