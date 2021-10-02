
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <vector>
#include <array>
#include <algorithm>
#include <functional>
#include <memory>
#include <list>
#include <limits>
#include <iterator>

using namespace std;

#define ff            first
#define ss            second
#define um            unordered_map
#define us            unordered_set
#define endl		  "\n"

typedef long long ll;
typedef priority_queue<int>  pqMax;
typedef priority_queue<int,vector<int>, greater<int>> pqMin;

template<typename ForwardIterator>
void print(ForwardIterator first, ForwardIterator last)
{
  Iterator iter = first;
  while(iter != last)
  {
    cout << *iter << " "
  }
  cout << "\n";
}


//Write your code here

class Solution {
public:
    int reverse(int x) {
        
        long result = 0;
        if(!x)
            return 0;
        
        if(x >= INT_MAX || x <= INT_MIN )
            return 0;
        
        while(x != 0){
            
            result = (result * 10) + (x % 10);
            x = x/10;
            
            if(result > INT_MAX || result < INT_MIN )
                return 0;
            
        }
        
        return result;
    }
};


int main(){



  return 0;
}
