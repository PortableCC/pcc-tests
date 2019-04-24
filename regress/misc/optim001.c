

char *ttyn = "foo";
char STRtty[222];
char *ttyname();

main()
{
int cp;

    if (ttyn = ttyname(0)) {
        if (strncmp(ttyn, "/dev/", 5) == 0)
            set(STRtty, cp = SAVE(ttyn + 5));
        else
            set(STRtty, cp = SAVE(ttyn));
    }
    else
        set(STRtty, cp = SAVE(""));
return 0;
}

char *ttyname(int a){return ttyn; }

int SAVE(char *c){ return 43;}

set(char *c, int a) { if (a != 43) printf("error 43\n"); exit(1); }

