#pragma once
#define WIN32_LEAN_AND_MEAN
#include <WinSock2.h>

namespace SocketAPI {
	class Network {
		public:
			static bool iniciar();
			static void fechar();
	};
}