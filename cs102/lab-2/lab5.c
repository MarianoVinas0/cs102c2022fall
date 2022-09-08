#include <stdio.h>
int main( int argc, char **argv )
{

for(int i = 0; i < 10; i++){
	fprintf( stdout, "hello, world!\n" );
}

fprintf( stdout, "nevermind world you suck\n" );

for(int i = 0; i < 10; i++){
        fprintf( stdout, "goodbye\n" );
}

return 0;
}
