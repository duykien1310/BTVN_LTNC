#include <iostream>
using namespace std;
int main()
{
   char **s;
   char *a;
   char foo[] = "Hello World";
   a = foo;
   s = &a;
   cout << "s: " << *s << endl;
   cout << "s[0]: " << s[0];
   return(0);
}