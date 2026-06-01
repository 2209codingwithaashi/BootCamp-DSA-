#include<iostream>
#include<string>
using namespace std;
int main(){
	string text;
	getline(cin,text);
	string vowels="aeiouAEIOU";
	string result="";
	for(int i=text.length()-1;i>=0;i--){
		if(vowels.find(text[i]==::npos)){
			cout<<text[i];
		}
	}
	return 0;
}
