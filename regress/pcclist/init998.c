/* from pcc-list, confirmed as 'pcc bug' and fixed by ragge  
 * pcc takes max resources - this can slow down or even crash your system 
 * 
 * Subject:    Crash compiling because wrong initialization of multidimensional
 * From:       Jesus Sanchez <zexel_ut () hotmail ! com>
 * */
int main(){

	char c[][]={"hi there"}; /* WRONG */
	
	return 0;
}

