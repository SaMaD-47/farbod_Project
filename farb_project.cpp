#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;
void get(vector <float> &prog,vector <float> &logic,vector <float> &math,vector <float> &data,vector <string> &student,vector <float> &sum) {
	int n=0;
	string temps;
	float tempn;
	cout<<"Enter A to exit program"<<endl;
	while(n<100) {
		cout<<"Enter the student name: "<<endl;
		cin>>temps;
		if(temps == "A"||
		        temps == "a") {
			for (int i = 0 ; i<student.size(); i++) {
				float n;
				n=math[i]+prog[i]+data[i]+logic[i];
				n/=4;
				sum.push_back(n);

			}
			break;
		}
		student.push_back(temps);
		cout<<"Enter programming grade: "<<endl;
		cin>>tempn;
		while(tempn>20||
		        tempn <0) {
			cout<<"Enter your grade again\n";
			cin>>tempn;
		}
		prog.push_back(tempn);
		cout<<"Enter logic circuit grade: "<<endl;
		cin>>tempn;
		while(tempn>20||
		        tempn <0) {
			cout<<"Enter your grade again\n";
			cin>>tempn;
		}
		logic.push_back(tempn);
		cout<<"Enter math grade: "<<endl;
		cin>>tempn;
		while(tempn>20.1||
		        tempn <-1) {
			cout<<"Enter your grade again\n";
			cin>>tempn;
		}
		math.push_back(tempn);
		cout<<"Enter data structure grade: "<<endl;
		cin>>tempn;
		while(tempn>20||
		        tempn <0) {
			cout<<"Enter your grade again\n";
			cin>>tempn;
		}
		data.push_back(tempn);
	}
}
void pirnt_st(vector<string>name, vector<float>grade ) {
	for (int i = 0 ; i<name.size(); i++) {
		cout<<name[i]<<":";
		cout<<grade[i]<<endl;
	}
}
void sort(vector<string>m,vector<float>s) {
	for(int i = 0; i < s.size() - 1; i++) {
		for(int j = i + 1; j < s.size(); j++) {
			if(s[i] < s[j]) {
				swap(s[i], s[j]);
				swap(m[i], m[j]);
			}
		}
	}
	cout<<m[0]<<" Has the highest score with: "<<s[0];
}
int main() {
	vector <float> prog;
	vector <float> logic;
	vector <float> math;
	vector <float> data;
	vector <float> sum;
	vector <string> student;
	get(prog,logic,math,data,student,sum);
	pirnt_st(student,sum);
	sort(student,sum);

	return 0;
}