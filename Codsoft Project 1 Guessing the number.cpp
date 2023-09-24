#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	srand(0);
	int number=rand()%100 + 1;
	int guess=0;
	while(guess!=number){
		cout<<"Enter the guess (1-100)-";
		cin>>guess;
		if(guess>number) cout<<"The entered number is Greater"<<"\n";
		else if(guess<number) cout<<"The entered number is Smaller"<<"\n";
		else cout<<"You Won!";
	}
}
