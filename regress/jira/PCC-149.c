/* 
 * PCC-149 
 * cpp fails to remove backslash new-line sequence during preprocessing
 *
 */
void foo \
    (void) 
{ 
} 

int main(int argc, char *argv[]) { return 0; }
