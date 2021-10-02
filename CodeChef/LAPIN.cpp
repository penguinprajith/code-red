#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    string str;
	    cin >> str;
	    int len = str.length();
	    
	    int arr[26];
	    for(int i = 0; i < 26; ++i)
	        arr[i] = 0;
	    
	    int s = 0;
	    int e = (len % 2 == 0) ? (len/2): (len/2 + 1);
	    
	    while(s < len/2)
	    {
	        arr[ str[s++] - 'a' ]++;
	    }
	    
	    while(e < len)
	    {
	        arr[ str[e++] - 'a' ]++;
	    }
	    
	    bool bFlag = true;
	    
	    for(int i = 0; i < 26; ++i)
	    {
	        if( (arr[i] > 0) && (arr[i] %2) != 0)
	        {
	            bFlag = false;
	            break;
	        }
	    }
	    
	    if(bFlag)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	    
	}
	
	return 0;
}
