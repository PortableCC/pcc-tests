struct S {
   signed f : 25;
};

int main (void)
{
   int x;
   struct S s;
   s.f = 0;

   x = (s.f = -1);
 
   if (x != -1)
	return 1;
   return 0;
}

