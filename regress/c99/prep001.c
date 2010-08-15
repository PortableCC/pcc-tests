/* c99 6.4.2.2 */
int main(){
	char t[255]; 
	
	snprintf(t,sizeof(char)*254 ,"%s", __func__);
	return 0;
}
