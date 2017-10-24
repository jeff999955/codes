#include <cstdio>
#include <vector>
#define MAAAAKSS 2147483644
using namespace std;

int lcm(int a, int b);
 
int main()
{
	
	int lms,N,c,t;
	vector<int> A;
	while(scanf("%d ", &N) != EOF)
	{
		lms = MAAAAKSS;
		A.clear();
		for(int i=0;i<N;i++)
		{
			scanf("%d", &c);
			A.push_back(c);
		}
		t = N-1;
		
		for(int i=0;i<N-1;i++,t--)
		{
			for(int j=1;j<=t;j++)
			{
				c=lcm(A[i],A[i+j]);
				lms = (c<=lms)?c:lms;
			}
		}
	
		printf("%d\n", lms);
	}
}

int lcm(int a, int b)
{
	int A = a, B = b;
	 while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return A*B/a;
}


