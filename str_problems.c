#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<stdbool.h>

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


// void subsequences(char *s[],char op[],int i,int j)
// {
//   if(s[i]=='\0'){
//     op[j]='\0';

//     s.insert(op);
   
// }
// else{
//   op[j]=s[i];
//   subsequences(s,op,i+1,j+1);
//   subsequences(s,op,i+1,j);
// }
// }
// int main()
// {
//   char s[100];
//   printf("Enter the string:");
//   scanf("%s",s);
//   int m=sizeof(s);
//   int n=sizeof(char);
//   char op[m+1];
//   subsequences(s,op,0,0);
//   printf(s.size);
// }


// ROTATING 2ND STR  TWICE TO GET SAME SEQUENCES AS LIKE OF 1 ST OME

// int isRotated(char str1[],char str2[])
// {
//   int n1= strlen(str1);
//   int n2 =strlen(str2);
//   if(n1!=n2){
//     return 0;
//   }
  
//   char rotate_clock=" ";
//   char anti_clock=" ";

//   anti_clock = anti_clock+substr(n2-2,2)+substr(0,n2);
//   rotate_clock = rotate_clock+substr(2)+substr(0,2);
      
//        if(strcmp((n1==0)||(n2==0)))
//        {
//         return 1;
//        }

// }
// int main()
// {
//   char str1[100],str2[100];
//   printf("Enter string one");
//   scanf("%s",str1);
//   printf("Enter string two");
//   scanf("%s",str2);
//   if((isRotated(str1,str2))){
//   printf("\nStrings are rotated\n");
//   }
//   else
//   {
//     printf("\nString not rotated \n");
//   }
// }


//Printing subsequences of string

// int subsequences(char inp[],char oup[],int i)
// {
//   if(inp[i]=='\0')
//   {
//     printf("the result is:%s",oup);
//     return;
//   }
//   oup[i]=inp[i];
//    oup[i + 1] = '\0';
//     subsequences(inp, oup, i + 1);

//     oup[i] = '\0';
//     subsequences(inp, oup, i + 1);
     
// }


//Longest palindromic subsequences 


// int max(int x,int y)
// {
//   return (x>y)?  x:y;
// }
//  int lps(char *seq,int i,int j)
//  {
//   if(i==j)
//   {
//     return 1;
//   }
//   if(seq[i]==seq[j] && i+1==j)
//   {
//     return 2;
//   }

//   if(seq[i]==seq[j]){
//   return lps(seq,i+1,j-1)+2;
//   }
//   return max (lps(seq,i,j-1),lps(seq,i+1,j));
  
//  }
// int main()
// {
//   char s[100],*seq;
//   int i,j;
//   printf("Enter the string:");
//   scanf("%s",s);
//   int result = lps(seq,i,j);
//   printf("The longest palindromic subsequence:%s",result);
//    return 0;
// }


//Longest Common  Anagram subsequence

int lcas(char str1[],char str2[],int n1,int n2)
{
    char MAX_CHAR;
    int freq1[MAX_CHAR];
    int freq2[MAX_CHAR];

     int len=0,i;
     for(i=0;i<n1;i++)
     {
        freq1[str1[i]- 'a']++;
     }
     for(i=0;i<n1;i++)
     {
        freq1[str1[i]- 'A']++;
     }
     for(i=0;i<n2;i++)
     {
        freq2[str2[i] - 'a']++;
     }
      for(i=0;i<n2;i++)
     {
        freq2[str2[i] - 'A']++;
     }
         for(int i=0;i<MAX_CHAR;i++)
         {
           return len+= min(freq1,freq2);
         }
}

//usage of strdup function

int main()
{
    char src[] = "rakshit";
    char * dest = strdup(src);
    printf("%s\t",src);
    printf("%s",dest);
    return 0;
}

int  sOfErath(int n)
{
int prime[n+1];
memset(prime,1,sizeof(prime));

for(int p=2;p<=n;p++)
   {
      if(prime[p]==1)
      {
         for(int i=p;p*p<=n;i++)
           prime[i]=0;
      }
   }

 for(int p=2;p<=n;p++)
   if(prime[p])
      printf("The numbers are :%d",p);
}

int main()
{
   int r,n;
   printf("Enter the range:");
   scanf("%d",&r);
   int result = sOfErath(n);
   return 0;   
}

// bool XOR(int x,int y)
// {
//    int res=0;
    
//     for(int i=31;i>=0;i--)
//     {
//       bool b1 = x &(1<<i);
//       bool b2 = y &(1<<i);

//       bool xoredBit = (b1&b2)?0:(b1|b2);

//       res<<=1;
//       res|= xoredBit;
//     }
//     return  res;
// }


// unsigned int swap_nibble(int x)
// {
//     return((x & 0x0F)<<4 | (x & 0xF0)>>4);
// }
// int main()
// {
//    unsigned char x=100;
//    printf("%u",swap_nibble(x));
//    return 0;
// }

int lcs(char *s1,char*s2)
{
  int n1 =  strlen(s1);
  int n2 =  strlen(s2); 
   int sum = n1 + n2;

     //find lcs
}

int lcs(char *s1,char *s2)
{
   int n1,n2;
   int n[n1+1][n2+1];
   int i,j;
  for(i=0;i<=n1;i++){
     for(j=0;j<=n2;j++){
      if(i==0||j==0)
       {
         n[i][j]=0;
       }
       else if(s1[i-1] == s2[j-1])
         n[i][j] = n[i-1][j-1]+1;

      else
        n[i][j] = max(n[i-1][j],n[i][j-1]);
}
  }
  return n[n1][n2];
}

int main()
{
  char s1[100],s2[100];
  int sum,n,n1,n2;
  printf("Enter the two strings:");
  scanf("%s%s",s1,s2);
  int result =  sum - (lcs(s1,s2));
  prinf("The length of smallest sequence is:",result);
  return 0;
}

 



















