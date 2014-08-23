struct S {
   unsigned f : 22;
};

struct S s = {1};

int main(void)
{
    int x;

    x = ((~s.f) < 0);
    if (x != 1)
	return 1;

    if (~s.f != -2)
	return 1;

    return 0;
} 

