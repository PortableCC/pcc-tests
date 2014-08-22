
struct S {
   unsigned f : 16;
};

int main(void)
{
   struct S s = {0};

   int i = (s.f = -1);

   return i != 65535;
}
