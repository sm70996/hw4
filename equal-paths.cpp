#include "equal-paths.h"
#include <algorithm>
using namespace std;


// You may add any prototypes of helper functions here
int calculateHeightIfBalanced(Node* root) {
	// Base case: an empty tree is always balanced and has a height of 0
	if (root == nullptr) return 0;

	// Think about cases to handle:
	// - What if at least one subtree is NOT balanced?
	// - What if BOTH are balanced?

	// TODO: handle the cases here
	int lefts = calculateHeightIfBalanced(root->left); 
	int rights = calculateHeightIfBalanced(root->right);
	/*if(lefts == -1 || rights == -1){
		return -1; 
	}*/
	if(root->left != nullptr || root->right != nullptr){
		lefts++; 
		rights++; 
	}
	if(std::abs(lefts-rights) == 0){
		return lefts; 
	}
	//return std::max(lefts,rights) + 1;
	return -1;   
}


bool equalPaths(Node * root)
{
  // Add your code below
	if(calculateHeightIfBalanced(root) == -1){
		return false; 
	}
	return true; 

}

