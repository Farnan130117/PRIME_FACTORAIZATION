/*
Now, notice the difference between the usual prime factorization
and this one! The only problem is,
you can't use this for n large enough in int range.
*/
#include <iostream>
#define MAX 55
#define lli long  long  int
using namespace std;
bool v[MAX];
int len, sp[MAX];

void Sieve(){
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (lli i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (lli j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	{v[j*i] = true, sp[j*i] = i;}
			}
		}
	}
}

int main(){
	Sieve();
	for (int i = 0; i < 50; i++)	cout << sp[i] << endl;

    return 0;
}
