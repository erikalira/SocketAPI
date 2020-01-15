//Servidor
#include <SocketAPI\Cabeçalho.h>
#include <iostream>

using namespace SocketAPI;

int main() {
	if (Network::iniciar()) {
		std::cout << "Winsock API iniciada com sucesso" << std::endl;
	}

	Network::fechar();

	system("pause");

	return 0;
}