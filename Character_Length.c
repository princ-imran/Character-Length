#include<stdio.h>
int main(){
char text[200];
printf("Enter your text: ");
gets(text);
int i, length=0;
for(i=0;text[i]!='\0';i++)
    length++;
printf("\nYour text length are: %d",length);


}
