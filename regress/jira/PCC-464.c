struct S {
   signed f : 1;
};

int main (void)
{
    struct S s = {0};
    int i = (s.f = 1);

    if (i != -1)
	return 1;
    return 0;
} 
