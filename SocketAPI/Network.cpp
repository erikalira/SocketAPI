#include "Network.h"
#include <iostream>

bool SocketAPI::Network::iniciar()
{
	WSADATA wsadata;
	int resultado = WSAStartup(MAKEWORD(2,2), &wsadata);
	
	if (resultado != 0) {
		std::cerr << "Falha ao iniciar o winsock API" << std::endl;
		return false;
	}

	if (LOBYTE(wsadata.wVersion) != 2 || HIBYTE(wsadata.wVersion) != 2 ) {
		std::cerr << "Nao achou uma versao usavel do winsock API dll" << std::endl;
		return false;
	}

	return true;
}

void SocketAPI::Network::fechar()
{
	WSACleanup();
}
