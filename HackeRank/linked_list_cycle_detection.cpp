
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

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {

    bool res = 0;
    SinglyLinkedListNode* slow;
    SinglyLinkedListNode* fast;

    slow = fast = head;

    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            res = 1;
            break;
        }

    }

    return res;
}


int main(){

  
  
  return 0;
}
