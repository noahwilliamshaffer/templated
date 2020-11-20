template < typename T >		// can also do  < class T >
T maximum(T a, T b, T c)
{ 
   T max = a;
   if (b > max)
      max = b;
   if (c > max)
      max = c;
   return max;
}

---------------------------------------
int maximum(int a, int b, int c)
{ 
   int max = a;
   if (b > max)
      max = b;
   if (c > max)
      max = c;
   return max;
}

char maximum(char a, char b, char c)
{ 
   char max = a;
   if (b > max)
      max = b;
   if (c > max)
      max = c;
   return max;
}

double maximum(double a, double b, double c)
{ 
   double max = a;
   if (b > max)
      max = b;
   if (c > max)
      max = c;
   return max;
}

Fraction maximum(Fraction a, Fraction b, Fraction c)
{
   Fraction max = a;
   if (b > max)
      max = b;
   if (c > max)
      max = c;
   return max;
}

-----------------------------

template < typename T, typename S >
T Func(T x, S y, S z)
{
   


}
