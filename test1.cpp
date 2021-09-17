#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
printf("enter any word for lower case or upper case or digit:\n");
scanf("%c",&ch);
if(islower(ch))
{
    printf("this is lower case\n");
}
else if(isupper(ch))
{
    printf("this is upper case\n");
}
else if(isdigit(ch))
{
printf("this is digit\n");
}
else{
    printf("please enter any word or digit\n");
}
return 0;
}
