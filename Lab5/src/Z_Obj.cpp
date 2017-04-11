#include "Z_Obj.hpp"
#include <string>
#include <cstdlib>
using namespace std;
Z_Obj::Z_Obj(int z, string ct, string st, string ab, string cnty, float la,
		float lo){
	zip = z;
	city = ct;
	state = st;
	abbr = ab;
	county = cnty;
	lat = la;
	lon = lo;
}
void Z_Obj::printZ(){
	cout << zip << ": " << city << ", " << state << ", " << abbr << ", " << county << ", " << lat << ", " << lon << endl;
}
// friend ostream& operator<<(ostream& os, const Z_Obj& z);
// If you want to override << so you can just use cout to print your Z_Objs.
bool Z_Obj::lessThan(Z_Obj *z){
	return(z->zip < zip);//note no two zip codes are the same so we can safely
	// assume that z->zip =/= zip, which additionally means that z->zip must be
	// either strictly greater than zip or strictly less than zip
}
