#include <iostream>
#include <stack>

using namespace std;

void insertBottom(stack<int>& stack, int x){
	if(stack.empty()){
		stack.push(x);
	}else{
		int top = stack.top();
		stack.pop();

		insertBottom(stack, x);
		stack.push(top);
	}
}

void printStack(stack<int> stack){
	while(!stack.empty()){
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << endl;
	return;
}

void reverseStack(stack<int>& stack){
	if(stack.empty()){
		return;
	}
	int storage = stack.top();
	stack.pop();
	reverseStack(stack);
	insertBottom(stack, storage);
}

int main(){

	stack<int> stack;
	stack.push(4);
	stack.push(3);
	stack.push(2);
	stack.push(1);

	printStack(stack);


	reverseStack(stack);

	printStack(stack);

	return 0;
}