void frequencies (float *grades, int n, int *freq){
	//float pointer to restart the point to the grades array
	float *iniciogrades;
	int i, j;
	//iterate the frequency array to find the grades
	for (i=0; i<21; i++){
		iniciogrades = grades;
		//inicialize the frequency to 0
		*freq = 0;
		//in the grades array find the ones that are equal to the fixed frequency
		for ( j=0; j<n; j++){
			//one or the other to make the cast from double to int
			/*float notaf = *iniciogrades;
			int nota = (int) notaf;*/
			int nota = (int) *iniciogrades;
			if ( nota == i){
				*freq = *freq + 1;
			}
			iniciogrades++;
		}
		freq++;
	}
}
