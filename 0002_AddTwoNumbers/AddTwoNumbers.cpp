/*
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

Example 2:
Input: l1 = [0], l2 = [0]
Output: [0]

Example 3:
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() {
		val = 0;
		next = nullptr;
	}
	ListNode(int x) {
		val = x;
		next = nullptr;
	}
	ListNode(int x, ListNode *next) {
		val = x;
		next = next;
	};
};

class Solution {
	public:
		ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
			
		}
};

vector<int> operator + (ListNode l1, ListNode l2){
	int counter = 0;
	vector<int> v;
	
	if(l1.size() > l2.size()){
		counter = l1.sise();
	} else {
		counter = l2.sise();
	}
	for(int i = 0; i < counter; ++i){
		v.push_back(l1[i] + l2[i]);
	}
	return v;
}

int main() {

//	Solution sl;
	ListNode l1, l2;
	l1 = [2,4,3]; 
	l2 = [5,6,4];	
	
	int res = l1 + l2;
	
	cout << res << '\n';
	
	system("pause>null");
	return 0;
}

/*
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3=new ListNode(),*curr=l3;
        int carry=0;
        while((l1!=NULL || l2!=NULL) || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            ListNode *temp=new ListNode(sum%10);
            curr->next=temp;
            curr=curr->next;
            
        }
        
        return l3->next;
    }
};
*/