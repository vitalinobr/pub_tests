/*
	Exemplo de uso da função setlogmask(int mask)
	Visualize a escrita do log com:
	# tail -f /var/log/auth.log

	Neste exemplo, a função setlogmask é utilizada para
	permitir somente a chamada ao syslog para que a mensagem
	com o level LOG_DEBUG seja executada.
*/

#include <stdio.h>
#include <syslog.h>

int main(void) {

	/* Experimente comentar e descomentar a linha á baixo */
	setlogmask(LOG_MASK(LOG_DEBUG));

	//syslog(LOG_AUTH | LOG_EMERG, "[auth] EMERGÊNCIA !!!");
	syslog(LOG_AUTH | LOG_ALERT, "[auth] ALERTA !!!");
	syslog(LOG_AUTH | LOG_CRIT, "[auth] CRÍTICO !!!");
	syslog(LOG_AUTH | LOG_ERR, "[auth] ERRO !!!");
	syslog(LOG_AUTH | LOG_WARNING, "[auth] CUIDADO !!!");
	syslog(LOG_AUTH | LOG_NOTICE, "[auth] EVENTO !!!");
	syslog(LOG_AUTH | LOG_INFO, "[auth] INFORMAÇÃO !!!");
	syslog(LOG_AUTH | LOG_DEBUG, "[auth] DEBUG !!!");

	return 0;
}
