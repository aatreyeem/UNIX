#include&lt;stdio.h&gt;
#include&lt;unistd.h&gt;
int main(int argc,char *argv[])
{
char **ptr;
extern char **environ;
for(ptr=environ; *ptr; ptr++)
printf(&quot;%s\n&quot;,*ptr);
return 0;
}
