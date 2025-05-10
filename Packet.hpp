#include <string>
#include "PacketType.hpp"
#include "Protocol.hpp"
#include "Status.hpp"

using namespace std;

class Packet {
private:
  PacketType type;
  Protocol protocol;
  Status packetStatus;
  string getPacketTypeName() const;
  string getStatusName() const;

public:
  Packet(PacketType pType, Protocol prtcl);
  void setType(PacketType newType);
  string getProtocolName();
  void validatePacket();
  bool isError();
  void displayInfo();
};
