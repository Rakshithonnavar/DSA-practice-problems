#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Storing in temporaray variable
// void reverse_string(char *a,char *z)

// {
//     char temp;
//      while(*a<*z){
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



// void swap(char *a,char *b)
//    {
//       char temp;
//       temp = *a;
//        *a=*b;
//        *b=temp;
//    }

// void sort(char  *a[],int n)
// {
//     int i,j;
//     for(i=0;i<n-1;i++){
//         for(j=i;j<n-i-1;j++){
//             if(a[j]>a[j+1])
//             {
//                swap(a[i],a[i+1]);
//             }
//         }
//     }
// }
// char* string_prefix(char *a[],int n)
// {
     

//        if(n==0)
//        return " ";

//    if(n==1){
//     return a[0];
//   }
   
//     sort(a,n);
//     int len = strlen(a[0]);
//     int i=0;

//     while(i<len && a[0][i]==a[n-1][i])
//     {
//         i++;

//     }

//     char *prefix = (char*)malloc(i+1);
//     strncpy(prefix,a[0],i);
//     prefix[i] = '\0';

//     return prefix;
// }

//   int main() {
//     char *a[] = {"geeksforgeeks", "geeks", "geek", "geezer"};
//     int n = sizeof(a) / sizeof(a[0]);

//     char *result = string_prefix(a, n);
//     printf("The longest common prefix is: %s\n", result);

//     return 0;
// }
// int romanTodecimal(char str[])
// {
// int sum=0;
// int len = strlen(str);

// for(int i=0;i<len;i++)
// {
//     switch(str[i])
//     {
//         case 'I': if(i<len-1 && ( str[i+1]=='V'||str[i+1]=='X'))
//                     {
//                         sum-=1;
//                     }
//                     else{
//                         sum+=1;
//                     }
//                     break;
//         case 'V' : sum+=5;
//                     break;
//         case 'X' :if(i<len-1 &&  (str[i+1]=='L'||str[i+1]=='C'))
//                     {
//                         sum-=10;
//                     }
//                     else{
//                         sum+=10;
//                     }
//                     break;
//         case 'L': sum+=50;
//                    break;
//         case 'C': if(i<len-1 &&  (str[i+1]=='D'||str[i+1]=='M'))
//                     {
//                         sum-=100;
//                     }
//                     else{
//                         sum+=100;
//                     }
//                     break;
//         case  'D': sum+=500;
//                    break;
//         case  'M': sum+=1000;
//                     break;
//         default:printf("Invalid case!!");
//         return -1;
//     }       
//     }

// return sum;
// }
// int main()
// {
//     char str[100];
//     printf("Enter the Roman Number:");
//     scanf("%s", str);
//     int result = romanTodecimal(str);
    
//      if(result!=-1){
//     printf("The roman to decimal conversion is:%d",result);
//      }
//     return 0;
// }

// int min_dist(char str[10][10],int n,char *word1,char *word2)
// {
//     int d1=-1,d2=-1;
//     int ans = __INT_MAX__;
//       for(int i=0;i<n;i++)
//       {
//         if(strcmp(str[i],word1 ==0))
//            d1=i;
//          if(strcmp(str[i],word2 ==0))
//            d2=i;
//            if(d1!=-1 && d2!=-1)
//              ans = ans<abs(d1-d2)? ans: abs(d1-d2);


//       }
//        return ans;
// }

// int main()
// {
//     char str[100][100];
//     int word1,word2,n;
//     printf("Enter the size of array elements:");
//     scanf("%d",&n);
//     printf("Enter the elements");
//     scanf("%s",str);
//     int result = min_dist(str,n,word1,word2);
//     printf("the minimum distance between given two words is %d",result);
// }

/*************************************************************************************************************/
//reverse string
// void swap(char *a,char*b)
// {
//       char temp;
//       temp = *a;
//        *a=*b;
//        *b=temp;
//    }
// int main()
// {
// char str[100];

// printf("Enter the String:");
// scanf("%s",str);
// int len = strlen(str);
// int n = len-1;
// for (int i = 0 ; i <len/2; i++)
// {
//   swap(&str[i],&str[n]);
//   n-=1;
// }
// printf("The reversed string is :%s\n",str);
// return 0;
// }

//print fibbonacci using recursion:
 
//  int fibonacci(int n,int n1,int n2,int n3)
// {
//   if(n==0){
//     return 1;
//   }
//   else
//   {
//     n3=n1+n2;
//     n1=n2;
//     n2=n3;
//   }
//   printf("%d",n3);
//   fibonacci(n-1,n1,n2,n3); 
// }

// int main()
// {
//     int n,n1,n2,n3;
//   printf("Enter the count");
//   scanf("%d",&n);
//    int result = fibonacci(n-2,n1,n2,n3);
//   printf("%d%d\t",0,1);
//    printf("The numbers are:%d\t",result);
//    return 0;
// }
//palindrome check
// int main()
// {
//     char str[100];
//     int start =0;
//     int end = strlen(str)-1;
//     printf("Enter the string");
//     scanf("%s",&str);
//     if(str[start]==str[end])
//     {
//         printf("Palindrome string");
//     }
//     else{
//         printf("Not palindrome");
//     }
//     return 0;
// }
//Multiply 2 numbers using russian peasant algorithm
// int main()
// {
//      int a,b,res=0;
//      printf("Enter the numbers ");
//      scanf("%d%d",a,b);
//       while(b>0)
//       {
//          if(b&1)
//          res+=a;
//          a=a<<1;
//          b=b>>1;
//       }
//     printf("The product of two numbers",res);
//     return 0;
// }

//Reverse word in a given string
void reverseString(char *str) {
    int len = strlen(str);
    char *words[len];
    int wordCount = 0;

    // Split the string into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    // Reverse the words in the array
    for (int i = wordCount - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");
}


int main() {
    char str[] = "reversed words in string";
    reverseString(str);
    printf("The reversed atring is %s");
       return 0;
}


