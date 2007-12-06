typedef struct
{
	int real;
	int imag;
} complex_t;

void
add(complex_t i, complex_t j)
{
	complex_t tmp;

	tmp.real = i.real + j.real;
	tmp.imag = i.imag + j.imag;
}

test()
{
	complex_t i = { 5 , 5 };
	complex_t j = { 10, 10 };
	add(i, j);
}
