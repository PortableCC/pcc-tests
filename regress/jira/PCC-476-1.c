struct S {
   unsigned f : 22;
};

int main(void)
{
   struct S s = {1};

   if ((s.f = 1) > -1)
      return 0;
   return 1;
}


