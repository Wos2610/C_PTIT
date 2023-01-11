#include<iostream>
#include<string>
using namespace std;
// 012345678901
// 1234 312 312
void checkAppear(string author, string para){
	string temp = " ";
	bool check = 1;
	para += " ";
	int i;
	for(i = 0; i < para.length(), i++){
		if(para[i] == ' '){
			if(tmp == author){
				check = 0;
				cout << i;
			}
			temp = "";
		}
		else{
			tmp += para[i];
		}
	}
}
int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		string author;
		string para;
		getline(cin,author);
		getline(cin, para);
		checkAppear(author, para);
		
	}
}