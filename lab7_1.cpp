#include<iostream>
#include<string>

using namespace std;

string Re_T (string x)
{
	int i = 0, L = x.size();
	string y = x ;
	while(i < L)
	{
		y[i] = x[L-i-1];
		i++;
	}
	return y;
}

string UP(string x){
	int i = 0, L = x.size();
	string y = x ;
	while(i < L){
		y[i] = toupper(x[i]);
		i++;
	}
	return y;	
}

int main()
{
    cout << "Input text: " ;
	string x;
	cin >> x;
    cout << "Reversed text: " << Re_T(x) << "\n";

	if( UP(x)==UP(Re_T(x)) ) 
	cout << "Palindrome: Yes" ;
	else 		   
	cout << "Palindrome: No" ;

    return 0;
}
