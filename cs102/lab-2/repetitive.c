#include <stdio.h>
int main( int argc, char**argv )
{

int i = 0;

while (i < 50)
{
fprintf(stdout, "step up\n");
fprintf(stdout, "step down\n");
i = i + 1;
}

fprintf(stdout, "rest for a minute\n");
i = 0;

while (i < 50){
fprintf(stdout, "step up\n");
fprintf(stdout, "step down\n");
i = i + 1;
}

return 0;
}
