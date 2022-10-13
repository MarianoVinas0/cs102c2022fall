#include <stdio.h>
int main (int argc, char** argv)
{
fprintf(stdout, "Content-type: text/html\n\n");
fprintf(stdout, "<html>\n<head> \n<title>LAB 7</title>\n</head>\n<body>\n" );
fprintf(stdout, "<h1>my header</h1>\n");
fprintf(stdout, "<table>\n");
fprintf(stdout, "<tr> <th>N</th> <th>100xN</th> <tr>\n");
for(int i=1; i<=100; i=i+1)
{
fprintf(stdout, "<tr> <td>%d</td> <td>%d</td> </tr>\n", i, 100*i);
}
fprintf(stdout, "</table>\n");
fprintf(stdout, "</body>\n");
fprintf(stdout, "</html>\n");
return 0;
}
