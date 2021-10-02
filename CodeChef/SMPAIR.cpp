#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int> v;
	    while(n--)
	    {
	        int a;
	        cin >> a;
	        v.emplace_back(a);
	    }
	    sort(std::begin(v),std::end(v));
	    cout << (v[0] + v[1]) << endl;
	}
	
	return 0;
}
