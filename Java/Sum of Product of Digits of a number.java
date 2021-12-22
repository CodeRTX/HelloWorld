public static long sumOfProductOfDigits(long n1, long n2)
{
 long s=0;
 if(n1>0 && n2>0)
 {
  s=s+((n1%10)*(n2%10));
  return (s+sumOfProductOfDigits(n1/10,n2/10));
 }
 else
  return s;
}
