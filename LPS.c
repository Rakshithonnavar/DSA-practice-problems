#include<stdio.h>
#include<stdlib.h>

string lcs(string &x, string &y)
{
    int m = x.length();
    int n = y.length();

    int L[m+1][n+1];


    for(int i=0;i<=m;i++)
    {
         for(j=0;j<=n;j++)
         {
            if(i==0||j==0)
            L[i][j] = 0;
            else if (x[i-1] == y[j-1])
                L[i][j] = L[i-1][j-1]+1;
            else 
             L[i][j] = max(L[i-1][j], L[i][j-1]);
         }
    }
         int index = L[m][n];
          
          string lcs(index+1,'\0');

          int i=m,j=n;
          while(i >0 && j>0)
          {
              if(x[i-1] == y[j-1])
              {
                lcs[index-1] = x[i-1];
                i--;
                j--;

                index--;
              }
              else if(L[i-1][j] > L[i][j-1])
                   i--;
              else 
                   j--;
              }

               return lcs;
          }

          string longestPalSubseq(string &str)
          {
            string rev = str;
            reverse(rev.begin(),rev.end());

            return lcs(str,rev);
          }

          int main()
          {
            string str = "ABCBA"
          }
          }

}         