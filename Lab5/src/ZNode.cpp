#include "ZNode.hpp"
#include "Z_Obj.hpp"
#include <string>
#include <cstdlib>
using namespace std;
ZNode::ZNode(Z_Obj* z){
	zip = z;
	//height = max(left->height,right->height) + 1 (consider recursion)
	left = NULL;
	right = NULL;
	parent = NULL;
}
ZNode::ZNode(){
	zip = 0;
	height = 0;
	left = NULL;
	right = NULL;
	parent = NULL;
}
void ZNode::printZNode(){
	zip->printZ();
}
