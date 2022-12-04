#include <stdio.h>
#include <stdlib.h>
int stringLength(char*);
void stringReverse(char*);
int stringEquality(char*,char*);
void stringPalindrome(char*);

char name[20],name2[20];
int length;

int main(void) {
  int ch;
  
  do{
    printf("\n**** Program for performing String operations in C ****\n");
    printf("1. String Length\n");
    printf("2. String Reverse\n");
    printf("3. String Equality Check\n");
    printf("4. String Palindrome Check\n");
    printf("5. Exit\n");
    printf("Enter valid choice(1-5):");
    scanf("%d",&ch);
    switch(ch){
      case 1:
        printf("Enter the string:");
        scanf("%s",name);
        length=stringLength(name);
        printf("The length of the String is:%d\n",length);
      break;

      case 2:
        printf("Enter the string to be reversed:");
        scanf("%s",name);
        stringReverse(name);
        printf("The reversed string is:%s\n",name2);
      break;

      case 3:
        printf("Enter the 1st string:");
        scanf("%s",name);
        printf("\nEnter the 2nd string:");
        scanf("%s",name2);
        if(stringEquality(name,name2)==0)
          printf("\nBoth strings are equal");
        else
          printf("\nBoth strings are not equal");
      break;

      case 4:
        printf("Enter the string for palindrome check:");
        scanf("%s",name);
        stringPalindrome(name);
      break;

      case 5:
        exit(0);
      break;

      default:
        printf("\nEnter a valid option");
      break;
    }
    }
    while(ch!=0);
  return 0;
}

void stringPalindrome(char *name)
{
  length=stringLength(name);
  stringReverse(name);
  if(stringEquality(name,name2)==0)
    printf("\nString is Palindrome");
  else
    printf("\nString is not Palindrome");
}

int stringEquality(char *name, char *name2){
  length=stringLength(name);
  for(int i=0;i<length;i++)
    {
      if(name[i]!=name2[i])
        return 1;
    }
  return 0;
}


void stringReverse(char *name)
{
  int j=0;
  length=stringLength(name);
  for(int i=length-1;i>=0;i--,j++)
    {
      name2[i]=name[j];
    }
  name2[length]='\0';
}


int stringLength(char *name){
  int count=0;
  while(name[count]!='\0'){
    count++;
  }
  return count;
}