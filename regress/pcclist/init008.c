/* Subject:    ellipsis in array initialization
 * From:       Gregory McGarry <greg () bitlynx ! com>
 *
 */
const char is_type[257] = { 0,
	     [('0' + 1 - (-0x7f-1)) ... ('9' + 1 - (-0x7f-1))] = 01,
};
int main () {return 0;}
