// the increment is by adding 2
int nth_element(int nth, int increment){
	int i, element=1;
	for(i=0; i<nth-1; i++){
		element += increment;
	}
	return element;
}