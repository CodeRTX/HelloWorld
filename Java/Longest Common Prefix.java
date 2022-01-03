/* A function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "". */


public String longestCommonPrefix(String[] str_in)
{
  int i,n,j,minl=Integer.MAX_VALUE;
  Scanner sc=new Scanner(System.in);
  n=str_in.length;
  for(i=0;i<n;i++)
  {
   if(minl>str_in[i].length())
    minl=str_in[i].length();
  }
  String strres="";
  for(j=0;j<minl;j++)
  {
   for(i=0;i<n-1;i++)
   {
    if(str_in[i].charAt(j)!=str_in[i+1].charAt(j))
     break;
   }
   if(i==n-1)
    strres=strres+str_in[i].charAt(j);
   else
    break;
  }
  return strres;
}
