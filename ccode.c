#include "runtime.h"	// required for go types like bool and intptr

// The interpunkt indicates that the function belongs to the current
// namespace. Without the interpunkt, the function would be defined in
// the global C namespace, inaccessible to your Go package and
// potentially conflicting with another C function.
void ·True(bool res) {
	res = true;
	FLUSH(&res);
}

// intptr is equivalent to Go's arch specific int type
void ·Max(intptr a, intptr b, intptr res) {
	res = a > b ? a : b;	
	FLUSH(&res);
}

void ·Inc(intptr* addr) {
	*addr+=1;
	USED(addr);
}
