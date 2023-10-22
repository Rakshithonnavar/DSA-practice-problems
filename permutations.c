 #include<stdlib.h>
 #include<stdio.h>
 #include<string.h>


  void swap(char *l,char *r)
  {
    char *temp = *l;
          *l=*r;
          *r=temp;      
  }
 int permute(char *str,int l,int r)
 {
    l=0;
    r= strlen(str)-1;
    if(l==r)
       return str;
    else{
   for(int i=l;i<=r;i++)
   {
     swap((str+l),(str+i));
     permute(str,l+1,r);
     swap((str+l),(str+i));
   }       
 }
 }
 int main()
 {
    char str[100];
    int l=0;
    int r= strlen(str)-1;
     printf("Enter the string:");
     scanf("%s",str);
     printf("\n%s\n",permute(str,0,r));
     return 0;
 }




















   
             