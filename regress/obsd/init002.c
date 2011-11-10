/* Correct - From OBSD */
enum foo {aap};

enum foo eval_table(void) { return aap; }

static const struct ops {
        enum foo (*afrunc)(void);
} eval_ops[] = {
        { eval_table },
};

int main(int argc, char *argv[]) { return 0; }
