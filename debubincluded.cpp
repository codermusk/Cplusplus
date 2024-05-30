#include<iostream>
// #include "debugging.h"

using namespace std ;
#define dbg(v) \
           cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int x = 10 ;
	dbg(x);
}

