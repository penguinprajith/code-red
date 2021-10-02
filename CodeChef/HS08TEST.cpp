#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	
	int x;
	cin >> x;
	
	double y;
	cin >> std::fixed >> std::setprecision(2) >> y;
	
	double ans = 0;
	if( x % 5 == 0)
	{
	    if( (double(x) + 0.50)  <= y  )
	    {
	        ans = y - 0.50 - (double)x;
	    }
	    else
	    {
	        ans = y;
	    }
	}
	else
	{
	    ans = y;
	}
	
	cout << std::fixed << std::setprecision(2) << ans << endl;
	
	return 0;
}
