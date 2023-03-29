#include <iostream>
#include <string.h>
using namespace std;


int main() {
	int i,j,k=0,l=0;
	int array1[10];
	int array2[10];
	string str = "((abc)(def))";
	for(i=0;i<str.length();i++) {
		if(str[i] == '(') {
			cout<< "i: "<<i<<"   ";
			array1[k] = i;
			k++;
			
		}
	}
	for(j=0;j<str.length();j++) {
		if(str[j] == ')') {
			cout<< "j: "<<j<<"   ";
			array2[l] = j;
			l++;
		}
	}
	for(i=0;i<(l);i++) {
		cout<<endl<<array1[i]<<","<<array2[l-i-1]<<endl;
	}
		
		
		
		
		
		
		
		
 return 0;
}
