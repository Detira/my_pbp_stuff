static char sqla_program_id[292] = 
{
 '\xac','\x0','\x41','\x45','\x41','\x56','\x41','\x49','\x68','\x41','\x34','\x6d','\x43','\x48','\x45','\x71','\x30','\x31','\x31','\x31',
 '\x31','\x20','\x32','\x20','\x20','\x20','\x20','\x20','\x20','\x20','\x20','\x20','\x8','\x0','\x53','\x54','\x55','\x44','\x45','\x4e',
 '\x54','\x20','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x8','\x0','\x4d','\x41','\x49','\x4e','\x20','\x20','\x20','\x20','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0',
 '\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0','\x0'
};

#include "sqladef.h"

static struct sqla_runtime_info sqla_rtinfo = 
{{'S','Q','L','A','R','T','I','N'}, sizeof(wchar_t), 0, {' ',' ',' ',' '}};


static const short sqlIsLiteral   = SQL_IS_LITERAL;
static const short sqlIsInputHvar = SQL_IS_INPUT_HVAR;


#line 1 "main.sqC"
// Napisati C/SQL program koji ispisuje maksimalni indeks iz tabele ISPIT.

#include <iostream>
#include <sql.h>


/*
EXEC SQL INCLUDE SQLCA;
*/

/* SQL Communication Area - SQLCA - structures and constants */
#include "sqlca.h"
struct sqlca sqlca;


#line 6 "main.sqC"



/*
EXEC SQL BEGIN DECLARE SECTION;
*/

#line 8 "main.sqC"

sqlint32 host_max_indeks;

/*
EXEC SQL END DECLARE SECTION;
*/

#line 10 "main.sqC"


// SQLCODE == sqlca.sqlcode
#define check_sql_error(msg)\
	do{\
		if(SQLCODE < 0){\
			char buffer[1024];\
			sqlaintp(buffer, sizeof(buffer), 50, &sqlca);\
			std::cerr << "SQL error: " << msg << std::endl;\
			std::cerr << "SQLCODE = " << SQLCODE << std::endl;\
			std::cerr << buffer << std::endl;\
			exec_sql_connect_reset();\
			return 1;\
		}\
	} while(0)

void exec_sql_connect_reset(){
	
/*
EXEC SQL CONNECT RESET;
*/

{
#line 27 "main.sqC"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 27 "main.sqC"
  sqlacall((unsigned short)29,3,0,0,0L);
#line 27 "main.sqC"
  sqlastop(0L);
}

#line 27 "main.sqC"

}

int main(){
	
/*
EXEC SQL CONNECT TO stud2020 USER student USING abcdef;
*/

{
#line 31 "main.sqC"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 31 "main.sqC"
  sqlaaloc(2,3,1,0L);
    {
      struct sqla_setdata_list sql_setdlist[3];
#line 31 "main.sqC"
      sql_setdlist[0].sqltype = 460; sql_setdlist[0].sqllen = 9;
#line 31 "main.sqC"
      sql_setdlist[0].sqldata = (void*)"stud2020";
#line 31 "main.sqC"
      sql_setdlist[0].sqlind = 0L;
#line 31 "main.sqC"
      sql_setdlist[1].sqltype = 460; sql_setdlist[1].sqllen = 8;
#line 31 "main.sqC"
      sql_setdlist[1].sqldata = (void*)"student";
#line 31 "main.sqC"
      sql_setdlist[1].sqlind = 0L;
#line 31 "main.sqC"
      sql_setdlist[2].sqltype = 460; sql_setdlist[2].sqllen = 7;
#line 31 "main.sqC"
      sql_setdlist[2].sqldata = (void*)"abcdef";
#line 31 "main.sqC"
      sql_setdlist[2].sqlind = 0L;
#line 31 "main.sqC"
      sqlasetdata(2,0,3,sql_setdlist,0L,0L);
    }
#line 31 "main.sqC"
  sqlacall((unsigned short)29,5,2,0,0L);
#line 31 "main.sqC"
  sqlastop(0L);
}

#line 31 "main.sqC"

	check_sql_error("connect");
	
	
/*
EXEC SQL
		SELECT MAX(INDEKS)
		INTO :host_max_indeks
		FROM DA.ISPIT
	;
*/

{
#line 38 "main.sqC"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 38 "main.sqC"
  sqlaaloc(3,1,2,0L);
    {
      struct sqla_setdata_list sql_setdlist[1];
#line 38 "main.sqC"
      sql_setdlist[0].sqltype = 496; sql_setdlist[0].sqllen = 4;
#line 38 "main.sqC"
      sql_setdlist[0].sqldata = (void*)&host_max_indeks;
#line 38 "main.sqC"
      sql_setdlist[0].sqlind = 0L;
#line 38 "main.sqC"
      sqlasetdata(3,0,1,sql_setdlist,0L,0L);
    }
#line 38 "main.sqC"
  sqlacall((unsigned short)24,1,0,3,0L);
#line 38 "main.sqC"
  sqlastop(0L);
}

#line 38 "main.sqC"

	check_sql_error("select");
	
	std::cout << "Maksimalni indeks iz tabele ispit je: " << host_max_indeks << std::endl;
	
	
/*
EXEC SQL CONNECT RESET;
*/

{
#line 43 "main.sqC"
  sqlastrt(sqla_program_id, &sqla_rtinfo, &sqlca);
#line 43 "main.sqC"
  sqlacall((unsigned short)29,3,0,0,0L);
#line 43 "main.sqC"
  sqlastop(0L);
}

#line 43 "main.sqC"

	check_sql_error("reset");
	
	return 0;
}

