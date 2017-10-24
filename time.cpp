#include <ctime> //clock()
#include <vector>
#include <algorithm> // for random_shuffle
using namespace std;

using namespace std;

int main()
{
	clock_t start_time = clock();
	if((clock() - start_time) / (CLOCKS_PER_SEC) > 7)
	{
		printf("%d\n", 1234);
		return 0;
	}
	int n = 20;
	vector<int> vs;
	for(int i=0;i<n;i++);
		vs.push_back(i);
	random_shuffle(vs.begin(),vs.end());  
	return 0;
 } 
