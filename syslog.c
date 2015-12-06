/*
	Exemplo de uso da função setlogmask(int mask)
	Visualize a escrita do log com:

	# tail -f /var/log/auth.log

	De syslog.h:

	#define LOG_EMERG       0       // system is unusable
	#define LOG_ALERT       1       // action must be taken immediately
	#define LOG_CRIT        2       // critical conditions
	#define LOG_ERR         3       // error conditions 
	#define LOG_WARNING     4       // warning conditions

	#define LOG_NOTICE      5       // normal but significant condition
	#define LOG_INFO        6       // informational
	#define LOG_DEBUG       7       // debug-level messages

*/

#include <stdio.h>
#include <syslog.h>

int main(void) {

	/* Experimente comentar e descomentar a linha á baixo */
	setlogmask(LOG_UPTO(LOG_WARNING));

	syslog(LOG_AUTH | LOG_EMERG, "[auth] EMERG !!!");
	syslog(LOG_AUTH | LOG_ALERT, "[auth] ALERT !!!");
	syslog(LOG_AUTH | LOG_CRIT, "[auth] CRIT !!!");
	syslog(LOG_AUTH | LOG_ERR, "[auth] ERR !!!");
	syslog(LOG_AUTH | LOG_WARNING, "[auth] WARNING !!!");

	syslog(LOG_AUTH | LOG_NOTICE, "[auth] NOTICE !!!");
	syslog(LOG_AUTH | LOG_INFO, "[auth] INFO !!!");
	syslog(LOG_AUTH | LOG_DEBUG, "[auth] DEBUG !!!");

	return 0;
}
