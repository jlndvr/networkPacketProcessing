#include <iostream>
#include "Packet.hpp"

using namespace std;

int main() {

  Packet udpPacket(PacketType::DATA, Protocol::UDP);

  udpPacket.validatePacket();

  udpPacket.displayInfo();

  Packet tcpPacket(PacketType::CONTROL, Protocol::TCP);

  tcpPacket.validatePacket();
  tcpPacket.displayInfo();

  Packet unknownPacket(PacketType::UNKNOWN, Protocol::TCP);

  unknownPacket.validatePacket();
}
