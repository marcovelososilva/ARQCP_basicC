/* i stick with the exclude position 0 and 
 * start counting in the 2nd position until the array end*/

int even_sum(int* x){
	int sum, i, max;
	sum = 0;
	max = *x;
	for (i=2; i<max; i+=2){
		x++;
		x++;
		sum += *x;
	}
	return sum;
}
