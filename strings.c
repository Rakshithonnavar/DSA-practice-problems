#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Storing in temporaray variable
// void reverse_string(char *a,char *z)

// {
//     char temp;
//     while(*a<*z){
//       temp = *a;
//       *a++ = *z;
//       *z-- =temp;
// }
// }

// void reverse_words(char*s)
// {
//   char * word_begin = s;
//   char * temp=s;

//    //Reversing individual words 
//      while(*temp){
//        if(*temp=='\0'){
//           reverse_string(word_begin,temp-1);
//        }
//      else if(*temp ==' ')
//      {
//          reverse_string(word_begin,temp-1);
//          word_begin = temp+1;
//      }
//       temp++;
//      }
//        reverse_string(s,temp-1);
// }

// int main()
// {
//   char s[100];
//   // char *temp = s;

//   printf("Enter the sentence:");
//   scanf("%[^\n]",s);
//   reverse_words(s);
//   printf("\nThe reversed string is:%s\n",s);
//    return 0;



void swap(char *a,char *b)
   {
      char temp;
      temp = *a;
       *a=*b;
       *b=temp;
   }

void sort(char  *a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i;j<n-i-1;j++){
            if(a[j]>a[j+1])
            {
               swap(a[i],a[i+1]);
            }
        }
    }
}
char* string_prefix(char *a[],int n)
{
     

       if(n==0)
       return " ";

   if(n==1){
    return a[0];
  }
   
    sort(a,n);
    int len = strlen(a[0]);
    int i=0;

    while(i<len && a[0][i]==a[n-1][i])
    {
        i++;

    }

    char *prefix = (char*)malloc(i+1);
    strncpy(prefix,a[0],i);
    prefix[i] = '\0';

    return prefix;
}

  int main() {
    char *a[] = {"geeksforgeeks", "geeks", "geek", "geezer"};
    int n = sizeof(a) / sizeof(a[0]);

    char *result = string_prefix(a, n);
    printf("The longest common prefix is: %s\n", result);

    return 0;
}
     




