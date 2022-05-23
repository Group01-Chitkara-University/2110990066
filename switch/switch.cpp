#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin >> x;
	    switch(x)
	    {
	        case 1:
	            cout << "one" << "\n";
	            break;
	        case 2:
	            cout << "two" << "\n";
	            break;
	        case 3:
	            cout << "three" << "\n";
	            break;
	        case 8:
				cout << "eight" << "\n";
				break;
	        case 9:
				cout << "nine" << "\n";
				break;
	        
	        default:
	         cout<<"not in range"<<"\n";
	    }
	}
	return 0;
}