/* Digraph tokens (<: :> <% %> %: %:%:, synonym to [ ] { } # ##, from
 * C94) are part of the language.
 * http://home.datacomm.ch/t_wolf/tw/c/c9x_changes.html
 */

%:define AAA 1 
%:define BBB AAA %:%: one

struct st <%
	int i ;
	char data[10]; 
%> ;

int main(int argc, char *argv[])
{
	int array<:10:> ;

	return 0; 
}
