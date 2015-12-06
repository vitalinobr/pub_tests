#include <stdio.h>
#include <syslog.h>

int main(void) {
	setlogmask(LOG_MASK(LOG_DEBUG));

	syslog(LOG_AUTH | LOG_EMERG, "[auth] EMERGÊNCIA !!!");
	syslog(LOG_AUTH | LOG_ALERT, "[auth] ALERTA !!!");
	syslog(LOG_AUTH | LOG_CRIT, "[auth] CRÍTICO !!!");
	syslog(LOG_AUTH | LOG_ERR, "[auth] ERRO !!!");
	syslog(LOG_AUTH | LOG_WARNING, "[auth] CUIDADO !!!");
	syslog(LOG_AUTH | LOG_NOTICE, "[auth] EVENTO !!!");
	syslog(LOG_AUTH | LOG_INFO, "[auth] INFORMAÇÃO !!!");
	syslog(LOG_AUTH | LOG_DEBUG, "[auth] DEBUG !!!");

	return 0;
}
