
union U {
   unsigned f : 1;
};


int main(void)
{
   static union U u = {3};

   return u.f != 1;
} 
