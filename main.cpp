#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int points;
	int n; //number of test cases which pass for Chef's solution.
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>points >>n;
	    
	    cout <<(points/10)*n <<endl;
	}
	return 0;
}
