# 1 "file1.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "file1.c"
# 1 "B.h" 1
# 1 "A.h" 1

Here the macro would have been present but it has got expanded
int sum (int a,int b);
# 2 "B.h" 2
The 2 indicates in A.h sum was in second line empty lines were removed by B.h so it became second line with respect to B.h and the dnign 2 tells that it has returned to B.h after expanding A.h


int multiply(int a,int b);
# 2 "file1.c" 2
# 1 "A.h" 1


int sum (int a,int b);
# 3 "file1.c" 2

int main()
{
    int a,b,c;

    c=(a>b)?a:b;

    c=(a<b)?a:b;

    return 0;
}

Check the audio that you have made for preprocessing in your mobile