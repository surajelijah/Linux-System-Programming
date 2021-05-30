# 1 "file.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "file.c"
# 1 "B.h" 1
# 1 "A.h" 1


int sum (int a,int b);
# 2 "B.h" 2


int multiply(int a,int b);
# 2 "file.c" 2

int main()
{
    int a,b,c;

    c=(a>b)?a:b;

    c=(a<b)?a:b;

    return 0;
}
