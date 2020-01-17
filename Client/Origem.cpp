//Cliente
#include <SocketAPI\Cabeçalho.h>
#include <iostream>

using namespace SocketAPI;

int main() {
	if (Network::iniciar()) {
		std::cout << "Winsock API iniciada com sucesso" << std::endl;
		Socket socket;
		if (socket.Create() == PResult::P_Success) {
			std::cout << "Socket criado com sucesso!!!" << std::endl;
			socket.Close();
		}
		else {
			std::cout << "Socket falhou ao ser criado!!!" << std::endl;
		}
	}

	Network::fechar();
	return 0;
}