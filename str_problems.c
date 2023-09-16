#include<stdlib.h>
#include<string.h>
#include<stdio.h>

// int divisibleby7(int n)
// {
//  if(n<0){
//     return -n;
//  }
// else if(n==0||n==7){
//     return 1;
// }
// else if(n<10){
//     return 10;
// }
// else return (n/10-2)*(n-n/10*10);
// }

// int main()
// {
//     int n,result;
//     printf("Enter num");
//     scanf("%d",&n);
//     if( divisibleby7(n))
//     {
//         printf("the num is divisible");
//     }
//     else{
//         printf("Number is Not divisible");
//     }
// }

// int anagram(char s1[],char s2[],int n)
// {
//     int visited,k;
//    if(strlen(s1==s2))
//    {
//       char MAX_CHAR;
//       int count1[MAX_CHAR];
//       int count2[MAX_CHAR];

//       for(int i=0;i<MAX_CHAR;i++)
//       {
//          count1[i]=0;
//          count2[i]=0;
//       }
//       for(int i=0;i<n;i++)
//         count1[s1[i]-'a']++;
//       for(int i=0;i<n;i++)
//          count2[s2[i]-'a']++;

//          int count=0;

//          for(int i=0;i<MAX_CHAR;i++)
//             if(count1[i] > count2[i])
//                 count = count + abs(count1[i]-count2[i]);

//                 return(count<=k);


//    }
// }

// int main()
// {
//    char s1[100];
//    char s2[100];
//    int k,n;
// printf("Enter the strings:");
//   scanf("%s%s",s1,s2);
// printf("Enter the value of k");
// scanf("%d",&k);
//   if(anagram(s1,s2,n))
//   {
//     return 1;
//   }
//   else
//   {
//    return 0;
//   }
// }


/***************************PANAGRAM********************************8*/
// int  panagram(char str[])
// {
//   int  mark[26];
//     for(int i=0;i<26;i++)
//       mark[i] = 0;

//       int index;


//   int len= strlen(str);
//   for(int i=0;i<len;i++)
//   {
//        if(str[i]>='A' && str[i]<='Z')
//          index = str[i]-'A';
        
//       else if(str[i]>='a'&& str[i]<='z')
//          index = str[i]-'a';

//      else
//         continue;
//     mark[index] = 1;
//   }

//   for(int i=0;i<=25;i++)
//      if(mark[i]==0)
//         return 0;
//         return 1;
// }

// int main()
// {
// char str[100];
// printf("\n Enter a string: ");
// scanf("%s",str);
// if (panagram(str)==1)
//    {
//     printf("its a panagram");
//    } 
// else{
//   printf("not a panagram");
// }
// }
//
void subsequences(char *s[],char op[],int i,int j)
{
  if(s[i]=='\0'){
    op[j]='\0';

    s.insert(op);
   
}
else{
  op[j]=s[i];
  subsequences(s,op,i+1,j+1);
  subsequences(s,op,i+1,j);
}
}
int main()
{
  char s[100];
  printf("Enter the string:");
  scanf("%s",s);
  int m=sizeof(s);
  int n=sizeof(char);
  char op[m+1];
  subsequences(s,op,0,0);
  printf(s.size);
}




















// int encrypt(char str[],int n )
// {
//     int len = strlen(str);
//     for(int i=0;i<len;i++)
//     {
       
//     }
// }