#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
  int sock = 0;
  struct sockaddr_in serv_addr;

  char buffer[1024] = {0};

  // create socket
  sock = socket(AF_INET, SOCK_STREAM, 0);

  serv_addr.sin_family = AF_INET;
  serv_addr.sin_port = htons(8080);
  inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr);

  connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

  const char* hello = "Hello from client";
  send(sock, hello, strlen(hello), 0);

  read(sock, buffer, 1024);

  std::cout << "Server says: " << buffer << std::endl;

  close(sock);
  return 0;
}
