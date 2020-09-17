int main() {
  int i;
  for (i=0;i<10;i++){
    double x;
    x=1.;
    int k;
    k=1<<123;
    k-=012345671234567;
    k-=0xABCDEF0123456789abcdef;
    k+=101234567890123456789;
    k+=0x101234567890123456789;
    k-=012345671234567ul;
    k-=0xABCDEF0123456789abcdeflu-1l;
    k+=101234567890123456789Lu;
    k+=0x101234567890123456789UL;
    while(k<i) {
      x+=k*.5;
      x*=123456789E-12;
      x/=.123e-10;
      x+=x+123.12e+3;
      x+=x+123.12e+3L;
      x+=x+123.12e+3L;
      x+=x+123;
    }
    char c;
    c='a';
    c='ab';
    c='\n';
    c='\\';
    c=L'a';
    unsigned long long int _cara12as12as0999_0;
    _cara12as12as0999_0=10UL;
    char S[123];
    S="abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_\a012\'123\"\\\b\f\n\r\t\v\?"
    S="a\xabcdefghijklmnopqrstuvwxyz"
  }
}