#include<iostream>
#include<bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define vi vector<int>
#define ld long double
#define pb push_back 
#define REP(i,a,b) for(int i = a ; i < b ; i++)
#define all(c) (c).begin(), (c).end()
#define mp make_pair 

void vecFunction(){
	vi vec, vec2; 
	 // The function to push element into vector  is push_back or emplace_back
	 vec.pb(2) ; 
	 // iterating through the vector using begin()  or end() emplace back is used to insert
	 for(auto& it = vec.begin() ; it ! = vec.end() ; it++)
	 	cout << *it ; 

	 for(auto& it = vec.rbegin() ; it!= vec.rend() ; it++ )
	 	cout<< *it ; 

	 for(auto it = vec.cbegin(); it != vec.cend(); it++)
	 	cout<< *it ; 


	 int size = vec.size() ;
	 // resize resizes the vector thus it can hold n elements
	 vec.resize(4);

	 //reserve is used to reserve space to the vector thus it can be little bit quicker
	 vec.reserve(10) ; 
	 // size()

	 int size = vec.size() ; 
	 cout<< size ; 

	 //vec.front()

	 int front = vec.front();
	 int back = vec.back() ;
	 vec.pop_back() ;
	 vec.erase(vec.begin() , vec.begin()+2);// it  deletes the elements in range
	 // if want to delete an element use find and identify the iterator and erase it 

	 auto& it = find(vec.begin(), vec.end(), 2) ;

	 vec.erase(it) ; 


	 copy(vec.begin(), vec.end(), back_inserter(vec2));


	 vec2.assign(vec.begin(), vec.end());

	 vec2.insert(vec2.begin(),vec.begin(), vec.end()); 


}


void pairFunction() {
	pair<int , int > p= {1,3} ;
	cout<< p.first << p.second;

	p = mp(10,20) ;  
}


void setFunc() {
	set<int> s ; 

	s.insert(19) ; 

	s.erase(10) ; 

	auto it =  s.find(19) ; 

	s.erase(it) ; 

	if(it!=s.end()){
		cout<< "Element Does not present in the set" ; 
	}

	for(auto& it : s) {
		cout << it ; 
	}
}

void stackFunc() {
	stack<int> stk  ; 
	stk.push(19) ; 
	stk.pop() ; 
	cout<< stk.top() ; 
	cout<< stk.empty();
}


void queueFunc() {
	queue<int> q ; 
	q.push(10) ; 
	q.pop();
	cout<< q.size() ; 
	cout<< q.front() ; 
	cout<< q.back() ; 

}


void deQueue(){
	deque<int> dq ; 
	dq.push_front(10) ; 
	dq.push_back(20) ; 
	dq.pop_back() ; 
	dq.pop_front() ; 

	cout<< dq.at(2) ; // which gives the element at second pos
}


void priorityQueue() {
	priorityqueue<int> pq ; //by default pq stores data in descending order 

	pq.push(10) ; 

	int val = pq.top() ; 
	pq.pop() ; 

}


void mapInCPP(){
	map<int , int > mp ; 

	mp[1] = 10 ; 
	mp.insert({10,20}) ; 

	auto& it = mp.begin() ;

	while(it!=mp.end()){
		cout<< it->first<< it->second ;

		++it ; 
	}

	int size = mp.size() ; 
	int val = mp[1] ;

	auto&it = mp.find(10) ; 

	int cnt = mp.count(10) ;
}


void mulmap(){
	multimap<int, int> mulMap ; 
	//functions are same as map 
}

void mulSet(){
	multiset<int> mset ; 
	//function are same as set
}

void algorithms(){
  vi vec{1,2,3,4,52143,2343,3243,4345} ; 
  int maximu = *max_element(vec.begin(), vec.end()) ; 

 cout << maximu ; 


 int pos = lower_bound(vec.begin(), vec.end()) - vec.begin() ;
 // lower bound will return the pos if the element is present or the next greatest number

 int pos = upper_bound(vec.begin(), vec.end()) - vec.begin() ; 
 // the upper bound return the next index of the number 
}


void implementLowerBound() {
	vi vec{1,2,3,4,52143,2343,3243,4345} ; 
	int element = 23454 ; 
	int low = 0  , high = vec.size()-1  , ans = vec.size() ;
	while(low<=high){
		int mid = (low+high)/2;
		if(vec[mid]>=element){
			ans = mid ;
			high = mid - 1 ;
		}else{
			low = mid+1 ; 
		}
	}

	return ans ; 

}


void implementUpperBound() {
	vi vec{1,2,3,4,52143,2343,3243,4345} ; 
	int element = 23454 ; 
	int low = 0  , high = vec.size()-1  , ans = vec.size() ;
	while(low<=high){
		int mid = (low+high)/2;
		if(vec[mid]>element){
			ans = mid ;
			high = mid - 1 ;
		}else{
			low = mid+1 ; 
		}
	}

	return ans ; 

}

void binarySearch(){
	vi vec{1,2,3,4,52143,2343,3243,4345} ; 
	int element = 23454 ; 
	int low = 0  , high = vec.size()-1  , ans = vec.size() ;
	while(low<=high){
		int mid = (low+high)/2;
		if(vec[mid]>element){
			high = mid - 1 ;
		}elseif(vec[mid]<element){
			low = mid+1 ; 
		}elseif(vec[mid]==element) return ans ;
	}

	return ans ; 

}

int main(){
	//ios base sync with studio is used to read input and output faster
   ios_base::sync_with_stdio(false);
   cin.tie(NULL); 
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("output.txt", "w", stdout); 
   #endif 
}
