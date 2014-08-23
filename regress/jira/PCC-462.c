struct SCHAR {
   unsigned char f0 : 7;
   signed char f1 : 7;
};

struct SSHORT {
   unsigned short f0 : 7;
   signed short f1 : 7;
};

struct SINT {
   unsigned f0 : 7;
   signed f1 : 7;
};

struct SLONG {
   unsigned long f0 : 7;
   signed long f1 : 7;
};

struct SLONGLONG {
   unsigned long long f0 : 7;
   signed long long f1 : 7;
};

struct S_CHAR_SHORT {
   unsigned char f0 : 7;
   signed short f1 : 7;
};

struct S_SHORT_CHAR {
   unsigned short f0 : 7;
   signed char f1 : 7;
};

struct S_CHAR_INT {
   unsigned char f0 : 7;
   signed int f1 : 7;
};

struct S_INT_CHAR {
   unsigned int f0 : 7;
   signed char f1 : 7;
};

struct S_CHAR_LONG {
   unsigned char f0 : 7;
   signed long f1 : 7;
};

struct S_LONG_CHAR {
   unsigned long f0 : 7;
   signed char f1 : 7;
};

struct S_CHAR_LONGLONG {
   unsigned char f0 : 7;
   signed long long f1 : 7;
};

struct S_LONGLONG_CHAR {
   unsigned long long f0 : 7;
   signed char f1 : 7;
};

struct S_SHORT_INT {
   unsigned short f0 : 7;
   signed int f1 : 7;
};

struct S_INT_SHORT {
   unsigned int f0 : 7;
   signed short f1 : 7;
};

struct S_SHORT_LONG {
   unsigned short f0 : 7;
   signed long f1 : 7;
};

struct S_LONG_SHORT {
   unsigned long f0 : 7;
   signed short f1 : 7;
};

struct S_SHORT_LONGLONG {
   unsigned short f0 : 7;
   signed long long f1 : 7;
};

struct S_LONGLONG_SHORT {
   unsigned long long f0 : 7;
   signed short f1 : 7;
};

struct S_INT_LONG {
   unsigned int f0 : 7;
   signed long f1 : 7;
};

struct S_LONG_INT {
   unsigned long f0 : 7;
   signed int f1 : 7;
};

struct S_INT_LONGLONG {
   unsigned int f0 : 7;
   signed long long f1 : 7;
};

struct S_LONGLONG_INT {
   unsigned long long f0 : 7;
   signed int f1 : 7;
};



int main (void)
{
   int e = 0;

   struct SCHAR sc = {2,-2};
   struct SSHORT ss = {2,-2};
   struct SINT si = {2,-2};
   struct SLONG sl = {2,-2};
   struct SLONGLONG sll = {2,-2};

   struct S_CHAR_SHORT scs = {2,-2};
   struct S_SHORT_CHAR ssc = {2,-2};
   struct S_CHAR_INT sci = {2,-2};
   struct S_INT_CHAR sic = {2,-2};
   struct S_CHAR_LONG scl = {2,-2};
   struct S_LONG_CHAR slc = {2,-2};
   struct S_CHAR_LONGLONG scll = {2,-2};
   struct S_LONGLONG_CHAR sllc = {2,-2};

   struct S_SHORT_INT ssi = {2,-2};
   struct S_INT_SHORT sis = {2,-2};
   struct S_SHORT_LONG ssl = {2,-2};
   struct S_LONG_SHORT sls = {2,-2};
   struct S_SHORT_LONGLONG ssll = {2,-2};
   struct S_LONGLONG_SHORT slls = {2,-2};

   struct S_INT_LONG sil = {2,-2};
   struct S_LONG_INT sli = {2,-2};
   struct S_INT_LONGLONG sill = {2,-2};
   struct S_LONGLONG_INT slli = {2,-2};

   if (sc.f0 > sc.f1)
      ; else e++;

   if (ss.f0 > ss.f1)
      ; else e++;

   if (si.f0 > si.f1)
      ; else e++;

   if (sl.f0 > sl.f1)
      ; else e++;

   if (sll.f0 > sll.f1)
      ; else e++;

   if (scs.f0 > scs.f1)
      ; else e++;

   if (ssc.f0 > ssc.f1)
      ; else e++;

   if (sci.f0 > sci.f1)
      ; else e++;

   if (sic.f0 > sic.f1)
      ; else e++;

   if (scl.f0 > scl.f1)
      ; else e++;

   if (slc.f0 > slc.f1)
      ; else e++;

   if (scll.f0 > scll.f1)
      ; else e++;

   if (sllc.f0 > sllc.f1)
      ; else e++;

   if (ssi.f0 > ssi.f1)
      ; else e++;

   if (sis.f0 > sis.f1)
      ; else e++;

   if (ssl.f0 > ssl.f1)
      ; else e++;

   if (sls.f0 > sls.f1)
      ; else e++;

   if (ssll.f0 > ssll.f1)
      ; else e++;

   if (slls.f0 > slls.f1)
      ; else e++;

   if (sil.f0 > sil.f1)
      ; else e++;

   if (sli.f0 > sli.f1)
      ; else e++;

   if (sill.f0 > sill.f1)
      ; else e++;

   if (slli.f0 > slli.f1)
      ; else e++;
   return e;
}

