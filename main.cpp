#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int guessing(){
	int n=rand()% 100+1;
	return n;
}
int main(int argc, char** argv) {
	int guess_no;
	int n=guessing();
	int i;
	cout<<"-------- guess number game-------"<<endl;
	cout<<"RULE:\n you are given 5 attempts for guessing number try to guess \n best of luck"<<endl;
	for(i=1;i<=5;i++){
		cout<<"ATTEMPT :"<<i<<endl;
		cout<<"guess the number (0 to 100)"<<endl;
		cout<<"enter the number"<<endl;
		cin>>guess_no;
		if(guess_no==n){
			cout<<"you guessed the right no in "<<i<<"attempt"<<endl;
			break;
		}else if(guess_no<n){
			cout<<"too low .try again!"<<endl;
		}
		else if(guess_no>n){
			cout<<"too high.try again!"<<endl;
		}
	}
	if(i>=5){
		cout<<"number was "<<n<<endl;
		cout<<"better luck for next time"<<endl;
	}
	
	
	return 0;
}
