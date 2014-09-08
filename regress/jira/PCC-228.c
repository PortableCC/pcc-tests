/*
 * PCC-220
 * compiler error: bad variable attribute
 */

static const int __EH_FRAME_END__[]
    __attribute__ ((__used__)) __attribute__(( section (".eh_frame"), aligned (4) )) = { 0 }; 

int main(int argc, char *argv[]) { return 0; }
