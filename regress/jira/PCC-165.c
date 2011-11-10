/* 
 * Subject:    Error when declaring function with incomplete * type parameter
 * From:       Jesus Sanchez <zexel_ut () hotmail ! com>
 */
struct point; /* forward tag declarator, this is needed */ 

void func1 (struct point ); /* allowed by PCC */ 
void func2 (struct point arg); /* error by PCC */ 

int main(int argc, char *argv[]) { return 0; }
