int nth_element(int nth, int increment){
	int i, element=1;
	for(i=0; i<nth; i++){
		element += increment;
	}
	return element;
}