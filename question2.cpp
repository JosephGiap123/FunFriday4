#include <iostream>
#include <stack>
using namespace std;

//delete adjacent duplicates , abbaca = ca

int main(){
	string word;
	stack<char> stacky;
	cin >> word;
	for(int i = 0; i < word.length(); i++){
		if(!stacky.empty() && word[i] == stacky.top()){ //delete because the last letter was the same.
			// cout << "dupe: " << stacky.top() << endl;
			stacky.pop();
			continue;
		}
		stacky.push(word[i]);
	}
	string output = "";
	while(!stacky.empty()){
		output += stacky.top();
		stacky.pop();
	}
	reverse(output.begin(), output.end()); //must reverse it...

	cout << output << endl;
	return 0;
}