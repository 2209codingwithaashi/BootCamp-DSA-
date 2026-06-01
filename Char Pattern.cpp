#include<iostream>
#include<string>
using namespace std;
int main(){
	string word;
	getline(cin,word);
	string pattern;
	string temp;
	getline(cin,pattern);
	getline(cin,temp);
	char rechar = temp[0];
	string result = "";
	int i=0;
	while(i<word.length()){
		bool match = true;
		for(int j=0;j<pattern.length();j++){
			if(i+j>=word.length()||word[i+j] != pattern[j]){
				match = false;
				break;
			}
		}
		if(match){
			result+=rechar;
			i+=pattern.length();
		}else{
			result += word[i];
			i++;
		}
	}
	cout<<result;
	return 0;
} 
