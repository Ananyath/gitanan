#include<stdio.h>
#include<conio.h>
int main(){
char str[100];
int i, j, length=0;
printf(“Enter any string:”);
gets(str);
//Finding length of string
for(i=0; str[i]!= ‘\0’; i++){
length++;
}
//For printing Upper pattern
for(i=0; str[i]!= ‘\0’; i++){
for(j= 0; j<=i; j++){
printf(“%c\t”, str[j]);
}
printf(“\n”);
}
/for /printing lower pattern
for(i=length-1; i>=0; i--){
for(j= 0; j<=i; j++){
printf(“%c\t”, str[j]);
}
printf(“\n”);
}
getch();
return 0;
}
4.
Enter string: COMPUTERS 
Enter NUMBER OF ROWS :5
 
