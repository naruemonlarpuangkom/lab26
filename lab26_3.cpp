#include<iostream>
#include<set>

using namespace std;

int count(int d[],int N){

	set<int> mySet ;
	for(int j = 0; j < N;j++) mySet.insert(d[j]) ;

	set<int>::iterator i ;
	int count = 0 ;
	for(i = mySet.begin() ; i != mySet.end()  ;i++ ){
		count++ ;
	}

	return count ;

}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
