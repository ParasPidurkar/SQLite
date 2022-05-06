#include <stdio.h>
#include <sqlite3.h> 
int main(int argc, char* argv[]) {
   sqlite3 *dbinstance;
   char *ErrorMsg = 0;
   int rc;

   rc = sqlite3_open("test.db", &dbinstance);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(dbinstance));
      return(0);
   } else {
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(dbinstance);
}