/* 
 * PCC-123
 * static inline functions need reference counting rather than just
 * reference noting
 */

void tomato (void); 

static inline void potato (void) 
{ 
	tomato(); 
} 

static inline void legato (void) 
{ 
	potato(); 
} 

int main(int argc, char *argv[]) { return 0; }
