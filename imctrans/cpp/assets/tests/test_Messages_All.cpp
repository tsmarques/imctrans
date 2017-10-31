//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// Licensed under the Apache License, Version 2.0 (the "License");          *
// you may not use this file except in compliance with the License.         *
// You may obtain a copy of the License at                                  *
//                                                                          *
// http://www.apache.org/licenses/LICENSE-2.0                               *
//                                                                          *
// Unless required by applicable law or agreed to in writing, software      *
// distributed under the License is distributed on an "AS IS" BASIS,        *
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
// See the License for the specific language governing permissions and      *
// limitations under the License.                                           *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 705b70d122e4e03b502eea8ff065bd13                            *
//***************************************************************************

// IMC headers.
#include <IMC/Base/ByteBuffer.hpp>
#include <IMC/Base/Packet.hpp>
#include <IMC/Spec/AllMessages.hpp>

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("EntityState - Serialization/Deserialization #0")
{
  IMC::EntityState msg;
  msg.setTimeStamp(0.7799466492612634);
  msg.setSource(12616U);
  msg.setSourceEntity(30U);
  msg.setDestination(62686U);
  msg.setDestinationEntity(155U);
  msg.state = 167U;
  msg.flags = 81U;
  msg.description.assign("DHJEMXSBNLYYNWDXPVSKDROXYFGMXCCMTEHSINYBAWIKDKUEJCCXVTIFBEQJACUUWKNZIGRZRJVWWGUVRHSDYDZGSBGODHLYOULFANRGJXUNBZLPICCTSAPHEEUQNDSPTLWMEVDZAFKBQVUROTTCQGEWKPZXAQTJMLTTPWOIKBJUORKLJJAKQMEYYZVHAWIRBLSQZFICOM");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityState - Serialization/Deserialization #1")
{
  IMC::EntityState msg;
  msg.setTimeStamp(0.5880797364143973);
  msg.setSource(30873U);
  msg.setSourceEntity(167U);
  msg.setDestination(24635U);
  msg.setDestinationEntity(135U);
  msg.state = 192U;
  msg.flags = 254U;
  msg.description.assign("UZUAIDSCVSMMDRHAVWJQYRVOXBCUWPOQBSHJBNEGDSNEQYWCSFPIHIKZJBBQXQXMPFCMJURDVHHYJWBRIYKEJOUXFTLCRZKUADPCYICHVSLWLUGGIRMOSWTKWQMTOZGKLGUJTPMEJOEECVUDPRVLXNNBXWAYVQOSBTQGIYHQIKCRSAHGLEEAPCFMOXZKAVOMFXXMPLNFZWRBSQYUPL");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityState - Serialization/Deserialization #2")
{
  IMC::EntityState msg;
  msg.setTimeStamp(0.25846593614043156);
  msg.setSource(35204U);
  msg.setSourceEntity(215U);
  msg.setDestination(57647U);
  msg.setDestinationEntity(220U);
  msg.state = 111U;
  msg.flags = 113U;
  msg.description.assign("WCUBNLMXPNIIBSVGAIZARZGYENPHTEEQHKHRE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityState - Serialization/Deserialization #0")
{
  IMC::QueryEntityState msg;
  msg.setTimeStamp(0.999304660438644);
  msg.setSource(57419U);
  msg.setSourceEntity(29U);
  msg.setDestination(19891U);
  msg.setDestinationEntity(177U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityState - Serialization/Deserialization #1")
{
  IMC::QueryEntityState msg;
  msg.setTimeStamp(0.9325250921837154);
  msg.setSource(47824U);
  msg.setSourceEntity(65U);
  msg.setDestination(34920U);
  msg.setDestinationEntity(232U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityState - Serialization/Deserialization #2")
{
  IMC::QueryEntityState msg;
  msg.setTimeStamp(0.2836695447448071);
  msg.setSource(10501U);
  msg.setSourceEntity(52U);
  msg.setDestination(18799U);
  msg.setDestinationEntity(132U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityInfo - Serialization/Deserialization #0")
{
  IMC::EntityInfo msg;
  msg.setTimeStamp(0.11979809143901898);
  msg.setSource(32115U);
  msg.setSourceEntity(187U);
  msg.setDestination(28079U);
  msg.setDestinationEntity(43U);
  msg.id = 74U;
  msg.label.assign("YMRUPDAYPTBFYETWMPHZHBIRMNGGCKPYCYWQIOCLBNAGMMYFJKWRRONXNHHLZNUJZGLLCAHLBONZVQGFJTXXJVKZAHMVDQWLAFGWQWBECKDSNDLVIPJCVFZJOZTUHOHQWEUBBMRYVKEBPCXV");
  msg.component.assign("IJVNNGSVREDKQOOHBOQJTOAOBWDNUZSKUCODIKGSUNTQEMXDCAPXEEMCZPPRVSGGUODRUCZXUYJZEWIZWRTPHLXYGMLHYBNAIOKSXJCPBNRQPAIOBNFTELCSDZNLHETWEXMGJAXSBAYKEFUZCDFHMHHLLAVFHNSSFIIYAJWVDHYBPKLXGGAPGJWEVQTRZWBHF");
  msg.act_time = 26967U;
  msg.deact_time = 18315U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityInfo - Serialization/Deserialization #1")
{
  IMC::EntityInfo msg;
  msg.setTimeStamp(0.9524742967983637);
  msg.setSource(40621U);
  msg.setSourceEntity(144U);
  msg.setDestination(49016U);
  msg.setDestinationEntity(60U);
  msg.id = 223U;
  msg.label.assign("XOZBXXGSJCMHHNUAJTBUEDIWZCODISDQKRQPJZUTIHRHWAORULZIZNEVGN");
  msg.component.assign("QQOTJCTOKOVBYWVJMOQKQETWIXLBCOSNHHMXAGNGQDNVMKYLFYYZSYUVWLGHWKTYCZAWNFGEREHKVBDBAPALALGTPICUQDDVORHKLFMUBLQODJRFIVCDXSPXJUENPRJQGUYZSYZGINTFQRMDOCANZWTEAKCWWCMFARMBBLZDWZSOSKHTFZZTISYPPVNNYEFURSJAQIVUMRP");
  msg.act_time = 64634U;
  msg.deact_time = 49978U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityInfo - Serialization/Deserialization #2")
{
  IMC::EntityInfo msg;
  msg.setTimeStamp(0.9641172598661302);
  msg.setSource(18226U);
  msg.setSourceEntity(87U);
  msg.setDestination(29694U);
  msg.setDestinationEntity(63U);
  msg.id = 91U;
  msg.label.assign("KASINPTJGEMEYLONQRJHDEGYSMVPRRXOTFKTAZXUBZABFPTVWWEDNMAHGIPTJLVNWAUQNYHIHJXFGIEFARISCUKFVGRSQZK");
  msg.component.assign("SXSCRZEWQWZYPQXNGNSNRPHHFSHFYXHLLUOOYFMEFVMTZEZILOCSFAVWACVTUJKAJGOJJGEUMKYMRZOPYBLPTFKYTMACUBQNHUOWDVJWBCAWVQRPWBDDWXBXYFIMORUQ");
  msg.act_time = 17425U;
  msg.deact_time = 51868U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityInfo - Serialization/Deserialization #0")
{
  IMC::QueryEntityInfo msg;
  msg.setTimeStamp(0.4248683402354557);
  msg.setSource(13366U);
  msg.setSourceEntity(130U);
  msg.setDestination(58832U);
  msg.setDestinationEntity(249U);
  msg.id = 85U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityInfo - Serialization/Deserialization #1")
{
  IMC::QueryEntityInfo msg;
  msg.setTimeStamp(0.6438707074066707);
  msg.setSource(39493U);
  msg.setSourceEntity(224U);
  msg.setDestination(61329U);
  msg.setDestinationEntity(13U);
  msg.id = 246U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityInfo - Serialization/Deserialization #2")
{
  IMC::QueryEntityInfo msg;
  msg.setTimeStamp(0.7213813641075261);
  msg.setSource(57010U);
  msg.setSourceEntity(53U);
  msg.setDestination(5240U);
  msg.setDestinationEntity(163U);
  msg.id = 90U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityList - Serialization/Deserialization #0")
{
  IMC::EntityList msg;
  msg.setTimeStamp(0.9198419748745655);
  msg.setSource(23630U);
  msg.setSourceEntity(61U);
  msg.setDestination(28526U);
  msg.setDestinationEntity(173U);
  msg.op = 91U;
  msg.list.assign("MZSHCRDUPVBYVLRNTPYQHYYEJF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityList - Serialization/Deserialization #1")
{
  IMC::EntityList msg;
  msg.setTimeStamp(0.2873256149209297);
  msg.setSource(62953U);
  msg.setSourceEntity(12U);
  msg.setDestination(63270U);
  msg.setDestinationEntity(170U);
  msg.op = 137U;
  msg.list.assign("QYYUVMYIFHGGHDTRJQEFXPOVLDZRKPWQYMTVXCBNROMDKFJMZEQZATQFGFOJWZRQCJCAILSFQCHAFKTWUJMZPMKSPBGLBURJUNVTVBPTAGIIATBXXKUJVHBQNYFZZAZZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityList - Serialization/Deserialization #2")
{
  IMC::EntityList msg;
  msg.setTimeStamp(0.2381613621917884);
  msg.setSource(7459U);
  msg.setSourceEntity(58U);
  msg.setDestination(61842U);
  msg.setDestinationEntity(77U);
  msg.op = 0U;
  msg.list.assign("YCIAJXNCLXGOJHPRQQBXUYBOFJRNPCXKVKHXIRCOWHFOSBSAWOGMJNDEZWDWBQVMRZVUGGEYRNCRLGLFZTNOGIENTBQPFQLZDFMHSSNWIMHMLAP");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CpuUsage - Serialization/Deserialization #0")
{
  IMC::CpuUsage msg;
  msg.setTimeStamp(0.41746128313139064);
  msg.setSource(3967U);
  msg.setSourceEntity(145U);
  msg.setDestination(39914U);
  msg.setDestinationEntity(229U);
  msg.value = 96U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CpuUsage - Serialization/Deserialization #1")
{
  IMC::CpuUsage msg;
  msg.setTimeStamp(0.5848803446756844);
  msg.setSource(54278U);
  msg.setSourceEntity(162U);
  msg.setDestination(47418U);
  msg.setDestinationEntity(173U);
  msg.value = 15U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CpuUsage - Serialization/Deserialization #2")
{
  IMC::CpuUsage msg;
  msg.setTimeStamp(0.08755987383879416);
  msg.setSource(26535U);
  msg.setSourceEntity(177U);
  msg.setDestination(44327U);
  msg.setDestinationEntity(45U);
  msg.value = 58U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TransportBindings - Serialization/Deserialization #0")
{
  IMC::TransportBindings msg;
  msg.setTimeStamp(0.7846952340551431);
  msg.setSource(19020U);
  msg.setSourceEntity(145U);
  msg.setDestination(18915U);
  msg.setDestinationEntity(66U);
  msg.consumer.assign("AOTPGQOCCUXYMPMKQVMBUXQQUXJGRAUPBQFMCNCGYKGUJSDPRYBHAKNHDCDIPMBLXKLTSGAZTXZPIHJYBBBOAJYVYHJNAACELKHDIPZNSRHPZFOFFTRBOZSBOGJEYGNNJSTIIVXKLRUYREFDOWFEYCCQXCJMIIMRHSCVWFRNSXOKWKEDEEBGWWAHFZLFTUSWZ");
  msg.message_id = 30791U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TransportBindings - Serialization/Deserialization #1")
{
  IMC::TransportBindings msg;
  msg.setTimeStamp(0.03233212741239422);
  msg.setSource(15516U);
  msg.setSourceEntity(186U);
  msg.setDestination(52370U);
  msg.setDestinationEntity(162U);
  msg.consumer.assign("HYQUJXPMLLIABIDRGLKOALNQXYCHQPQHYVBFUESFFEHRQTFIDAEZ");
  msg.message_id = 10917U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TransportBindings - Serialization/Deserialization #2")
{
  IMC::TransportBindings msg;
  msg.setTimeStamp(0.014553899483865318);
  msg.setSource(55479U);
  msg.setSourceEntity(109U);
  msg.setDestination(44849U);
  msg.setDestinationEntity(43U);
  msg.consumer.assign("LJWVXJSVRSANSIUOHTHDMLVQYKLHCAHCQV");
  msg.message_id = 34237U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RestartSystem - Serialization/Deserialization #0")
{
  IMC::RestartSystem msg;
  msg.setTimeStamp(0.8425764841973848);
  msg.setSource(21817U);
  msg.setSourceEntity(72U);
  msg.setDestination(64044U);
  msg.setDestinationEntity(172U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RestartSystem - Serialization/Deserialization #1")
{
  IMC::RestartSystem msg;
  msg.setTimeStamp(0.46751617719539085);
  msg.setSource(13805U);
  msg.setSourceEntity(156U);
  msg.setDestination(56342U);
  msg.setDestinationEntity(14U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RestartSystem - Serialization/Deserialization #2")
{
  IMC::RestartSystem msg;
  msg.setTimeStamp(0.19146398876402215);
  msg.setSource(27847U);
  msg.setSourceEntity(201U);
  msg.setDestination(61425U);
  msg.setDestinationEntity(101U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevCalibrationControl - Serialization/Deserialization #0")
{
  IMC::DevCalibrationControl msg;
  msg.setTimeStamp(0.9298572165351874);
  msg.setSource(30514U);
  msg.setSourceEntity(54U);
  msg.setDestination(28134U);
  msg.setDestinationEntity(42U);
  msg.op = 107U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevCalibrationControl - Serialization/Deserialization #1")
{
  IMC::DevCalibrationControl msg;
  msg.setTimeStamp(0.7030394200583576);
  msg.setSource(37867U);
  msg.setSourceEntity(184U);
  msg.setDestination(57321U);
  msg.setDestinationEntity(117U);
  msg.op = 249U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevCalibrationControl - Serialization/Deserialization #2")
{
  IMC::DevCalibrationControl msg;
  msg.setTimeStamp(0.20522765495458017);
  msg.setSource(58807U);
  msg.setSourceEntity(16U);
  msg.setDestination(19087U);
  msg.setDestinationEntity(80U);
  msg.op = 66U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevCalibrationState - Serialization/Deserialization #0")
{
  IMC::DevCalibrationState msg;
  msg.setTimeStamp(0.3337135132913731);
  msg.setSource(56897U);
  msg.setSourceEntity(62U);
  msg.setDestination(18292U);
  msg.setDestinationEntity(8U);
  msg.total_steps = 51U;
  msg.step_number = 39U;
  msg.step.assign("RNIKXCBIGVHPBJFJDOHQKBQQSUPCVRAUSHVDESCOGFFWYPRYACMDYQANPTZOMWXUTVZDXQDTWAJPOLAWCJFXYVLWXBJXJYQRSVHOAATLSGETXIYQGOAULMVKMGFMHEIUNLBOXNFINQUADILTEIYSFJBWEEDDNXPRFUZPKFCZMYHGFZEETAMHVBIXPNWMUOKOJJPSRZZGCLPMJKGIUCLRCSZTYRKWSRLHVTNMDNWHWYZHRGSCBZDQBEB");
  msg.flags = 140U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevCalibrationState - Serialization/Deserialization #1")
{
  IMC::DevCalibrationState msg;
  msg.setTimeStamp(0.31015650242028725);
  msg.setSource(32088U);
  msg.setSourceEntity(50U);
  msg.setDestination(44236U);
  msg.setDestinationEntity(109U);
  msg.total_steps = 192U;
  msg.step_number = 175U;
  msg.step.assign("IERSEUKTYMUMVIPLFDZXWIQQFGUBO");
  msg.flags = 124U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevCalibrationState - Serialization/Deserialization #2")
{
  IMC::DevCalibrationState msg;
  msg.setTimeStamp(0.6369410645601139);
  msg.setSource(56566U);
  msg.setSourceEntity(101U);
  msg.setDestination(6144U);
  msg.setDestinationEntity(166U);
  msg.total_steps = 85U;
  msg.step_number = 1U;
  msg.step.assign("TITXKHSWSRDZZLTKBNHAFRQAYGCRUCBGDYSQWXVFKBXUNTFJBOQFAJRHIJHCHKSHVPPNEXCAOJVJDSEFAPQZCOTLULBEPZWTCIGUMYVZCORZRYTGMUYFHWRINDOANMHGQAMCZEODBYSLPSGDFFEDXWCPUYOOAQGMWWJSAVJMLOVFNJLZTBHEXVQYVEZUDAKBKIMPIMRKKNKOHSMGXJUWI");
  msg.flags = 26U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityActivationState - Serialization/Deserialization #0")
{
  IMC::EntityActivationState msg;
  msg.setTimeStamp(0.9102499615946053);
  msg.setSource(22924U);
  msg.setSourceEntity(51U);
  msg.setDestination(38960U);
  msg.setDestinationEntity(222U);
  msg.state = 188U;
  msg.error.assign("CSLNCRNSOGXXYLKEUGMHDJVAMJOHLBDAOVQTBVSHURKMTADMZHZFOADMYZQMKOPFSUGQJQEIBQEEXFHDEGPAWVUAHRDWKUUYECMXCAQXKCFZWLPXTLGBBYTVQSAFBWMYFEBAYNNIGDYTGAUTJKOOPPJXINGJVFMUFTHENSVKTSTPYKULZHCVRFKJSLRBNQIHIHRZZVDENLL");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityActivationState - Serialization/Deserialization #1")
{
  IMC::EntityActivationState msg;
  msg.setTimeStamp(0.1953747161684799);
  msg.setSource(20733U);
  msg.setSourceEntity(172U);
  msg.setDestination(12135U);
  msg.setDestinationEntity(86U);
  msg.state = 110U;
  msg.error.assign("GXTKLMKYSCSDOTQXDVYJCQKRDATXOAHKNCSAVOILVBZQSCXYWFVLNIPQYPPNGMFBTXLANTIIJEBFEHTZMFZYJEEGAJPIEKKGVMTNWSFZOPRLZBMFBRDUJAORDMQOHWZHJRSLERQMDPHXAUCKFQFPWSRHBZXWQDSHKINUVDFDNJBYCMIUMZPRDCARVBUNOPGBGBEYJGMKJSGWVPYXLZQVFWUGETWISAOCYXKLNUCHLEO");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityActivationState - Serialization/Deserialization #2")
{
  IMC::EntityActivationState msg;
  msg.setTimeStamp(0.7995277147628979);
  msg.setSource(47471U);
  msg.setSourceEntity(175U);
  msg.setDestination(50125U);
  msg.setDestinationEntity(76U);
  msg.state = 208U;
  msg.error.assign("XRGVXHDFNBIMWOTQPYZCOLVDYNWBJBNSLZPWEMXHATTKXAYIBHHOOTLZHVKSNZVXFNAXYLEJFUATSMBMRBJPFWMFEYDPQYNDTZVIKTZMHUEQSPJDKIDVIRCHKANQRTPLZBMHOPGYAYOCGILOKLFDGFUZDKCEIWFLQSKQJSEQAHEYURKAAUXSPJKCPMJQZWIDCVLACXQBERNNIGGVW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityActivationState - Serialization/Deserialization #0")
{
  IMC::QueryEntityActivationState msg;
  msg.setTimeStamp(0.2167569813137279);
  msg.setSource(7734U);
  msg.setSourceEntity(96U);
  msg.setDestination(46284U);
  msg.setDestinationEntity(42U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityActivationState - Serialization/Deserialization #1")
{
  IMC::QueryEntityActivationState msg;
  msg.setTimeStamp(0.7318183063002162);
  msg.setSource(24326U);
  msg.setSourceEntity(252U);
  msg.setDestination(48552U);
  msg.setDestinationEntity(198U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityActivationState - Serialization/Deserialization #2")
{
  IMC::QueryEntityActivationState msg;
  msg.setTimeStamp(0.6903514745150673);
  msg.setSource(41551U);
  msg.setSourceEntity(94U);
  msg.setDestination(48559U);
  msg.setDestinationEntity(21U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleOperationalLimits - Serialization/Deserialization #0")
{
  IMC::VehicleOperationalLimits msg;
  msg.setTimeStamp(0.26739060627954125);
  msg.setSource(36448U);
  msg.setSourceEntity(197U);
  msg.setDestination(31668U);
  msg.setDestinationEntity(136U);
  msg.op = 123U;
  msg.speed_min = 0.6458193234992583f;
  msg.speed_max = 0.44007886291946174f;
  msg.long_accel = 0.8607081822218076f;
  msg.alt_max_msl = 0.5875994407117623f;
  msg.dive_fraction_max = 0.7159787554349586f;
  msg.climb_fraction_max = 0.4519576226737416f;
  msg.bank_max = 0.8112157702996149f;
  msg.p_max = 0.5179031579792573f;
  msg.pitch_min = 0.08848776625458565f;
  msg.pitch_max = 0.2578371830361059f;
  msg.q_max = 0.9698559383888273f;
  msg.g_min = 0.7176476644228504f;
  msg.g_max = 0.9625680693940674f;
  msg.g_lat_max = 0.48858326246010375f;
  msg.rpm_min = 0.06295759606615181f;
  msg.rpm_max = 0.24153599340967113f;
  msg.rpm_rate_max = 0.396437840368724f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleOperationalLimits - Serialization/Deserialization #1")
{
  IMC::VehicleOperationalLimits msg;
  msg.setTimeStamp(0.6416825360165107);
  msg.setSource(56697U);
  msg.setSourceEntity(165U);
  msg.setDestination(64796U);
  msg.setDestinationEntity(239U);
  msg.op = 249U;
  msg.speed_min = 0.626142180282322f;
  msg.speed_max = 0.938489027200913f;
  msg.long_accel = 0.4781187236963973f;
  msg.alt_max_msl = 0.04525026476388205f;
  msg.dive_fraction_max = 0.1149199282828155f;
  msg.climb_fraction_max = 0.5951612984704949f;
  msg.bank_max = 0.8505794796696665f;
  msg.p_max = 0.4173879664299879f;
  msg.pitch_min = 0.394754962814135f;
  msg.pitch_max = 0.5220629496418543f;
  msg.q_max = 0.25286366904545776f;
  msg.g_min = 0.08477741371579461f;
  msg.g_max = 0.19325743326697264f;
  msg.g_lat_max = 0.426903049100269f;
  msg.rpm_min = 0.3709928762473129f;
  msg.rpm_max = 0.06794413619329431f;
  msg.rpm_rate_max = 0.07115313957944835f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleOperationalLimits - Serialization/Deserialization #2")
{
  IMC::VehicleOperationalLimits msg;
  msg.setTimeStamp(0.052633993336474894);
  msg.setSource(42959U);
  msg.setSourceEntity(187U);
  msg.setDestination(5586U);
  msg.setDestinationEntity(5U);
  msg.op = 183U;
  msg.speed_min = 0.8672748261805321f;
  msg.speed_max = 0.6181650312945893f;
  msg.long_accel = 0.7579242622034279f;
  msg.alt_max_msl = 0.7860769169195317f;
  msg.dive_fraction_max = 0.21568261622034002f;
  msg.climb_fraction_max = 0.8777248965311781f;
  msg.bank_max = 0.4361582989616464f;
  msg.p_max = 0.5843121644111487f;
  msg.pitch_min = 0.9481094815590702f;
  msg.pitch_max = 0.4288908400621406f;
  msg.q_max = 0.991234710374876f;
  msg.g_min = 0.30939402366939406f;
  msg.g_max = 0.803075454520114f;
  msg.g_lat_max = 0.48688347898933637f;
  msg.rpm_min = 0.600434041824063f;
  msg.rpm_max = 0.3350015056789266f;
  msg.rpm_rate_max = 0.19821143422774246f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MsgList - Serialization/Deserialization #0")
{
  IMC::MsgList msg;
  msg.setTimeStamp(0.056003479637331766);
  msg.setSource(1471U);
  msg.setSourceEntity(16U);
  msg.setDestination(65245U);
  msg.setDestinationEntity(195U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MsgList - Serialization/Deserialization #1")
{
  IMC::MsgList msg;
  msg.setTimeStamp(0.6075357765203939);
  msg.setSource(35819U);
  msg.setSourceEntity(136U);
  msg.setDestination(37790U);
  msg.setDestinationEntity(64U);
  IMC::QueryEntityActivationState tmp_msg_0;
  msg.msgs.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MsgList - Serialization/Deserialization #2")
{
  IMC::MsgList msg;
  msg.setTimeStamp(0.8757676342168627);
  msg.setSource(9818U);
  msg.setSourceEntity(201U);
  msg.setDestination(2389U);
  msg.setDestinationEntity(28U);
  IMC::Rpm tmp_msg_0;
  tmp_msg_0.value = 24217;
  msg.msgs.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SimulatedState - Serialization/Deserialization #0")
{
  IMC::SimulatedState msg;
  msg.setTimeStamp(0.36853999768003476);
  msg.setSource(3748U);
  msg.setSourceEntity(213U);
  msg.setDestination(39849U);
  msg.setDestinationEntity(104U);
  msg.lat = 0.6239830957122191;
  msg.lon = 0.4234886894069171;
  msg.height = 0.06383786892013488f;
  msg.x = 0.3851094295580261f;
  msg.y = 0.8822580454425332f;
  msg.z = 0.19604108741300807f;
  msg.phi = 0.5737703188264202f;
  msg.theta = 0.37419760329976515f;
  msg.psi = 0.44191388855220903f;
  msg.u = 0.24977087480066174f;
  msg.v = 0.9702562886431829f;
  msg.w = 0.05982255368423273f;
  msg.p = 0.46177067221385315f;
  msg.q = 0.7476650858346863f;
  msg.r = 0.48593365091656926f;
  msg.svx = 0.5130366584593772f;
  msg.svy = 0.08209017040258837f;
  msg.svz = 0.4771215867905899f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SimulatedState - Serialization/Deserialization #1")
{
  IMC::SimulatedState msg;
  msg.setTimeStamp(0.13534734014281946);
  msg.setSource(35092U);
  msg.setSourceEntity(247U);
  msg.setDestination(17502U);
  msg.setDestinationEntity(242U);
  msg.lat = 0.6853749027733494;
  msg.lon = 0.055301838778433754;
  msg.height = 0.5500923610677254f;
  msg.x = 0.8169494896952637f;
  msg.y = 0.8959373865211105f;
  msg.z = 0.9765228709347901f;
  msg.phi = 0.24331357351191274f;
  msg.theta = 0.9495083240551525f;
  msg.psi = 0.37835723980293523f;
  msg.u = 0.42618009001472357f;
  msg.v = 0.014670933960216348f;
  msg.w = 0.5909511006880457f;
  msg.p = 0.6981096768999626f;
  msg.q = 0.890698872054754f;
  msg.r = 0.2594984748836444f;
  msg.svx = 0.49225787947077626f;
  msg.svy = 0.039511322900595225f;
  msg.svz = 0.024164534109386127f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SimulatedState - Serialization/Deserialization #2")
{
  IMC::SimulatedState msg;
  msg.setTimeStamp(0.8616245334595218);
  msg.setSource(3751U);
  msg.setSourceEntity(125U);
  msg.setDestination(65478U);
  msg.setDestinationEntity(128U);
  msg.lat = 0.8489819965095105;
  msg.lon = 0.4477553567165914;
  msg.height = 0.3174915991440227f;
  msg.x = 0.8851084250952226f;
  msg.y = 0.10454962948991786f;
  msg.z = 0.1259330258534418f;
  msg.phi = 0.9046307120884153f;
  msg.theta = 0.7014587752752689f;
  msg.psi = 0.4496709130504558f;
  msg.u = 0.40858190065372535f;
  msg.v = 0.7052588505033786f;
  msg.w = 0.31070981926763286f;
  msg.p = 0.7419151575598532f;
  msg.q = 0.875081072313196f;
  msg.r = 0.2949029761084293f;
  msg.svx = 0.3048668755946047f;
  msg.svy = 0.31806450808753894f;
  msg.svz = 0.8604276921927995f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LeakSimulation - Serialization/Deserialization #0")
{
  IMC::LeakSimulation msg;
  msg.setTimeStamp(0.06644493506305782);
  msg.setSource(55874U);
  msg.setSourceEntity(52U);
  msg.setDestination(53326U);
  msg.setDestinationEntity(30U);
  msg.op = 65U;
  msg.entities.assign("YLXZJYXDBYNMVLXOZJCVNPFVLAJOGQCBMNNMIRZBEWGFKSWTCNICGXDUGROHKHQSMHIKQFVWNQEVKFITEAJPUCXYMYKOEQNVLUSEVHBAAQPQUOACUNPYOIBHRXRXJFHJTJWRCMUQNUDJDXZZSWLIGH");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LeakSimulation - Serialization/Deserialization #1")
{
  IMC::LeakSimulation msg;
  msg.setTimeStamp(0.039438060063812896);
  msg.setSource(22457U);
  msg.setSourceEntity(233U);
  msg.setDestination(16614U);
  msg.setDestinationEntity(209U);
  msg.op = 190U;
  msg.entities.assign("BSWEAMDTMNPWUFUBRCNZSUYOTIHWOHRMQOQLKBFCYABRXRJJNPGYSVXGEMVEOGFGHILLQDNFRTLAAHCZNMTFQPZSIDFPJQSZUAPJK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LeakSimulation - Serialization/Deserialization #2")
{
  IMC::LeakSimulation msg;
  msg.setTimeStamp(0.7213387866554282);
  msg.setSource(6408U);
  msg.setSourceEntity(157U);
  msg.setDestination(63704U);
  msg.setDestinationEntity(188U);
  msg.op = 103U;
  msg.entities.assign("ELQUBHFKVMZPJOZUFOUQCGJRGJQQXTMMUZEQGWKQAULPLBYKGACQHMCCXXNSHTJIILZEVAODNNVKT");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UASimulation - Serialization/Deserialization #0")
{
  IMC::UASimulation msg;
  msg.setTimeStamp(0.6671785210817066);
  msg.setSource(7668U);
  msg.setSourceEntity(71U);
  msg.setDestination(52700U);
  msg.setDestinationEntity(209U);
  msg.type = 106U;
  msg.speed = 9553U;
  const char tmp_msg_0[] = {112, -93, -71, 68, 53, -8, -68, 41, -53, 90, -8, -13, -93, -40, -78, 43, -18, -114, 24, 20, -118, 73, 71, -47, 3, -66, 46, -50, -119, -113, -23, 92, 37, -101, 103, -61, 72, -70, -9, -80, 105, 11, 45, -16, 87, -26, -108, -41, 7, 24, 53, 18, 87, -91, 7, -45, -64, 19, -12, -58, -69, -3, -106, -55, -40, -107, 39, -101, 79, 78, 112, -5, 12, 11, 97, 114, -99, 95, -33, -108, 111, 112, -70, 118, -122, -72, 87, 1, -80, 63, -47, -17, 25, 37, -69, -113, 121, -69, -47, 48, -117, 79, -23, -58, -16, 112, 112, -58, -35, 43, 29, -123, -78, -16, 9, 8, 81, 40, -79, 5, -56, -51, -15, 99, 117, 109, -65, 124, 97, -115, 25, 77, 76, -114, -15, 5, -29, 78, -14, -3, -65, 119, 69, -11, 85, 42, -62, -105, -36, 114, -21, -53, 56, -64, -90, 124, 76, -6, -96, -69, -119, -39, 15, -16, 53, -15, -15, -46, 58, 7, 10, -64, -69, -105, -65, 24, 68, -53, 22, -49, 51, 36, 81, -16, 46, 86, 126, -96, -84, 60, 33, 101, -13, -73, 115, -10, -49, -60, 11, -50, 104, -77, -114, 25, 46, 35, -125, 111, 97, 70, -102, 102, 57, -79, 83, 22, 25};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UASimulation - Serialization/Deserialization #1")
{
  IMC::UASimulation msg;
  msg.setTimeStamp(0.9323331366260543);
  msg.setSource(3116U);
  msg.setSourceEntity(80U);
  msg.setDestination(63803U);
  msg.setDestinationEntity(182U);
  msg.type = 175U;
  msg.speed = 19497U;
  const char tmp_msg_0[] = {-67, 23, -65, -14, -61, -23, 2, 54, -39, 94, 15, -117, -94, -102, -35, 104, -63, 68, -65, -61, -25, 117, -106, -85, 86, 75, 34, 68, -23, -88, -12, -93, -17, 14, -62, -1, 91, 76, 39, 104, 16, -94, -100, -67, -128, 64, -63, -51, 102, -82, -3, 5, -48, 59, 98, -16, 94, 56, 57, -13, -26, 104, 81, -13, 30, 32, -20, -27, -50, -41, 1, 22, -43, -14, 86, -7, 53, 73, 51, -8, -45, 76, 16, -110, -37, -74, -63, -83, -36, -17, 40, -66, -89, -13, -7, 90, 7, 73, 119, -128, -77, -35, -112, -42, 91, -13, 77, -53, 41, 7, -80, 124, 85, 29, -115, 83, -52, 119, 27, 43, 70, 71, 41, -3, -10, 111, 6, -93, 83, -13, -23, 19, 59, 89, 74, -118, 115, -106, -42, -39, 5, 49, 91, 105, 51, 14, 84, 111, 105, -127, -13, -14, -67, -67, -27, -89, 81, 117, 13, 108, 89, -106, -36, 63, 77, 73, 117, -37, 39, -49, -19, -2, 72, 123, -99, 104, -19, 7, 120, -97, -77, 112, -92, -14, 20, -84, -103, -1, -90, 11, -51, 16, -13, -98, -1, -82, 103, 69, 93, 85, 103, -37, 100, -46, -79, -13, 99, -93, 55, -97, 79, -111, 60, 75, 124, -1, 64, -3, 94, 26, 55, -37, 61, -102, -122, 63, 75, -39, -63, -16, 74, -51, -99, 92, -99, 8, 27, 119, -98, 69, 80, -80, -67, -45, 111, -119, -124, 14, 41, 125, -115, 22, -38};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UASimulation - Serialization/Deserialization #2")
{
  IMC::UASimulation msg;
  msg.setTimeStamp(0.26508137399384735);
  msg.setSource(15199U);
  msg.setSourceEntity(177U);
  msg.setDestination(17189U);
  msg.setDestinationEntity(105U);
  msg.type = 131U;
  msg.speed = 11561U;
  const char tmp_msg_0[] = {-106, 63, -115, 33, -22, 118, -15, -30, -78, 58, -90, 26, 53, 47, -17, -29, -75, -9, -125, 31, 21, 92, -51, 30, -82, 17, 85, 96, -60, -72, 77, -72, -45, 43, -119, 105, -75, -52, -6, 12, 69, 11, -120, -62, 2, 3, -112, 51, -93, -122, 97, -125, -108, -110, 67, -44, 108, 27, 61, 2, -9, -125, 70, -111, -108, -122, 15, 106, 102, 36, -117, 75, 28, -91, 79, 7, -39, 2, -68, -92, -6, 109, 101, 102, 12, 52, 16, -8, -71, 48, -84, 31, -25, 4, 98};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DynamicsSimParam - Serialization/Deserialization #0")
{
  IMC::DynamicsSimParam msg;
  msg.setTimeStamp(0.6644441891069192);
  msg.setSource(8226U);
  msg.setSourceEntity(177U);
  msg.setDestination(18005U);
  msg.setDestinationEntity(43U);
  msg.op = 166U;
  msg.tas2acc_pgain = 0.37735879493076985f;
  msg.bank2p_pgain = 0.6541349136528519f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DynamicsSimParam - Serialization/Deserialization #1")
{
  IMC::DynamicsSimParam msg;
  msg.setTimeStamp(0.991977464273471);
  msg.setSource(56158U);
  msg.setSourceEntity(9U);
  msg.setDestination(729U);
  msg.setDestinationEntity(115U);
  msg.op = 250U;
  msg.tas2acc_pgain = 0.9151037988068598f;
  msg.bank2p_pgain = 0.8359032594682819f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DynamicsSimParam - Serialization/Deserialization #2")
{
  IMC::DynamicsSimParam msg;
  msg.setTimeStamp(0.9974126136109712);
  msg.setSource(7045U);
  msg.setSourceEntity(173U);
  msg.setDestination(44751U);
  msg.setDestinationEntity(44U);
  msg.op = 244U;
  msg.tas2acc_pgain = 0.9962655570247367f;
  msg.bank2p_pgain = 0.019355117683131473f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StorageUsage - Serialization/Deserialization #0")
{
  IMC::StorageUsage msg;
  msg.setTimeStamp(0.001954686317520271);
  msg.setSource(55555U);
  msg.setSourceEntity(26U);
  msg.setDestination(47295U);
  msg.setDestinationEntity(183U);
  msg.available = 763950395U;
  msg.value = 14U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StorageUsage - Serialization/Deserialization #1")
{
  IMC::StorageUsage msg;
  msg.setTimeStamp(0.5725537630799951);
  msg.setSource(43122U);
  msg.setSourceEntity(194U);
  msg.setDestination(8170U);
  msg.setDestinationEntity(52U);
  msg.available = 3316160981U;
  msg.value = 30U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StorageUsage - Serialization/Deserialization #2")
{
  IMC::StorageUsage msg;
  msg.setTimeStamp(0.01697283552180795);
  msg.setSource(30899U);
  msg.setSourceEntity(102U);
  msg.setDestination(44528U);
  msg.setDestinationEntity(88U);
  msg.available = 2062031024U;
  msg.value = 67U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CacheControl - Serialization/Deserialization #0")
{
  IMC::CacheControl msg;
  msg.setTimeStamp(0.9281094849102594);
  msg.setSource(59351U);
  msg.setSourceEntity(172U);
  msg.setDestination(25514U);
  msg.setDestinationEntity(252U);
  msg.op = 73U;
  msg.snapshot.assign("ZRHPVDGFKIUXBONVPGDRDGCMAHQASRHCWEAEXAHCZMPOAUUDNFOZPLZUKGPLOJNLTTTYXXBFVMWKYCCYSAFSXRIUHLOUQZMJTCIJKWGWLPBUKKNCHWJSXKENCVAGTFVUINCGXYNGIBPEFJQVTGMKEVYQWQWZHJDINESWOISFV");
  IMC::VSWR tmp_msg_0;
  tmp_msg_0.value = 0.37373256051978865f;
  msg.message.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CacheControl - Serialization/Deserialization #1")
{
  IMC::CacheControl msg;
  msg.setTimeStamp(0.9477712048125899);
  msg.setSource(57482U);
  msg.setSourceEntity(145U);
  msg.setDestination(60240U);
  msg.setDestinationEntity(183U);
  msg.op = 63U;
  msg.snapshot.assign("RGJYEBGRTPCXSAHJUPAQDTRAUGXDTYEJLZYAOMJOWFOFSWQFPEHYBZAWBCENUJQPOTKVXQWSHBVDLXZMJFXYXNHKOPCZGQSNYONRDYMMMXLWDSZZCXIUIVDSQKNIMEOROBSVJFEPWULMKPTPIGWKIPYQZRGINKLIYIQKG");
  IMC::FollowReference tmp_msg_0;
  tmp_msg_0.control_src = 39443U;
  tmp_msg_0.control_ent = 102U;
  tmp_msg_0.timeout = 0.26704419088042886f;
  tmp_msg_0.loiter_radius = 0.6717568010600552f;
  tmp_msg_0.altitude_interval = 0.9871392801818527f;
  msg.message.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CacheControl - Serialization/Deserialization #2")
{
  IMC::CacheControl msg;
  msg.setTimeStamp(0.8087499952506753);
  msg.setSource(21258U);
  msg.setSourceEntity(209U);
  msg.setDestination(37954U);
  msg.setDestinationEntity(175U);
  msg.op = 41U;
  msg.snapshot.assign("JNULMXWWOERDRJFFTPXISWEMPIHGYMVMWINBUIRUSJUCCFNHOOQWUZBLGSDGWTLFQGVNHSPOWKEFYVIYLRE");
  IMC::CacheControl tmp_msg_0;
  tmp_msg_0.op = 64U;
  tmp_msg_0.snapshot.assign("SFCDOHPNQAJGHHHBTFKOYSKCJKXOWCUBZNOJGEJTIWRQVTNRDKORBIVCXPKZXLJEFZDBNPHVCNVJKXLHIKBUKRXOSMOBXAYHAGDYMQILFTXGWDTWTULTCSHSBCUEMFHGZFUVWAHJDYUYDQOVFFEURGEPQWRUBZGLSIOBZOIPJFYLNPZYLM");
  IMC::RowsCoverage tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.lat = 0.34185755484730307;
  tmp_tmp_msg_0_0.lon = 0.04484922883062881;
  tmp_tmp_msg_0_0.z = 0.19676451875478906f;
  tmp_tmp_msg_0_0.z_units = 202U;
  tmp_tmp_msg_0_0.speed = 0.9551229173317429f;
  tmp_tmp_msg_0_0.speed_units = 123U;
  tmp_tmp_msg_0_0.bearing = 0.4925874546802035;
  tmp_tmp_msg_0_0.cross_angle = 0.09181556018986581;
  tmp_tmp_msg_0_0.width = 0.6397475349023035f;
  tmp_tmp_msg_0_0.length = 0.39724025935613316f;
  tmp_tmp_msg_0_0.coff = 228U;
  tmp_tmp_msg_0_0.angaperture = 0.019128996273078513f;
  tmp_tmp_msg_0_0.range = 42550U;
  tmp_tmp_msg_0_0.overlap = 38U;
  tmp_tmp_msg_0_0.flags = 69U;
  tmp_tmp_msg_0_0.custom.assign("TXXWECYAXNIGYHAQIRLRVMSBFWUYBXEFGHIDPLRHYMAYBAJUBRVAPZLBUCLTPUYINDQQGGRWHIHABGLVMZNK");
  tmp_msg_0.message.set(tmp_tmp_msg_0_0);
  msg.message.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LoggingControl - Serialization/Deserialization #0")
{
  IMC::LoggingControl msg;
  msg.setTimeStamp(0.8584035122525608);
  msg.setSource(50274U);
  msg.setSourceEntity(84U);
  msg.setDestination(3136U);
  msg.setDestinationEntity(75U);
  msg.op = 141U;
  msg.name.assign("XLCZZOPSOITPWKLJANPBWVGKANFEREZYPCLLJOYLTGNWXXHCYBMJBNQMLSDQGOVGUCHBYYWITQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LoggingControl - Serialization/Deserialization #1")
{
  IMC::LoggingControl msg;
  msg.setTimeStamp(0.3452024768607852);
  msg.setSource(63519U);
  msg.setSourceEntity(244U);
  msg.setDestination(5448U);
  msg.setDestinationEntity(83U);
  msg.op = 126U;
  msg.name.assign("OESPLBZCZYIRXTBTPLWTBHFRXPHEADNJZJNCLG");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LoggingControl - Serialization/Deserialization #2")
{
  IMC::LoggingControl msg;
  msg.setTimeStamp(0.607769377842569);
  msg.setSource(5006U);
  msg.setSourceEntity(67U);
  msg.setDestination(9416U);
  msg.setDestinationEntity(90U);
  msg.op = 9U;
  msg.name.assign("BMFMJNVCOAPAHEWHSJVPAADRFAXBYJRYGHFVLXIXOZVZCUFDASNBTBWVTPUAKQVHGIKMUNUKYSHBIROZEGQLZTDFJSMMXQLEAIIWRKGTGFCLNBLCOZWXHEZTXJKYBCMFDRHPWPNHSSEKCMKUEXVULTRYAYKGFKITYIDLNBQX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LogBookEntry - Serialization/Deserialization #0")
{
  IMC::LogBookEntry msg;
  msg.setTimeStamp(0.8289472132836914);
  msg.setSource(57332U);
  msg.setSourceEntity(118U);
  msg.setDestination(54825U);
  msg.setDestinationEntity(200U);
  msg.type = 84U;
  msg.htime = 0.941390053655531;
  msg.context.assign("XKWFEMOVDCXOBKSHPVMWZAZWBAIKJGWODYRTNRVRQUEXQXNAZSFUZEU");
  msg.text.assign("WVFINFHISAFGTGTPRVAHBICKIMQYOPBMQQLMGOOIWOPNXURKSYWYFCMSUXEVCSZOZJNKSFSBFWASKQEMPQETWKAURMDCBXDTYRVLMKQBLXQDSEOPLDUCNPQVBLRFIYXRCEDINGHVTQSELKBUXCXPTKLDFVAJLJQRUCWGRYMODBZIGEZRRNE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LogBookEntry - Serialization/Deserialization #1")
{
  IMC::LogBookEntry msg;
  msg.setTimeStamp(0.30206241457062377);
  msg.setSource(34542U);
  msg.setSourceEntity(16U);
  msg.setDestination(17597U);
  msg.setDestinationEntity(66U);
  msg.type = 230U;
  msg.htime = 0.3576525413214461;
  msg.context.assign("JJUCZBHPWLPHZLHAUBHGVNSIBCTPPCNTMVEMWDNJSFDEOFDXRWWFULHMURCHTMSTLXRCFTWNGFZJTSDWNRVALCTJQHHUQIFCOOBBFYZY");
  msg.text.assign("VEMHIFKQZPJPLTFSLSOXCOPZGADRICCZNQPEANYKVSSBOKFWZYBTPRXJFNLXYIDMLXGAWTHDDODGTEF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LogBookEntry - Serialization/Deserialization #2")
{
  IMC::LogBookEntry msg;
  msg.setTimeStamp(0.6334094805857144);
  msg.setSource(7369U);
  msg.setSourceEntity(124U);
  msg.setDestination(15015U);
  msg.setDestinationEntity(58U);
  msg.type = 63U;
  msg.htime = 0.3812185497137832;
  msg.context.assign("PFYHPKSBYRXMVMYVBJIQJSQCCEIWTPNDDWAOOAGHKCLMEQRFWGFX");
  msg.text.assign("CQIKQXBDEKOKWYDWYSUTYYKNDGZWXYRFDCUUECLDNREKXJKQOGHJVHIPDMUREHJKSOYUQYWPMLFASRAAMDMCAVLQTIZKQPVZSFECAWGXINWBGPDNZOSLWWXJOVRHIWGVHVOMNFJYWXLKPZFIX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LogBookControl - Serialization/Deserialization #0")
{
  IMC::LogBookControl msg;
  msg.setTimeStamp(0.08340358582824214);
  msg.setSource(32621U);
  msg.setSourceEntity(220U);
  msg.setDestination(2987U);
  msg.setDestinationEntity(161U);
  msg.command = 109U;
  msg.htime = 0.21954401331690265;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LogBookControl - Serialization/Deserialization #1")
{
  IMC::LogBookControl msg;
  msg.setTimeStamp(0.7294059120967201);
  msg.setSource(10417U);
  msg.setSourceEntity(238U);
  msg.setDestination(53738U);
  msg.setDestinationEntity(248U);
  msg.command = 7U;
  msg.htime = 0.16854649173477276;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LogBookControl - Serialization/Deserialization #2")
{
  IMC::LogBookControl msg;
  msg.setTimeStamp(0.5002720639307328);
  msg.setSource(2382U);
  msg.setSourceEntity(57U);
  msg.setDestination(63416U);
  msg.setDestinationEntity(82U);
  msg.command = 48U;
  msg.htime = 0.4709946522211935;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReplayControl - Serialization/Deserialization #0")
{
  IMC::ReplayControl msg;
  msg.setTimeStamp(0.31162130612606265);
  msg.setSource(38332U);
  msg.setSourceEntity(189U);
  msg.setDestination(49640U);
  msg.setDestinationEntity(143U);
  msg.op = 165U;
  msg.file.assign("ZILDTEWZHMCYIQDXFXUBYCUVXHEYK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReplayControl - Serialization/Deserialization #1")
{
  IMC::ReplayControl msg;
  msg.setTimeStamp(0.3936771584518557);
  msg.setSource(16774U);
  msg.setSourceEntity(99U);
  msg.setDestination(20986U);
  msg.setDestinationEntity(250U);
  msg.op = 124U;
  msg.file.assign("QKRKYJJUWRFQBQAVLJPJQQLSPWOJSNEEGIHTILTPVGTRDSLWIYXZHKHNLKSMXMVFTTYWCGIBGCPPRDBBLZAAOYCCYAWKJOBXUHVCRKVZCETISDMFUVWBBXNGNGXEFVAGZJMYOSNPWLGHJYIOMMHOAEZXMEUYIONKMQZQEPGUIACKAFTHVBYAZZTSUMRQFVQRUDHESIYHWNFHRNSKPTMDLUDSWF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReplayControl - Serialization/Deserialization #2")
{
  IMC::ReplayControl msg;
  msg.setTimeStamp(0.14296604217397746);
  msg.setSource(34179U);
  msg.setSourceEntity(215U);
  msg.setDestination(38595U);
  msg.setDestinationEntity(4U);
  msg.op = 181U;
  msg.file.assign("HTVBJOLAVEIROCRWDX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ClockControl - Serialization/Deserialization #0")
{
  IMC::ClockControl msg;
  msg.setTimeStamp(0.3653676939485355);
  msg.setSource(57014U);
  msg.setSourceEntity(68U);
  msg.setDestination(5770U);
  msg.setDestinationEntity(90U);
  msg.op = 12U;
  msg.clock = 0.5401790268020257;
  msg.tz = 49;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ClockControl - Serialization/Deserialization #1")
{
  IMC::ClockControl msg;
  msg.setTimeStamp(0.2607443412779248);
  msg.setSource(47138U);
  msg.setSourceEntity(185U);
  msg.setDestination(557U);
  msg.setDestinationEntity(234U);
  msg.op = 200U;
  msg.clock = 0.39737579869651907;
  msg.tz = 83;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ClockControl - Serialization/Deserialization #2")
{
  IMC::ClockControl msg;
  msg.setTimeStamp(0.24279956339798237);
  msg.setSource(55875U);
  msg.setSourceEntity(197U);
  msg.setDestination(54576U);
  msg.setDestinationEntity(140U);
  msg.op = 71U;
  msg.clock = 0.6846107481410026;
  msg.tz = 51;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricCTD - Serialization/Deserialization #0")
{
  IMC::HistoricCTD msg;
  msg.setTimeStamp(0.6099217668976841);
  msg.setSource(24225U);
  msg.setSourceEntity(236U);
  msg.setDestination(38995U);
  msg.setDestinationEntity(23U);
  msg.conductivity = 0.22229289421347076f;
  msg.temperature = 0.5783199215484488f;
  msg.depth = 0.6987713357867577f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricCTD - Serialization/Deserialization #1")
{
  IMC::HistoricCTD msg;
  msg.setTimeStamp(0.26175705150138995);
  msg.setSource(14287U);
  msg.setSourceEntity(58U);
  msg.setDestination(1679U);
  msg.setDestinationEntity(28U);
  msg.conductivity = 0.8201081639712758f;
  msg.temperature = 0.2740853843502785f;
  msg.depth = 0.9303505062160561f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricCTD - Serialization/Deserialization #2")
{
  IMC::HistoricCTD msg;
  msg.setTimeStamp(0.35484266438792844);
  msg.setSource(8439U);
  msg.setSourceEntity(33U);
  msg.setDestination(53320U);
  msg.setDestinationEntity(244U);
  msg.conductivity = 0.6083123202830796f;
  msg.temperature = 0.5793874663281808f;
  msg.depth = 0.6163173041427213f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricTelemetry - Serialization/Deserialization #0")
{
  IMC::HistoricTelemetry msg;
  msg.setTimeStamp(0.9479370821076293);
  msg.setSource(40396U);
  msg.setSourceEntity(15U);
  msg.setDestination(54515U);
  msg.setDestinationEntity(31U);
  msg.altitude = 0.907210978546849f;
  msg.roll = 5510U;
  msg.pitch = 60474U;
  msg.yaw = 24106U;
  msg.speed = 19291;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricTelemetry - Serialization/Deserialization #1")
{
  IMC::HistoricTelemetry msg;
  msg.setTimeStamp(0.5167887953343065);
  msg.setSource(23814U);
  msg.setSourceEntity(241U);
  msg.setDestination(24552U);
  msg.setDestinationEntity(242U);
  msg.altitude = 0.9473763430768252f;
  msg.roll = 55652U;
  msg.pitch = 2900U;
  msg.yaw = 63285U;
  msg.speed = -6291;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricTelemetry - Serialization/Deserialization #2")
{
  IMC::HistoricTelemetry msg;
  msg.setTimeStamp(0.4899504616321314);
  msg.setSource(55621U);
  msg.setSourceEntity(125U);
  msg.setDestination(4122U);
  msg.setDestinationEntity(33U);
  msg.altitude = 0.39486737985982756f;
  msg.roll = 31650U;
  msg.pitch = 62871U;
  msg.yaw = 24868U;
  msg.speed = 24588;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricSonarData - Serialization/Deserialization #0")
{
  IMC::HistoricSonarData msg;
  msg.setTimeStamp(0.00043052023294465336);
  msg.setSource(33624U);
  msg.setSourceEntity(218U);
  msg.setDestination(5608U);
  msg.setDestinationEntity(213U);
  msg.altitude = 0.6655790696366181f;
  msg.width = 0.8867926770018802f;
  msg.length = 0.6169212946965178f;
  msg.bearing = 0.34763918034911634f;
  msg.pxl = 8100;
  msg.encoding = 42U;
  const char tmp_msg_0[] = {-62, -63, 89, -119, 116, 44, 28, 74, 58, 65, 35, -122, -83, -6, 93, -14, 89, -115, -96, -19, -47, -43, 27, 95, 98, -120, -69, 106, -105, -102, -103, -59, 20, -16, -27, 45, -94, 55, -111, -62, -21, -103, 47, -72, -46, 46, -1, 53, 115, 14, -19, -76, -64, 77, -12, -70, -101, -38, 1, -18, -10, -33, 18, 56, -17, -63, -36, -109, -13, 55, -122, -58, -66, 19, 49, -49, -93, 119, 40, -126, 28, 124, -72, 123, -66, 36, -12, -58, 3, 6, -92, 64};
  msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricSonarData - Serialization/Deserialization #1")
{
  IMC::HistoricSonarData msg;
  msg.setTimeStamp(0.6302290076564446);
  msg.setSource(47950U);
  msg.setSourceEntity(101U);
  msg.setDestination(31758U);
  msg.setDestinationEntity(244U);
  msg.altitude = 0.010321880625499436f;
  msg.width = 0.10821499120574296f;
  msg.length = 0.7703090903491466f;
  msg.bearing = 0.47373562187910323f;
  msg.pxl = 5912;
  msg.encoding = 97U;
  const char tmp_msg_0[] = {123, -104, -86, 2, -43, -91, 110, 104, 126, -128, 3, -34, -48, 20, 32, 50, 111, -40, -116, 110, 115, 1, -19, 124, -103, 90, -92, 56, -70, -125, -4, 97, -71, 33, 101, 112, 26, -29, -3, 115, -31, -23, -102, -58, -68, -47, 48, 13, -59, -42, -54, 54, 53, 105, 66, 119, -128, 71, -81, -7, -37, -70, 72, -79, 107, -43, -79, 77, -42, -98, -103, -72, 104, -77, -46, 27, -101, -57, 8, -118, 67, 59, 74, 21, -85, 47, -81, -78, 98, -70, -85, 120, -9, -126, -106, -29, 50, -17, -30, 31, 105, -84, 49, -18, -39, 71, 41, -1, 97, -28, -28, -128, -71, 45, 107, 88, 107, 48, -50, -102, 53, -44, -100, 81, -20, -38, -87, 118, -60, 104, 76, -113, 58, 7, -45, -89, 103, 74, 82, -71, -10, -10, -112, 71, -66, -9, 63, 93, -1, -85, -8, -115, -112};
  msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricSonarData - Serialization/Deserialization #2")
{
  IMC::HistoricSonarData msg;
  msg.setTimeStamp(0.025264587276057293);
  msg.setSource(30499U);
  msg.setSourceEntity(182U);
  msg.setDestination(58084U);
  msg.setDestinationEntity(150U);
  msg.altitude = 0.1133224346795878f;
  msg.width = 0.5588415072353774f;
  msg.length = 0.41886622225717585f;
  msg.bearing = 0.22255211270555297f;
  msg.pxl = -6202;
  msg.encoding = 181U;
  const char tmp_msg_0[] = {19, -85, 75, -76, 90, -31, 90, -2, 79, 54, 114, -105, -69, 73, 97, 19, 41, -25, 80, -7, 108, -30, -78, -97, -1, -107, -59, 26, -102, -117, 86, 89, -11, -95, 48, 2, 115, 77, -53, -128, -109, -10, -71, -10, -18, -24, -27, 98, -12, -113, -87, -24, -54, 99, 75, -54, -35, -13, -100, -47, -47, 31, 67, 8, -52, 120, 71, -62, 60, 0, 76, -82, -116, 122, 88, 48, 59, -10, -86, -105, 27, 90, 7, -68, -100, -33, -104, -2, 22, 37, -5, 0, -91, -67, -8, 106, 110, 106, 88, -94, 68, 90, -40, 40, 3, 70, -101, 40, -128, 47, 115, 108, -22, 48, 40, 42, -84, 14};
  msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricEvent - Serialization/Deserialization #0")
{
  IMC::HistoricEvent msg;
  msg.setTimeStamp(0.3826115278232377);
  msg.setSource(37430U);
  msg.setSourceEntity(211U);
  msg.setDestination(17854U);
  msg.setDestinationEntity(6U);
  msg.text.assign("KEZUXGONVNKUFEVHEUYFWQNDCPYVJRXZCSEYTMUKXDBZMFSLXJENIRHCOKWPJZRCUZQIREERASQLETMFCLIXGVF");
  msg.type = 118U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricEvent - Serialization/Deserialization #1")
{
  IMC::HistoricEvent msg;
  msg.setTimeStamp(0.2722257141974944);
  msg.setSource(40872U);
  msg.setSourceEntity(157U);
  msg.setDestination(6436U);
  msg.setDestinationEntity(127U);
  msg.text.assign("TCGKNLZKWROSWWVKAYJMGSBNFEVNKPASBUIUVRJKTVBPHXSXSMBPRMRUNDLBUVKFDDRUZQCMQNJODBBNIYEOTSUXIPAODHMZPCRKJHXWMCEEHMGICJTKWGTIQKSGWZQAIXNNGYLPXIEQFZGYZBMEEETDFYUUDCQFFSQAJXZNLXCOETHZJCOBWVAPRIGFHPTFLZTOGWBDLJGTCDVFMQAOKFNQLLQXVWDSPAORPYHHHYUMYVUVAYIL");
  msg.type = 220U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricEvent - Serialization/Deserialization #2")
{
  IMC::HistoricEvent msg;
  msg.setTimeStamp(0.2140356771965909);
  msg.setSource(15341U);
  msg.setSourceEntity(9U);
  msg.setDestination(37389U);
  msg.setDestinationEntity(117U);
  msg.text.assign("LLCFSOXMGTQRSEXWLZMWIJHOCQNWHBEYXAMNDYZQYPDFFZGTMHRFZKKVPCYFTODWMHLUDYHHDMPSJZZYEIJAUTOQUPZARCRNTXGOSVLYFRNGTIYVAPPKGXIBBAPOEIPQKQWHMRMOVFQULPBCECKHBAYISWEWNVUADAOKCDJZJEUWIKAWKSGNHJBXNRUNDTREFVQGLX");
  msg.type = 128U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Heartbeat - Serialization/Deserialization #0")
{
  IMC::Heartbeat msg;
  msg.setTimeStamp(0.4267003948106126);
  msg.setSource(10697U);
  msg.setSourceEntity(218U);
  msg.setDestination(16502U);
  msg.setDestinationEntity(146U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Heartbeat - Serialization/Deserialization #1")
{
  IMC::Heartbeat msg;
  msg.setTimeStamp(0.5285371919912305);
  msg.setSource(36371U);
  msg.setSourceEntity(236U);
  msg.setDestination(57923U);
  msg.setDestinationEntity(46U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Heartbeat - Serialization/Deserialization #2")
{
  IMC::Heartbeat msg;
  msg.setTimeStamp(0.36699162927353646);
  msg.setSource(4199U);
  msg.setSourceEntity(174U);
  msg.setDestination(21979U);
  msg.setDestinationEntity(177U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Announce - Serialization/Deserialization #0")
{
  IMC::Announce msg;
  msg.setTimeStamp(0.4144460681279941);
  msg.setSource(60579U);
  msg.setSourceEntity(239U);
  msg.setDestination(36919U);
  msg.setDestinationEntity(69U);
  msg.sys_name.assign("KQEMTTCQUIGSGSMCCGCZEJOHEJZVRXXOHPZQFHJDNSBWCDJTLYFPKFXOCYCRUXUMJTXK");
  msg.sys_type = 223U;
  msg.owner = 8045U;
  msg.lat = 0.8773718955894947;
  msg.lon = 0.3894707762337243;
  msg.height = 0.4745234443805041f;
  msg.services.assign("DVHTFIYYCKSHPZZRPZDODDEYCMGBOZQMRCORWXAEZDUWTNVUNKPCPBMSQPLMQANQNYHSJYKWTTMFXRGUVVGGJWLUANPFTEIFRELSXSHYNJLUEACJSFVYWMBLDHGRQUQGLEOUQXOIGMX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Announce - Serialization/Deserialization #1")
{
  IMC::Announce msg;
  msg.setTimeStamp(0.32840796995133703);
  msg.setSource(35082U);
  msg.setSourceEntity(3U);
  msg.setDestination(17901U);
  msg.setDestinationEntity(44U);
  msg.sys_name.assign("WZEXCNWMOHHFAODEAURONXSZEXUKPIKVYPFVUKCFDIEHBRKCGJMFUATGOTYDCOTGIKGWHQJLTOGDKVMWWXKNHYZLRINBEBKVNPGDVA");
  msg.sys_type = 239U;
  msg.owner = 46524U;
  msg.lat = 0.7706532077372721;
  msg.lon = 0.06339078651195629;
  msg.height = 0.8445559331326259f;
  msg.services.assign("ESMCZBFUAYRUXEBEZBFMPRLLKVGKCGRJVIDEBZCWIJNTIQETDGQVVYPXHTX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Announce - Serialization/Deserialization #2")
{
  IMC::Announce msg;
  msg.setTimeStamp(0.24414021690101118);
  msg.setSource(44583U);
  msg.setSourceEntity(90U);
  msg.setDestination(34874U);
  msg.setDestinationEntity(161U);
  msg.sys_name.assign("RZWMONUSDA");
  msg.sys_type = 209U;
  msg.owner = 31876U;
  msg.lat = 0.823110530004595;
  msg.lon = 0.7232065663329167;
  msg.height = 0.835256435160116f;
  msg.services.assign("EJENWRFAHBFDSHDJBZGWFIYMQWILLLCEBRLPTHPDZRXHWQZOFLNKJLNJTPCDUYKYXSFQWITFVGUUADXQYEQNWFHBWJOCDWREJPOEZXSKHIZOVJSARBAJMNMGUKMKITMCRESBBKRAGLHJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AnnounceService - Serialization/Deserialization #0")
{
  IMC::AnnounceService msg;
  msg.setTimeStamp(0.41193939944250624);
  msg.setSource(4521U);
  msg.setSourceEntity(77U);
  msg.setDestination(24064U);
  msg.setDestinationEntity(112U);
  msg.service.assign("TBIMWIJCTRDYTWGMHRPGVHQEICLGPFFDEZASDUGIOHQOYKTWAAUYAFWJPDZJHLYHOYSEWPSDJLDSTMVXPKBODNBFEEFTXNRNRVOVVZNILQVGCCPQIBJLSBXIPTWRQBKWETJGAQMRNNGMJOIKGSEMURKLULFVDQKCBTRIKZMWUGZLYETDXVLNQPWSIZMYKFRY");
  msg.service_type = 79U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AnnounceService - Serialization/Deserialization #1")
{
  IMC::AnnounceService msg;
  msg.setTimeStamp(0.7147351532067477);
  msg.setSource(15412U);
  msg.setSourceEntity(204U);
  msg.setDestination(59205U);
  msg.setDestinationEntity(65U);
  msg.service.assign("CFYOYYXXVIHZJGKNMXFNQDPJAPSBPADKHFAKSFFPDABIZQDGXVEDOVYULAGLAZCMTSQRZRFMWQXLJAWUFSIJUOXZHDXKNSPLWXYUFPNUFODMLHOLGEBRTCGUNNQTVGHEZPDIEKCUODXYNMETRPESRUWHUTAVTSMHKBBTKQOEN");
  msg.service_type = 165U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AnnounceService - Serialization/Deserialization #2")
{
  IMC::AnnounceService msg;
  msg.setTimeStamp(0.48349925985477094);
  msg.setSource(20573U);
  msg.setSourceEntity(251U);
  msg.setDestination(14791U);
  msg.setDestinationEntity(2U);
  msg.service.assign("QXPFSOKUBJKEIFTVMUATELPDZPRUJWYUDMSQPLABLKUJWNKWYGVFAEUZIYOOTCEPOJWJYTZCTVYJKONPIQBZJGYQSTIFJSEQMIWLRCFVHPCQLZYAGDYNLFBGWSBEOZAVURZMMBANXRXCDXLOPHINPNHXOLXGHHKMOQTKWMKBARWQBGQZHCUGZDDTXHIMFVSYQFJZUMRXJHTPCTWNKCRGDHYAUEFWGMKANDAENVDXEVOB");
  msg.service_type = 123U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RSSI - Serialization/Deserialization #0")
{
  IMC::RSSI msg;
  msg.setTimeStamp(0.8743813421774057);
  msg.setSource(60589U);
  msg.setSourceEntity(170U);
  msg.setDestination(7968U);
  msg.setDestinationEntity(173U);
  msg.value = 0.111624416915859f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RSSI - Serialization/Deserialization #1")
{
  IMC::RSSI msg;
  msg.setTimeStamp(0.6615765458250658);
  msg.setSource(49981U);
  msg.setSourceEntity(84U);
  msg.setDestination(57889U);
  msg.setDestinationEntity(52U);
  msg.value = 0.6627206263906189f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RSSI - Serialization/Deserialization #2")
{
  IMC::RSSI msg;
  msg.setTimeStamp(0.06485438545036182);
  msg.setSource(7922U);
  msg.setSourceEntity(150U);
  msg.setDestination(45363U);
  msg.setDestinationEntity(254U);
  msg.value = 0.6449760874610138f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VSWR - Serialization/Deserialization #0")
{
  IMC::VSWR msg;
  msg.setTimeStamp(0.6326838830345219);
  msg.setSource(42044U);
  msg.setSourceEntity(11U);
  msg.setDestination(20942U);
  msg.setDestinationEntity(97U);
  msg.value = 0.380605090586172f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VSWR - Serialization/Deserialization #1")
{
  IMC::VSWR msg;
  msg.setTimeStamp(0.011394595893412629);
  msg.setSource(1669U);
  msg.setSourceEntity(85U);
  msg.setDestination(7827U);
  msg.setDestinationEntity(1U);
  msg.value = 0.08271509115412279f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VSWR - Serialization/Deserialization #2")
{
  IMC::VSWR msg;
  msg.setTimeStamp(0.3060686141838498);
  msg.setSource(31297U);
  msg.setSourceEntity(208U);
  msg.setDestination(17650U);
  msg.setDestinationEntity(103U);
  msg.value = 0.05756379617458618f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LinkLevel - Serialization/Deserialization #0")
{
  IMC::LinkLevel msg;
  msg.setTimeStamp(0.18087667882807645);
  msg.setSource(14931U);
  msg.setSourceEntity(44U);
  msg.setDestination(32722U);
  msg.setDestinationEntity(4U);
  msg.value = 0.3856388545863487f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LinkLevel - Serialization/Deserialization #1")
{
  IMC::LinkLevel msg;
  msg.setTimeStamp(0.6345817900984669);
  msg.setSource(51772U);
  msg.setSourceEntity(8U);
  msg.setDestination(63347U);
  msg.setDestinationEntity(226U);
  msg.value = 0.2789307324720941f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LinkLevel - Serialization/Deserialization #2")
{
  IMC::LinkLevel msg;
  msg.setTimeStamp(0.8350270476022761);
  msg.setSource(13613U);
  msg.setSourceEntity(179U);
  msg.setDestination(19404U);
  msg.setDestinationEntity(218U);
  msg.value = 0.9710333487289352f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Sms - Serialization/Deserialization #0")
{
  IMC::Sms msg;
  msg.setTimeStamp(0.9586917705324189);
  msg.setSource(5418U);
  msg.setSourceEntity(226U);
  msg.setDestination(47653U);
  msg.setDestinationEntity(204U);
  msg.number.assign("UFMTUUNUIRRLHPVKCJPIHGHQJFDITVBZMKEKAWOBERSIITCXNUGZBXDCZMADZMMMEGTYBWWSFJAVDGWAHRQTCL");
  msg.timeout = 62044U;
  msg.contents.assign("RXDMQNFQJQSIYJVEKGIFLRVMCXJGSIRZUIMHE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Sms - Serialization/Deserialization #1")
{
  IMC::Sms msg;
  msg.setTimeStamp(0.7201436410740312);
  msg.setSource(43695U);
  msg.setSourceEntity(9U);
  msg.setDestination(44612U);
  msg.setDestinationEntity(126U);
  msg.number.assign("ZQZLUHYMGQNSDXBMHXKHKLQOFVFOWHGKPCRVCHRATKSSIIPJSSGVRLWGTVQEQXAHWLLFTRJZMAEIULESNRMOOXGKQJTWBWJRTXJDNTRXMBGZHXNMGUSIZJQTXAFCZZLNBZUDOGIMQMSECMPICUNBDRBPVKWHVJBANTVBRHEIPKFIADPKOYBNYIZTJDYDEXLOL");
  msg.timeout = 24471U;
  msg.contents.assign("TUZUBZVGTIXHNWZUAXTOISUMMKQGSMIAFQYAYNOPIOOWDFOSNMJDIPLWVOUOCHBRDBDJKTTNTYRLXKMDXUGXUKCKOZEHHVQJSYJKWDBQETGTYGJTPFNDGOBSVYNQQVZRGEQFW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Sms - Serialization/Deserialization #2")
{
  IMC::Sms msg;
  msg.setTimeStamp(0.8343505367871032);
  msg.setSource(9095U);
  msg.setSourceEntity(203U);
  msg.setDestination(60379U);
  msg.setDestinationEntity(12U);
  msg.number.assign("DHZIIVHWAWRKFXUAWTUQYDBTLBUIRGYICBOYTZPXOWCAQPSMVFTGAYFQNYVGMUVTHRANJDOWSUMKLJPSRJUNLBKYJVMIGDSUERDLQQFNVGJCENPMKTZMFDWKJHNXZOEQDCGWQUOPXCIBTDJWVBMXMPOPSHCBDZTXOXAEEJEVLFWMEXRWOKOYFEJTKRTQHKIZAGBFOIURAHZSJUYSKCIZPZQQRHDCGNVNPFXSGAGBMKEYSESVPZAIHYB");
  msg.timeout = 11582U;
  msg.contents.assign("PCJNYTNSNBFMOCGVYCUKXJXDYGFAMCRTUEIIBNDZKOQNOOLEUMBFDAYWDZJQHNVCRPIBYUJSABVRLDIMLEXVSGOUEXJUKAZRVWYORLOPCYFXCJAGPVIIWKZHTTQHENGTFFAHUSPBIOHLZTZRAJNNMFLARCQSFCQJGDPMXPHYVUQHXPELQZWXXPZNATIMKBQLKXUDWQHLEGAZBSSWCSWVDZSITHRTEYUKFGERKDJWYMMLQFGDWHEOWV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsTx - Serialization/Deserialization #0")
{
  IMC::SmsTx msg;
  msg.setTimeStamp(0.20747245302177197);
  msg.setSource(61969U);
  msg.setSourceEntity(83U);
  msg.setDestination(6958U);
  msg.setDestinationEntity(130U);
  msg.seq = 4235499819U;
  msg.destination.assign("WRXMWFGEYCJXFRPFKFTENTELBJPOIXSMZDQTEXYFXZSOHYBNQYVKBKHPLLUSROOQRADGCJMAYTLGQBWQMBNPRDUHVFSLJSUGKAGVMNKJLWULKIHZEECVFXHJGSBJQUIWVOHSAKDTCDZQAPXWFMOPKZUGHWVVLGMRTXBICZSRTDWRMVIHYYRIUONBAVORBZHMPFUPBNYEQOIDMJ");
  msg.timeout = 36929U;
  const char tmp_msg_0[] = {29, 39, -73, 26, -118, -127, 52, -9, 64, -58, -105, 37, 44, 76, -120, -50, 47, 125, 87, -69, 26, 20, -107};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsTx - Serialization/Deserialization #1")
{
  IMC::SmsTx msg;
  msg.setTimeStamp(0.2702849053926578);
  msg.setSource(15981U);
  msg.setSourceEntity(170U);
  msg.setDestination(56841U);
  msg.setDestinationEntity(130U);
  msg.seq = 2897592048U;
  msg.destination.assign("MKNXBKZXOPBYZTIDAMYQBYFRTFMPOPOSSYNVHQPNVAVTUMPVOJAFEUSSHMXDCARLVLJQFPZOWTLEKCRLPTUMGGDGXNRHDVVYWTHGKJICTKNUFTRCCEFDSWNOAC");
  msg.timeout = 14539U;
  const char tmp_msg_0[] = {-105, -5, -87, 62, 95, -79, 38, -50, -29, -76, 20, -33, 74, -22, -96, -11, 122, -46, 123, 79, -63, -29, -47, 54, -120, -80, 25, 37, 118, -1, -9, -27, -43, -83, 17, 6, -59, -66, -98, 83, -101, -66, -28, 43, -110, 39, 100, 34, -73, -30, -77, -31, -116, 7, -15, 50, -123, 70, -84, 101, 76, 56, -54, 23, 24, -95, -124, -111, -108, -128, 12, 61, 68, 39, 91, -53, 4, -106, -9, 80, -113, -118, -127, -1, 0, -39, -76, 10, -114, -23, -74, -35, 24, -99, -98, -16, -66, -102, 98, 101, -126, 3, 75, 87, 17, 22, 5, 112, -34, -74, 23, -27, -50, 72, -109, -81, 85, -89, -68, 115, -65, -116, 28, -23, -102, 7};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsTx - Serialization/Deserialization #2")
{
  IMC::SmsTx msg;
  msg.setTimeStamp(0.9578490151504413);
  msg.setSource(18942U);
  msg.setSourceEntity(55U);
  msg.setDestination(9106U);
  msg.setDestinationEntity(97U);
  msg.seq = 3232084873U;
  msg.destination.assign("RQHJYBMXJOVMYAOGLSGACFVERPQSRMHZXWUEITTABUNOEKJECB");
  msg.timeout = 31965U;
  const char tmp_msg_0[] = {122, 97, -26, 103, 101, 101, 40, -106, -35, -112, -108, -117, -35, 92, 3, 20, 79, -71, 106, 84, -68, 105, 13, 120, -85, 20, 61, -24, -59, -6, -84, -97, 34, 52, 58, -98, 119, -15, -120, 37, -31, 1, 0, 55, -106, -37, -11, -14, 56, -91, 39, -120, 99, 20, 44, -83, -35, 96, -74, -72, 27, -90, 86, -94, -103, 39, 117, 68, -10, -72, -60, 112, 123, -27, -90, 75, -69, 60, 9, -97, 39, -9, -37, -59, -45, 97, 105, -37, -111, 55, -48, 89, 9, 104, 94, -89, -109, 118, 90, 73, 45, 95, 122, 79, -74, -33, 17, -62, -109, 120, -99, -64, 64, 33, 43, -11, -98, -44, -112, -60, 57, -42, 112, -28, 94, 23, 80, 60, -119, 15, 116, 78, -54, 94, 50, -72, -125, -75};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsRx - Serialization/Deserialization #0")
{
  IMC::SmsRx msg;
  msg.setTimeStamp(0.6669392306045062);
  msg.setSource(45739U);
  msg.setSourceEntity(45U);
  msg.setDestination(8770U);
  msg.setDestinationEntity(11U);
  msg.source.assign("LRMTUMBSGCMYDOKTIILXZOAEIKLTRTJPGTWNYZJSDBRFFEETRUDAFTJJUJVOHEXTBGLKLZAIGYXYCPRNVROQWCFBMDNAGHKOVYSADCIJJBOSEFHVVNAKNLNDSYTMZXUHWXAH");
  const char tmp_msg_0[] = {38, 6, 119, 21, -13, 126, 125, -13, 115, -121, 106, -78, 32, 102, -26, -27, -100, 71, 107, -63, -64, 10, 23, -99, -57, -10, 65, 73, 31, -25, 32, -60, -84, -107, -42, -90, 71, -69, 15, 98, 95, -20, -29, -18, -21, -113, 10, 61, 35, 58, -2, -85, -104, 40, -68, 115, -110, 75, 31, 77, -43, 123, -9, 104, -119, 26, 100, 20, -30, 76, -47, -51, -77, 27, 23, 105, -100, -102, 123, -41, -50, -36, 115, 82, 17, 122, -4, 60, -18, -105, -121, 61, -10, 85, 42, 13, 110, 116, -97, 61, 84, 125, 50, -25, 118, 48, -59, -98, -120, 97, -29, -39, 100, 72, 74, 50, -45, 65, -11, 64, 32, -76};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsRx - Serialization/Deserialization #1")
{
  IMC::SmsRx msg;
  msg.setTimeStamp(0.45606023593767375);
  msg.setSource(11139U);
  msg.setSourceEntity(116U);
  msg.setDestination(17371U);
  msg.setDestinationEntity(42U);
  msg.source.assign("EKPZNWIYZHSXGCQPRCXKORWFUNFAGCMSKLOGLOUJLVGIZOPGKTOEUNAPDTHKFJQYVYHCTJVYJGZNALZXEHOVLXNNYCEQVNMATSPDXEYISHBUWNUYRBTHAZFAXJJEVBDMVPUTYYMBZPRSCWXSB");
  const char tmp_msg_0[] = {33, -79, -75, 105, 51, 31, -102, -118, -120, 74, -120, -82, 87, 59, 52, 2, 50, -107, 95, -102, 13, 112, 105, 41, 70, 75, -33, -81, -85, -64, 72, -97, 95, 71, 30, -109, -66, 51, 53, 83, -127, -53, -56, 94, -40, 13, -59, -53, 106, -92, 100, -87, -95, -120, -66, 60, 2, 42, -50, 76, -115, 53, 101, -35, 9, 67, -29, -37, -39, -96, -94, 51, 22, 21, -106, 27, 59, -81, 105, -60, 118, 9, -110, 9, 94, -31, 88, -119, 126, 83, -74, -90, 113, 20, 2, 88, 117, 65, -73, -59, 122, 74, -106, 18, 57, -48, -68, 116, 34, 45, -20, -116, 43, 98, 0, 122, 90, -37, 50, 36, 91, 113};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsRx - Serialization/Deserialization #2")
{
  IMC::SmsRx msg;
  msg.setTimeStamp(0.5274998836871988);
  msg.setSource(7466U);
  msg.setSourceEntity(119U);
  msg.setDestination(15320U);
  msg.setDestinationEntity(226U);
  msg.source.assign("KZESOWHIJWNIASLKEKXCJWYBSFOELL");
  const char tmp_msg_0[] = {12, 104, -104, -75, -14, 106, 119, 66, 76, -52, 61, -65, -93, -6, -44, -122, 71, 23, 92, 86, 96, 114, 64, -30, 71, 100, 31, 93, 39, 81, 115, 104, -94, 89, 118, 43, -47, -15, -45, 125, 107, -26, -126, 86, 114, 23, -101, -71, -41, -109, 74, 32, 42, 42, 77, 103, -79, -47, -71, -24, 111, -95, -106, 4, -109, 100, -114, 67, -112, -46, 71, -31, 50, 110, -91, -64, -31, 78, 57, -120, -94, 122, -33, 100, -108, -45, 84, -59, 81, 67, -22, 119, -117, -32, 91, 126, -115, 70, 32, -82, -41, 62, -97, 120, 33, -29, 106, -100, 66, -5, -27, -23, 5, 47, 81, -117, -10, 17, 124, 116, 62, 34, 58, 90, 97, -2, 112, 125, 82, -92, -37, 57};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsState - Serialization/Deserialization #0")
{
  IMC::SmsState msg;
  msg.setTimeStamp(0.4694704978583183);
  msg.setSource(41274U);
  msg.setSourceEntity(134U);
  msg.setDestination(43537U);
  msg.setDestinationEntity(44U);
  msg.seq = 966110646U;
  msg.state = 59U;
  msg.error.assign("MXZKNNDKEQSUBOYKFJEQGTSWQLFAZUKGVESGRJNRFJGJNQGTNLLZYUCCVXEYWVNAJAUNYJIPMSBSAQOLVLHXAJXWMKKPPSEHRUWTDAPXDKVZHRICTAAWJQTXPRPRXJKNIHODTMWENDGTABLCZOYSHLLF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsState - Serialization/Deserialization #1")
{
  IMC::SmsState msg;
  msg.setTimeStamp(0.7646978831858137);
  msg.setSource(57485U);
  msg.setSourceEntity(26U);
  msg.setDestination(27730U);
  msg.setDestinationEntity(154U);
  msg.seq = 2123553298U;
  msg.state = 143U;
  msg.error.assign("XGUUOTGSPFJCZLWBTNPYXVYECNVQPPITXCLLNYZAHPKAXEBOPHIDDFGFUJTWZEONTLKUUCB");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SmsState - Serialization/Deserialization #2")
{
  IMC::SmsState msg;
  msg.setTimeStamp(0.6626600301751189);
  msg.setSource(38375U);
  msg.setSourceEntity(190U);
  msg.setDestination(14057U);
  msg.setDestinationEntity(148U);
  msg.seq = 2446162632U;
  msg.state = 66U;
  msg.error.assign("BTTIPFKXEDFYIYJFTORZQEEBDXDSJSVQITCEPRWTGLMRLSPVJRAMGDZQHWKUKOPQNUWKDQOSKPGWJJGLKLAGATULCWMXLVYPIUFRROJPBXO");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TextMessage - Serialization/Deserialization #0")
{
  IMC::TextMessage msg;
  msg.setTimeStamp(0.1273283855589994);
  msg.setSource(52583U);
  msg.setSourceEntity(104U);
  msg.setDestination(8201U);
  msg.setDestinationEntity(139U);
  msg.origin.assign("ZPWYBEZCNEARTLXGLBUVSHRRIOQKTLAANYNBBNEMEUTSOZXFOGWFDCAJSUWGALQUXPMPPISDHIOIKFXBBHJPJN");
  msg.text.assign("TXOFRAHCBXBOMCIYNJDNDEFYFCOQMSGEAMRPQFABXKKUNJDISQBZKQHYFTQAVGILUUMLSKBQKRWKMPGGGVUHFTURKZGLVNWMRLELUSJSOZYJOENWXJBKYRJADWJDFISIHQV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TextMessage - Serialization/Deserialization #1")
{
  IMC::TextMessage msg;
  msg.setTimeStamp(0.3251605648659831);
  msg.setSource(23559U);
  msg.setSourceEntity(86U);
  msg.setDestination(21095U);
  msg.setDestinationEntity(150U);
  msg.origin.assign("EAUTZKQXGUJIKKLEPLVSINAXPAGZMNARLQNJWLSQUZVLLKXLFMYYZBO");
  msg.text.assign("UKYQIFDUGNBSXXZHMMKEMWVIQNVPKZVBFDYNTCIVNPZTARYUETWQFWCMMJLDTISIZFBGZZGXDFRQOPOWLFCOFKYASIIHFEGLKBNDGHPMTOLVKYGVXIYJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TextMessage - Serialization/Deserialization #2")
{
  IMC::TextMessage msg;
  msg.setTimeStamp(0.04240864368790309);
  msg.setSource(38521U);
  msg.setSourceEntity(134U);
  msg.setDestination(57507U);
  msg.setDestinationEntity(230U);
  msg.origin.assign("XXWWELCTCRGK");
  msg.text.assign("HVBCOTGTLICJKQADEUGTKYAMBPCLTUNIRQEGQPPXENGBOHSJFZZVPVUSGWZRFAVLRDCQQUVEQHKIHSJHALSDLGANAOYFSLOOKSLGBIRTXEVJIYDYBFKMJMKUFZSFGJCDZBXXRMBNVMZFGFYMLJNRANLDCPQUCYXKRHRNCWFXD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumMsgRx - Serialization/Deserialization #0")
{
  IMC::IridiumMsgRx msg;
  msg.setTimeStamp(0.13450136183919703);
  msg.setSource(49957U);
  msg.setSourceEntity(218U);
  msg.setDestination(13455U);
  msg.setDestinationEntity(14U);
  msg.origin.assign("LMWIRCFPJMKRRTGFBQOOOKZYANFEHFSUJMEYIHYFEIAQQPERWZFWJUZ");
  msg.htime = 0.20397986337295904;
  msg.lat = 0.14617673896938455;
  msg.lon = 0.13371404067614578;
  const char tmp_msg_0[] = {0, -38, 64, -22, 102, 13, -25, -58, -49, -105, 15, 108, 65, 51, 5, 94, -40, -126, -11, -117, 104, -80, -33, -62, -12, 10, -72, -10, 81, 108, 52, 54, -110, 109, -88, -120, -2, -20, -23, -62, 97, 110, 16, 92, 25, -44, -61, -44, -80, -73, -16, 65, 117, -111, 77, 65, 12, 90, 39, 63, -114, -38, -50, 17, 111, -121, 21, -40, 33, 6, -69, 32, -53, 82, -14, -109, 109, -85, 24, 75, -38, -115};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumMsgRx - Serialization/Deserialization #1")
{
  IMC::IridiumMsgRx msg;
  msg.setTimeStamp(0.16826401337690056);
  msg.setSource(17463U);
  msg.setSourceEntity(85U);
  msg.setDestination(16672U);
  msg.setDestinationEntity(234U);
  msg.origin.assign("XOADJMEIKERRNUXMFJUOMUAJNHILLGOWTFWNHDQWPIPSRFHFNPEWYBMNRAZXAFCTWKKHPOJADYJXFXYHEHJVHSTWWKXVOYZXMFCOYGLMQTDUFIXQDBUGZTCZMKQNTZRMYGOYREVQJIAEBSCWOSSBPKAVIHICNYEBFQZXIDAVNUWM");
  msg.htime = 0.4652260594955614;
  msg.lat = 0.3199458791240999;
  msg.lon = 0.10184450218717878;
  const char tmp_msg_0[] = {-76, 86, -21, 15, -128, -100, 35, -100, -8, -74, -124, -80, 124, 7, 19, -20, -82, 13, -13, -93, 71, -29, -88, -16, 52, 41, 37, 38, -60, 9, -118, 62, 124, 125, -62, 122, 108, -43, 2, 44, 66, -1, 3, -97, -64, -110, -65, 48, 122, -53, -81, -8, -117, -49, 95, -101, 68, 61, 111, -61, -29, -89, 33, 57, 37, -115, 47, 7, -54, -67, 101, 85, -47, 101, 54, -81, -16, 89, -10, -109, 65, 20, -14, -103, 38, 35, 54, 40, -102, -87, 95, -107, -98, 21, -75, 39, 104, 35, -89, 40, -102, 45, 88, 4, 86, 23, -88, -93, -75, 52, -66, 43, 94, 2, 17, 27, -70, 83, 65, -60, 12, 60, 2, -91, -21, 74, -68, 115, 38, 0, 40};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumMsgRx - Serialization/Deserialization #2")
{
  IMC::IridiumMsgRx msg;
  msg.setTimeStamp(0.9064207557208204);
  msg.setSource(43380U);
  msg.setSourceEntity(251U);
  msg.setDestination(42860U);
  msg.setDestinationEntity(207U);
  msg.origin.assign("IAAUBHNWOVGMFBCMYREVMIJPVYNZKJHBFNENWFJIOQIEUBNBGFQQTUDHNAEOZBOCPASUCSGTTTFBLIZOHTVCOATZGYVUJKOHFNWDCDSCEVMBNDYLRYGGPATTHJGIZF");
  msg.htime = 0.9234349158848176;
  msg.lat = 0.6623190911316891;
  msg.lon = 0.25858956772607844;
  const char tmp_msg_0[] = {98, -89, 35, -37, -74, -96, -88, -106, -101, -84, -101, 59, 103, 75, -74, -121, -116, -25, -15, -9, 99, 95, 55, -108, 13, 36, 61, 18, 29, 122, 53, 81, -67, 7, 41, -122, -68, 79, -69, -24, 82, -122, 93, 32, -20, -4, -104, 44, 0, 111, 87, 51, 103, 105, -51, -34, -128, 67, 104, 0, -77, 14, -39, 74, -37, 73, 126, 18, 114, 113, 58, -45, 60, -126, 17, -104, 111, 41, -63, -77, -99, 50, -87, 53, -112, -46, -117, 32, 59, 89, -105, -13, 7, 115, -68, 115, -93, 57, -61, 72, -118, -40, -43, 30, -3, 50, -88, -20, -118, 117, 105, 58, -2, -29, 100, 69, 6, 125, 59, 23, 91, 25, 122, 118, -3, 38, -127, 53, -57, 25, -108, -64, 18, -92, 66, 123, -7, -112, -43, -42, 67, 116, -53, -59, -83, -107, 45, -6, 49, -27, -100, -26, 63, 76, 63, -111, 34, -42, -91, -16, 41, -94, 33, 70, 21, 18, -124, -122, -108, 84, 98, 9, -85, -106, 62, -77, -21, 6, 31, 7, -91, -34, 13, 115, 75, -105, -20, 29, -106, 79, 67, -52, 29, 39, 71, -68, 88, -87, 41, -36, 88, 101, -81, -88, -26, -86, -127, 39, 123, 98, 50, 120, 16};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumMsgTx - Serialization/Deserialization #0")
{
  IMC::IridiumMsgTx msg;
  msg.setTimeStamp(0.9327687536621785);
  msg.setSource(60119U);
  msg.setSourceEntity(180U);
  msg.setDestination(56841U);
  msg.setDestinationEntity(11U);
  msg.req_id = 54623U;
  msg.ttl = 16263U;
  msg.destination.assign("UXMPOZIMTXGXPUZRBNFUSAVGIFYPDDTOLMPKEYTUZBVSVXGYYCGQQHLFSVARRGDKABMQOVQBVXPCZW");
  const char tmp_msg_0[] = {62, 28, 51, -96, 33, -124, -28, 27, -112, -116, 79, 102, -67, -89, 87, 97, 47, 24, 95, -80, -75, 96, -117, 33, 58, 57, -64, -40, -25, 45, -31, 34, -21, -105, 114, -100, 124, -39, -81, -56, -110, 72, -124, 104, -25, 16, -82, 89, 115, 60, 35, -55, 43, -106, 31, -97, -38, 1, -126, -79, -19, -127, -111, -39, -89, 27, 34, -99, -89, -107, -75, 46, 19, -30, -35, 67, -59, 29, -89, 37, -34, 92, -40, 14, -81, -35, -83, -44, 39, -47, 91, -97, 76, -80, -55, -87, -52, 89, -88, 39, 42, 5, -55, 100, -65, 119, 40, -65, -64, 46, -19, 102, -39, 75, -55, -31, -123, -120, -32, 11, 17, -128, -56, -3, 8, 35, 46, 21, -59, 62, -39, 6, 49, -30, -71, 10, -11, -105, 83, 75, -116, 55, -39, -78, 91, -101, -39, -71, -54, 126, 112, -104, -26, 12, -10, 91, 103, -25, -52, 10, -97, 92, -83, -29, -124, -43, -70, 114, -43, 13, 44};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumMsgTx - Serialization/Deserialization #1")
{
  IMC::IridiumMsgTx msg;
  msg.setTimeStamp(0.10701870913705946);
  msg.setSource(1530U);
  msg.setSourceEntity(156U);
  msg.setDestination(57235U);
  msg.setDestinationEntity(145U);
  msg.req_id = 9783U;
  msg.ttl = 17607U;
  msg.destination.assign("OZPXVIBKBMLCGCPOSPOWDGKKHBQPVLSGONHSRZEFOHRIVQQWBXAIJNUDUGMNDGWTFZIJZWAAAUTOVYKAMENLMAXRCVTNNHWQSYCDIJSDHELBXIGSZFNDBVFGXKTVTBMJZARUYLJKKOKOCVNPIAWDLCZUKITNRTJJXBJRHSPLJGMLYPAFHQXTVHQQCEYRCSZEVEEQYUSDLIKMFZPMBJEMXFX");
  const char tmp_msg_0[] = {100, 40, -62, -98, -115, -69, -47, -8, 76, -38, -127, -79, -108, 63, -123, -19, 38, 112, -68, 112, -57, -103, 54, -10, -69, -109, -121, 51, 56, -40, 45, 31, -110, -48, -97, -71, -56, 89, -9, 24, 106, -32, 9, 102, -35, -52, -77, 15, -126, 106, 44, 72, 56, -54, 123, -83, -126, 40, 43, -107, 123, -29, -72, 84, -91, -37, 114, 61, 119, -69, -25, -21, -96, -103, -65, -128, -27, -61, 69, -67, -33, 8, 9, 8, 67, 112, -47, -83, -38, 32, -74, 34, 80, 75, 25, 48, -98, 71, 4, 20, -97, 64, -91, -35, 52, -106, 82, 29, 71, -24, 84, 22, -111, -20, -50, -118, 58, -55, 70, -42, 46, 122, -7, 104, -4, -54, 89, 106, -65, 111, -102, 27, 43, -114, 50, -96, 66, -39, 95, 21, -8, -126, 18, 126, -63, 92, -99, -58, 7, 18, 64, -94, -69, -41, 84, -76, 26, 93, -54};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumMsgTx - Serialization/Deserialization #2")
{
  IMC::IridiumMsgTx msg;
  msg.setTimeStamp(0.8018841921782585);
  msg.setSource(10346U);
  msg.setSourceEntity(99U);
  msg.setDestination(2247U);
  msg.setDestinationEntity(52U);
  msg.req_id = 64664U;
  msg.ttl = 57706U;
  msg.destination.assign("ZWNLJNRWMJYWHTUHQXEZRJHNMSOLOYAOZIHKVJPVAUSRBYEXAMMIYYV");
  const char tmp_msg_0[] = {-19, 84, -38, 17, 121, -122, 53, 35, 1, -109, 94, -1, 91, -78, 88, 21, -112, -21, 65, -91, 85, -54, 99, 99, 16, 119, -49, 36, 24, -26, -3, -89, 63};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumTxStatus - Serialization/Deserialization #0")
{
  IMC::IridiumTxStatus msg;
  msg.setTimeStamp(0.31579394872829225);
  msg.setSource(30577U);
  msg.setSourceEntity(89U);
  msg.setDestination(63814U);
  msg.setDestinationEntity(195U);
  msg.req_id = 15242U;
  msg.status = 249U;
  msg.text.assign("OFMTNFRRMWQMYZUNGQVHLNAZVBYOFZHXWVUOSZEILCNPDOMBZLTRSJMDLKBKEWFQVDNLJTCPBDHYRTNTXRRWUQLCHKJUVFAZYXXMTAQIFZKJOUKDAWFSKAGALHPFYSJJYJCWZRYGKDVUHBQGEOKBLVEAQCSGQOOIIMJEQUWNKOLBVXUCPLFWRIIAZTZGSPPYGXHGWQCRMPUPPIJDHKFAIETCNXSBVBSDTPHJCHGSM");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumTxStatus - Serialization/Deserialization #1")
{
  IMC::IridiumTxStatus msg;
  msg.setTimeStamp(0.4615598615230788);
  msg.setSource(41182U);
  msg.setSourceEntity(20U);
  msg.setDestination(7375U);
  msg.setDestinationEntity(58U);
  msg.req_id = 2865U;
  msg.status = 212U;
  msg.text.assign("QLTJOCBYMIBNJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IridiumTxStatus - Serialization/Deserialization #2")
{
  IMC::IridiumTxStatus msg;
  msg.setTimeStamp(0.6572291862290593);
  msg.setSource(38700U);
  msg.setSourceEntity(245U);
  msg.setDestination(23101U);
  msg.setDestinationEntity(152U);
  msg.req_id = 64158U;
  msg.status = 9U;
  msg.text.assign("VHBDKDARJESAFLJFOVONBIXMDHSULAKGGQKQNGMUGXYEDWGUBOLVLZFJDXATMLIFTYEHJA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroupMembershipState - Serialization/Deserialization #0")
{
  IMC::GroupMembershipState msg;
  msg.setTimeStamp(0.7577960132035343);
  msg.setSource(20114U);
  msg.setSourceEntity(221U);
  msg.setDestination(10766U);
  msg.setDestinationEntity(23U);
  msg.group_name.assign("BXQYYSYHGGYHQHJVBGRCECFEOQTLAKNJMLDGWDGDRLSPUXVMPPOQMZEBJAWNNAMPXQKUDAATOKRFZDEDLWOKGRFJSIWSLTYBBINUNFOKOUNQNLBIAQFGJFREXLCFBOLZQOKREWDUCGOKJYSUIAMBHCZTYVWEFVSVIYVWAVCURBHHJKACTLRIUHIJ");
  msg.links = 3254021097U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroupMembershipState - Serialization/Deserialization #1")
{
  IMC::GroupMembershipState msg;
  msg.setTimeStamp(0.23815746300361607);
  msg.setSource(19317U);
  msg.setSourceEntity(203U);
  msg.setDestination(61403U);
  msg.setDestinationEntity(216U);
  msg.group_name.assign("SAOMNGUTJFGDCABXFQYNDVKKYLMVRHIFLXMPDRNYYFFGZEURETFUMBBQUDIQOTSRQPEKAXZHOOJWILZV");
  msg.links = 119327984U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroupMembershipState - Serialization/Deserialization #2")
{
  IMC::GroupMembershipState msg;
  msg.setTimeStamp(0.836514299468665);
  msg.setSource(8895U);
  msg.setSourceEntity(110U);
  msg.setDestination(56729U);
  msg.setDestinationEntity(89U);
  msg.group_name.assign("LQNURMEQINUAWOHUKKJZKBLHEABTCHKLATEGIUGXVZXMQOYSLYDBIPEHITSTZLKZTMEUBVHHCJZGZJHWRXSMTRDBPLVUBDOGPIRGINAYUYXBRYVKQFNOWGZVPSSWEYJVRMOPAAQFXJUIWCFKQMZEJFPNGPVOXTIALDTPPDOCSMCBYDQLNMGDRWPWZXAAJVGNQLYRJIIRCKFFESZNCMCORFFCYVQXHHXJTYUJNDGWOWE");
  msg.links = 3416164996U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SystemGroup - Serialization/Deserialization #0")
{
  IMC::SystemGroup msg;
  msg.setTimeStamp(0.27002582455482615);
  msg.setSource(57080U);
  msg.setSourceEntity(100U);
  msg.setDestination(2236U);
  msg.setDestinationEntity(25U);
  msg.groupname.assign("POOVUADYGTNZCLEFVCEDRPZQLLSKMRFPDIBSGXZUUHIBKRLGFUKGRMDWCZRXHBAHAVNGNUKVWSJXPRVHQSJITFWXATKDFZQHXCQWRYWDLXZAWWWP");
  msg.action = 131U;
  msg.grouplist.assign("KYHDTVYIVCZGODHZKLEAXTNQAVKWHHUODXLQJIBWTIOZMYNLWTOFVAYGEAMCXIZUNPKCAYYQMLOKRGPGGCXSNTWPYJARSGJXGMAHSUCDNASEOEIXBRCFYHZBQXULFQRLWDLLSUWFPSNZXZZSEAGXDHDNSWYMDFNFEDOMUBCIMZJCTJJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SystemGroup - Serialization/Deserialization #1")
{
  IMC::SystemGroup msg;
  msg.setTimeStamp(0.590501325321729);
  msg.setSource(38601U);
  msg.setSourceEntity(161U);
  msg.setDestination(10947U);
  msg.setDestinationEntity(88U);
  msg.groupname.assign("YQOYHVVCZZYAGMMTGTBQMNADRZLDUNDGWXBMUBIKJUXEWANUXSJICPEFCKSLLFQLHHSNRNUXJBTLFMUCZERWWIZAOIVYNWTHWNHSZWCRXIYFFVRGPUWFAHCFZHSFIMLGPTN");
  msg.action = 86U;
  msg.grouplist.assign("XPHAJTOKYPREAGDJKWIBNCWYFYMIGPNTALLFMJDBQNMMJZZGYEFRJPSQDKXEJCYIRETHCROOYJFLQREHCVFHMMBZMYWFWELTIKRACWOPVVT");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SystemGroup - Serialization/Deserialization #2")
{
  IMC::SystemGroup msg;
  msg.setTimeStamp(0.08757187620474027);
  msg.setSource(25197U);
  msg.setSourceEntity(146U);
  msg.setDestination(16239U);
  msg.setDestinationEntity(173U);
  msg.groupname.assign("XIOVTIBWAJHDMNGBGJFOWISFARYNJLXRRAPNFRKQQSOACOVVLDKSLUSQGHJKCJSKQQNIKJAESAADUFCZLGSZCXTWVAYLTEXIDPWMQTXFGBMBNZTHTOBFOPPNFKWXYHCLNRSXCNFDXIYYKOPHIKTZREFPYAIOWJEYVMGPOLQMVZSWUEHQRTIHBVVZEGJQUZYTWJLICFPRWZVLTUDKQCKDRCUDYPGOYDNBMMXUUUMRLB");
  msg.action = 190U;
  msg.grouplist.assign("NZUNNKDJPKUNXIYOPJMVYYPEWTHHDEHDBPLDEPRFMKPUPUWWOUYIUWHVGPQZGQKICLSEKRHOFTMTQNGEYVDTVBJXYISNYFJSSWWJKLXNLVSHGRAFAISBJZXXIPRAQSAQAGR");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LinkLatency - Serialization/Deserialization #0")
{
  IMC::LinkLatency msg;
  msg.setTimeStamp(0.14329666397580398);
  msg.setSource(38486U);
  msg.setSourceEntity(180U);
  msg.setDestination(24281U);
  msg.setDestinationEntity(43U);
  msg.value = 0.08094268315892683f;
  msg.sys_src = 33608U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LinkLatency - Serialization/Deserialization #1")
{
  IMC::LinkLatency msg;
  msg.setTimeStamp(0.8341843619773717);
  msg.setSource(38741U);
  msg.setSourceEntity(7U);
  msg.setDestination(59512U);
  msg.setDestinationEntity(92U);
  msg.value = 0.6307882554601156f;
  msg.sys_src = 62494U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LinkLatency - Serialization/Deserialization #2")
{
  IMC::LinkLatency msg;
  msg.setTimeStamp(0.5179141813237575);
  msg.setSource(15398U);
  msg.setSourceEntity(88U);
  msg.setDestination(47794U);
  msg.setDestinationEntity(75U);
  msg.value = 0.7385739108935829f;
  msg.sys_src = 29400U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ExtendedRSSI - Serialization/Deserialization #0")
{
  IMC::ExtendedRSSI msg;
  msg.setTimeStamp(0.45573350872460217);
  msg.setSource(22617U);
  msg.setSourceEntity(215U);
  msg.setDestination(57797U);
  msg.setDestinationEntity(46U);
  msg.value = 0.8486237113521247f;
  msg.units = 20U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ExtendedRSSI - Serialization/Deserialization #1")
{
  IMC::ExtendedRSSI msg;
  msg.setTimeStamp(0.7238094630866452);
  msg.setSource(5399U);
  msg.setSourceEntity(86U);
  msg.setDestination(54355U);
  msg.setDestinationEntity(27U);
  msg.value = 0.8283029575398406f;
  msg.units = 81U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ExtendedRSSI - Serialization/Deserialization #2")
{
  IMC::ExtendedRSSI msg;
  msg.setTimeStamp(0.3475019933823893);
  msg.setSource(33355U);
  msg.setSourceEntity(217U);
  msg.setDestination(22888U);
  msg.setDestinationEntity(71U);
  msg.value = 0.4925104275592038f;
  msg.units = 2U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricData - Serialization/Deserialization #0")
{
  IMC::HistoricData msg;
  msg.setTimeStamp(0.43432718883019084);
  msg.setSource(19768U);
  msg.setSourceEntity(207U);
  msg.setDestination(51748U);
  msg.setDestinationEntity(117U);
  msg.base_lat = 0.03777958855919339f;
  msg.base_lon = 0.1352989069749927f;
  msg.base_time = 0.30331573659319366f;
  IMC::HistoricSample tmp_msg_0;
  tmp_msg_0.sys_id = 39753U;
  tmp_msg_0.priority = -97;
  tmp_msg_0.x = 26773;
  tmp_msg_0.y = 4031;
  tmp_msg_0.z = 634;
  tmp_msg_0.t = -30304;
  IMC::GpsFixRtk tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.validity = 64255U;
  tmp_tmp_msg_0_0.type = 238U;
  tmp_tmp_msg_0_0.tow = 3427115560U;
  tmp_tmp_msg_0_0.base_lat = 0.9278239767391859;
  tmp_tmp_msg_0_0.base_lon = 0.5516123176524022;
  tmp_tmp_msg_0_0.base_height = 0.994544207098864f;
  tmp_tmp_msg_0_0.n = 0.2166923632684804f;
  tmp_tmp_msg_0_0.e = 0.001791192802110264f;
  tmp_tmp_msg_0_0.d = 0.0918143080896292f;
  tmp_tmp_msg_0_0.v_n = 0.40380789543305373f;
  tmp_tmp_msg_0_0.v_e = 0.17015952585535232f;
  tmp_tmp_msg_0_0.v_d = 0.07782446110057151f;
  tmp_tmp_msg_0_0.satellites = 17U;
  tmp_tmp_msg_0_0.iar_hyp = 58825U;
  tmp_tmp_msg_0_0.iar_ratio = 0.2658890626921482f;
  tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
  msg.data.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricData - Serialization/Deserialization #1")
{
  IMC::HistoricData msg;
  msg.setTimeStamp(0.7711874850476486);
  msg.setSource(41674U);
  msg.setSourceEntity(81U);
  msg.setDestination(34347U);
  msg.setDestinationEntity(23U);
  msg.base_lat = 0.45614192135043385f;
  msg.base_lon = 0.0382177072809039f;
  msg.base_time = 0.1398757966905365f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricData - Serialization/Deserialization #2")
{
  IMC::HistoricData msg;
  msg.setTimeStamp(0.05760594420960341);
  msg.setSource(40016U);
  msg.setSourceEntity(149U);
  msg.setDestination(28699U);
  msg.setDestinationEntity(10U);
  msg.base_lat = 0.7013229100744033f;
  msg.base_lon = 0.46919133439854066f;
  msg.base_time = 0.6692183485142352f;
  IMC::HistoricSample tmp_msg_0;
  tmp_msg_0.sys_id = 27759U;
  tmp_msg_0.priority = -39;
  tmp_msg_0.x = -3782;
  tmp_msg_0.y = -16688;
  tmp_msg_0.z = -24698;
  tmp_msg_0.t = 17901;
  IMC::FollowPath tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.timeout = 14730U;
  tmp_tmp_msg_0_0.lat = 0.6457544496992542;
  tmp_tmp_msg_0_0.lon = 0.9975078164969016;
  tmp_tmp_msg_0_0.z = 0.7997460368931099f;
  tmp_tmp_msg_0_0.z_units = 94U;
  tmp_tmp_msg_0_0.speed = 0.032292451448252435f;
  tmp_tmp_msg_0_0.speed_units = 27U;
  tmp_tmp_msg_0_0.custom.assign("MPSJYTYNCQHORIEWWGXOEVZMEHNHSUFAEQNMZWQZEVQBPXNBYWAWPZJCJETASFVTHSKTAD");
  tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
  msg.data.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompressedHistory - Serialization/Deserialization #0")
{
  IMC::CompressedHistory msg;
  msg.setTimeStamp(0.5569005971465488);
  msg.setSource(62461U);
  msg.setSourceEntity(234U);
  msg.setDestination(41804U);
  msg.setDestinationEntity(168U);
  msg.base_lat = 0.852113228646289f;
  msg.base_lon = 0.524639410000865f;
  msg.base_time = 0.27522522589168574f;
  const char tmp_msg_0[] = {-81, 4, 30, -16, 92, 124, -106, 109, 28, 53, 89, -101, 14, -107, -6, 121, -53, -27, 110, -11, 1, 31, -125, 87, -44, -95, -88, 88, 28, 32, -20, -79, -93, -43, 107, 82, 11, -23, -50, -57, 9, 52, 64, 20, -11, 26, -106, -106, -3, -27, -56, -97, 74, 59, -113, -8, 46, 9, -113, -5, -26, 88, 13, 45, -52, -72, -25, 7, 45, 117, -102, -94, -121, -114, 99, 24, -75, 120, -47, 68, -11, -121, 0, -50, 28, -104, -61, -66, -29, 110, -13, 87, -95, 12, -72, 79, -88, -113, 76, 118, -95, 77, 121, 78, -54, 43, 52, 61, 99, -14, 78, 28, -82, 81, 15, 46, 1, 122, 24, 30, 15, -120, -77, -53, -116, -117, -96, -48, 12, -75, 110, 112, -26, 65, -28, 58, 97, -56, -108, -125, -122, 27, 12, 120, 121, 5, 53, 79, -87, -103, 87, -24, -71, 79, -68, -74, 7, -122, 24, 102, -101, 95, -19, 50, -89, -55, 33, -100, 115, -100, -23, -105, 77, -8, -82, -107, 27, 86, 6, -38, 120, 84, 27, -86, 96, 5, -56, 7, 39, -101, 125, -23, 33, 84, -94, -117, 8, -115, -22, -123, -124, 40, -43, 26, -18, -29};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompressedHistory - Serialization/Deserialization #1")
{
  IMC::CompressedHistory msg;
  msg.setTimeStamp(0.9221678745685933);
  msg.setSource(41626U);
  msg.setSourceEntity(143U);
  msg.setDestination(49821U);
  msg.setDestinationEntity(87U);
  msg.base_lat = 0.09933657758545789f;
  msg.base_lon = 0.44937376904053994f;
  msg.base_time = 0.8677166715801427f;
  const char tmp_msg_0[] = {-105, 74, 77, -18, 22, -27, -100, -31, -110, -94, 52, 58, -8, 20, -92, 102, 31, -46, 111, 29, -10, -83, -32, -40, 76, -45, 67, -74, 67, 97, -37, 120, 28, 86, -105, -72, -124, -1, -53, -25, 37, 75, 6, 81, -96, -1, 11, 126, -69, -8, 103, -104, 24, 110, -55, 52, 45, -15, 123, -78, 74, 17, -51, 76, 6, 102, -14, 76, 34, 126, 46, 57, -9, 20, -84, -108, -75, -57, 9, -41, 57, -25, 34, -118, 71, -10, -15, 6, -102, -42, -107, 36, 91, 88, 78, 63, -104, 109, 100, -16, 95, 13, -61, -10, -46, -27, 38, -43, 42, -107, -27, 122, -16, 60, 125, 41, -46, 120, 97, 41, -109, 110, 68, -80, 72, -67, -6, -75, 86, 20, 120, -40, -50, 85, -18, -66, -56, -96, -25, -64, 99, -71, -55, -14, -61, 105, -127, -68, 99, 12, 14, -20, 16, -111, 93, -50, 95, 18, -101, -72, 113, 16, 55, 77, -96, 99, 3, -82, -3, 30, -6, -50, -41, -65, -67, 47, -7, 123, 99, 54, -54, -13, -53, -60, -127, 66, -88, 56, 9, -99, -45, 67, -70, 19, -63, 8, -21, 46, 57, 124, 78, -25, -46, -24};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompressedHistory - Serialization/Deserialization #2")
{
  IMC::CompressedHistory msg;
  msg.setTimeStamp(0.9342224211599955);
  msg.setSource(23552U);
  msg.setSourceEntity(59U);
  msg.setDestination(11467U);
  msg.setDestinationEntity(247U);
  msg.base_lat = 0.09158124874934193f;
  msg.base_lon = 0.9357868769084812f;
  msg.base_time = 0.014740271099389135f;
  const char tmp_msg_0[] = {100, -112, 105, -79, 103, -99, -77, -92, -109, -82, -47, 82, -27, -83, 62, -110, -21, 109, -25, 41, 28, 111, 80, -124, 109, 100, -113, 4, -30, 6, -64, 59, 29, -105, -66, -80, -66, 99, 13, 100, 80, 49, 73, 31, -58, 47, 112, 107, 50, -120, 59, 89, -45, 104, 59, -86, -71, -62, 99, 111, 91, -39, 54, 38, -104, -52, -105, -98, -87, 101, -125, 87, -47, 110, -110, 28, 55, -114, -11, -105, 55, 108, -96, -1, 38, 116, -124, 46, 43, 62, -89, 49, 76, -30, 21, -127, 94, -53, -13, -124, -66, -64, -57, -119, -103, 47, -88, -34, 62, -34, 89, -109, 1, 53, 12, 42, 13, 106, 53, 79, 49, -19, 81, 20, 93, -43, -80, -113, -66, -73, -117, 23, 37, -38, 46, 86, 124, -55, -92, 59, -74, 17, -32, 10, 54, 43, 105, 126, -71, -114, 17, -112, 67, 87, 0, 61, -44, -112, -74, 51, -18, 98, -45, 15, -4, 88, -91, 50, 25, -60, -110, 35, -122, -7, 99, 95, -96, -41, -104, -79, -58, -92, -23, -91, 117, -24, 63, 59, -7, 54, 102, -79, 76, -47, 59, 83, -42, 98, 55, -65, -77, 62, 123, -91, -118, -66, 16, -56, -8, 51, 34, 13, 69, -66, -83, -36, 63, -71, -124, -47, -102, -8, 1, -86, -16, 15, 31, -112, -117, -51, 104, 105, 114, -35, 16, 82, 7, -18, 31, -80, 108, 41, 34, 83, -87, -113, -109, 13, -121, 44, 45, -104, -34, -100};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricSample - Serialization/Deserialization #0")
{
  IMC::HistoricSample msg;
  msg.setTimeStamp(0.5935770936951154);
  msg.setSource(54405U);
  msg.setSourceEntity(87U);
  msg.setDestination(1861U);
  msg.setDestinationEntity(230U);
  msg.sys_id = 36789U;
  msg.priority = -125;
  msg.x = 21819;
  msg.y = -11171;
  msg.z = 19856;
  msg.t = -5953;
  IMC::EstimatedState tmp_msg_0;
  tmp_msg_0.lat = 0.33929216097386783;
  tmp_msg_0.lon = 0.19575013865234492;
  tmp_msg_0.height = 0.019012276233946634f;
  tmp_msg_0.x = 0.8221714573893669f;
  tmp_msg_0.y = 0.598559129224836f;
  tmp_msg_0.z = 0.22290630449391524f;
  tmp_msg_0.phi = 0.6349776456188628f;
  tmp_msg_0.theta = 0.1287270719605379f;
  tmp_msg_0.psi = 0.6965472386877479f;
  tmp_msg_0.u = 0.188293256442017f;
  tmp_msg_0.v = 0.08066231273639812f;
  tmp_msg_0.w = 0.10150714085015455f;
  tmp_msg_0.vx = 0.8166228803586522f;
  tmp_msg_0.vy = 0.8328327706998885f;
  tmp_msg_0.vz = 0.7403361400336713f;
  tmp_msg_0.p = 0.4199398591390694f;
  tmp_msg_0.q = 0.8291311542481185f;
  tmp_msg_0.r = 0.698518482509886f;
  tmp_msg_0.depth = 0.2301927281219388f;
  tmp_msg_0.alt = 0.09418243435084761f;
  msg.sample.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricSample - Serialization/Deserialization #1")
{
  IMC::HistoricSample msg;
  msg.setTimeStamp(0.6353678241193412);
  msg.setSource(8941U);
  msg.setSourceEntity(41U);
  msg.setDestination(39811U);
  msg.setDestinationEntity(0U);
  msg.sys_id = 42259U;
  msg.priority = -11;
  msg.x = -19802;
  msg.y = 3852;
  msg.z = 18613;
  msg.t = 16489;
  IMC::Loiter tmp_msg_0;
  tmp_msg_0.timeout = 63436U;
  tmp_msg_0.lat = 0.23873024512884045;
  tmp_msg_0.lon = 0.815814494531735;
  tmp_msg_0.z = 0.9159857935981756f;
  tmp_msg_0.z_units = 89U;
  tmp_msg_0.duration = 5662U;
  tmp_msg_0.speed = 0.5869660394003542f;
  tmp_msg_0.speed_units = 42U;
  tmp_msg_0.type = 100U;
  tmp_msg_0.radius = 0.1613524110998813f;
  tmp_msg_0.length = 0.367217947370408f;
  tmp_msg_0.bearing = 0.9253267344243467;
  tmp_msg_0.direction = 54U;
  tmp_msg_0.custom.assign("EMTDWBPPHVANEEYYTCJRNISVHQCSJRFRPSEUOJFBPLOOWIHITUHDOOZCGWMDXFUOLXGNQTTNEWSCNQVCIJVMLHXIEAKZFAZOTRWTSISKNUZYQUXRBRQLSZMHMQLIJOBYCBYDQPSVVHBUMFEHJVYPJLCDB");
  msg.sample.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricSample - Serialization/Deserialization #2")
{
  IMC::HistoricSample msg;
  msg.setTimeStamp(0.5065499026905141);
  msg.setSource(59192U);
  msg.setSourceEntity(171U);
  msg.setDestination(62106U);
  msg.setDestinationEntity(165U);
  msg.sys_id = 1195U;
  msg.priority = -29;
  msg.x = -212;
  msg.y = 9788;
  msg.z = -7473;
  msg.t = 22559;
  IMC::QueryPowerChannelState tmp_msg_0;
  msg.sample.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricDataQuery - Serialization/Deserialization #0")
{
  IMC::HistoricDataQuery msg;
  msg.setTimeStamp(0.7279812605450354);
  msg.setSource(1424U);
  msg.setSourceEntity(243U);
  msg.setDestination(5767U);
  msg.setDestinationEntity(230U);
  msg.req_id = 32533U;
  msg.type = 246U;
  msg.max_size = 7456U;
  IMC::HistoricData tmp_msg_0;
  tmp_msg_0.base_lat = 0.016051402055073605f;
  tmp_msg_0.base_lon = 0.813841852984573f;
  tmp_msg_0.base_time = 0.6240001374604237f;
  msg.data.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricDataQuery - Serialization/Deserialization #1")
{
  IMC::HistoricDataQuery msg;
  msg.setTimeStamp(0.7064120872353572);
  msg.setSource(4443U);
  msg.setSourceEntity(128U);
  msg.setDestination(22581U);
  msg.setDestinationEntity(64U);
  msg.req_id = 51074U;
  msg.type = 155U;
  msg.max_size = 47019U;
  IMC::HistoricData tmp_msg_0;
  tmp_msg_0.base_lat = 0.9139760986534379f;
  tmp_msg_0.base_lon = 0.8522027563086488f;
  tmp_msg_0.base_time = 0.11096892192757579f;
  IMC::HistoricSample tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.sys_id = 11783U;
  tmp_tmp_msg_0_0.priority = -49;
  tmp_tmp_msg_0_0.x = 15257;
  tmp_tmp_msg_0_0.y = 19958;
  tmp_tmp_msg_0_0.z = 1608;
  tmp_tmp_msg_0_0.t = -22227;
  IMC::AcousticOperation tmp_tmp_tmp_msg_0_0_0;
  tmp_tmp_tmp_msg_0_0_0.op = 160U;
  tmp_tmp_tmp_msg_0_0_0.system.assign("SGRERELSVCETFXRGTVKEJXQJLSCPPSMEXTZTHTAJRIKCUUWOFRUAMIOPICNQZDTROS");
  tmp_tmp_tmp_msg_0_0_0.range = 0.42242195074317057f;
  IMC::SessionStatus tmp_tmp_tmp_tmp_msg_0_0_0_0;
  tmp_tmp_tmp_tmp_msg_0_0_0_0.sessid = 3011024054U;
  tmp_tmp_tmp_tmp_msg_0_0_0_0.status = 107U;
  tmp_tmp_tmp_msg_0_0_0.msg.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
  tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
  tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
  msg.data.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("HistoricDataQuery - Serialization/Deserialization #2")
{
  IMC::HistoricDataQuery msg;
  msg.setTimeStamp(0.736464112996313);
  msg.setSource(43127U);
  msg.setSourceEntity(222U);
  msg.setDestination(47254U);
  msg.setDestinationEntity(240U);
  msg.req_id = 25484U;
  msg.type = 115U;
  msg.max_size = 43414U;
  IMC::HistoricData tmp_msg_0;
  tmp_msg_0.base_lat = 0.14035607134069572f;
  tmp_msg_0.base_lon = 0.8757337802526812f;
  tmp_msg_0.base_time = 0.654731098022955f;
  msg.data.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteCommand - Serialization/Deserialization #0")
{
  IMC::RemoteCommand msg;
  msg.setTimeStamp(0.46643831446342277);
  msg.setSource(55077U);
  msg.setSourceEntity(189U);
  msg.setDestination(43357U);
  msg.setDestinationEntity(93U);
  msg.original_source = 59160U;
  msg.destination = 42345U;
  msg.timeout = 0.44328880519495495;
  IMC::UsblAngles tmp_msg_0;
  tmp_msg_0.target = 16059U;
  tmp_msg_0.bearing = 0.5489025246445632f;
  tmp_msg_0.elevation = 0.17653606391773935f;
  msg.cmd.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteCommand - Serialization/Deserialization #1")
{
  IMC::RemoteCommand msg;
  msg.setTimeStamp(0.2593065347300445);
  msg.setSource(19987U);
  msg.setSourceEntity(115U);
  msg.setDestination(55975U);
  msg.setDestinationEntity(151U);
  msg.original_source = 47640U;
  msg.destination = 56012U;
  msg.timeout = 0.8776565867459103;
  IMC::UamRxFrame tmp_msg_0;
  tmp_msg_0.sys_src.assign("XTEWKQDKROJZGPBZGZZ");
  tmp_msg_0.sys_dst.assign("QNLNDSHBYMSRPAQQUGIJXWGVKMXCVUPQLLFTDBIRNGWXXIJFRBKNDPDFKPUDHRAJWEORAIABKGMBANKGQLWZUMRTASZGVLPQJYZAIAYVSMLEMGCWFGXC");
  tmp_msg_0.flags = 189U;
  const char tmp_tmp_msg_0_0[] = {95, 110, 85, -10, -24, 124, -38, 40, -123, -16, 43, 19, -13, 1, -24, 52, -17, 24, 6, -32, -59, -23, -10, -83, -45, -73, 25, -113, -17, 60, 45, 75, -111, 28, -18, -12, 55, -120, -46, 52, -80, 102, -73, 19, -107, -31, 50, -24, 48, -67, -7, -30, -32, 98, 11, -59, -80, -83, 97, -85, -121, -110, -95, -125, 112, -5, -69, 120, 46, 46, -125, -119, -48, -123, 99, 58, -33, 6, -32, -67, -26, -19, -117, -29, -53, -64, 102, 87, -78, 102, -38, 2, 5, 17, -3, -20, -15, 41, -54, 97, -35, 64, 126, 29, -31, 5, -23, 10};
  tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
  msg.cmd.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteCommand - Serialization/Deserialization #2")
{
  IMC::RemoteCommand msg;
  msg.setTimeStamp(0.9772297025919595);
  msg.setSource(39218U);
  msg.setSourceEntity(118U);
  msg.setDestination(2531U);
  msg.setDestinationEntity(71U);
  msg.original_source = 61017U;
  msg.destination = 15546U;
  msg.timeout = 0.5019079910739743;
  IMC::CcuEvent tmp_msg_0;
  tmp_msg_0.type = 78U;
  tmp_msg_0.id.assign("DUFOABZYIGFOTZEEDCFNXNMOQJXTEBWWLJRQXCAKUTSSXMFTVEPWJUAHNEALARTHLPODOGBNQKUGZRXNZSGXBANSMWRQMYOWWJMBBCKYXVSLKCVDTNGSREHPGNPIIKRVOHMIVMPUJQIUESZBJWBIRDTGZHTKXFOVFLWHIZKOUQADYHHPVCCGSSVEUWICRXZJDBCBFGHQEQMAWC");
  IMC::UamRxRange tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.seq = 25383U;
  tmp_tmp_msg_0_0.sys.assign("BWYPWEWJTTLQMBMVZGIKWVBFWJOWIBNYJNQFDIOXBFTJVARCCAOFVDEXCDNQPGEUEKBRAVAUQRCQQMDXMPIBFHOGQSMLGWCCZZRNCKPKVUXIUOYMFTPZDSPJUJPOEUJYEYLERIHIYOHXHDCRLTFSYQYZSKG");
  tmp_tmp_msg_0_0.value = 0.008896982957782185f;
  tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
  msg.cmd.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblRange - Serialization/Deserialization #0")
{
  IMC::LblRange msg;
  msg.setTimeStamp(0.8687779570645984);
  msg.setSource(59310U);
  msg.setSourceEntity(251U);
  msg.setDestination(61053U);
  msg.setDestinationEntity(245U);
  msg.id = 34U;
  msg.range = 0.3715793711436254f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblRange - Serialization/Deserialization #1")
{
  IMC::LblRange msg;
  msg.setTimeStamp(0.14675154751807862);
  msg.setSource(33329U);
  msg.setSourceEntity(0U);
  msg.setDestination(16735U);
  msg.setDestinationEntity(106U);
  msg.id = 56U;
  msg.range = 0.32218098529817907f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblRange - Serialization/Deserialization #2")
{
  IMC::LblRange msg;
  msg.setTimeStamp(0.38241321614908463);
  msg.setSource(62290U);
  msg.setSourceEntity(95U);
  msg.setDestination(33047U);
  msg.setDestinationEntity(104U);
  msg.id = 213U;
  msg.range = 0.5357532170969598f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblBeacon - Serialization/Deserialization #0")
{
  IMC::LblBeacon msg;
  msg.setTimeStamp(0.353232443900089);
  msg.setSource(6526U);
  msg.setSourceEntity(190U);
  msg.setDestination(58429U);
  msg.setDestinationEntity(225U);
  msg.beacon.assign("TOHCTCHZXNKDZHUAAUOFYBNIKBZRFHDRVGOBJQSGDWZSBLEAFIKPDZCAVOICJUIEWPHXGTLEICCBCTJZABILVTTTQBANAEXDEQJNDIVWNGJYYMOOJYQIPDRLMWOOZFEFYYKSGTFXRLEVHSESDVNWSSGOMXQGHJDFGUPSUWNJUUGQIPYOMRSTRLBRCFGEXPRX");
  msg.lat = 0.3772284202926467;
  msg.lon = 0.2457550068153157;
  msg.depth = 0.6906358950678718f;
  msg.query_channel = 15U;
  msg.reply_channel = 143U;
  msg.transponder_delay = 214U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblBeacon - Serialization/Deserialization #1")
{
  IMC::LblBeacon msg;
  msg.setTimeStamp(0.4059476137061594);
  msg.setSource(21541U);
  msg.setSourceEntity(2U);
  msg.setDestination(30678U);
  msg.setDestinationEntity(21U);
  msg.beacon.assign("RPCJGYRVZNGKDJDOUMKSXWCEVGXZBZJHTQEEQPIKXFTKHOQXPGDUURMYGQEBMGBAJTLFKNISMHJOMJNISWXBBLUFNJKABZBNEQGJAUZJBPQKYZZUODINNODNWMWVZUTYHEAWWRZIYNHXSCDLIHLVLCPOASC");
  msg.lat = 0.2901360716114939;
  msg.lon = 0.5833988266028508;
  msg.depth = 0.3129245694246938f;
  msg.query_channel = 14U;
  msg.reply_channel = 74U;
  msg.transponder_delay = 238U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblBeacon - Serialization/Deserialization #2")
{
  IMC::LblBeacon msg;
  msg.setTimeStamp(0.22090891227457432);
  msg.setSource(6859U);
  msg.setSourceEntity(78U);
  msg.setDestination(37188U);
  msg.setDestinationEntity(183U);
  msg.beacon.assign("NLLJHBCJKVENZQNAEDWVADHUEMTVOOXIPKTZROMOZPSAGMPZTOFIYJMESRQVSPWZFNBRKPBNBQMRYWIIJGFIESZWUZYBZD");
  msg.lat = 0.5914774487556427;
  msg.lon = 0.14019889432272126;
  msg.depth = 0.900728605517678f;
  msg.query_channel = 16U;
  msg.reply_channel = 156U;
  msg.transponder_delay = 124U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblConfig - Serialization/Deserialization #0")
{
  IMC::LblConfig msg;
  msg.setTimeStamp(0.09301724399019062);
  msg.setSource(48291U);
  msg.setSourceEntity(14U);
  msg.setDestination(1735U);
  msg.setDestinationEntity(139U);
  msg.op = 201U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblConfig - Serialization/Deserialization #1")
{
  IMC::LblConfig msg;
  msg.setTimeStamp(0.15741452785401855);
  msg.setSource(24881U);
  msg.setSourceEntity(114U);
  msg.setDestination(8048U);
  msg.setDestinationEntity(16U);
  msg.op = 9U;
  IMC::LblBeacon tmp_msg_0;
  tmp_msg_0.beacon.assign("OQZJOMMLECXFGUKJGFVNYXQCNMVCAHDUUYPJHYAYJDTPMEDAJMXILMTAFSQFMOTBHOHSGKLICYLUQCXAHZUGLLNVPPWYBXLZPYQARUHFBMDJIKSEVGQOIWZNNCIBIQ");
  tmp_msg_0.lat = 0.009170743451120678;
  tmp_msg_0.lon = 0.47346926331666617;
  tmp_msg_0.depth = 0.7098726733648998f;
  tmp_msg_0.query_channel = 47U;
  tmp_msg_0.reply_channel = 11U;
  tmp_msg_0.transponder_delay = 207U;
  msg.beacons.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblConfig - Serialization/Deserialization #2")
{
  IMC::LblConfig msg;
  msg.setTimeStamp(0.47791489848234736);
  msg.setSource(19870U);
  msg.setSourceEntity(194U);
  msg.setDestination(48314U);
  msg.setDestinationEntity(12U);
  msg.op = 213U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticMessage - Serialization/Deserialization #0")
{
  IMC::AcousticMessage msg;
  msg.setTimeStamp(0.5736465289179908);
  msg.setSource(4989U);
  msg.setSourceEntity(210U);
  msg.setDestination(16628U);
  msg.setDestinationEntity(7U);
  IMC::VehicleCommand tmp_msg_0;
  tmp_msg_0.type = 90U;
  tmp_msg_0.request_id = 12694U;
  tmp_msg_0.command = 64U;
  IMC::AutonomousSection tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.lat = 0.5921433122744356;
  tmp_tmp_msg_0_0.lon = 0.4462267492047941;
  tmp_tmp_msg_0_0.speed = 0.6685636322530198f;
  tmp_tmp_msg_0_0.speed_units = 149U;
  tmp_tmp_msg_0_0.limits = 38U;
  tmp_tmp_msg_0_0.max_depth = 0.7353687942358803;
  tmp_tmp_msg_0_0.min_alt = 0.9787150275923302;
  tmp_tmp_msg_0_0.time_limit = 0.18447511391150484;
  IMC::PolygonVertex tmp_tmp_tmp_msg_0_0_0;
  tmp_tmp_tmp_msg_0_0_0.lat = 0.435832682023801;
  tmp_tmp_tmp_msg_0_0_0.lon = 0.1588555547504269;
  tmp_tmp_msg_0_0.area_limits.push_back(tmp_tmp_tmp_msg_0_0_0);
  tmp_tmp_msg_0_0.controller.assign("JTFOHWRYAGVATCHHTKBPRVLYXHPUTVGJOODBHYVJOKNDQDIPJQVVXVJRFNKCECNXXAIXWBDAMSWKOUNUGOLFFQEUZZKUQAESXRDNHEGLYJAZPMUBUKTYGXKLQIKXGRQAPSZLOIIHBDUTCBJEFYQUEBCMBXVRLSTWUPCZTSFSECBQWEZAGDMWKANYDWNYZIHMIEMPGILAWTGSBOZXFZPELLHVSMIWMHVPRGOQMMJSFNCRZDRQTCOJNRSWYKDFC");
  tmp_tmp_msg_0_0.custom.assign("RFXMEWLTJISZZHQOSPDZYDPFRUOISBMYTKXZNACQUEBPBKMHJWIEJBZNFPOBKGOEOIKWFDKSUHGCLSKGPCUWEROLWHAJRKHNBJYENAMQGIACOTEFXFQNJMYXGYEDNAVDFQUHYRLXRQPXZOVCIVCUITSVAQBZSVDNCFCVXTAYAONPNGBMZQZLJA");
  tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
  tmp_msg_0.calib_time = 21422U;
  tmp_msg_0.info.assign("ZBMWRCVAMYVDUQUOTELFPMBK");
  msg.message.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticMessage - Serialization/Deserialization #1")
{
  IMC::AcousticMessage msg;
  msg.setTimeStamp(0.44038546975693715);
  msg.setSource(25284U);
  msg.setSourceEntity(54U);
  msg.setDestination(62144U);
  msg.setDestinationEntity(45U);
  IMC::UsblModem tmp_msg_0;
  tmp_msg_0.name.assign("WPWUKQJMVQRCWNI");
  tmp_msg_0.lat = 0.2962893597700105;
  tmp_msg_0.lon = 0.0514458998772539;
  tmp_msg_0.z = 0.19822242111052146f;
  tmp_msg_0.z_units = 89U;
  msg.message.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticMessage - Serialization/Deserialization #2")
{
  IMC::AcousticMessage msg;
  msg.setTimeStamp(0.9549314846218835);
  msg.setSource(42721U);
  msg.setSourceEntity(98U);
  msg.setDestination(43822U);
  msg.setDestinationEntity(134U);
  IMC::FormationEvaluation tmp_msg_0;
  tmp_msg_0.type = 171U;
  tmp_msg_0.op = 41U;
  tmp_msg_0.err_mean = 0.4442915092646922f;
  tmp_msg_0.dist_min_abs = 0.4326277114386531f;
  tmp_msg_0.dist_min_mean = 0.6409772026157824f;
  tmp_msg_0.roll_rate_mean = 0.6148450473254389f;
  tmp_msg_0.time = 0.3688046321969777f;
  IMC::FormationControlParams tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.action = 45U;
  tmp_tmp_msg_0_0.lon_gain = 0.7434277304721084f;
  tmp_tmp_msg_0_0.lat_gain = 0.612872052671965f;
  tmp_tmp_msg_0_0.bond_thick = 0.9182385677604563f;
  tmp_tmp_msg_0_0.lead_gain = 0.5840448588346755f;
  tmp_tmp_msg_0_0.deconfl_gain = 0.5833184458014762f;
  tmp_tmp_msg_0_0.accel_switch_gain = 0.37467363057570124f;
  tmp_tmp_msg_0_0.safe_dist = 0.6026140046981399f;
  tmp_tmp_msg_0_0.deconflict_offset = 0.16592502813464327f;
  tmp_tmp_msg_0_0.accel_safe_margin = 0.21992204582441277f;
  tmp_tmp_msg_0_0.accel_lim_x = 0.495400738045802f;
  tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
  msg.message.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticOperation - Serialization/Deserialization #0")
{
  IMC::AcousticOperation msg;
  msg.setTimeStamp(0.8259888960463695);
  msg.setSource(53062U);
  msg.setSourceEntity(159U);
  msg.setDestination(6325U);
  msg.setDestinationEntity(111U);
  msg.op = 254U;
  msg.system.assign("JPRLAYZBRWTECQRRMPVKQEXXGUTIAZPPOSNDQLAFRXLSLFSBURAAYBTWVJHKNAXDFEJIFQFOHCQWDBSPGIPIGOKTNBLCDWIFHYNBZHTMOXWYSCKLJYAZMGFOXVYNSOPVEESQDCUBDUMWDXZZJUVO");
  msg.range = 0.5925198628711486f;
  IMC::VSWR tmp_msg_0;
  tmp_msg_0.value = 0.10654835855537015f;
  msg.msg.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticOperation - Serialization/Deserialization #1")
{
  IMC::AcousticOperation msg;
  msg.setTimeStamp(0.9903670207945959);
  msg.setSource(50224U);
  msg.setSourceEntity(231U);
  msg.setDestination(35678U);
  msg.setDestinationEntity(51U);
  msg.op = 138U;
  msg.system.assign("WILNUQODKORMVYMNXGODKXBGKOGXBVQVUSCUXEKYJTWQZDDOHJNBXRAIXBLAIFUXJFRETIPQANB");
  msg.range = 0.9956972214317231f;
  IMC::CreateSession tmp_msg_0;
  tmp_msg_0.timeout = 1502133388U;
  msg.msg.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticOperation - Serialization/Deserialization #2")
{
  IMC::AcousticOperation msg;
  msg.setTimeStamp(0.8953565350844079);
  msg.setSource(52605U);
  msg.setSourceEntity(194U);
  msg.setDestination(25568U);
  msg.setDestinationEntity(177U);
  msg.op = 48U;
  msg.system.assign("PBHIUFXXOQHCYMVSMNXVPUPFKSCBWVMJFXWNGYQDPZQWSEIZFHZEYSNHTSZRAXRMZZSJAZPRCHCGDBZJGVWECFEKOVVSLCLJIKTFVLMTNYKXEQPUIKMQGAJQYGNNWIJLEDXVZKTAAKTGGFYGNWQOFTDUABC");
  msg.range = 0.6671533443644193f;
  IMC::EmergencyControlState tmp_msg_0;
  tmp_msg_0.state = 89U;
  tmp_msg_0.plan_id.assign("TWYWILXTABUYKGCIQXNQEYBKSHCDGMVVRRYTTOZWXYQDFU");
  tmp_msg_0.comm_level = 100U;
  msg.msg.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticSystemsQuery - Serialization/Deserialization #0")
{
  IMC::AcousticSystemsQuery msg;
  msg.setTimeStamp(0.13010388369268333);
  msg.setSource(49179U);
  msg.setSourceEntity(164U);
  msg.setDestination(38402U);
  msg.setDestinationEntity(93U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticSystemsQuery - Serialization/Deserialization #1")
{
  IMC::AcousticSystemsQuery msg;
  msg.setTimeStamp(0.6090167692555621);
  msg.setSource(18541U);
  msg.setSourceEntity(29U);
  msg.setDestination(16480U);
  msg.setDestinationEntity(220U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticSystemsQuery - Serialization/Deserialization #2")
{
  IMC::AcousticSystemsQuery msg;
  msg.setTimeStamp(0.7635008969908608);
  msg.setSource(16531U);
  msg.setSourceEntity(112U);
  msg.setDestination(55523U);
  msg.setDestinationEntity(120U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticSystems - Serialization/Deserialization #0")
{
  IMC::AcousticSystems msg;
  msg.setTimeStamp(0.3370805093480561);
  msg.setSource(50345U);
  msg.setSourceEntity(217U);
  msg.setDestination(44485U);
  msg.setDestinationEntity(237U);
  msg.list.assign("PLYBHSGOOULLECOEQDXGLZUTCALTNNWHTQYEKBAJMOUXLGNWGVEBXIYSKYSDATQNXPXRJRWOIMMFTAVTKXIXLTB");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticSystems - Serialization/Deserialization #1")
{
  IMC::AcousticSystems msg;
  msg.setTimeStamp(0.4476516924525936);
  msg.setSource(52107U);
  msg.setSourceEntity(79U);
  msg.setDestination(32173U);
  msg.setDestinationEntity(202U);
  msg.list.assign("QRXHPORKCFHWXBSJW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticSystems - Serialization/Deserialization #2")
{
  IMC::AcousticSystems msg;
  msg.setTimeStamp(0.34489915888325606);
  msg.setSource(28061U);
  msg.setSourceEntity(221U);
  msg.setDestination(22281U);
  msg.setDestinationEntity(53U);
  msg.list.assign("WLMRRHZSECNMJSMXJKYRBNEGTFCEWTUOWDVMBAIWHQFTPMRXVYIALNCYVCS");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticLink - Serialization/Deserialization #0")
{
  IMC::AcousticLink msg;
  msg.setTimeStamp(0.1469119650612256);
  msg.setSource(57657U);
  msg.setSourceEntity(227U);
  msg.setDestination(48742U);
  msg.setDestinationEntity(177U);
  msg.peer.assign("OXUMDBQEXVZYSZPNWACHJGOUDATEPNPIPTJNZNJJVNMFJASRWRCGPXMQJXEQFSCTEPOHHBGKVMUDAEB");
  msg.rssi = 0.722864511127454f;
  msg.integrity = 35676U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticLink - Serialization/Deserialization #1")
{
  IMC::AcousticLink msg;
  msg.setTimeStamp(0.6677834159148747);
  msg.setSource(23303U);
  msg.setSourceEntity(33U);
  msg.setDestination(19543U);
  msg.setDestinationEntity(235U);
  msg.peer.assign("KLUKOVOYQMFPCPFPEIXXTHGMTFEHYHIZUBINBKCTICIJQBNDWSXFYTLZEGD");
  msg.rssi = 0.6921069371583028f;
  msg.integrity = 54420U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AcousticLink - Serialization/Deserialization #2")
{
  IMC::AcousticLink msg;
  msg.setTimeStamp(0.42164556941993947);
  msg.setSource(23815U);
  msg.setSourceEntity(157U);
  msg.setDestination(20230U);
  msg.setDestinationEntity(85U);
  msg.peer.assign("SGJOHYMDBAPLJSZWAGIAFDPXMFCFNFUDBLJNJNKZUIURQHODQWKZVELNZPEVYIHRPYFJDBUWSRXSNNWHTQSHZILBZJQTWBTLNANCTDZBRGEDSIGIRRMGLIKGUYFTAHVWKQEFVOQEYCXTFUOAYPBXEMGWMOKLWJRIYPLCDMQKCDXTLIGAFETJ");
  msg.rssi = 0.8475979210046473f;
  msg.integrity = 32874U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Rpm - Serialization/Deserialization #0")
{
  IMC::Rpm msg;
  msg.setTimeStamp(0.06045576701220945);
  msg.setSource(9467U);
  msg.setSourceEntity(144U);
  msg.setDestination(38482U);
  msg.setDestinationEntity(25U);
  msg.value = -29133;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Rpm - Serialization/Deserialization #1")
{
  IMC::Rpm msg;
  msg.setTimeStamp(0.02251487176628819);
  msg.setSource(60469U);
  msg.setSourceEntity(248U);
  msg.setDestination(5731U);
  msg.setDestinationEntity(10U);
  msg.value = -14544;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Rpm - Serialization/Deserialization #2")
{
  IMC::Rpm msg;
  msg.setTimeStamp(0.10068117297019008);
  msg.setSource(47445U);
  msg.setSourceEntity(200U);
  msg.setDestination(27766U);
  msg.setDestinationEntity(151U);
  msg.value = 1332;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Voltage - Serialization/Deserialization #0")
{
  IMC::Voltage msg;
  msg.setTimeStamp(0.0823097389146965);
  msg.setSource(23154U);
  msg.setSourceEntity(242U);
  msg.setDestination(60161U);
  msg.setDestinationEntity(202U);
  msg.value = 0.2360389354992649f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Voltage - Serialization/Deserialization #1")
{
  IMC::Voltage msg;
  msg.setTimeStamp(0.579516527424015);
  msg.setSource(35041U);
  msg.setSourceEntity(8U);
  msg.setDestination(35305U);
  msg.setDestinationEntity(153U);
  msg.value = 0.5834305565563446f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Voltage - Serialization/Deserialization #2")
{
  IMC::Voltage msg;
  msg.setTimeStamp(0.5726821015090651);
  msg.setSource(12598U);
  msg.setSourceEntity(24U);
  msg.setDestination(54724U);
  msg.setDestinationEntity(157U);
  msg.value = 0.8384426576891651f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Current - Serialization/Deserialization #0")
{
  IMC::Current msg;
  msg.setTimeStamp(0.8017114303997995);
  msg.setSource(48262U);
  msg.setSourceEntity(239U);
  msg.setDestination(50413U);
  msg.setDestinationEntity(20U);
  msg.value = 0.9116849600190434f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Current - Serialization/Deserialization #1")
{
  IMC::Current msg;
  msg.setTimeStamp(0.9045985460424214);
  msg.setSource(53833U);
  msg.setSourceEntity(224U);
  msg.setDestination(4493U);
  msg.setDestinationEntity(79U);
  msg.value = 0.5872400464498223f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Current - Serialization/Deserialization #2")
{
  IMC::Current msg;
  msg.setTimeStamp(0.16940190470677308);
  msg.setSource(57899U);
  msg.setSourceEntity(139U);
  msg.setDestination(25659U);
  msg.setDestinationEntity(167U);
  msg.value = 0.720439152095447f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFix - Serialization/Deserialization #0")
{
  IMC::GpsFix msg;
  msg.setTimeStamp(0.3089458058156377);
  msg.setSource(7974U);
  msg.setSourceEntity(252U);
  msg.setDestination(31545U);
  msg.setDestinationEntity(232U);
  msg.validity = 17814U;
  msg.type = 127U;
  msg.utc_year = 34949U;
  msg.utc_month = 242U;
  msg.utc_day = 7U;
  msg.utc_time = 0.9686489085694079f;
  msg.lat = 0.7476294777505096;
  msg.lon = 0.06265885854835351;
  msg.height = 0.30181423838736376f;
  msg.satellites = 222U;
  msg.cog = 0.5055576076443408f;
  msg.sog = 0.49947735097163537f;
  msg.hdop = 0.9247240911559818f;
  msg.vdop = 0.3788261117001759f;
  msg.hacc = 0.5848685657888198f;
  msg.vacc = 0.8708867711819475f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFix - Serialization/Deserialization #1")
{
  IMC::GpsFix msg;
  msg.setTimeStamp(0.6128666194120956);
  msg.setSource(36282U);
  msg.setSourceEntity(67U);
  msg.setDestination(64732U);
  msg.setDestinationEntity(48U);
  msg.validity = 7267U;
  msg.type = 65U;
  msg.utc_year = 43701U;
  msg.utc_month = 57U;
  msg.utc_day = 20U;
  msg.utc_time = 0.060083834249363255f;
  msg.lat = 0.4880485460655909;
  msg.lon = 0.4431432509921146;
  msg.height = 0.48980653782696093f;
  msg.satellites = 216U;
  msg.cog = 0.2531489040441188f;
  msg.sog = 0.8571902043450081f;
  msg.hdop = 0.8707382111622577f;
  msg.vdop = 0.20650248813286243f;
  msg.hacc = 0.5917553556248176f;
  msg.vacc = 0.04371585108820497f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFix - Serialization/Deserialization #2")
{
  IMC::GpsFix msg;
  msg.setTimeStamp(0.8194130265398928);
  msg.setSource(47164U);
  msg.setSourceEntity(182U);
  msg.setDestination(56900U);
  msg.setDestinationEntity(226U);
  msg.validity = 11922U;
  msg.type = 215U;
  msg.utc_year = 29696U;
  msg.utc_month = 95U;
  msg.utc_day = 98U;
  msg.utc_time = 0.7905241659469655f;
  msg.lat = 0.17223340042698976;
  msg.lon = 0.008878567807849458;
  msg.height = 0.9469864833988977f;
  msg.satellites = 175U;
  msg.cog = 0.08175176652572913f;
  msg.sog = 0.7517535682728381f;
  msg.hdop = 0.42645848544836407f;
  msg.vdop = 0.5890363065779511f;
  msg.hacc = 0.9057120316565938f;
  msg.vacc = 0.04852500430818063f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EulerAngles - Serialization/Deserialization #0")
{
  IMC::EulerAngles msg;
  msg.setTimeStamp(0.5262795726730498);
  msg.setSource(7152U);
  msg.setSourceEntity(37U);
  msg.setDestination(24869U);
  msg.setDestinationEntity(187U);
  msg.time = 0.03759410751580017;
  msg.phi = 0.28950663407014476;
  msg.theta = 0.502560415154178;
  msg.psi = 0.7214512775693877;
  msg.psi_magnetic = 0.04686492789691332;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EulerAngles - Serialization/Deserialization #1")
{
  IMC::EulerAngles msg;
  msg.setTimeStamp(0.21093326918698307);
  msg.setSource(45231U);
  msg.setSourceEntity(138U);
  msg.setDestination(18396U);
  msg.setDestinationEntity(220U);
  msg.time = 0.521668210834882;
  msg.phi = 0.6323666556113292;
  msg.theta = 0.09092130462412085;
  msg.psi = 0.13953465443217827;
  msg.psi_magnetic = 0.01502373772269483;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EulerAngles - Serialization/Deserialization #2")
{
  IMC::EulerAngles msg;
  msg.setTimeStamp(0.3571210321385787);
  msg.setSource(17483U);
  msg.setSourceEntity(35U);
  msg.setDestination(21163U);
  msg.setDestinationEntity(192U);
  msg.time = 0.2720772009053446;
  msg.phi = 0.623274644754831;
  msg.theta = 0.7070383556595576;
  msg.psi = 0.5430990212608519;
  msg.psi_magnetic = 0.18179570947850443;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EulerAnglesDelta - Serialization/Deserialization #0")
{
  IMC::EulerAnglesDelta msg;
  msg.setTimeStamp(0.7081809054287752);
  msg.setSource(12865U);
  msg.setSourceEntity(144U);
  msg.setDestination(46255U);
  msg.setDestinationEntity(74U);
  msg.time = 0.5826718075834492;
  msg.x = 0.6884864572003964;
  msg.y = 0.9764454293784901;
  msg.z = 0.3742057780914463;
  msg.timestep = 0.4535502404155879f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EulerAnglesDelta - Serialization/Deserialization #1")
{
  IMC::EulerAnglesDelta msg;
  msg.setTimeStamp(0.8749063095564138);
  msg.setSource(3798U);
  msg.setSourceEntity(174U);
  msg.setDestination(21604U);
  msg.setDestinationEntity(225U);
  msg.time = 0.15859870234146867;
  msg.x = 0.7295458023349375;
  msg.y = 0.1463970138684887;
  msg.z = 0.7465535129299983;
  msg.timestep = 0.6839852736959227f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EulerAnglesDelta - Serialization/Deserialization #2")
{
  IMC::EulerAnglesDelta msg;
  msg.setTimeStamp(0.4677831569785308);
  msg.setSource(35997U);
  msg.setSourceEntity(144U);
  msg.setDestination(37281U);
  msg.setDestinationEntity(50U);
  msg.time = 0.8022505287040297;
  msg.x = 0.4852311262567126;
  msg.y = 0.08984533916217241;
  msg.z = 0.621924683363462;
  msg.timestep = 0.021733326547200615f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AngularVelocity - Serialization/Deserialization #0")
{
  IMC::AngularVelocity msg;
  msg.setTimeStamp(0.0793846399603606);
  msg.setSource(64348U);
  msg.setSourceEntity(43U);
  msg.setDestination(14900U);
  msg.setDestinationEntity(50U);
  msg.time = 0.2471341554544716;
  msg.x = 0.649211467395292;
  msg.y = 0.33328415919234067;
  msg.z = 0.6017984837176015;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AngularVelocity - Serialization/Deserialization #1")
{
  IMC::AngularVelocity msg;
  msg.setTimeStamp(0.39841313524536737);
  msg.setSource(16336U);
  msg.setSourceEntity(0U);
  msg.setDestination(16207U);
  msg.setDestinationEntity(169U);
  msg.time = 0.9935115075293942;
  msg.x = 0.5105752448285574;
  msg.y = 0.4202791821217412;
  msg.z = 0.20140626747277435;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AngularVelocity - Serialization/Deserialization #2")
{
  IMC::AngularVelocity msg;
  msg.setTimeStamp(0.6590865947389599);
  msg.setSource(49510U);
  msg.setSourceEntity(56U);
  msg.setDestination(43222U);
  msg.setDestinationEntity(44U);
  msg.time = 0.10694442780611757;
  msg.x = 0.546968933215906;
  msg.y = 0.82810641792665;
  msg.z = 0.15123465291295324;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Acceleration - Serialization/Deserialization #0")
{
  IMC::Acceleration msg;
  msg.setTimeStamp(0.5314293753714768);
  msg.setSource(13465U);
  msg.setSourceEntity(117U);
  msg.setDestination(34628U);
  msg.setDestinationEntity(216U);
  msg.time = 0.7066100852140563;
  msg.x = 0.26222584067397947;
  msg.y = 0.9949601814359297;
  msg.z = 0.671905888002448;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Acceleration - Serialization/Deserialization #1")
{
  IMC::Acceleration msg;
  msg.setTimeStamp(0.5717256798141949);
  msg.setSource(8796U);
  msg.setSourceEntity(175U);
  msg.setDestination(25892U);
  msg.setDestinationEntity(190U);
  msg.time = 0.16186275177438114;
  msg.x = 0.21671120193520166;
  msg.y = 0.2673186023514952;
  msg.z = 0.5550050659320721;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Acceleration - Serialization/Deserialization #2")
{
  IMC::Acceleration msg;
  msg.setTimeStamp(0.06057676971645021);
  msg.setSource(18461U);
  msg.setSourceEntity(89U);
  msg.setDestination(31305U);
  msg.setDestinationEntity(238U);
  msg.time = 0.19018933373194125;
  msg.x = 0.3954798241452827;
  msg.y = 0.4933332723933904;
  msg.z = 0.7714861431706629;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MagneticField - Serialization/Deserialization #0")
{
  IMC::MagneticField msg;
  msg.setTimeStamp(0.3682848011542237);
  msg.setSource(14960U);
  msg.setSourceEntity(249U);
  msg.setDestination(55255U);
  msg.setDestinationEntity(13U);
  msg.time = 0.5644558991168854;
  msg.x = 0.9683484482272574;
  msg.y = 0.8967320679595513;
  msg.z = 0.697093354128959;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MagneticField - Serialization/Deserialization #1")
{
  IMC::MagneticField msg;
  msg.setTimeStamp(0.8384567751280164);
  msg.setSource(63471U);
  msg.setSourceEntity(219U);
  msg.setDestination(59376U);
  msg.setDestinationEntity(105U);
  msg.time = 0.44750548031172865;
  msg.x = 0.7732711896083898;
  msg.y = 0.788757457714668;
  msg.z = 0.7595705159332926;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MagneticField - Serialization/Deserialization #2")
{
  IMC::MagneticField msg;
  msg.setTimeStamp(0.8197055221171405);
  msg.setSource(60197U);
  msg.setSourceEntity(195U);
  msg.setDestination(37378U);
  msg.setDestinationEntity(51U);
  msg.time = 0.21600992693704324;
  msg.x = 0.41476909093055037;
  msg.y = 0.8534483573380737;
  msg.z = 0.4365928043285391;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroundVelocity - Serialization/Deserialization #0")
{
  IMC::GroundVelocity msg;
  msg.setTimeStamp(0.6682657606024616);
  msg.setSource(40375U);
  msg.setSourceEntity(23U);
  msg.setDestination(48670U);
  msg.setDestinationEntity(220U);
  msg.validity = 155U;
  msg.x = 0.20463257974267068;
  msg.y = 0.1636450256182671;
  msg.z = 0.6294543628173582;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroundVelocity - Serialization/Deserialization #1")
{
  IMC::GroundVelocity msg;
  msg.setTimeStamp(0.551480289402606);
  msg.setSource(40640U);
  msg.setSourceEntity(37U);
  msg.setDestination(54627U);
  msg.setDestinationEntity(202U);
  msg.validity = 142U;
  msg.x = 0.36988616437526034;
  msg.y = 0.7619081839968899;
  msg.z = 0.23384935521706252;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroundVelocity - Serialization/Deserialization #2")
{
  IMC::GroundVelocity msg;
  msg.setTimeStamp(0.8511968666786329);
  msg.setSource(20725U);
  msg.setSourceEntity(120U);
  msg.setDestination(56541U);
  msg.setDestinationEntity(11U);
  msg.validity = 74U;
  msg.x = 0.4436830868063165;
  msg.y = 0.9027329787707918;
  msg.z = 0.2952341839944167;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WaterVelocity - Serialization/Deserialization #0")
{
  IMC::WaterVelocity msg;
  msg.setTimeStamp(0.3288733755976495);
  msg.setSource(2373U);
  msg.setSourceEntity(242U);
  msg.setDestination(20817U);
  msg.setDestinationEntity(6U);
  msg.validity = 48U;
  msg.x = 0.01209301082082237;
  msg.y = 0.29431483138546044;
  msg.z = 0.5821486820510365;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WaterVelocity - Serialization/Deserialization #1")
{
  IMC::WaterVelocity msg;
  msg.setTimeStamp(0.29117886188156783);
  msg.setSource(35793U);
  msg.setSourceEntity(82U);
  msg.setDestination(50224U);
  msg.setDestinationEntity(31U);
  msg.validity = 254U;
  msg.x = 0.14191977890312701;
  msg.y = 0.25789711888399547;
  msg.z = 0.24686807991518234;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WaterVelocity - Serialization/Deserialization #2")
{
  IMC::WaterVelocity msg;
  msg.setTimeStamp(0.7294702173821405);
  msg.setSource(12349U);
  msg.setSourceEntity(169U);
  msg.setDestination(40713U);
  msg.setDestinationEntity(111U);
  msg.validity = 164U;
  msg.x = 0.07177395712264845;
  msg.y = 0.20538877037443726;
  msg.z = 0.4180935731624341;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VelocityDelta - Serialization/Deserialization #0")
{
  IMC::VelocityDelta msg;
  msg.setTimeStamp(0.8145395688786962);
  msg.setSource(18287U);
  msg.setSourceEntity(123U);
  msg.setDestination(50665U);
  msg.setDestinationEntity(206U);
  msg.time = 0.9852777750935863;
  msg.x = 0.7448159207149336;
  msg.y = 0.6126442411636364;
  msg.z = 0.2673182537340605;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VelocityDelta - Serialization/Deserialization #1")
{
  IMC::VelocityDelta msg;
  msg.setTimeStamp(0.2190809849010703);
  msg.setSource(22399U);
  msg.setSourceEntity(57U);
  msg.setDestination(27928U);
  msg.setDestinationEntity(82U);
  msg.time = 0.24185252633421905;
  msg.x = 0.022495934087597536;
  msg.y = 0.8744859696431511;
  msg.z = 0.01109775931126089;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VelocityDelta - Serialization/Deserialization #2")
{
  IMC::VelocityDelta msg;
  msg.setTimeStamp(0.12763896617751158);
  msg.setSource(22403U);
  msg.setSourceEntity(219U);
  msg.setDestination(45667U);
  msg.setDestinationEntity(44U);
  msg.time = 0.670662684001748;
  msg.x = 0.09153064937602529;
  msg.y = 0.8499944845395144;
  msg.z = 0.41879144685122627;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Distance - Serialization/Deserialization #0")
{
  IMC::Distance msg;
  msg.setTimeStamp(0.13213433881905723);
  msg.setSource(10671U);
  msg.setSourceEntity(216U);
  msg.setDestination(53920U);
  msg.setDestinationEntity(67U);
  msg.validity = 80U;
  IMC::DeviceState tmp_msg_0;
  tmp_msg_0.x = 0.936569107887646f;
  tmp_msg_0.y = 0.3182257753244436f;
  tmp_msg_0.z = 0.00802809337242405f;
  tmp_msg_0.phi = 0.4015675462388102f;
  tmp_msg_0.theta = 0.46657808153251734f;
  tmp_msg_0.psi = 0.5702373271252431f;
  msg.location.push_back(tmp_msg_0);
  msg.value = 0.6611082732141181f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Distance - Serialization/Deserialization #1")
{
  IMC::Distance msg;
  msg.setTimeStamp(0.922313997285256);
  msg.setSource(18910U);
  msg.setSourceEntity(211U);
  msg.setDestination(65203U);
  msg.setDestinationEntity(9U);
  msg.validity = 242U;
  IMC::BeamConfig tmp_msg_0;
  tmp_msg_0.beam_width = 0.8641602511410945f;
  tmp_msg_0.beam_height = 0.21527784339398393f;
  msg.beam_config.push_back(tmp_msg_0);
  msg.value = 0.317939294293732f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Distance - Serialization/Deserialization #2")
{
  IMC::Distance msg;
  msg.setTimeStamp(0.8304679173131048);
  msg.setSource(8706U);
  msg.setSourceEntity(62U);
  msg.setDestination(21811U);
  msg.setDestinationEntity(82U);
  msg.validity = 36U;
  IMC::DeviceState tmp_msg_0;
  tmp_msg_0.x = 0.25144142907201583f;
  tmp_msg_0.y = 0.689904404206105f;
  tmp_msg_0.z = 0.8086692979510091f;
  tmp_msg_0.phi = 0.6871625622022686f;
  tmp_msg_0.theta = 0.7811126496858344f;
  tmp_msg_0.psi = 0.19833619325334084f;
  msg.location.push_back(tmp_msg_0);
  IMC::BeamConfig tmp_msg_1;
  tmp_msg_1.beam_width = 0.3034180957136079f;
  tmp_msg_1.beam_height = 0.6311293746956675f;
  msg.beam_config.push_back(tmp_msg_1);
  msg.value = 0.18104093157619194f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Temperature - Serialization/Deserialization #0")
{
  IMC::Temperature msg;
  msg.setTimeStamp(0.49895310387944536);
  msg.setSource(42799U);
  msg.setSourceEntity(183U);
  msg.setDestination(59863U);
  msg.setDestinationEntity(190U);
  msg.value = 0.6270441335526706f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Temperature - Serialization/Deserialization #1")
{
  IMC::Temperature msg;
  msg.setTimeStamp(0.6148992029548525);
  msg.setSource(36016U);
  msg.setSourceEntity(177U);
  msg.setDestination(43428U);
  msg.setDestinationEntity(14U);
  msg.value = 0.4426847313877481f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Temperature - Serialization/Deserialization #2")
{
  IMC::Temperature msg;
  msg.setTimeStamp(0.27698429314302997);
  msg.setSource(25741U);
  msg.setSourceEntity(115U);
  msg.setDestination(12067U);
  msg.setDestinationEntity(91U);
  msg.value = 0.6972875284480453f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Pressure - Serialization/Deserialization #0")
{
  IMC::Pressure msg;
  msg.setTimeStamp(0.1298729133149522);
  msg.setSource(51468U);
  msg.setSourceEntity(251U);
  msg.setDestination(43141U);
  msg.setDestinationEntity(16U);
  msg.value = 0.5863779488919486;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Pressure - Serialization/Deserialization #1")
{
  IMC::Pressure msg;
  msg.setTimeStamp(0.006760266507789714);
  msg.setSource(27817U);
  msg.setSourceEntity(176U);
  msg.setDestination(55450U);
  msg.setDestinationEntity(60U);
  msg.value = 0.1782921042779516;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Pressure - Serialization/Deserialization #2")
{
  IMC::Pressure msg;
  msg.setTimeStamp(0.24329911567879503);
  msg.setSource(7068U);
  msg.setSourceEntity(228U);
  msg.setDestination(32701U);
  msg.setDestinationEntity(131U);
  msg.value = 0.5495365220022251;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Depth - Serialization/Deserialization #0")
{
  IMC::Depth msg;
  msg.setTimeStamp(0.5766611617702273);
  msg.setSource(61839U);
  msg.setSourceEntity(8U);
  msg.setDestination(15380U);
  msg.setDestinationEntity(167U);
  msg.value = 0.2790532823735893f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Depth - Serialization/Deserialization #1")
{
  IMC::Depth msg;
  msg.setTimeStamp(0.1942689336171377);
  msg.setSource(13491U);
  msg.setSourceEntity(94U);
  msg.setDestination(55792U);
  msg.setDestinationEntity(78U);
  msg.value = 0.43619825753479735f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Depth - Serialization/Deserialization #2")
{
  IMC::Depth msg;
  msg.setTimeStamp(0.3017403692243814);
  msg.setSource(26599U);
  msg.setSourceEntity(158U);
  msg.setDestination(58616U);
  msg.setDestinationEntity(147U);
  msg.value = 0.8364137661899748f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DepthOffset - Serialization/Deserialization #0")
{
  IMC::DepthOffset msg;
  msg.setTimeStamp(0.33107739494028543);
  msg.setSource(50931U);
  msg.setSourceEntity(84U);
  msg.setDestination(15588U);
  msg.setDestinationEntity(83U);
  msg.value = 0.5322128344206296f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DepthOffset - Serialization/Deserialization #1")
{
  IMC::DepthOffset msg;
  msg.setTimeStamp(0.42016554143781404);
  msg.setSource(12882U);
  msg.setSourceEntity(41U);
  msg.setDestination(37506U);
  msg.setDestinationEntity(53U);
  msg.value = 0.7677014954981554f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DepthOffset - Serialization/Deserialization #2")
{
  IMC::DepthOffset msg;
  msg.setTimeStamp(0.8233676046796272);
  msg.setSource(64526U);
  msg.setSourceEntity(106U);
  msg.setDestination(50732U);
  msg.setDestinationEntity(193U);
  msg.value = 0.5962896107266232f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SoundSpeed - Serialization/Deserialization #0")
{
  IMC::SoundSpeed msg;
  msg.setTimeStamp(0.5572094786465036);
  msg.setSource(46697U);
  msg.setSourceEntity(99U);
  msg.setDestination(26196U);
  msg.setDestinationEntity(129U);
  msg.value = 0.6438131388614063f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SoundSpeed - Serialization/Deserialization #1")
{
  IMC::SoundSpeed msg;
  msg.setTimeStamp(0.8437654968896462);
  msg.setSource(43204U);
  msg.setSourceEntity(153U);
  msg.setDestination(32995U);
  msg.setDestinationEntity(250U);
  msg.value = 0.6729867444074903f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SoundSpeed - Serialization/Deserialization #2")
{
  IMC::SoundSpeed msg;
  msg.setTimeStamp(0.046077654059372475);
  msg.setSource(39584U);
  msg.setSourceEntity(198U);
  msg.setDestination(47962U);
  msg.setDestinationEntity(126U);
  msg.value = 0.9257169458302782f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WaterDensity - Serialization/Deserialization #0")
{
  IMC::WaterDensity msg;
  msg.setTimeStamp(0.5165612709469453);
  msg.setSource(1243U);
  msg.setSourceEntity(207U);
  msg.setDestination(15983U);
  msg.setDestinationEntity(182U);
  msg.value = 0.4971441364274055f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WaterDensity - Serialization/Deserialization #1")
{
  IMC::WaterDensity msg;
  msg.setTimeStamp(0.06973713298002904);
  msg.setSource(27854U);
  msg.setSourceEntity(8U);
  msg.setDestination(62701U);
  msg.setDestinationEntity(224U);
  msg.value = 0.6185729865974773f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WaterDensity - Serialization/Deserialization #2")
{
  IMC::WaterDensity msg;
  msg.setTimeStamp(0.9253898905605249);
  msg.setSource(35792U);
  msg.setSourceEntity(91U);
  msg.setDestination(44367U);
  msg.setDestinationEntity(85U);
  msg.value = 0.06796826062233374f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Conductivity - Serialization/Deserialization #0")
{
  IMC::Conductivity msg;
  msg.setTimeStamp(0.9435588852627153);
  msg.setSource(62217U);
  msg.setSourceEntity(95U);
  msg.setDestination(57570U);
  msg.setDestinationEntity(227U);
  msg.value = 0.9606406916771253f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Conductivity - Serialization/Deserialization #1")
{
  IMC::Conductivity msg;
  msg.setTimeStamp(0.6205873287708648);
  msg.setSource(20187U);
  msg.setSourceEntity(145U);
  msg.setDestination(5883U);
  msg.setDestinationEntity(65U);
  msg.value = 0.7819617889499105f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Conductivity - Serialization/Deserialization #2")
{
  IMC::Conductivity msg;
  msg.setTimeStamp(0.8994567212591863);
  msg.setSource(55548U);
  msg.setSourceEntity(84U);
  msg.setDestination(24110U);
  msg.setDestinationEntity(186U);
  msg.value = 0.8551013274598294f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Salinity - Serialization/Deserialization #0")
{
  IMC::Salinity msg;
  msg.setTimeStamp(0.48271312122058607);
  msg.setSource(63976U);
  msg.setSourceEntity(202U);
  msg.setDestination(58310U);
  msg.setDestinationEntity(98U);
  msg.value = 0.356621928787743f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Salinity - Serialization/Deserialization #1")
{
  IMC::Salinity msg;
  msg.setTimeStamp(0.21257209664990606);
  msg.setSource(45232U);
  msg.setSourceEntity(89U);
  msg.setDestination(28530U);
  msg.setDestinationEntity(78U);
  msg.value = 0.817126408907926f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Salinity - Serialization/Deserialization #2")
{
  IMC::Salinity msg;
  msg.setTimeStamp(0.9714364188743427);
  msg.setSource(54860U);
  msg.setSourceEntity(239U);
  msg.setDestination(13866U);
  msg.setDestinationEntity(203U);
  msg.value = 0.025018011443261545f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WindSpeed - Serialization/Deserialization #0")
{
  IMC::WindSpeed msg;
  msg.setTimeStamp(0.02470268597438352);
  msg.setSource(7661U);
  msg.setSourceEntity(131U);
  msg.setDestination(42902U);
  msg.setDestinationEntity(250U);
  msg.direction = 0.1048317296158553f;
  msg.speed = 0.876960254084457f;
  msg.turbulence = 0.7563791366095426f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WindSpeed - Serialization/Deserialization #1")
{
  IMC::WindSpeed msg;
  msg.setTimeStamp(0.30469586423321104);
  msg.setSource(21527U);
  msg.setSourceEntity(42U);
  msg.setDestination(20264U);
  msg.setDestinationEntity(68U);
  msg.direction = 0.03399842069180237f;
  msg.speed = 0.8062449941090799f;
  msg.turbulence = 0.34302751193911596f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("WindSpeed - Serialization/Deserialization #2")
{
  IMC::WindSpeed msg;
  msg.setTimeStamp(0.8091979882023214);
  msg.setSource(11733U);
  msg.setSourceEntity(79U);
  msg.setDestination(47359U);
  msg.setDestinationEntity(41U);
  msg.direction = 0.969129650932817f;
  msg.speed = 0.7575276531064422f;
  msg.turbulence = 0.35543455681403946f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RelativeHumidity - Serialization/Deserialization #0")
{
  IMC::RelativeHumidity msg;
  msg.setTimeStamp(0.732095362946796);
  msg.setSource(58454U);
  msg.setSourceEntity(70U);
  msg.setDestination(54005U);
  msg.setDestinationEntity(92U);
  msg.value = 0.6590252595203661f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RelativeHumidity - Serialization/Deserialization #1")
{
  IMC::RelativeHumidity msg;
  msg.setTimeStamp(0.7293932094241657);
  msg.setSource(10326U);
  msg.setSourceEntity(212U);
  msg.setDestination(5360U);
  msg.setDestinationEntity(208U);
  msg.value = 0.20505135351050985f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RelativeHumidity - Serialization/Deserialization #2")
{
  IMC::RelativeHumidity msg;
  msg.setTimeStamp(0.01586942476746267);
  msg.setSource(39762U);
  msg.setSourceEntity(140U);
  msg.setDestination(18746U);
  msg.setDestinationEntity(101U);
  msg.value = 0.15209853205492974f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevDataText - Serialization/Deserialization #0")
{
  IMC::DevDataText msg;
  msg.setTimeStamp(0.5109894724934517);
  msg.setSource(1471U);
  msg.setSourceEntity(29U);
  msg.setDestination(7984U);
  msg.setDestinationEntity(127U);
  msg.value.assign("DQRGYXWHXRTHAPNAGJBXVYWSRJECYRCCDXOXLINSHRVKLDXPQUTKNRQLSCBUNLLFDFXQJJAHFETUXOLILYAPZWEWSHPFSYBKNQBEGKPPYREHKOTVISCWAIZOACWMHQUQILBSJLFTSFTKWMCWBGEU");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevDataText - Serialization/Deserialization #1")
{
  IMC::DevDataText msg;
  msg.setTimeStamp(0.21259757484563657);
  msg.setSource(42426U);
  msg.setSourceEntity(98U);
  msg.setDestination(57781U);
  msg.setDestinationEntity(253U);
  msg.value.assign("GBHTWCIECVDMYYLJSWPPXAWSMPKTNFXOXXQLNQOHFAEQDLDQDDZSFEFHMULTGOOCUZOKEXAYWLAQUZNDGSHBKZCGAKYTWSNYWTMSNVGFJIENUYSQQWFMZBYPUTBQVMWLQBRNFSYCTEAHKEPAAHSUIANILNFFXRZGSVPBWGOPVTRMHGIKIXJLDKZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevDataText - Serialization/Deserialization #2")
{
  IMC::DevDataText msg;
  msg.setTimeStamp(0.4340923418028739);
  msg.setSource(53305U);
  msg.setSourceEntity(91U);
  msg.setDestination(26564U);
  msg.setDestinationEntity(161U);
  msg.value.assign("MXFQJCEYNCPRJEQTEWAKCOYZHKOMLHCOISFZBIESUKHXAHZEGMGDBNBVOLVSAPIFGMGVWXLHGBTPUJWLAHVAZWYCXBMFPWSMNDMGNQPBWQXXUFEWIIROKHQGJZDULLFYCTRUFGVEYYKVPSIQOKRWNGSDSN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevDataBinary - Serialization/Deserialization #0")
{
  IMC::DevDataBinary msg;
  msg.setTimeStamp(0.16092596766325662);
  msg.setSource(52873U);
  msg.setSourceEntity(233U);
  msg.setDestination(3866U);
  msg.setDestinationEntity(28U);
  const char tmp_msg_0[] = {-80, -30, -30, -90, 76, 56, -4, 12, -68, -98, -96, -112, 50, 93, 35, 37, 32, 124, 82, 26, 97, -6, 36, -63, -95, -87, 21, -7, 35, -76, -17, 32, -36, 111, 107, 85, -86, -114, 69, 98, -95, -115, 79, -126, -7, 8, 87, 85, 110, -107, 96, 97, -89, 37, -96, -53, -50, -10, -114, -16, 46, 104, 30, 105, -11, 104, -54, 42, -47, -13, -91, -109, -91, -24, 35, -80, 4, -115, -26, 25, -49, -106, 47, 47, -87, 71, 26, -76, -128, 60, 45, -7, 49, 60, 15, 50, -8, -122, -55, 20, 6, 70, -115, 59, 32, 83, 66, -42, 60, 91, 42, -93, 113, -23, -13, -101, 6, -102, -10, 7, -40, -33, -99, 124, 96};
  msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevDataBinary - Serialization/Deserialization #1")
{
  IMC::DevDataBinary msg;
  msg.setTimeStamp(0.6501209047958136);
  msg.setSource(29697U);
  msg.setSourceEntity(179U);
  msg.setDestination(36437U);
  msg.setDestinationEntity(234U);
  const char tmp_msg_0[] = {101, 18, -8, 10, 62, 123, 81, -4, 24, -78, 24, 108, 91, 32, 43, -81, -2, -1, -39, 7, -2, -70, -126, -73, -85, -54, 15, 98, -41, -38, -124, -118, -58, -126, -123, -63, 69, 79, -64, 57, -53, 96, -115, -89, -111, 85, 46, 46, 75, -125};
  msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DevDataBinary - Serialization/Deserialization #2")
{
  IMC::DevDataBinary msg;
  msg.setTimeStamp(0.30576037310209203);
  msg.setSource(6130U);
  msg.setSourceEntity(212U);
  msg.setDestination(19916U);
  msg.setDestinationEntity(68U);
  const char tmp_msg_0[] = {-7, -19, -111, 121, -27, 29, 80, 84, 52, -32, 96, -16, 54, -97, -82, 100, -76, 8, -117, 36, -69, 25, 95, -26, 111, -37};
  msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SonarData - Serialization/Deserialization #0")
{
  IMC::SonarData msg;
  msg.setTimeStamp(0.21088988812044007);
  msg.setSource(34162U);
  msg.setSourceEntity(191U);
  msg.setDestination(6824U);
  msg.setDestinationEntity(26U);
  msg.type = 149U;
  msg.frequency = 3002465451U;
  msg.min_range = 61774U;
  msg.max_range = 59038U;
  msg.bits_per_point = 9U;
  msg.scale_factor = 0.2665793525178948f;
  IMC::BeamConfig tmp_msg_0;
  tmp_msg_0.beam_width = 0.8825107142063405f;
  tmp_msg_0.beam_height = 0.2395674613752714f;
  msg.beam_config.push_back(tmp_msg_0);
  const char tmp_msg_1[] = {-87, -44, -49, 45, -4, 21, -24, 10, -18, -27, 99, 84, -120, 122, 23, 94, 4, 61, 67, 86, 98, -101, -111, -17, 65, -81, 30, -25, 42, -95, -104, 87, -45, -50, 37, -93, -43, 97, 62, 52, 107, -95, 49, 74, 91, 112, 56, -117, -68, -40, 28, 52, 123, -76, -50, 3, 2, 119, 88, -62, 67, 51, -26, -31, 82, -30, 43, 112, -60, 69, 16};
  msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SonarData - Serialization/Deserialization #1")
{
  IMC::SonarData msg;
  msg.setTimeStamp(0.6275149470850513);
  msg.setSource(6557U);
  msg.setSourceEntity(78U);
  msg.setDestination(15803U);
  msg.setDestinationEntity(129U);
  msg.type = 189U;
  msg.frequency = 3990641151U;
  msg.min_range = 16619U;
  msg.max_range = 10353U;
  msg.bits_per_point = 132U;
  msg.scale_factor = 0.022274392251079855f;
  IMC::BeamConfig tmp_msg_0;
  tmp_msg_0.beam_width = 0.6441882256081674f;
  tmp_msg_0.beam_height = 0.6925151506802064f;
  msg.beam_config.push_back(tmp_msg_0);
  const char tmp_msg_1[] = {-26, 89, -47, 80, -101, 27, -44, -42, -43, -33, -15, -18, -61, 80, 71, -41, 53, 113, -93, 5, -10, -35, 15, -28, 94, 78, 109, -122, 94, -9};
  msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SonarData - Serialization/Deserialization #2")
{
  IMC::SonarData msg;
  msg.setTimeStamp(0.641332097755909);
  msg.setSource(26146U);
  msg.setSourceEntity(129U);
  msg.setDestination(56220U);
  msg.setDestinationEntity(125U);
  msg.type = 14U;
  msg.frequency = 2531681622U;
  msg.min_range = 10344U;
  msg.max_range = 30389U;
  msg.bits_per_point = 4U;
  msg.scale_factor = 0.3149816411425408f;
  const char tmp_msg_0[] = {32, 115, 62, 3, -12, -89, -84, -21, 125, -66, 111, 92, -59, 95, 4, -66, -39, 12, -63, 76, -28, -64, -100, -3, -15, 94, 27, -93, -103, 119, 70, 81, -7, -69, -46, 34, 90, 57, -1, -15, 48, -39, -114, 19, -100, 19, -115, 96, 14, -126, -115, -35, -60, -24, -78, -6, 84, -77, -61, -78, 106, -29, 43, 19, 94, 53, 49, 83, 98, 61};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Pulse - Serialization/Deserialization #0")
{
  IMC::Pulse msg;
  msg.setTimeStamp(0.31417484347518876);
  msg.setSource(11462U);
  msg.setSourceEntity(213U);
  msg.setDestination(4641U);
  msg.setDestinationEntity(163U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Pulse - Serialization/Deserialization #1")
{
  IMC::Pulse msg;
  msg.setTimeStamp(0.8839111980937677);
  msg.setSource(14443U);
  msg.setSourceEntity(118U);
  msg.setDestination(26359U);
  msg.setDestinationEntity(87U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Pulse - Serialization/Deserialization #2")
{
  IMC::Pulse msg;
  msg.setTimeStamp(0.5368337603800918);
  msg.setSource(17630U);
  msg.setSourceEntity(250U);
  msg.setDestination(39415U);
  msg.setDestinationEntity(181U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PulseDetectionControl - Serialization/Deserialization #0")
{
  IMC::PulseDetectionControl msg;
  msg.setTimeStamp(0.9541513032433745);
  msg.setSource(10690U);
  msg.setSourceEntity(200U);
  msg.setDestination(50546U);
  msg.setDestinationEntity(125U);
  msg.op = 29U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PulseDetectionControl - Serialization/Deserialization #1")
{
  IMC::PulseDetectionControl msg;
  msg.setTimeStamp(0.009164596420528803);
  msg.setSource(30169U);
  msg.setSourceEntity(137U);
  msg.setDestination(28439U);
  msg.setDestinationEntity(114U);
  msg.op = 192U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PulseDetectionControl - Serialization/Deserialization #2")
{
  IMC::PulseDetectionControl msg;
  msg.setTimeStamp(0.40662515243443587);
  msg.setSource(10308U);
  msg.setSourceEntity(239U);
  msg.setDestination(9979U);
  msg.setDestinationEntity(76U);
  msg.op = 194U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FuelLevel - Serialization/Deserialization #0")
{
  IMC::FuelLevel msg;
  msg.setTimeStamp(0.324708556412177);
  msg.setSource(5802U);
  msg.setSourceEntity(174U);
  msg.setDestination(41710U);
  msg.setDestinationEntity(6U);
  msg.value = 0.5051353797392316f;
  msg.confidence = 0.4853216324860248f;
  msg.opmodes.assign("OLLWROFNEVWLXKGSAVYBLTNQLIICLAFSWCOMITVBJZMYTSFTGUBSMKXXKWUFCMDPMIQMKUZYBVHWXCIHZKPINYBANRUULGVXOZGHPHNOYQVBCKGAYUSQFXPDGDDEMEKDVXFGYBRFORSNKOFATWSIDHAERXQRNEHECFUMUZRPOZSJDVWLPKTBBYMJIUQWEZGAPQCCTKHWJIBPSRPETQLCQSDJRWZNXNFAMXOYQHNRIUPJJHGJGE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FuelLevel - Serialization/Deserialization #1")
{
  IMC::FuelLevel msg;
  msg.setTimeStamp(0.37024920841169273);
  msg.setSource(14128U);
  msg.setSourceEntity(20U);
  msg.setDestination(1866U);
  msg.setDestinationEntity(64U);
  msg.value = 0.5482543373838644f;
  msg.confidence = 0.6484083542302208f;
  msg.opmodes.assign("NPMDGHPEQVCQMWNUSXATSXSKXAVPVLFNCOOKZHOJRGHHXVMQJWSUUMAZZZDYBHYRIKYEGWPLZETQKENSWRXBUJSNCHNSHDCVJY");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FuelLevel - Serialization/Deserialization #2")
{
  IMC::FuelLevel msg;
  msg.setTimeStamp(0.8696294646743009);
  msg.setSource(14736U);
  msg.setSourceEntity(9U);
  msg.setDestination(14946U);
  msg.setDestinationEntity(226U);
  msg.value = 0.5437974815681705f;
  msg.confidence = 0.8879944704442464f;
  msg.opmodes.assign("UFHNMWDAJDUVCQKFQZOHJONBGRRJQXTMDXPPEEVRJIGGCFWHVEUNENXLGYOYTBIGZTMIAESMRALKWDGYLLYIYVTCRWDCZFNIUCCHHRFKAVTMQLUEXFPPAHCXKOCOABJEQKLPIOHVSNGEPRKNEWPSDPAJZBJZIUBMLUTOKZUIKNGNKOBWTYOTCSSTFJWVRKJZMZGSNADUQMDEPOULILFDXTSVIVYXWXAQXXVHHRASMQBMQSSWBFRZHYCQZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsNavData - Serialization/Deserialization #0")
{
  IMC::GpsNavData msg;
  msg.setTimeStamp(0.35029043387749437);
  msg.setSource(53256U);
  msg.setSourceEntity(160U);
  msg.setDestination(27271U);
  msg.setDestinationEntity(244U);
  msg.itow = 2288163983U;
  msg.lat = 0.5632028586937107;
  msg.lon = 0.3316464359089244;
  msg.height_ell = 0.6256264931760712f;
  msg.height_sea = 0.22308867284290845f;
  msg.hacc = 0.5318600008767398f;
  msg.vacc = 0.45931327160411084f;
  msg.vel_n = 0.7807763967841568f;
  msg.vel_e = 0.29721805238402044f;
  msg.vel_d = 0.9989191523393709f;
  msg.speed = 0.8178759462860075f;
  msg.gspeed = 0.0706822785182899f;
  msg.heading = 0.6715594573455161f;
  msg.sacc = 0.7240805444192221f;
  msg.cacc = 0.5958517423866851f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsNavData - Serialization/Deserialization #1")
{
  IMC::GpsNavData msg;
  msg.setTimeStamp(0.3021116695519146);
  msg.setSource(63565U);
  msg.setSourceEntity(109U);
  msg.setDestination(55806U);
  msg.setDestinationEntity(184U);
  msg.itow = 2992494726U;
  msg.lat = 0.5294694839331027;
  msg.lon = 0.6266228254361148;
  msg.height_ell = 0.8824701103269854f;
  msg.height_sea = 0.11782221444917085f;
  msg.hacc = 0.1950939665949195f;
  msg.vacc = 0.26501083369088296f;
  msg.vel_n = 0.021104252951379965f;
  msg.vel_e = 0.17679934913880835f;
  msg.vel_d = 0.44572612884001883f;
  msg.speed = 0.35168802373356245f;
  msg.gspeed = 0.3869542149619103f;
  msg.heading = 0.8850190584671663f;
  msg.sacc = 0.02248293162566517f;
  msg.cacc = 0.05559220611859461f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsNavData - Serialization/Deserialization #2")
{
  IMC::GpsNavData msg;
  msg.setTimeStamp(0.4111018643360518);
  msg.setSource(43696U);
  msg.setSourceEntity(208U);
  msg.setDestination(38908U);
  msg.setDestinationEntity(221U);
  msg.itow = 1738812510U;
  msg.lat = 0.5146879743375854;
  msg.lon = 0.7614453317598159;
  msg.height_ell = 0.6129678985090298f;
  msg.height_sea = 0.1684339812526734f;
  msg.hacc = 0.1691162951358397f;
  msg.vacc = 0.45560504380615496f;
  msg.vel_n = 0.34195434607543373f;
  msg.vel_e = 0.7544049414971952f;
  msg.vel_d = 0.3573668686497592f;
  msg.speed = 0.4687519265822484f;
  msg.gspeed = 0.5568370261438684f;
  msg.heading = 0.608046397529506f;
  msg.sacc = 0.8594969030057189f;
  msg.cacc = 0.6321719824136514f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ServoPosition - Serialization/Deserialization #0")
{
  IMC::ServoPosition msg;
  msg.setTimeStamp(0.7767378777537699);
  msg.setSource(6528U);
  msg.setSourceEntity(166U);
  msg.setDestination(34077U);
  msg.setDestinationEntity(45U);
  msg.id = 7U;
  msg.value = 0.9017043916748729f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ServoPosition - Serialization/Deserialization #1")
{
  IMC::ServoPosition msg;
  msg.setTimeStamp(0.27528195604334316);
  msg.setSource(17103U);
  msg.setSourceEntity(60U);
  msg.setDestination(48803U);
  msg.setDestinationEntity(42U);
  msg.id = 57U;
  msg.value = 0.7169140180492987f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ServoPosition - Serialization/Deserialization #2")
{
  IMC::ServoPosition msg;
  msg.setTimeStamp(0.9629302690051742);
  msg.setSource(57053U);
  msg.setSourceEntity(39U);
  msg.setDestination(59118U);
  msg.setDestinationEntity(176U);
  msg.id = 197U;
  msg.value = 0.8632956919161071f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DeviceState - Serialization/Deserialization #0")
{
  IMC::DeviceState msg;
  msg.setTimeStamp(0.8295518662371788);
  msg.setSource(23796U);
  msg.setSourceEntity(128U);
  msg.setDestination(28409U);
  msg.setDestinationEntity(183U);
  msg.x = 0.2736913197744234f;
  msg.y = 0.026997761905790396f;
  msg.z = 0.49844415813003873f;
  msg.phi = 0.1915249320136696f;
  msg.theta = 0.6063397344775869f;
  msg.psi = 0.31571960676644784f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DeviceState - Serialization/Deserialization #1")
{
  IMC::DeviceState msg;
  msg.setTimeStamp(0.35836837380033415);
  msg.setSource(49264U);
  msg.setSourceEntity(141U);
  msg.setDestination(64175U);
  msg.setDestinationEntity(203U);
  msg.x = 0.6815266239743375f;
  msg.y = 0.013722147380103467f;
  msg.z = 0.1424049560521008f;
  msg.phi = 0.8980746956921439f;
  msg.theta = 0.6550278679819537f;
  msg.psi = 0.34013611586995063f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DeviceState - Serialization/Deserialization #2")
{
  IMC::DeviceState msg;
  msg.setTimeStamp(0.06546561189788014);
  msg.setSource(61191U);
  msg.setSourceEntity(72U);
  msg.setDestination(19473U);
  msg.setDestinationEntity(19U);
  msg.x = 0.3455838068435859f;
  msg.y = 0.7823632654867918f;
  msg.z = 0.3290009935507915f;
  msg.phi = 0.6566930069758005f;
  msg.theta = 0.014600521037413938f;
  msg.psi = 0.27892483917345257f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("BeamConfig - Serialization/Deserialization #0")
{
  IMC::BeamConfig msg;
  msg.setTimeStamp(0.6760429796660941);
  msg.setSource(60484U);
  msg.setSourceEntity(81U);
  msg.setDestination(57154U);
  msg.setDestinationEntity(72U);
  msg.beam_width = 0.7280563205545292f;
  msg.beam_height = 0.26561548015373904f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("BeamConfig - Serialization/Deserialization #1")
{
  IMC::BeamConfig msg;
  msg.setTimeStamp(0.555480927548106);
  msg.setSource(63950U);
  msg.setSourceEntity(0U);
  msg.setDestination(42251U);
  msg.setDestinationEntity(151U);
  msg.beam_width = 0.6861225728303232f;
  msg.beam_height = 0.921143169350924f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("BeamConfig - Serialization/Deserialization #2")
{
  IMC::BeamConfig msg;
  msg.setTimeStamp(0.7612002503402695);
  msg.setSource(41646U);
  msg.setSourceEntity(166U);
  msg.setDestination(39665U);
  msg.setDestinationEntity(233U);
  msg.beam_width = 0.16770242033396088f;
  msg.beam_height = 0.247941538631006f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DataSanity - Serialization/Deserialization #0")
{
  IMC::DataSanity msg;
  msg.setTimeStamp(0.40790692745690016);
  msg.setSource(36512U);
  msg.setSourceEntity(225U);
  msg.setDestination(61881U);
  msg.setDestinationEntity(85U);
  msg.sane = 41U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DataSanity - Serialization/Deserialization #1")
{
  IMC::DataSanity msg;
  msg.setTimeStamp(0.686680458737867);
  msg.setSource(46155U);
  msg.setSourceEntity(46U);
  msg.setDestination(526U);
  msg.setDestinationEntity(126U);
  msg.sane = 151U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DataSanity - Serialization/Deserialization #2")
{
  IMC::DataSanity msg;
  msg.setTimeStamp(0.5881272492452725);
  msg.setSource(13346U);
  msg.setSourceEntity(129U);
  msg.setDestination(15958U);
  msg.setDestinationEntity(216U);
  msg.sane = 13U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RhodamineDye - Serialization/Deserialization #0")
{
  IMC::RhodamineDye msg;
  msg.setTimeStamp(0.0675198561829432);
  msg.setSource(25114U);
  msg.setSourceEntity(59U);
  msg.setDestination(17554U);
  msg.setDestinationEntity(63U);
  msg.value = 0.6864546973701995f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RhodamineDye - Serialization/Deserialization #1")
{
  IMC::RhodamineDye msg;
  msg.setTimeStamp(0.6495276225582617);
  msg.setSource(54819U);
  msg.setSourceEntity(105U);
  msg.setDestination(8745U);
  msg.setDestinationEntity(114U);
  msg.value = 0.6301880220462454f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RhodamineDye - Serialization/Deserialization #2")
{
  IMC::RhodamineDye msg;
  msg.setTimeStamp(0.417718147568352);
  msg.setSource(60426U);
  msg.setSourceEntity(27U);
  msg.setDestination(41606U);
  msg.setDestinationEntity(194U);
  msg.value = 0.20633795792376775f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CrudeOil - Serialization/Deserialization #0")
{
  IMC::CrudeOil msg;
  msg.setTimeStamp(0.059440811387040604);
  msg.setSource(54255U);
  msg.setSourceEntity(92U);
  msg.setDestination(1938U);
  msg.setDestinationEntity(245U);
  msg.value = 0.7728121248356014f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CrudeOil - Serialization/Deserialization #1")
{
  IMC::CrudeOil msg;
  msg.setTimeStamp(0.5808020963587831);
  msg.setSource(50124U);
  msg.setSourceEntity(203U);
  msg.setDestination(18260U);
  msg.setDestinationEntity(129U);
  msg.value = 0.6195005799635225f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CrudeOil - Serialization/Deserialization #2")
{
  IMC::CrudeOil msg;
  msg.setTimeStamp(0.6434060841911753);
  msg.setSource(40368U);
  msg.setSourceEntity(149U);
  msg.setDestination(19516U);
  msg.setDestinationEntity(167U);
  msg.value = 0.5550357437464487f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FineOil - Serialization/Deserialization #0")
{
  IMC::FineOil msg;
  msg.setTimeStamp(0.9407347051764261);
  msg.setSource(21226U);
  msg.setSourceEntity(231U);
  msg.setDestination(16222U);
  msg.setDestinationEntity(136U);
  msg.value = 0.36108355226546274f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FineOil - Serialization/Deserialization #1")
{
  IMC::FineOil msg;
  msg.setTimeStamp(0.060861563214881786);
  msg.setSource(51402U);
  msg.setSourceEntity(228U);
  msg.setDestination(27496U);
  msg.setDestinationEntity(111U);
  msg.value = 0.9929437195420459f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FineOil - Serialization/Deserialization #2")
{
  IMC::FineOil msg;
  msg.setTimeStamp(0.7794617515894596);
  msg.setSource(48137U);
  msg.setSourceEntity(230U);
  msg.setDestination(39904U);
  msg.setDestinationEntity(233U);
  msg.value = 0.9163388497569632f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Turbidity - Serialization/Deserialization #0")
{
  IMC::Turbidity msg;
  msg.setTimeStamp(0.7057522172987222);
  msg.setSource(64643U);
  msg.setSourceEntity(47U);
  msg.setDestination(35804U);
  msg.setDestinationEntity(68U);
  msg.value = 0.6863879492627432f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Turbidity - Serialization/Deserialization #1")
{
  IMC::Turbidity msg;
  msg.setTimeStamp(0.12483174209532932);
  msg.setSource(22990U);
  msg.setSourceEntity(84U);
  msg.setDestination(37502U);
  msg.setDestinationEntity(46U);
  msg.value = 0.15513450564814413f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Turbidity - Serialization/Deserialization #2")
{
  IMC::Turbidity msg;
  msg.setTimeStamp(0.7621422914443058);
  msg.setSource(3238U);
  msg.setSourceEntity(47U);
  msg.setDestination(5065U);
  msg.setDestinationEntity(155U);
  msg.value = 0.8470241922009072f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Chlorophyll - Serialization/Deserialization #0")
{
  IMC::Chlorophyll msg;
  msg.setTimeStamp(0.05521741768741928);
  msg.setSource(25001U);
  msg.setSourceEntity(26U);
  msg.setDestination(20848U);
  msg.setDestinationEntity(252U);
  msg.value = 0.06439524995249812f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Chlorophyll - Serialization/Deserialization #1")
{
  IMC::Chlorophyll msg;
  msg.setTimeStamp(0.7619101374654433);
  msg.setSource(496U);
  msg.setSourceEntity(55U);
  msg.setDestination(63871U);
  msg.setDestinationEntity(28U);
  msg.value = 0.9045224119724918f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Chlorophyll - Serialization/Deserialization #2")
{
  IMC::Chlorophyll msg;
  msg.setTimeStamp(0.0680031144933424);
  msg.setSource(52618U);
  msg.setSourceEntity(47U);
  msg.setDestination(34104U);
  msg.setDestinationEntity(11U);
  msg.value = 0.5727716890318008f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Fluorescein - Serialization/Deserialization #0")
{
  IMC::Fluorescein msg;
  msg.setTimeStamp(0.24609057217973784);
  msg.setSource(55715U);
  msg.setSourceEntity(220U);
  msg.setDestination(30846U);
  msg.setDestinationEntity(14U);
  msg.value = 0.18288155653664817f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Fluorescein - Serialization/Deserialization #1")
{
  IMC::Fluorescein msg;
  msg.setTimeStamp(0.6243805362537055);
  msg.setSource(28897U);
  msg.setSourceEntity(246U);
  msg.setDestination(36547U);
  msg.setDestinationEntity(146U);
  msg.value = 0.4465223109222396f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Fluorescein - Serialization/Deserialization #2")
{
  IMC::Fluorescein msg;
  msg.setTimeStamp(0.02855542927574184);
  msg.setSource(16791U);
  msg.setSourceEntity(160U);
  msg.setDestination(4332U);
  msg.setDestinationEntity(41U);
  msg.value = 0.0612969806343312f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Phycocyanin - Serialization/Deserialization #0")
{
  IMC::Phycocyanin msg;
  msg.setTimeStamp(0.7243682475823242);
  msg.setSource(36144U);
  msg.setSourceEntity(1U);
  msg.setDestination(27914U);
  msg.setDestinationEntity(129U);
  msg.value = 0.5454896206550254f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Phycocyanin - Serialization/Deserialization #1")
{
  IMC::Phycocyanin msg;
  msg.setTimeStamp(0.832571602447693);
  msg.setSource(20086U);
  msg.setSourceEntity(198U);
  msg.setDestination(32375U);
  msg.setDestinationEntity(148U);
  msg.value = 0.6667822675970838f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Phycocyanin - Serialization/Deserialization #2")
{
  IMC::Phycocyanin msg;
  msg.setTimeStamp(0.15647436924767288);
  msg.setSource(7783U);
  msg.setSourceEntity(148U);
  msg.setDestination(14151U);
  msg.setDestinationEntity(83U);
  msg.value = 0.45858368384693715f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Phycoerythrin - Serialization/Deserialization #0")
{
  IMC::Phycoerythrin msg;
  msg.setTimeStamp(0.6963929174932647);
  msg.setSource(55324U);
  msg.setSourceEntity(149U);
  msg.setDestination(45910U);
  msg.setDestinationEntity(112U);
  msg.value = 0.47464535523303153f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Phycoerythrin - Serialization/Deserialization #1")
{
  IMC::Phycoerythrin msg;
  msg.setTimeStamp(0.05950885745106482);
  msg.setSource(40669U);
  msg.setSourceEntity(26U);
  msg.setDestination(41104U);
  msg.setDestinationEntity(90U);
  msg.value = 0.22086489867918646f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Phycoerythrin - Serialization/Deserialization #2")
{
  IMC::Phycoerythrin msg;
  msg.setTimeStamp(0.6236781566450477);
  msg.setSource(54762U);
  msg.setSourceEntity(64U);
  msg.setDestination(14802U);
  msg.setDestinationEntity(153U);
  msg.value = 0.755380478602371f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFixRtk - Serialization/Deserialization #0")
{
  IMC::GpsFixRtk msg;
  msg.setTimeStamp(0.9649766672425697);
  msg.setSource(47958U);
  msg.setSourceEntity(147U);
  msg.setDestination(35852U);
  msg.setDestinationEntity(89U);
  msg.validity = 13336U;
  msg.type = 102U;
  msg.tow = 562664987U;
  msg.base_lat = 0.7320135631782188;
  msg.base_lon = 0.07228175006938486;
  msg.base_height = 0.5401485171876996f;
  msg.n = 0.39633482781846296f;
  msg.e = 0.8590664706552368f;
  msg.d = 0.12260616754165454f;
  msg.v_n = 0.04830609818616305f;
  msg.v_e = 0.14825908045056146f;
  msg.v_d = 0.04104821911456091f;
  msg.satellites = 47U;
  msg.iar_hyp = 53452U;
  msg.iar_ratio = 0.24376304535250193f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFixRtk - Serialization/Deserialization #1")
{
  IMC::GpsFixRtk msg;
  msg.setTimeStamp(0.021339673538825932);
  msg.setSource(55978U);
  msg.setSourceEntity(54U);
  msg.setDestination(27037U);
  msg.setDestinationEntity(226U);
  msg.validity = 36501U;
  msg.type = 210U;
  msg.tow = 504894449U;
  msg.base_lat = 0.07315458868677793;
  msg.base_lon = 0.7185141383236905;
  msg.base_height = 0.08914963721147218f;
  msg.n = 0.9000035776314427f;
  msg.e = 0.2500249306713618f;
  msg.d = 0.2101761029691166f;
  msg.v_n = 0.6651098187115099f;
  msg.v_e = 0.044612727264165986f;
  msg.v_d = 0.46224392263056546f;
  msg.satellites = 247U;
  msg.iar_hyp = 25223U;
  msg.iar_ratio = 0.35448856451668875f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFixRtk - Serialization/Deserialization #2")
{
  IMC::GpsFixRtk msg;
  msg.setTimeStamp(0.6610837666825623);
  msg.setSource(50633U);
  msg.setSourceEntity(200U);
  msg.setDestination(14691U);
  msg.setDestinationEntity(223U);
  msg.validity = 8974U;
  msg.type = 150U;
  msg.tow = 1133451239U;
  msg.base_lat = 0.41841569691352054;
  msg.base_lon = 0.7555686376985374;
  msg.base_height = 0.8229348594410164f;
  msg.n = 0.9522496973336331f;
  msg.e = 0.6525942395004878f;
  msg.d = 0.6599184593718749f;
  msg.v_n = 0.3692153885772951f;
  msg.v_e = 0.40903856700184615f;
  msg.v_d = 0.42280550032211306f;
  msg.satellites = 16U;
  msg.iar_hyp = 27291U;
  msg.iar_ratio = 0.14018015752492752f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ExternalNavData - Serialization/Deserialization #0")
{
  IMC::ExternalNavData msg;
  msg.setTimeStamp(0.6177510988896139);
  msg.setSource(49377U);
  msg.setSourceEntity(242U);
  msg.setDestination(46174U);
  msg.setDestinationEntity(15U);
  IMC::EstimatedState tmp_msg_0;
  tmp_msg_0.lat = 0.38116193276664667;
  tmp_msg_0.lon = 0.4864045800761698;
  tmp_msg_0.height = 0.3250461528474119f;
  tmp_msg_0.x = 0.7834032089771285f;
  tmp_msg_0.y = 0.16579329017643962f;
  tmp_msg_0.z = 0.31307237335396276f;
  tmp_msg_0.phi = 0.37119105696813604f;
  tmp_msg_0.theta = 0.4482804169006449f;
  tmp_msg_0.psi = 0.4525137914532482f;
  tmp_msg_0.u = 0.27273905995546566f;
  tmp_msg_0.v = 0.3277735926680889f;
  tmp_msg_0.w = 0.6145108363306635f;
  tmp_msg_0.vx = 0.574630495165119f;
  tmp_msg_0.vy = 0.2826389959371922f;
  tmp_msg_0.vz = 0.09494390863242907f;
  tmp_msg_0.p = 0.09139299534170053f;
  tmp_msg_0.q = 0.771539411352428f;
  tmp_msg_0.r = 0.4080623504206823f;
  tmp_msg_0.depth = 0.6911964000383142f;
  tmp_msg_0.alt = 0.27233367440824696f;
  msg.state.set(tmp_msg_0);
  msg.type = 15U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ExternalNavData - Serialization/Deserialization #1")
{
  IMC::ExternalNavData msg;
  msg.setTimeStamp(0.8300492675744516);
  msg.setSource(5372U);
  msg.setSourceEntity(166U);
  msg.setDestination(16416U);
  msg.setDestinationEntity(119U);
  IMC::EstimatedState tmp_msg_0;
  tmp_msg_0.lat = 0.24203449410066324;
  tmp_msg_0.lon = 0.9554388912340182;
  tmp_msg_0.height = 0.6979591654502125f;
  tmp_msg_0.x = 0.8847334378462967f;
  tmp_msg_0.y = 0.38692912712993743f;
  tmp_msg_0.z = 0.3318652723555121f;
  tmp_msg_0.phi = 0.7485357650332297f;
  tmp_msg_0.theta = 0.09110521887744971f;
  tmp_msg_0.psi = 0.12184819726595697f;
  tmp_msg_0.u = 0.72187606763413f;
  tmp_msg_0.v = 0.008296515387508308f;
  tmp_msg_0.w = 0.9380979295959697f;
  tmp_msg_0.vx = 0.8642959969210234f;
  tmp_msg_0.vy = 0.19458379227699285f;
  tmp_msg_0.vz = 0.14281257479551301f;
  tmp_msg_0.p = 0.478529634396325f;
  tmp_msg_0.q = 0.7944302606760801f;
  tmp_msg_0.r = 0.9261545979949054f;
  tmp_msg_0.depth = 0.7579863878726981f;
  tmp_msg_0.alt = 0.21844725816108246f;
  msg.state.set(tmp_msg_0);
  msg.type = 49U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ExternalNavData - Serialization/Deserialization #2")
{
  IMC::ExternalNavData msg;
  msg.setTimeStamp(0.4520032758974022);
  msg.setSource(2676U);
  msg.setSourceEntity(116U);
  msg.setDestination(58800U);
  msg.setDestinationEntity(217U);
  IMC::EstimatedState tmp_msg_0;
  tmp_msg_0.lat = 0.015810650960593087;
  tmp_msg_0.lon = 0.8672167215391128;
  tmp_msg_0.height = 0.2920103037314017f;
  tmp_msg_0.x = 0.6142149169067576f;
  tmp_msg_0.y = 0.8061476008142411f;
  tmp_msg_0.z = 0.7187521185178897f;
  tmp_msg_0.phi = 0.32593898961023426f;
  tmp_msg_0.theta = 0.6350103053812445f;
  tmp_msg_0.psi = 0.5031521010201647f;
  tmp_msg_0.u = 0.6192955862999875f;
  tmp_msg_0.v = 0.264790951072437f;
  tmp_msg_0.w = 0.41127452270201104f;
  tmp_msg_0.vx = 0.08462630032841001f;
  tmp_msg_0.vy = 0.0672801068344282f;
  tmp_msg_0.vz = 0.13567594193465715f;
  tmp_msg_0.p = 0.8879343942916247f;
  tmp_msg_0.q = 0.8320376952617272f;
  tmp_msg_0.r = 0.8435562650572865f;
  tmp_msg_0.depth = 0.27802148622905676f;
  tmp_msg_0.alt = 0.5962728867122711f;
  msg.state.set(tmp_msg_0);
  msg.type = 5U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DissolvedOxygen - Serialization/Deserialization #0")
{
  IMC::DissolvedOxygen msg;
  msg.setTimeStamp(0.6483691921862839);
  msg.setSource(34635U);
  msg.setSourceEntity(12U);
  msg.setDestination(11378U);
  msg.setDestinationEntity(91U);
  msg.value = 0.43318443366085724f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DissolvedOxygen - Serialization/Deserialization #1")
{
  IMC::DissolvedOxygen msg;
  msg.setTimeStamp(0.39485806493312625);
  msg.setSource(8048U);
  msg.setSourceEntity(94U);
  msg.setDestination(21606U);
  msg.setDestinationEntity(22U);
  msg.value = 0.5099427726695929f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DissolvedOxygen - Serialization/Deserialization #2")
{
  IMC::DissolvedOxygen msg;
  msg.setTimeStamp(0.9486350884346766);
  msg.setSource(58909U);
  msg.setSourceEntity(149U);
  msg.setDestination(44277U);
  msg.setDestinationEntity(36U);
  msg.value = 0.8125955817053488f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AirSaturation - Serialization/Deserialization #0")
{
  IMC::AirSaturation msg;
  msg.setTimeStamp(0.6128954723205755);
  msg.setSource(61104U);
  msg.setSourceEntity(81U);
  msg.setDestination(11291U);
  msg.setDestinationEntity(116U);
  msg.value = 0.9539841480497752f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AirSaturation - Serialization/Deserialization #1")
{
  IMC::AirSaturation msg;
  msg.setTimeStamp(0.7583229755649087);
  msg.setSource(21385U);
  msg.setSourceEntity(229U);
  msg.setDestination(46492U);
  msg.setDestinationEntity(242U);
  msg.value = 0.6931716994475741f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AirSaturation - Serialization/Deserialization #2")
{
  IMC::AirSaturation msg;
  msg.setTimeStamp(0.8422967672167598);
  msg.setSource(59477U);
  msg.setSourceEntity(49U);
  msg.setDestination(12679U);
  msg.setDestinationEntity(117U);
  msg.value = 0.046435237655673034f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Throttle - Serialization/Deserialization #0")
{
  IMC::Throttle msg;
  msg.setTimeStamp(0.520045588817356);
  msg.setSource(53807U);
  msg.setSourceEntity(235U);
  msg.setDestination(36293U);
  msg.setDestinationEntity(175U);
  msg.value = 0.5375047922702977;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Throttle - Serialization/Deserialization #1")
{
  IMC::Throttle msg;
  msg.setTimeStamp(0.38037838391937284);
  msg.setSource(16704U);
  msg.setSourceEntity(211U);
  msg.setDestination(61855U);
  msg.setDestinationEntity(197U);
  msg.value = 0.8778567261753667;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Throttle - Serialization/Deserialization #2")
{
  IMC::Throttle msg;
  msg.setTimeStamp(0.7331851079069542);
  msg.setSource(30484U);
  msg.setSourceEntity(173U);
  msg.setDestination(55763U);
  msg.setDestinationEntity(81U);
  msg.value = 0.623494332358252;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PH - Serialization/Deserialization #0")
{
  IMC::PH msg;
  msg.setTimeStamp(0.6505913688850031);
  msg.setSource(18337U);
  msg.setSourceEntity(176U);
  msg.setDestination(43669U);
  msg.setDestinationEntity(122U);
  msg.value = 0.9514305405226201f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PH - Serialization/Deserialization #1")
{
  IMC::PH msg;
  msg.setTimeStamp(0.8162494719962506);
  msg.setSource(2989U);
  msg.setSourceEntity(174U);
  msg.setDestination(59774U);
  msg.setDestinationEntity(215U);
  msg.value = 0.39010804641563623f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PH - Serialization/Deserialization #2")
{
  IMC::PH msg;
  msg.setTimeStamp(0.7700216568252785);
  msg.setSource(35476U);
  msg.setSourceEntity(63U);
  msg.setDestination(42977U);
  msg.setDestinationEntity(54U);
  msg.value = 0.9360512236897403f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Redox - Serialization/Deserialization #0")
{
  IMC::Redox msg;
  msg.setTimeStamp(0.5460136241095817);
  msg.setSource(20690U);
  msg.setSourceEntity(58U);
  msg.setDestination(18653U);
  msg.setDestinationEntity(221U);
  msg.value = 0.6782901224439603f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Redox - Serialization/Deserialization #1")
{
  IMC::Redox msg;
  msg.setTimeStamp(0.7601271309226207);
  msg.setSource(54355U);
  msg.setSourceEntity(91U);
  msg.setDestination(11999U);
  msg.setDestinationEntity(69U);
  msg.value = 0.9312618105077394f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Redox - Serialization/Deserialization #2")
{
  IMC::Redox msg;
  msg.setTimeStamp(0.11174977868485914);
  msg.setSource(60712U);
  msg.setSourceEntity(90U);
  msg.setDestination(2174U);
  msg.setDestinationEntity(37U);
  msg.value = 0.039254101418516596f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CameraZoom - Serialization/Deserialization #0")
{
  IMC::CameraZoom msg;
  msg.setTimeStamp(0.35249272266388976);
  msg.setSource(19757U);
  msg.setSourceEntity(238U);
  msg.setDestination(40612U);
  msg.setDestinationEntity(245U);
  msg.id = 215U;
  msg.zoom = 149U;
  msg.action = 46U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CameraZoom - Serialization/Deserialization #1")
{
  IMC::CameraZoom msg;
  msg.setTimeStamp(0.3691995682159599);
  msg.setSource(40700U);
  msg.setSourceEntity(193U);
  msg.setDestination(50770U);
  msg.setDestinationEntity(199U);
  msg.id = 235U;
  msg.zoom = 249U;
  msg.action = 78U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CameraZoom - Serialization/Deserialization #2")
{
  IMC::CameraZoom msg;
  msg.setTimeStamp(0.9206608232820087);
  msg.setSource(5681U);
  msg.setSourceEntity(47U);
  msg.setDestination(55926U);
  msg.setDestinationEntity(5U);
  msg.id = 54U;
  msg.zoom = 193U;
  msg.action = 225U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetThrusterActuation - Serialization/Deserialization #0")
{
  IMC::SetThrusterActuation msg;
  msg.setTimeStamp(0.9027890639661459);
  msg.setSource(17330U);
  msg.setSourceEntity(111U);
  msg.setDestination(33005U);
  msg.setDestinationEntity(186U);
  msg.id = 132U;
  msg.value = 0.36297968759665244f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetThrusterActuation - Serialization/Deserialization #1")
{
  IMC::SetThrusterActuation msg;
  msg.setTimeStamp(0.15161813059635998);
  msg.setSource(31457U);
  msg.setSourceEntity(253U);
  msg.setDestination(53394U);
  msg.setDestinationEntity(111U);
  msg.id = 25U;
  msg.value = 0.49330456927349087f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetThrusterActuation - Serialization/Deserialization #2")
{
  IMC::SetThrusterActuation msg;
  msg.setTimeStamp(0.2090131380200726);
  msg.setSource(42696U);
  msg.setSourceEntity(157U);
  msg.setDestination(37689U);
  msg.setDestinationEntity(70U);
  msg.id = 26U;
  msg.value = 0.06569632185775898f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetServoPosition - Serialization/Deserialization #0")
{
  IMC::SetServoPosition msg;
  msg.setTimeStamp(0.14732095080491936);
  msg.setSource(25413U);
  msg.setSourceEntity(228U);
  msg.setDestination(42356U);
  msg.setDestinationEntity(70U);
  msg.id = 122U;
  msg.value = 0.6249575947200832f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetServoPosition - Serialization/Deserialization #1")
{
  IMC::SetServoPosition msg;
  msg.setTimeStamp(0.17427469242812577);
  msg.setSource(60216U);
  msg.setSourceEntity(122U);
  msg.setDestination(13924U);
  msg.setDestinationEntity(4U);
  msg.id = 47U;
  msg.value = 0.6513739465095243f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetServoPosition - Serialization/Deserialization #2")
{
  IMC::SetServoPosition msg;
  msg.setTimeStamp(0.8023218185242055);
  msg.setSource(50994U);
  msg.setSourceEntity(85U);
  msg.setDestination(12497U);
  msg.setDestinationEntity(71U);
  msg.id = 197U;
  msg.value = 0.4116066704241954f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetControlSurfaceDeflection - Serialization/Deserialization #0")
{
  IMC::SetControlSurfaceDeflection msg;
  msg.setTimeStamp(0.8493230374381598);
  msg.setSource(45461U);
  msg.setSourceEntity(108U);
  msg.setDestination(64210U);
  msg.setDestinationEntity(175U);
  msg.id = 217U;
  msg.angle = 0.9125654795260937f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetControlSurfaceDeflection - Serialization/Deserialization #1")
{
  IMC::SetControlSurfaceDeflection msg;
  msg.setTimeStamp(0.14613862400503608);
  msg.setSource(25364U);
  msg.setSourceEntity(170U);
  msg.setDestination(32885U);
  msg.setDestinationEntity(32U);
  msg.id = 203U;
  msg.angle = 0.47484780138206695f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetControlSurfaceDeflection - Serialization/Deserialization #2")
{
  IMC::SetControlSurfaceDeflection msg;
  msg.setTimeStamp(0.2736887155166239);
  msg.setSource(23314U);
  msg.setSourceEntity(210U);
  msg.setDestination(60503U);
  msg.setDestinationEntity(165U);
  msg.id = 73U;
  msg.angle = 0.5981235350067394f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteActionsRequest - Serialization/Deserialization #0")
{
  IMC::RemoteActionsRequest msg;
  msg.setTimeStamp(0.4738899859563772);
  msg.setSource(58128U);
  msg.setSourceEntity(166U);
  msg.setDestination(11060U);
  msg.setDestinationEntity(208U);
  msg.op = 166U;
  msg.actions.assign("QOHXMZQEREBMCGKTWLFAPADSXFUZNAJOPSYRXGAIQXHUMYLBDTAUMKFWAQECCZRWZDNRJJKCEUSYMTHVOMOWQVBLAKDSJNZRYZIE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteActionsRequest - Serialization/Deserialization #1")
{
  IMC::RemoteActionsRequest msg;
  msg.setTimeStamp(0.5375671818250213);
  msg.setSource(58006U);
  msg.setSourceEntity(197U);
  msg.setDestination(11722U);
  msg.setDestinationEntity(251U);
  msg.op = 44U;
  msg.actions.assign("DBBOEWUZCGNSFWQKUNGMQNNRXFCOIIGWCDTSRBVMCZPRUVQEWDQJSMIVLFLUOSRMJMWESWHPOIKGLAHIQAVRUGCDIHKOFPZHETSQLAXXRVUBPVNYULZDYJCSLPLJFA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteActionsRequest - Serialization/Deserialization #2")
{
  IMC::RemoteActionsRequest msg;
  msg.setTimeStamp(0.08304985972502699);
  msg.setSource(6952U);
  msg.setSourceEntity(166U);
  msg.setDestination(52696U);
  msg.setDestinationEntity(232U);
  msg.op = 253U;
  msg.actions.assign("XFNCDLHKFANVBKEZBLLWSHBBLSDADBPNTSARAHSFRZIKBPTTUKYAMCTZLPNZALVPZGJSADOGOUKZOJXHGLUMLOFNEQUIPHCGCWYUQRHPJFXXIGSMYQFKDRGERYJQFXQYCGCVJWMHJSPWMZSEXWVCAQOCCQBIPXGYKLRKVYCQWWUJDWTEWZLSXRUTWGD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteActions - Serialization/Deserialization #0")
{
  IMC::RemoteActions msg;
  msg.setTimeStamp(0.9557509304239797);
  msg.setSource(59316U);
  msg.setSourceEntity(127U);
  msg.setDestination(61730U);
  msg.setDestinationEntity(242U);
  msg.actions.assign("HQRPIFWSPZONOWRVAEXKZYGXLTOMUOHQHVGJMQUIXLDNZSXLIMGYAZUNAULOMVSVEBPJECUCOXBDFFERSHQGJFLTPTMXJEPSUVDLLGTILHRJXYDJPMSITOUFBRZWF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteActions - Serialization/Deserialization #1")
{
  IMC::RemoteActions msg;
  msg.setTimeStamp(0.1841037140006141);
  msg.setSource(22219U);
  msg.setSourceEntity(27U);
  msg.setDestination(13635U);
  msg.setDestinationEntity(177U);
  msg.actions.assign("ZDKVPUWSBMJOMHTNAQAYYNJIYGEVBFJMPJTUSHFNCKCURDZUGLLYXZYQGHNUFQXDHHRIJOCAVPBGJQAVQPYWAYXTGCAEJXHIOFLFCKHGRVSNBCMAZPYRBINKDQEGZSTPACYGWOSNSS");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteActions - Serialization/Deserialization #2")
{
  IMC::RemoteActions msg;
  msg.setTimeStamp(0.892565034932018);
  msg.setSource(40314U);
  msg.setSourceEntity(4U);
  msg.setDestination(16979U);
  msg.setDestinationEntity(123U);
  msg.actions.assign("ZIOKQNTAUERNHWJXFUIVBELZFYQVVLOTOAUZZDUTDWGWAMSCXTDPC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ButtonEvent - Serialization/Deserialization #0")
{
  IMC::ButtonEvent msg;
  msg.setTimeStamp(0.3455542284567876);
  msg.setSource(44583U);
  msg.setSourceEntity(73U);
  msg.setDestination(39894U);
  msg.setDestinationEntity(167U);
  msg.button = 30U;
  msg.value = 12U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ButtonEvent - Serialization/Deserialization #1")
{
  IMC::ButtonEvent msg;
  msg.setTimeStamp(0.3784167069996429);
  msg.setSource(35288U);
  msg.setSourceEntity(65U);
  msg.setDestination(50401U);
  msg.setDestinationEntity(191U);
  msg.button = 191U;
  msg.value = 251U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ButtonEvent - Serialization/Deserialization #2")
{
  IMC::ButtonEvent msg;
  msg.setTimeStamp(0.3027746974267137);
  msg.setSource(16666U);
  msg.setSourceEntity(123U);
  msg.setDestination(47648U);
  msg.setDestinationEntity(223U);
  msg.button = 98U;
  msg.value = 191U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LcdControl - Serialization/Deserialization #0")
{
  IMC::LcdControl msg;
  msg.setTimeStamp(0.3991876639449551);
  msg.setSource(27853U);
  msg.setSourceEntity(124U);
  msg.setDestination(34161U);
  msg.setDestinationEntity(248U);
  msg.op = 44U;
  msg.text.assign("GQBNELRQRKXXOTRFFMEJMFKSWOOUPAYMWAPNTFNIITIIZOKBSDHVZVKYJNTCHTEDINRGEXTAXDMBVHDXWICPKJKJH");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LcdControl - Serialization/Deserialization #1")
{
  IMC::LcdControl msg;
  msg.setTimeStamp(0.7896982425678154);
  msg.setSource(37346U);
  msg.setSourceEntity(231U);
  msg.setDestination(58304U);
  msg.setDestinationEntity(173U);
  msg.op = 14U;
  msg.text.assign("OKVWWFNLUGPLLVLNZMTHTZWUCGMZIDXWDLLSNWGDGVLBAIHSSHTZNJRGXYURJHFJESDOSKUTOZRMEEKIVMUWTPIRJTQYKAVIQQGIXAMCQZYWHVCCRXBXPDNVRDKASAFRSEAYOUMJEBYNLTRYQVFVTOVPDPBJAZJZCMJYNPKWUCQFBSIDGOHHCHFIBNOBZSCUGXRXIEDTFQONMYEJPZBWPKKUAXGIJOFNRLLBMPEEHCSOQYKCGQAMB");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LcdControl - Serialization/Deserialization #2")
{
  IMC::LcdControl msg;
  msg.setTimeStamp(0.865214832632162);
  msg.setSource(61251U);
  msg.setSourceEntity(132U);
  msg.setDestination(36374U);
  msg.setDestinationEntity(35U);
  msg.op = 190U;
  msg.text.assign("SGLHRIXLUQBMMW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerOperation - Serialization/Deserialization #0")
{
  IMC::PowerOperation msg;
  msg.setTimeStamp(0.6235467971383762);
  msg.setSource(53567U);
  msg.setSourceEntity(200U);
  msg.setDestination(7021U);
  msg.setDestinationEntity(145U);
  msg.op = 165U;
  msg.time_remain = 0.8651527279862589f;
  msg.sched_time = 0.6925192501241629;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerOperation - Serialization/Deserialization #1")
{
  IMC::PowerOperation msg;
  msg.setTimeStamp(0.5609353743525125);
  msg.setSource(63468U);
  msg.setSourceEntity(111U);
  msg.setDestination(53862U);
  msg.setDestinationEntity(250U);
  msg.op = 127U;
  msg.time_remain = 0.4598968553762861f;
  msg.sched_time = 0.03358375967588534;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerOperation - Serialization/Deserialization #2")
{
  IMC::PowerOperation msg;
  msg.setTimeStamp(0.02684897676629061);
  msg.setSource(14025U);
  msg.setSourceEntity(193U);
  msg.setDestination(65512U);
  msg.setDestinationEntity(138U);
  msg.op = 116U;
  msg.time_remain = 0.66924121602651f;
  msg.sched_time = 0.3224807546818983;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerChannelControl - Serialization/Deserialization #0")
{
  IMC::PowerChannelControl msg;
  msg.setTimeStamp(0.9280960486718552);
  msg.setSource(14182U);
  msg.setSourceEntity(126U);
  msg.setDestination(28383U);
  msg.setDestinationEntity(206U);
  msg.name.assign("BEJESXLOHCTRXJPPRJDAFWXASXYKGBUZNEYNIPMTQZNWNCDLMZXDDTPZCEYG");
  msg.op = 207U;
  msg.sched_time = 0.7282202971792062;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerChannelControl - Serialization/Deserialization #1")
{
  IMC::PowerChannelControl msg;
  msg.setTimeStamp(0.28759838691283934);
  msg.setSource(26189U);
  msg.setSourceEntity(205U);
  msg.setDestination(14276U);
  msg.setDestinationEntity(97U);
  msg.name.assign("ULYMXILHLSBFWOQZGPTBIY");
  msg.op = 128U;
  msg.sched_time = 0.8108741450457743;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerChannelControl - Serialization/Deserialization #2")
{
  IMC::PowerChannelControl msg;
  msg.setTimeStamp(0.9772489132549138);
  msg.setSource(56572U);
  msg.setSourceEntity(24U);
  msg.setDestination(36056U);
  msg.setDestinationEntity(139U);
  msg.name.assign("DIHNVFFLGXJGYQIVTUPURWXOCLGEMSOJTYCVYIUNUSSBCDWESUQXVZPDFJMNHDEBSYVCFLOAHUPTSRRMDAWZNVCZMXMEAQQBLAQBRNOCETIVZQOTOKCRFEDTPWZYYGFSLCWTJGLHSNXKGKNZQAYBOREAK");
  msg.op = 203U;
  msg.sched_time = 0.4321173633715344;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryPowerChannelState - Serialization/Deserialization #0")
{
  IMC::QueryPowerChannelState msg;
  msg.setTimeStamp(0.9260885209467214);
  msg.setSource(64901U);
  msg.setSourceEntity(196U);
  msg.setDestination(18896U);
  msg.setDestinationEntity(99U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryPowerChannelState - Serialization/Deserialization #1")
{
  IMC::QueryPowerChannelState msg;
  msg.setTimeStamp(0.20305681919907304);
  msg.setSource(47236U);
  msg.setSourceEntity(171U);
  msg.setDestination(28130U);
  msg.setDestinationEntity(103U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryPowerChannelState - Serialization/Deserialization #2")
{
  IMC::QueryPowerChannelState msg;
  msg.setTimeStamp(0.042222364473805785);
  msg.setSource(42075U);
  msg.setSourceEntity(170U);
  msg.setDestination(20991U);
  msg.setDestinationEntity(4U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerChannelState - Serialization/Deserialization #0")
{
  IMC::PowerChannelState msg;
  msg.setTimeStamp(0.8237930930072791);
  msg.setSource(17998U);
  msg.setSourceEntity(238U);
  msg.setDestination(22917U);
  msg.setDestinationEntity(174U);
  msg.name.assign("ENGTCLPYPQFRWCMFVMRAZATDUFONJHKVPZBWIVWLUEFRDBZBPTCSMNQXOMHSJTZJDJLXV");
  msg.state = 36U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerChannelState - Serialization/Deserialization #1")
{
  IMC::PowerChannelState msg;
  msg.setTimeStamp(0.4163319414657498);
  msg.setSource(857U);
  msg.setSourceEntity(124U);
  msg.setDestination(4051U);
  msg.setDestinationEntity(149U);
  msg.name.assign("BUXQWPIFSHKWJYYJCRXDBUJPARINULHFACKFCLOCBLGHPXKWMOPBPECHZGZDVLTJDBFEFGVAGLJFMDEZXSYKNWSZSFETZYADSILEKCAIPIQMJTPITINIETDQHKRSPNJRWQYOTYMRXLYOHVDDWZMFRGHLCYRMRNWOHGMSAKIMNUZJKYGBAUBUCVEQZOVVVEBWSZQPGRVNLJNJBFDSXTOQPKAOZQCGDAIU");
  msg.state = 113U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PowerChannelState - Serialization/Deserialization #2")
{
  IMC::PowerChannelState msg;
  msg.setTimeStamp(0.37335176849535057);
  msg.setSource(61794U);
  msg.setSourceEntity(226U);
  msg.setDestination(40463U);
  msg.setDestinationEntity(75U);
  msg.name.assign("BPSHATPQCKXUVXKQWFTAMESCYJGOFNBQQBJZINOAICWESJUPZBVDEBNWKZHMCUOEXOEDLFKDMLGRSRJNSMCCXZRGSWKIOYBZLIISJRRLYBG");
  msg.state = 18U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LedBrightness - Serialization/Deserialization #0")
{
  IMC::LedBrightness msg;
  msg.setTimeStamp(0.5143721529968897);
  msg.setSource(38444U);
  msg.setSourceEntity(173U);
  msg.setDestination(25967U);
  msg.setDestinationEntity(197U);
  msg.name.assign("XYGGDUOWLOLZQGFWJNYLITKADKTULSEQECREJFBZVQYIVAUODDJHQOSPRAVUGUIHDWUAZTQXXGIUTKILYYRGNMOVAYPLMIYJSHCMUCPMTZWFBJXQOCBNBGEBUVDXCBVJZFXFDJMFTIRXNTNLSORPFNFBHCNRRILUDZQYYKNNHO");
  msg.value = 21U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LedBrightness - Serialization/Deserialization #1")
{
  IMC::LedBrightness msg;
  msg.setTimeStamp(0.49276668535797286);
  msg.setSource(42064U);
  msg.setSourceEntity(100U);
  msg.setDestination(63039U);
  msg.setDestinationEntity(155U);
  msg.name.assign("BGSQPTPFKFIUUZKDYYNIDSJXFFFMLGKDPXRBIBSSJSAKOYQSRHQBACMLEDMKHRYRAQKELYVRRPNRTRGIGBWQXIBCSBANOUSRWTTIABKPZYEQCMPLUVYOAWWEQHJFOELBLZSAHEWGINCQEWOQHVOXNZUHWMXFOVZVTLXLDEJDFUMRVCSJXHJWECT");
  msg.value = 8U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LedBrightness - Serialization/Deserialization #2")
{
  IMC::LedBrightness msg;
  msg.setTimeStamp(0.9702125200591978);
  msg.setSource(2893U);
  msg.setSourceEntity(206U);
  msg.setDestination(5452U);
  msg.setDestinationEntity(111U);
  msg.name.assign("FUSKEVHZXGYOXYJMDXTCQMUDQDXZJWTGNUURJFFSTLDHB");
  msg.value = 222U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryLedBrightness - Serialization/Deserialization #0")
{
  IMC::QueryLedBrightness msg;
  msg.setTimeStamp(0.9068515423829732);
  msg.setSource(11501U);
  msg.setSourceEntity(71U);
  msg.setDestination(57717U);
  msg.setDestinationEntity(123U);
  msg.name.assign("VRFVMOTDFAJJSTEPEFSEXAZQQAIPGOMFYGICBTV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryLedBrightness - Serialization/Deserialization #1")
{
  IMC::QueryLedBrightness msg;
  msg.setTimeStamp(0.7686136314231778);
  msg.setSource(20217U);
  msg.setSourceEntity(212U);
  msg.setDestination(429U);
  msg.setDestinationEntity(176U);
  msg.name.assign("SQBOUOHPOQZLQODESHAVJBYPRJECYIMPIFFNQUZZPWIZGGLJRQOVMDSYXYMHCIRVAXMDWWMSURXYKRNPUHRXJTLORVYAXZHCGLQPAHNTBGNCKGCRIPTFYMKEGBBMPAEYJWMEUBGUIOHDPAQKIRFDOPZUUQANTLKWEVXBJTESNQQMIKSODXTCODFCFXYZHNCANTFZEVYIZELBEZCGBJFWVTWVWATVHFKRGSSD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryLedBrightness - Serialization/Deserialization #2")
{
  IMC::QueryLedBrightness msg;
  msg.setTimeStamp(0.371459841887819);
  msg.setSource(11391U);
  msg.setSourceEntity(169U);
  msg.setDestination(39489U);
  msg.setDestinationEntity(49U);
  msg.name.assign("WTBNICJRBMTKOOKWFCISHXGDLSSXQZKQLBAICGCZIYLVWRQYLEFTWVEBGOPFOXECLAWTEODPYNOQJOMRQAMTBCUIMYAHKSMWVRBACYRZLNPFUSNBNNDUXYMCEJFZJCVZWDCQHLNUPGHWV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetLedBrightness - Serialization/Deserialization #0")
{
  IMC::SetLedBrightness msg;
  msg.setTimeStamp(0.9877997313899183);
  msg.setSource(45371U);
  msg.setSourceEntity(209U);
  msg.setDestination(43500U);
  msg.setDestinationEntity(157U);
  msg.name.assign("RJJWYOVIJTUFFKKJWQFPNXWDGVVMYDIGGGXFPURYXALFMCZSVKOBWYFZXTLZDJNYPZGSQJQOREUVHGUKADOPEOMPA");
  msg.value = 103U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetLedBrightness - Serialization/Deserialization #1")
{
  IMC::SetLedBrightness msg;
  msg.setTimeStamp(0.8842644452020928);
  msg.setSource(59419U);
  msg.setSourceEntity(158U);
  msg.setDestination(24564U);
  msg.setDestinationEntity(165U);
  msg.name.assign("FIPLLYMUWFBVQRNCYPNJNIZUMUXMJLKSMEZGBBAZHMPYTCITSRFKTLNCWJOCBTEAESPCWDQEAJRHKUNYUJZBLWMWSGQQXV");
  msg.value = 194U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetLedBrightness - Serialization/Deserialization #2")
{
  IMC::SetLedBrightness msg;
  msg.setTimeStamp(0.9698472668503325);
  msg.setSource(18330U);
  msg.setSourceEntity(130U);
  msg.setDestination(55955U);
  msg.setDestinationEntity(40U);
  msg.name.assign("KUREGCKAPMTQMKDGUXQLJCLIIKLETYWBEDTZOJNRTRXNMSYDUYVHOAUKVZOVTZEMQKPHRISPNHOJTNAWGPULTSMKBVLWSNIHOFJYDAHICRBOEQYUIZAFEYIBDNLTEFDZUBWPHFCRXQAHBUBBGXGVUNCVGJJFQFRQLHOAKKCNQWHZEEIIMWZXXVDWSIFPVCSLAYMCDLMFUGJDRRSPFKYG");
  msg.value = 253U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetPWM - Serialization/Deserialization #0")
{
  IMC::SetPWM msg;
  msg.setTimeStamp(0.03431167637397614);
  msg.setSource(39910U);
  msg.setSourceEntity(223U);
  msg.setDestination(5787U);
  msg.setDestinationEntity(242U);
  msg.id = 247U;
  msg.period = 3072998696U;
  msg.duty_cycle = 1233419758U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetPWM - Serialization/Deserialization #1")
{
  IMC::SetPWM msg;
  msg.setTimeStamp(0.7946455098084457);
  msg.setSource(23252U);
  msg.setSourceEntity(175U);
  msg.setDestination(48201U);
  msg.setDestinationEntity(192U);
  msg.id = 19U;
  msg.period = 2314735736U;
  msg.duty_cycle = 1290484654U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetPWM - Serialization/Deserialization #2")
{
  IMC::SetPWM msg;
  msg.setTimeStamp(0.5515860057893851);
  msg.setSource(50251U);
  msg.setSourceEntity(158U);
  msg.setDestination(38725U);
  msg.setDestinationEntity(170U);
  msg.id = 236U;
  msg.period = 3644569290U;
  msg.duty_cycle = 1743735058U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PWM - Serialization/Deserialization #0")
{
  IMC::PWM msg;
  msg.setTimeStamp(0.5871512472491653);
  msg.setSource(1220U);
  msg.setSourceEntity(188U);
  msg.setDestination(22211U);
  msg.setDestinationEntity(254U);
  msg.id = 121U;
  msg.period = 2680820690U;
  msg.duty_cycle = 3628183702U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PWM - Serialization/Deserialization #1")
{
  IMC::PWM msg;
  msg.setTimeStamp(0.9375717733006069);
  msg.setSource(15640U);
  msg.setSourceEntity(114U);
  msg.setDestination(27176U);
  msg.setDestinationEntity(208U);
  msg.id = 178U;
  msg.period = 3219931222U;
  msg.duty_cycle = 3159581419U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PWM - Serialization/Deserialization #2")
{
  IMC::PWM msg;
  msg.setTimeStamp(0.03340852560074614);
  msg.setSource(49543U);
  msg.setSourceEntity(167U);
  msg.setDestination(44762U);
  msg.setDestinationEntity(56U);
  msg.id = 145U;
  msg.period = 1918672812U;
  msg.duty_cycle = 788345563U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EstimatedState - Serialization/Deserialization #0")
{
  IMC::EstimatedState msg;
  msg.setTimeStamp(0.6225187686860348);
  msg.setSource(9790U);
  msg.setSourceEntity(58U);
  msg.setDestination(13915U);
  msg.setDestinationEntity(253U);
  msg.lat = 0.9072540362798045;
  msg.lon = 0.00026677484522397155;
  msg.height = 0.10520279234544949f;
  msg.x = 0.8376205174131989f;
  msg.y = 0.9085805997350508f;
  msg.z = 0.5458842415851637f;
  msg.phi = 0.04648031973442279f;
  msg.theta = 0.9316661256561677f;
  msg.psi = 0.32919778019961954f;
  msg.u = 0.5883305217930633f;
  msg.v = 0.8854685002089218f;
  msg.w = 0.7231663215201372f;
  msg.vx = 0.943880317216626f;
  msg.vy = 0.7665499907162229f;
  msg.vz = 0.9158432734090514f;
  msg.p = 0.493358809674451f;
  msg.q = 0.27782107313509485f;
  msg.r = 0.9896301643408634f;
  msg.depth = 0.044788115167870624f;
  msg.alt = 0.6020445430329575f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EstimatedState - Serialization/Deserialization #1")
{
  IMC::EstimatedState msg;
  msg.setTimeStamp(0.8018304934751427);
  msg.setSource(36047U);
  msg.setSourceEntity(85U);
  msg.setDestination(37260U);
  msg.setDestinationEntity(241U);
  msg.lat = 0.44813227307282255;
  msg.lon = 0.03880801310649207;
  msg.height = 0.9934646109034677f;
  msg.x = 0.42259196963652623f;
  msg.y = 0.1779603697231209f;
  msg.z = 0.9459078359261721f;
  msg.phi = 0.5472025362016105f;
  msg.theta = 0.6266259295293495f;
  msg.psi = 0.49830294643787343f;
  msg.u = 0.07170879538060393f;
  msg.v = 0.6822952302986808f;
  msg.w = 0.4738873274462503f;
  msg.vx = 0.6293040469816489f;
  msg.vy = 0.9450088258429431f;
  msg.vz = 0.31815511383866857f;
  msg.p = 0.8786503277833171f;
  msg.q = 0.10020576649000834f;
  msg.r = 0.13590715392527075f;
  msg.depth = 0.6054741657693582f;
  msg.alt = 0.08669796105499672f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EstimatedState - Serialization/Deserialization #2")
{
  IMC::EstimatedState msg;
  msg.setTimeStamp(0.050795872816614684);
  msg.setSource(19583U);
  msg.setSourceEntity(86U);
  msg.setDestination(11151U);
  msg.setDestinationEntity(153U);
  msg.lat = 0.9144892663715962;
  msg.lon = 0.7850374807818716;
  msg.height = 0.006637701417020692f;
  msg.x = 0.7518494235483542f;
  msg.y = 0.6483853593394784f;
  msg.z = 0.6710560739900246f;
  msg.phi = 0.5003815003106091f;
  msg.theta = 0.43601232341960805f;
  msg.psi = 0.7382750913612787f;
  msg.u = 0.6901668964991686f;
  msg.v = 0.8593416411576653f;
  msg.w = 0.6558567930361223f;
  msg.vx = 0.8032157249179266f;
  msg.vy = 0.40103903292706367f;
  msg.vz = 0.9042819512158551f;
  msg.p = 0.16203203169675906f;
  msg.q = 0.40867241211006766f;
  msg.r = 0.5525274333905096f;
  msg.depth = 0.8423696886710673f;
  msg.alt = 0.5900631994242753f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EstimatedStreamVelocity - Serialization/Deserialization #0")
{
  IMC::EstimatedStreamVelocity msg;
  msg.setTimeStamp(0.19553220797984028);
  msg.setSource(8898U);
  msg.setSourceEntity(71U);
  msg.setDestination(60937U);
  msg.setDestinationEntity(158U);
  msg.x = 0.008348081384317196;
  msg.y = 0.17602639056712877;
  msg.z = 0.13334807614083244;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EstimatedStreamVelocity - Serialization/Deserialization #1")
{
  IMC::EstimatedStreamVelocity msg;
  msg.setTimeStamp(0.6307120949153602);
  msg.setSource(15486U);
  msg.setSourceEntity(91U);
  msg.setDestination(14093U);
  msg.setDestinationEntity(2U);
  msg.x = 0.7218122790141569;
  msg.y = 0.4835908473446837;
  msg.z = 0.6300176757920164;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EstimatedStreamVelocity - Serialization/Deserialization #2")
{
  IMC::EstimatedStreamVelocity msg;
  msg.setTimeStamp(0.5635618742853163);
  msg.setSource(27211U);
  msg.setSourceEntity(220U);
  msg.setDestination(46884U);
  msg.setDestinationEntity(214U);
  msg.x = 0.13217659820779815;
  msg.y = 0.718531616844154;
  msg.z = 0.12499825874472792;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IndicatedSpeed - Serialization/Deserialization #0")
{
  IMC::IndicatedSpeed msg;
  msg.setTimeStamp(0.21215432347430174);
  msg.setSource(22100U);
  msg.setSourceEntity(219U);
  msg.setDestination(36304U);
  msg.setDestinationEntity(140U);
  msg.value = 0.35158488736256543;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IndicatedSpeed - Serialization/Deserialization #1")
{
  IMC::IndicatedSpeed msg;
  msg.setTimeStamp(0.16660397762569612);
  msg.setSource(17797U);
  msg.setSourceEntity(192U);
  msg.setDestination(556U);
  msg.setDestinationEntity(71U);
  msg.value = 0.8861328606251049;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IndicatedSpeed - Serialization/Deserialization #2")
{
  IMC::IndicatedSpeed msg;
  msg.setTimeStamp(0.5024696476990674);
  msg.setSource(3301U);
  msg.setSourceEntity(237U);
  msg.setDestination(63999U);
  msg.setDestinationEntity(144U);
  msg.value = 0.8624337792975142;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrueSpeed - Serialization/Deserialization #0")
{
  IMC::TrueSpeed msg;
  msg.setTimeStamp(0.6386447587251463);
  msg.setSource(62072U);
  msg.setSourceEntity(141U);
  msg.setDestination(26059U);
  msg.setDestinationEntity(79U);
  msg.value = 0.7952957370237324;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrueSpeed - Serialization/Deserialization #1")
{
  IMC::TrueSpeed msg;
  msg.setTimeStamp(0.18616464607940708);
  msg.setSource(46796U);
  msg.setSourceEntity(158U);
  msg.setDestination(36530U);
  msg.setDestinationEntity(56U);
  msg.value = 0.10926238420440837;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrueSpeed - Serialization/Deserialization #2")
{
  IMC::TrueSpeed msg;
  msg.setTimeStamp(0.3462429623082357);
  msg.setSource(56032U);
  msg.setSourceEntity(139U);
  msg.setDestination(59566U);
  msg.setDestinationEntity(200U);
  msg.value = 0.6016413863016926;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NavigationUncertainty - Serialization/Deserialization #0")
{
  IMC::NavigationUncertainty msg;
  msg.setTimeStamp(0.4311656054547429);
  msg.setSource(24802U);
  msg.setSourceEntity(170U);
  msg.setDestination(41301U);
  msg.setDestinationEntity(13U);
  msg.x = 0.4639762353611515f;
  msg.y = 0.36068562537248683f;
  msg.z = 0.7196374484925212f;
  msg.phi = 0.3387767901860139f;
  msg.theta = 0.48867661464793655f;
  msg.psi = 0.06502968066848702f;
  msg.p = 0.04876809661222825f;
  msg.q = 0.5662932435007474f;
  msg.r = 0.29523649311741607f;
  msg.u = 0.8121920632246862f;
  msg.v = 0.3272936270187595f;
  msg.w = 0.8747504388997683f;
  msg.bias_psi = 0.09494852640728102f;
  msg.bias_r = 0.5497652968423248f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NavigationUncertainty - Serialization/Deserialization #1")
{
  IMC::NavigationUncertainty msg;
  msg.setTimeStamp(0.03466788024183043);
  msg.setSource(46801U);
  msg.setSourceEntity(131U);
  msg.setDestination(18215U);
  msg.setDestinationEntity(154U);
  msg.x = 0.8309095491045168f;
  msg.y = 0.5677852033531632f;
  msg.z = 0.24008753608844613f;
  msg.phi = 0.8563985805189128f;
  msg.theta = 0.3320814633093826f;
  msg.psi = 0.8413596500662776f;
  msg.p = 0.6208780054077674f;
  msg.q = 0.9631673478106789f;
  msg.r = 0.31865813093452766f;
  msg.u = 0.16135065612874655f;
  msg.v = 0.11563105596098133f;
  msg.w = 0.09869677238463037f;
  msg.bias_psi = 0.4242155505286911f;
  msg.bias_r = 0.2867947811092817f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NavigationUncertainty - Serialization/Deserialization #2")
{
  IMC::NavigationUncertainty msg;
  msg.setTimeStamp(0.35526421300394284);
  msg.setSource(33393U);
  msg.setSourceEntity(107U);
  msg.setDestination(1729U);
  msg.setDestinationEntity(202U);
  msg.x = 0.09931706104234961f;
  msg.y = 0.14201615833680648f;
  msg.z = 0.08644716506621775f;
  msg.phi = 0.28485522593722834f;
  msg.theta = 0.9722738538668632f;
  msg.psi = 0.12221842729422383f;
  msg.p = 0.8306004059197267f;
  msg.q = 0.28200109219023906f;
  msg.r = 0.20873165996645493f;
  msg.u = 0.488024231628467f;
  msg.v = 0.4248490649043103f;
  msg.w = 0.27358792417074973f;
  msg.bias_psi = 0.6366808236328203f;
  msg.bias_r = 0.5315857591056885f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NavigationData - Serialization/Deserialization #0")
{
  IMC::NavigationData msg;
  msg.setTimeStamp(0.8723996367765425);
  msg.setSource(62164U);
  msg.setSourceEntity(10U);
  msg.setDestination(564U);
  msg.setDestinationEntity(240U);
  msg.bias_psi = 0.869405991926941f;
  msg.bias_r = 0.12300657034029616f;
  msg.cog = 0.722343982699814f;
  msg.cyaw = 0.11032081596530985f;
  msg.lbl_rej_level = 0.6754452938285257f;
  msg.gps_rej_level = 0.3014339222672644f;
  msg.custom_x = 0.4968566336363942f;
  msg.custom_y = 0.393125681876752f;
  msg.custom_z = 0.32996361016549924f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NavigationData - Serialization/Deserialization #1")
{
  IMC::NavigationData msg;
  msg.setTimeStamp(0.4196571781185654);
  msg.setSource(47147U);
  msg.setSourceEntity(40U);
  msg.setDestination(6714U);
  msg.setDestinationEntity(142U);
  msg.bias_psi = 0.5748230222405795f;
  msg.bias_r = 0.6629173538496546f;
  msg.cog = 0.7612315428427576f;
  msg.cyaw = 0.9460841263110356f;
  msg.lbl_rej_level = 0.3944929896034719f;
  msg.gps_rej_level = 0.613227278576899f;
  msg.custom_x = 0.4984369537118416f;
  msg.custom_y = 0.047516428140987554f;
  msg.custom_z = 0.12265533760178571f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NavigationData - Serialization/Deserialization #2")
{
  IMC::NavigationData msg;
  msg.setTimeStamp(0.5945322769883165);
  msg.setSource(29289U);
  msg.setSourceEntity(181U);
  msg.setDestination(61390U);
  msg.setDestinationEntity(224U);
  msg.bias_psi = 0.37563137377154077f;
  msg.bias_r = 0.9137164645228837f;
  msg.cog = 0.46989207558736035f;
  msg.cyaw = 0.9787141175077007f;
  msg.lbl_rej_level = 0.07862929235330607f;
  msg.gps_rej_level = 0.8630473118463957f;
  msg.custom_x = 0.009633650584704556f;
  msg.custom_y = 0.9674395595702263f;
  msg.custom_z = 0.8571096624883615f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFixRejection - Serialization/Deserialization #0")
{
  IMC::GpsFixRejection msg;
  msg.setTimeStamp(0.05710042219590217);
  msg.setSource(48359U);
  msg.setSourceEntity(28U);
  msg.setDestination(11440U);
  msg.setDestinationEntity(84U);
  msg.utc_time = 0.6470315528019885f;
  msg.reason = 18U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFixRejection - Serialization/Deserialization #1")
{
  IMC::GpsFixRejection msg;
  msg.setTimeStamp(0.7371603455854431);
  msg.setSource(58585U);
  msg.setSourceEntity(96U);
  msg.setDestination(3936U);
  msg.setDestinationEntity(64U);
  msg.utc_time = 0.8059608631351632f;
  msg.reason = 171U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpsFixRejection - Serialization/Deserialization #2")
{
  IMC::GpsFixRejection msg;
  msg.setTimeStamp(0.8107118138149948);
  msg.setSource(8625U);
  msg.setSourceEntity(167U);
  msg.setDestination(29420U);
  msg.setDestinationEntity(53U);
  msg.utc_time = 0.11033956117166155f;
  msg.reason = 105U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblRangeAcceptance - Serialization/Deserialization #0")
{
  IMC::LblRangeAcceptance msg;
  msg.setTimeStamp(0.06657766435834589);
  msg.setSource(55635U);
  msg.setSourceEntity(182U);
  msg.setDestination(19675U);
  msg.setDestinationEntity(62U);
  msg.id = 191U;
  msg.range = 0.5780001171322506f;
  msg.acceptance = 59U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblRangeAcceptance - Serialization/Deserialization #1")
{
  IMC::LblRangeAcceptance msg;
  msg.setTimeStamp(0.8328313738706578);
  msg.setSource(24736U);
  msg.setSourceEntity(145U);
  msg.setDestination(27049U);
  msg.setDestinationEntity(164U);
  msg.id = 90U;
  msg.range = 0.7381857477115666f;
  msg.acceptance = 202U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblRangeAcceptance - Serialization/Deserialization #2")
{
  IMC::LblRangeAcceptance msg;
  msg.setTimeStamp(0.5443669987047078);
  msg.setSource(34676U);
  msg.setSourceEntity(120U);
  msg.setDestination(49070U);
  msg.setDestinationEntity(193U);
  msg.id = 118U;
  msg.range = 0.5120879138824022f;
  msg.acceptance = 40U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DvlRejection - Serialization/Deserialization #0")
{
  IMC::DvlRejection msg;
  msg.setTimeStamp(0.2508214754645868);
  msg.setSource(17105U);
  msg.setSourceEntity(112U);
  msg.setDestination(27116U);
  msg.setDestinationEntity(13U);
  msg.type = 56U;
  msg.reason = 242U;
  msg.value = 0.6922351864471423f;
  msg.timestep = 0.8714822342554558f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DvlRejection - Serialization/Deserialization #1")
{
  IMC::DvlRejection msg;
  msg.setTimeStamp(0.4869919578809856);
  msg.setSource(41218U);
  msg.setSourceEntity(212U);
  msg.setDestination(57614U);
  msg.setDestinationEntity(183U);
  msg.type = 216U;
  msg.reason = 84U;
  msg.value = 0.4160047410188733f;
  msg.timestep = 0.7515152688968306f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DvlRejection - Serialization/Deserialization #2")
{
  IMC::DvlRejection msg;
  msg.setTimeStamp(0.6445035227973673);
  msg.setSource(48101U);
  msg.setSourceEntity(129U);
  msg.setDestination(18566U);
  msg.setDestinationEntity(100U);
  msg.type = 21U;
  msg.reason = 250U;
  msg.value = 0.2829645529260737f;
  msg.timestep = 0.4950912304379598f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblEstimate - Serialization/Deserialization #0")
{
  IMC::LblEstimate msg;
  msg.setTimeStamp(0.45904575542563364);
  msg.setSource(32900U);
  msg.setSourceEntity(153U);
  msg.setDestination(64687U);
  msg.setDestinationEntity(208U);
  IMC::LblBeacon tmp_msg_0;
  tmp_msg_0.beacon.assign("ULHABWQORNEJXZVGHGENRBRYPWIULTQNSOWDIAIFQQCZODTTMBIVJDPXCYILHVSMFXJDGSFUCKGONCPNYANMZSHXHCJAFIBUZQIEELYIGWFANUMERHDMCAHXDGYUKQWGMESKPZTDOOMLBXXTJVCZKFZUWCRNAOTUPVYJYFTXQETKPKLULRFJEJYOMILOPB");
  tmp_msg_0.lat = 0.05531311817486895;
  tmp_msg_0.lon = 0.5961108805789875;
  tmp_msg_0.depth = 0.9096562645194424f;
  tmp_msg_0.query_channel = 115U;
  tmp_msg_0.reply_channel = 116U;
  tmp_msg_0.transponder_delay = 101U;
  msg.beacon.set(tmp_msg_0);
  msg.x = 0.5910144367480132f;
  msg.y = 0.7600183856138271f;
  msg.var_x = 0.2740958832339657f;
  msg.var_y = 0.34294181302584914f;
  msg.distance = 0.1446034005144089f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblEstimate - Serialization/Deserialization #1")
{
  IMC::LblEstimate msg;
  msg.setTimeStamp(0.9846391739906171);
  msg.setSource(8404U);
  msg.setSourceEntity(215U);
  msg.setDestination(54088U);
  msg.setDestinationEntity(235U);
  IMC::LblBeacon tmp_msg_0;
  tmp_msg_0.beacon.assign("PTRBQVQNLUSEOKOVLAWOYBLADTZVCZJKGXORUUHKMWSGDCFZGYQMJUWRPIEOIWSIRKAHASHINKD");
  tmp_msg_0.lat = 0.5260254183368965;
  tmp_msg_0.lon = 0.5541941970114147;
  tmp_msg_0.depth = 0.7289884731474011f;
  tmp_msg_0.query_channel = 46U;
  tmp_msg_0.reply_channel = 100U;
  tmp_msg_0.transponder_delay = 57U;
  msg.beacon.set(tmp_msg_0);
  msg.x = 0.6872044588354117f;
  msg.y = 0.6703635343869724f;
  msg.var_x = 0.8104661321540217f;
  msg.var_y = 0.9865592531486894f;
  msg.distance = 0.7770338403139461f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LblEstimate - Serialization/Deserialization #2")
{
  IMC::LblEstimate msg;
  msg.setTimeStamp(0.5176581123095407);
  msg.setSource(50285U);
  msg.setSourceEntity(181U);
  msg.setDestination(41056U);
  msg.setDestinationEntity(46U);
  IMC::LblBeacon tmp_msg_0;
  tmp_msg_0.beacon.assign("XAFMOWSRZBFRBYAFYOPQXXAVCZKYPLUTPNVWORJMWPLBAHHFHXOGAYJWTPCCPJWLORIULHNEVEAUBHLKCEKUMCU");
  tmp_msg_0.lat = 0.41480864697386066;
  tmp_msg_0.lon = 0.05623199912932575;
  tmp_msg_0.depth = 0.180897622380764f;
  tmp_msg_0.query_channel = 106U;
  tmp_msg_0.reply_channel = 32U;
  tmp_msg_0.transponder_delay = 152U;
  msg.beacon.set(tmp_msg_0);
  msg.x = 0.009963053161492708f;
  msg.y = 0.8699977588155731f;
  msg.var_x = 0.8425902877966082f;
  msg.var_y = 0.08496992688069094f;
  msg.distance = 0.9243937767216401f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AlignmentState - Serialization/Deserialization #0")
{
  IMC::AlignmentState msg;
  msg.setTimeStamp(0.7176333652918747);
  msg.setSource(44607U);
  msg.setSourceEntity(59U);
  msg.setDestination(11981U);
  msg.setDestinationEntity(79U);
  msg.state = 66U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AlignmentState - Serialization/Deserialization #1")
{
  IMC::AlignmentState msg;
  msg.setTimeStamp(0.09092892233710348);
  msg.setSource(16272U);
  msg.setSourceEntity(240U);
  msg.setDestination(7721U);
  msg.setDestinationEntity(187U);
  msg.state = 65U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AlignmentState - Serialization/Deserialization #2")
{
  IMC::AlignmentState msg;
  msg.setTimeStamp(0.771501502362975);
  msg.setSource(36680U);
  msg.setSourceEntity(90U);
  msg.setDestination(33700U);
  msg.setDestinationEntity(251U);
  msg.state = 79U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroupStreamVelocity - Serialization/Deserialization #0")
{
  IMC::GroupStreamVelocity msg;
  msg.setTimeStamp(0.902648400959774);
  msg.setSource(20942U);
  msg.setSourceEntity(231U);
  msg.setDestination(37625U);
  msg.setDestinationEntity(5U);
  msg.x = 0.3327385370829038;
  msg.y = 0.9722072105497355;
  msg.z = 0.6442494629631341;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroupStreamVelocity - Serialization/Deserialization #1")
{
  IMC::GroupStreamVelocity msg;
  msg.setTimeStamp(0.8597218368905263);
  msg.setSource(16334U);
  msg.setSourceEntity(162U);
  msg.setDestination(44259U);
  msg.setDestinationEntity(11U);
  msg.x = 0.04081917726284856;
  msg.y = 0.9250421643657918;
  msg.z = 0.6233942429708148;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GroupStreamVelocity - Serialization/Deserialization #2")
{
  IMC::GroupStreamVelocity msg;
  msg.setTimeStamp(0.4665130805387221);
  msg.setSource(38888U);
  msg.setSourceEntity(109U);
  msg.setDestination(36768U);
  msg.setDestinationEntity(111U);
  msg.x = 0.1955812830969642;
  msg.y = 0.6632805869728404;
  msg.z = 0.4229224723721121;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Airflow - Serialization/Deserialization #0")
{
  IMC::Airflow msg;
  msg.setTimeStamp(0.9094062029653183);
  msg.setSource(42481U);
  msg.setSourceEntity(123U);
  msg.setDestination(29845U);
  msg.setDestinationEntity(214U);
  msg.va = 0.19838622792969673f;
  msg.aoa = 0.3788160478800561f;
  msg.ssa = 0.7901741339963952f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Airflow - Serialization/Deserialization #1")
{
  IMC::Airflow msg;
  msg.setTimeStamp(0.06608658157052272);
  msg.setSource(22401U);
  msg.setSourceEntity(186U);
  msg.setDestination(36556U);
  msg.setDestinationEntity(134U);
  msg.va = 0.2944005878616238f;
  msg.aoa = 0.943339367363893f;
  msg.ssa = 0.7923667528134337f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Airflow - Serialization/Deserialization #2")
{
  IMC::Airflow msg;
  msg.setTimeStamp(0.9488092505744873);
  msg.setSource(23889U);
  msg.setSourceEntity(176U);
  msg.setDestination(61802U);
  msg.setDestinationEntity(37U);
  msg.va = 0.40744407037078956f;
  msg.aoa = 0.2600383686076899f;
  msg.ssa = 0.4468875295334086f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredHeading - Serialization/Deserialization #0")
{
  IMC::DesiredHeading msg;
  msg.setTimeStamp(0.04593400927401059);
  msg.setSource(19320U);
  msg.setSourceEntity(34U);
  msg.setDestination(36595U);
  msg.setDestinationEntity(201U);
  msg.value = 0.24928431508211935;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredHeading - Serialization/Deserialization #1")
{
  IMC::DesiredHeading msg;
  msg.setTimeStamp(0.9723021023892086);
  msg.setSource(57098U);
  msg.setSourceEntity(64U);
  msg.setDestination(37802U);
  msg.setDestinationEntity(186U);
  msg.value = 0.45742248648968464;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredHeading - Serialization/Deserialization #2")
{
  IMC::DesiredHeading msg;
  msg.setTimeStamp(0.35272784106417066);
  msg.setSource(36697U);
  msg.setSourceEntity(42U);
  msg.setDestination(18171U);
  msg.setDestinationEntity(132U);
  msg.value = 0.8244801370201952;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredZ - Serialization/Deserialization #0")
{
  IMC::DesiredZ msg;
  msg.setTimeStamp(0.9867981859168127);
  msg.setSource(43431U);
  msg.setSourceEntity(149U);
  msg.setDestination(49164U);
  msg.setDestinationEntity(90U);
  msg.value = 0.6934885279653975f;
  msg.z_units = 254U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredZ - Serialization/Deserialization #1")
{
  IMC::DesiredZ msg;
  msg.setTimeStamp(0.5765087999554226);
  msg.setSource(42711U);
  msg.setSourceEntity(27U);
  msg.setDestination(33879U);
  msg.setDestinationEntity(15U);
  msg.value = 0.973324475300039f;
  msg.z_units = 244U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredZ - Serialization/Deserialization #2")
{
  IMC::DesiredZ msg;
  msg.setTimeStamp(0.8721825194275096);
  msg.setSource(30184U);
  msg.setSourceEntity(83U);
  msg.setDestination(48511U);
  msg.setDestinationEntity(69U);
  msg.value = 0.4235123237444167f;
  msg.z_units = 36U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredSpeed - Serialization/Deserialization #0")
{
  IMC::DesiredSpeed msg;
  msg.setTimeStamp(0.055478761986802905);
  msg.setSource(13653U);
  msg.setSourceEntity(129U);
  msg.setDestination(49091U);
  msg.setDestinationEntity(59U);
  msg.value = 0.29537832626634186;
  msg.speed_units = 238U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredSpeed - Serialization/Deserialization #1")
{
  IMC::DesiredSpeed msg;
  msg.setTimeStamp(0.34410999758286764);
  msg.setSource(31201U);
  msg.setSourceEntity(228U);
  msg.setDestination(29991U);
  msg.setDestinationEntity(52U);
  msg.value = 0.7565019508527372;
  msg.speed_units = 210U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredSpeed - Serialization/Deserialization #2")
{
  IMC::DesiredSpeed msg;
  msg.setTimeStamp(0.14455577032203837);
  msg.setSource(36044U);
  msg.setSourceEntity(81U);
  msg.setDestination(58105U);
  msg.setDestinationEntity(154U);
  msg.value = 0.6976099421786182;
  msg.speed_units = 116U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredRoll - Serialization/Deserialization #0")
{
  IMC::DesiredRoll msg;
  msg.setTimeStamp(0.990893906486428);
  msg.setSource(214U);
  msg.setSourceEntity(69U);
  msg.setDestination(21839U);
  msg.setDestinationEntity(224U);
  msg.value = 0.03655500135780321;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredRoll - Serialization/Deserialization #1")
{
  IMC::DesiredRoll msg;
  msg.setTimeStamp(0.7335642568362813);
  msg.setSource(60941U);
  msg.setSourceEntity(192U);
  msg.setDestination(37304U);
  msg.setDestinationEntity(176U);
  msg.value = 0.13094712569672573;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredRoll - Serialization/Deserialization #2")
{
  IMC::DesiredRoll msg;
  msg.setTimeStamp(0.06027043632684859);
  msg.setSource(59735U);
  msg.setSourceEntity(3U);
  msg.setDestination(52238U);
  msg.setDestinationEntity(125U);
  msg.value = 0.09698133688349675;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredPitch - Serialization/Deserialization #0")
{
  IMC::DesiredPitch msg;
  msg.setTimeStamp(0.3941225237382141);
  msg.setSource(32020U);
  msg.setSourceEntity(51U);
  msg.setDestination(48081U);
  msg.setDestinationEntity(200U);
  msg.value = 0.5458901147130436;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredPitch - Serialization/Deserialization #1")
{
  IMC::DesiredPitch msg;
  msg.setTimeStamp(0.543263041689983);
  msg.setSource(44707U);
  msg.setSourceEntity(94U);
  msg.setDestination(9645U);
  msg.setDestinationEntity(2U);
  msg.value = 0.6299883193294599;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredPitch - Serialization/Deserialization #2")
{
  IMC::DesiredPitch msg;
  msg.setTimeStamp(0.6118651604218167);
  msg.setSource(20744U);
  msg.setSourceEntity(98U);
  msg.setDestination(13325U);
  msg.setDestinationEntity(249U);
  msg.value = 0.5928741381749284;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredVerticalRate - Serialization/Deserialization #0")
{
  IMC::DesiredVerticalRate msg;
  msg.setTimeStamp(0.7165052946716673);
  msg.setSource(50902U);
  msg.setSourceEntity(79U);
  msg.setDestination(40677U);
  msg.setDestinationEntity(181U);
  msg.value = 0.8948210290082376;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredVerticalRate - Serialization/Deserialization #1")
{
  IMC::DesiredVerticalRate msg;
  msg.setTimeStamp(0.7362603995613733);
  msg.setSource(9984U);
  msg.setSourceEntity(244U);
  msg.setDestination(33531U);
  msg.setDestinationEntity(106U);
  msg.value = 0.7646131700154479;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredVerticalRate - Serialization/Deserialization #2")
{
  IMC::DesiredVerticalRate msg;
  msg.setTimeStamp(0.8355656475537363);
  msg.setSource(19189U);
  msg.setSourceEntity(155U);
  msg.setDestination(21808U);
  msg.setDestinationEntity(199U);
  msg.value = 0.2930328491500186;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredPath - Serialization/Deserialization #0")
{
  IMC::DesiredPath msg;
  msg.setTimeStamp(0.2791379354506951);
  msg.setSource(33146U);
  msg.setSourceEntity(206U);
  msg.setDestination(18399U);
  msg.setDestinationEntity(48U);
  msg.path_ref = 982870691U;
  msg.start_lat = 0.28369729185209347;
  msg.start_lon = 0.9709203486317246;
  msg.start_z = 0.18016868719078305f;
  msg.start_z_units = 110U;
  msg.end_lat = 0.4455561308538325;
  msg.end_lon = 0.463514985704904;
  msg.end_z = 0.6798895812585013f;
  msg.end_z_units = 41U;
  msg.speed = 0.5929662615398014f;
  msg.speed_units = 143U;
  msg.lradius = 0.12993120082420095f;
  msg.flags = 131U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredPath - Serialization/Deserialization #1")
{
  IMC::DesiredPath msg;
  msg.setTimeStamp(0.21927770170373517);
  msg.setSource(41731U);
  msg.setSourceEntity(117U);
  msg.setDestination(2260U);
  msg.setDestinationEntity(58U);
  msg.path_ref = 1749147457U;
  msg.start_lat = 0.36856934620519965;
  msg.start_lon = 0.16814542780581077;
  msg.start_z = 0.6198901088513015f;
  msg.start_z_units = 253U;
  msg.end_lat = 0.2867228784271214;
  msg.end_lon = 0.902171651241696;
  msg.end_z = 0.7363770100167791f;
  msg.end_z_units = 48U;
  msg.speed = 0.6668784344004983f;
  msg.speed_units = 50U;
  msg.lradius = 0.16718950443398173f;
  msg.flags = 125U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredPath - Serialization/Deserialization #2")
{
  IMC::DesiredPath msg;
  msg.setTimeStamp(0.26281670643435784);
  msg.setSource(35290U);
  msg.setSourceEntity(153U);
  msg.setDestination(7644U);
  msg.setDestinationEntity(177U);
  msg.path_ref = 573574300U;
  msg.start_lat = 0.019279515179435824;
  msg.start_lon = 0.913714028219099;
  msg.start_z = 0.6998371197945816f;
  msg.start_z_units = 233U;
  msg.end_lat = 0.4202772048512019;
  msg.end_lon = 0.5962258547130915;
  msg.end_z = 0.3215424319002701f;
  msg.end_z_units = 227U;
  msg.speed = 0.4125461341229294f;
  msg.speed_units = 210U;
  msg.lradius = 0.7791185100995248f;
  msg.flags = 129U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredControl - Serialization/Deserialization #0")
{
  IMC::DesiredControl msg;
  msg.setTimeStamp(0.06707352133244682);
  msg.setSource(39267U);
  msg.setSourceEntity(254U);
  msg.setDestination(38045U);
  msg.setDestinationEntity(1U);
  msg.x = 0.5547770465298811;
  msg.y = 0.15458565922958722;
  msg.z = 0.3502585687404536;
  msg.k = 0.5454034509485102;
  msg.m = 0.31114337816347837;
  msg.n = 0.543958408730648;
  msg.flags = 75U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredControl - Serialization/Deserialization #1")
{
  IMC::DesiredControl msg;
  msg.setTimeStamp(0.31370389687853295);
  msg.setSource(40516U);
  msg.setSourceEntity(102U);
  msg.setDestination(13636U);
  msg.setDestinationEntity(153U);
  msg.x = 0.1105547181931299;
  msg.y = 0.38112849968582163;
  msg.z = 0.35904483210034477;
  msg.k = 0.5273022509912315;
  msg.m = 0.9844201271499549;
  msg.n = 0.7335026026327348;
  msg.flags = 166U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredControl - Serialization/Deserialization #2")
{
  IMC::DesiredControl msg;
  msg.setTimeStamp(0.8133227485056812);
  msg.setSource(37167U);
  msg.setSourceEntity(224U);
  msg.setDestination(20672U);
  msg.setDestinationEntity(119U);
  msg.x = 0.8288685688893421;
  msg.y = 0.11046104264207934;
  msg.z = 0.5878442694871319;
  msg.k = 0.7168619841871929;
  msg.m = 0.94210100864982;
  msg.n = 0.2353845104326876;
  msg.flags = 233U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredHeadingRate - Serialization/Deserialization #0")
{
  IMC::DesiredHeadingRate msg;
  msg.setTimeStamp(0.36735070913681045);
  msg.setSource(63649U);
  msg.setSourceEntity(241U);
  msg.setDestination(48778U);
  msg.setDestinationEntity(152U);
  msg.value = 0.2765124758937745;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredHeadingRate - Serialization/Deserialization #1")
{
  IMC::DesiredHeadingRate msg;
  msg.setTimeStamp(0.7473538038104622);
  msg.setSource(51900U);
  msg.setSourceEntity(123U);
  msg.setDestination(60458U);
  msg.setDestinationEntity(156U);
  msg.value = 0.5591100201062297;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredHeadingRate - Serialization/Deserialization #2")
{
  IMC::DesiredHeadingRate msg;
  msg.setTimeStamp(0.25532620363656855);
  msg.setSource(44775U);
  msg.setSourceEntity(87U);
  msg.setDestination(25933U);
  msg.setDestinationEntity(12U);
  msg.value = 0.4328833841388694;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredVelocity - Serialization/Deserialization #0")
{
  IMC::DesiredVelocity msg;
  msg.setTimeStamp(0.38816326318166783);
  msg.setSource(40821U);
  msg.setSourceEntity(252U);
  msg.setDestination(43256U);
  msg.setDestinationEntity(106U);
  msg.u = 0.6358402005337164;
  msg.v = 0.09505136082831989;
  msg.w = 0.3320286817251482;
  msg.p = 0.674568837643433;
  msg.q = 0.45665890742055126;
  msg.r = 0.5263890577563306;
  msg.flags = 208U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredVelocity - Serialization/Deserialization #1")
{
  IMC::DesiredVelocity msg;
  msg.setTimeStamp(0.3104233897570091);
  msg.setSource(52538U);
  msg.setSourceEntity(183U);
  msg.setDestination(56669U);
  msg.setDestinationEntity(133U);
  msg.u = 0.49381456451654016;
  msg.v = 0.5393861189748959;
  msg.w = 0.16810157231391165;
  msg.p = 0.49275361701396314;
  msg.q = 0.13679954297557928;
  msg.r = 0.6832678010561503;
  msg.flags = 98U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredVelocity - Serialization/Deserialization #2")
{
  IMC::DesiredVelocity msg;
  msg.setTimeStamp(0.36124559540376655);
  msg.setSource(21066U);
  msg.setSourceEntity(141U);
  msg.setDestination(813U);
  msg.setDestinationEntity(178U);
  msg.u = 0.06637365929917227;
  msg.v = 0.4073636816563022;
  msg.w = 0.26424020316910934;
  msg.p = 0.579015184001966;
  msg.q = 0.9425029510909406;
  msg.r = 0.12761404234974993;
  msg.flags = 194U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PathControlState - Serialization/Deserialization #0")
{
  IMC::PathControlState msg;
  msg.setTimeStamp(0.8056608058959199);
  msg.setSource(48059U);
  msg.setSourceEntity(107U);
  msg.setDestination(8559U);
  msg.setDestinationEntity(53U);
  msg.path_ref = 1450165500U;
  msg.start_lat = 0.9900120094196393;
  msg.start_lon = 0.05371466210663833;
  msg.start_z = 0.16652943317838387f;
  msg.start_z_units = 51U;
  msg.end_lat = 0.10989623941098348;
  msg.end_lon = 0.6671758610125049;
  msg.end_z = 0.5559751054798444f;
  msg.end_z_units = 181U;
  msg.lradius = 0.3223895973485996f;
  msg.flags = 26U;
  msg.x = 0.5097552169465854f;
  msg.y = 0.05257342147594446f;
  msg.z = 0.3885268500953595f;
  msg.vx = 0.5988870992894519f;
  msg.vy = 0.9413674957323688f;
  msg.vz = 0.7895612326359475f;
  msg.course_error = 0.3931743418814624f;
  msg.eta = 35394U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PathControlState - Serialization/Deserialization #1")
{
  IMC::PathControlState msg;
  msg.setTimeStamp(0.3717622564927229);
  msg.setSource(45435U);
  msg.setSourceEntity(109U);
  msg.setDestination(8707U);
  msg.setDestinationEntity(221U);
  msg.path_ref = 2703046739U;
  msg.start_lat = 0.009731020228346043;
  msg.start_lon = 0.35161928736046577;
  msg.start_z = 0.7751835130503242f;
  msg.start_z_units = 227U;
  msg.end_lat = 0.9343837245856482;
  msg.end_lon = 0.9230514027037088;
  msg.end_z = 0.9313174343204487f;
  msg.end_z_units = 179U;
  msg.lradius = 0.5122009433171144f;
  msg.flags = 49U;
  msg.x = 0.28403051784895406f;
  msg.y = 0.9556607178513612f;
  msg.z = 0.6508746342176597f;
  msg.vx = 0.9403136527233381f;
  msg.vy = 0.4597829173859771f;
  msg.vz = 0.43255772098591383f;
  msg.course_error = 0.4770506241128153f;
  msg.eta = 12580U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PathControlState - Serialization/Deserialization #2")
{
  IMC::PathControlState msg;
  msg.setTimeStamp(0.8616246812229408);
  msg.setSource(47635U);
  msg.setSourceEntity(172U);
  msg.setDestination(54450U);
  msg.setDestinationEntity(70U);
  msg.path_ref = 3444527185U;
  msg.start_lat = 0.5773809284284459;
  msg.start_lon = 0.6409991799893839;
  msg.start_z = 0.3012940392302662f;
  msg.start_z_units = 2U;
  msg.end_lat = 0.21207728592012853;
  msg.end_lon = 0.27254386169312794;
  msg.end_z = 0.11379713014161374f;
  msg.end_z_units = 144U;
  msg.lradius = 0.044125706828641365f;
  msg.flags = 82U;
  msg.x = 0.043512612180396815f;
  msg.y = 0.557196184741995f;
  msg.z = 0.4552704593982754f;
  msg.vx = 0.11932663239343444f;
  msg.vy = 0.1229508072750316f;
  msg.vz = 0.45604965167209066f;
  msg.course_error = 0.19179785129100335f;
  msg.eta = 11094U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AllocatedControlTorques - Serialization/Deserialization #0")
{
  IMC::AllocatedControlTorques msg;
  msg.setTimeStamp(0.5601386037898253);
  msg.setSource(46732U);
  msg.setSourceEntity(225U);
  msg.setDestination(56556U);
  msg.setDestinationEntity(213U);
  msg.k = 0.06882536922017224;
  msg.m = 0.0870298235966046;
  msg.n = 0.6988876829647012;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AllocatedControlTorques - Serialization/Deserialization #1")
{
  IMC::AllocatedControlTorques msg;
  msg.setTimeStamp(0.047643992902493104);
  msg.setSource(1712U);
  msg.setSourceEntity(250U);
  msg.setDestination(25991U);
  msg.setDestinationEntity(13U);
  msg.k = 0.29088590023899674;
  msg.m = 0.6590386512963203;
  msg.n = 0.1250080467371072;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AllocatedControlTorques - Serialization/Deserialization #2")
{
  IMC::AllocatedControlTorques msg;
  msg.setTimeStamp(0.006444662081712904);
  msg.setSource(63386U);
  msg.setSourceEntity(168U);
  msg.setDestination(44611U);
  msg.setDestinationEntity(241U);
  msg.k = 0.39248644847693126;
  msg.m = 0.14602384705859373;
  msg.n = 0.8825766115928747;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ControlParcel - Serialization/Deserialization #0")
{
  IMC::ControlParcel msg;
  msg.setTimeStamp(0.1635005032714818);
  msg.setSource(55700U);
  msg.setSourceEntity(165U);
  msg.setDestination(21605U);
  msg.setDestinationEntity(58U);
  msg.p = 0.018103078665431593f;
  msg.i = 0.8749190093468253f;
  msg.d = 0.5382645466603766f;
  msg.a = 0.8415118260703689f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ControlParcel - Serialization/Deserialization #1")
{
  IMC::ControlParcel msg;
  msg.setTimeStamp(0.5620144006119789);
  msg.setSource(8218U);
  msg.setSourceEntity(192U);
  msg.setDestination(1576U);
  msg.setDestinationEntity(127U);
  msg.p = 0.9520186985361162f;
  msg.i = 0.014257967146300676f;
  msg.d = 0.2962488344262004f;
  msg.a = 0.35200664752677135f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ControlParcel - Serialization/Deserialization #2")
{
  IMC::ControlParcel msg;
  msg.setTimeStamp(0.027688086578507298);
  msg.setSource(29558U);
  msg.setSourceEntity(120U);
  msg.setDestination(63869U);
  msg.setDestinationEntity(65U);
  msg.p = 0.7733475953063955f;
  msg.i = 0.10552657392028375f;
  msg.d = 0.592538924297469f;
  msg.a = 0.708245751107991f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Brake - Serialization/Deserialization #0")
{
  IMC::Brake msg;
  msg.setTimeStamp(0.48221970986494755);
  msg.setSource(55167U);
  msg.setSourceEntity(168U);
  msg.setDestination(41352U);
  msg.setDestinationEntity(237U);
  msg.op = 113U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Brake - Serialization/Deserialization #1")
{
  IMC::Brake msg;
  msg.setTimeStamp(0.7507657316289899);
  msg.setSource(13941U);
  msg.setSourceEntity(205U);
  msg.setDestination(50996U);
  msg.setDestinationEntity(165U);
  msg.op = 190U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Brake - Serialization/Deserialization #2")
{
  IMC::Brake msg;
  msg.setTimeStamp(0.7822738550441029);
  msg.setSource(61803U);
  msg.setSourceEntity(34U);
  msg.setDestination(45398U);
  msg.setDestinationEntity(119U);
  msg.op = 112U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredLinearState - Serialization/Deserialization #0")
{
  IMC::DesiredLinearState msg;
  msg.setTimeStamp(0.15990151579716816);
  msg.setSource(62566U);
  msg.setSourceEntity(42U);
  msg.setDestination(28894U);
  msg.setDestinationEntity(37U);
  msg.x = 0.5306987305079339;
  msg.y = 0.7815271586679606;
  msg.z = 0.5380072292886616;
  msg.vx = 0.09597540062227727;
  msg.vy = 0.1588648591896209;
  msg.vz = 0.2758026528604056;
  msg.ax = 0.7342311100403841;
  msg.ay = 0.7652167487528919;
  msg.az = 0.9695920906929022;
  msg.flags = 7998U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredLinearState - Serialization/Deserialization #1")
{
  IMC::DesiredLinearState msg;
  msg.setTimeStamp(0.47152647652205926);
  msg.setSource(53690U);
  msg.setSourceEntity(150U);
  msg.setDestination(36734U);
  msg.setDestinationEntity(235U);
  msg.x = 0.5668242406533599;
  msg.y = 0.8312437423582197;
  msg.z = 0.9043454020187799;
  msg.vx = 0.4120949073519735;
  msg.vy = 0.48716897352139765;
  msg.vz = 0.22544543097731884;
  msg.ax = 0.9410204484076061;
  msg.ay = 0.17736026260438364;
  msg.az = 0.30140272290878545;
  msg.flags = 40341U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredLinearState - Serialization/Deserialization #2")
{
  IMC::DesiredLinearState msg;
  msg.setTimeStamp(0.20120360683095107);
  msg.setSource(26915U);
  msg.setSourceEntity(99U);
  msg.setDestination(47639U);
  msg.setDestinationEntity(204U);
  msg.x = 0.9730392015664143;
  msg.y = 0.12439715537892826;
  msg.z = 0.496066281270527;
  msg.vx = 0.8423534086354536;
  msg.vy = 0.22452338507709635;
  msg.vz = 0.2762855985112511;
  msg.ax = 0.702282391884657;
  msg.ay = 0.08145366762975081;
  msg.az = 0.9521148529308665;
  msg.flags = 44435U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredThrottle - Serialization/Deserialization #0")
{
  IMC::DesiredThrottle msg;
  msg.setTimeStamp(0.06068787542254739);
  msg.setSource(33332U);
  msg.setSourceEntity(201U);
  msg.setDestination(36857U);
  msg.setDestinationEntity(60U);
  msg.value = 0.9569464712954799;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredThrottle - Serialization/Deserialization #1")
{
  IMC::DesiredThrottle msg;
  msg.setTimeStamp(0.37385934448633495);
  msg.setSource(4883U);
  msg.setSourceEntity(28U);
  msg.setDestination(30084U);
  msg.setDestinationEntity(40U);
  msg.value = 0.9053090449543462;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DesiredThrottle - Serialization/Deserialization #2")
{
  IMC::DesiredThrottle msg;
  msg.setTimeStamp(0.507071180763502);
  msg.setSource(19760U);
  msg.setSourceEntity(52U);
  msg.setDestination(59424U);
  msg.setDestinationEntity(172U);
  msg.value = 0.31547209211830063;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Goto - Serialization/Deserialization #0")
{
  IMC::Goto msg;
  msg.setTimeStamp(0.33899618343103144);
  msg.setSource(5803U);
  msg.setSourceEntity(166U);
  msg.setDestination(44677U);
  msg.setDestinationEntity(55U);
  msg.timeout = 54106U;
  msg.lat = 0.35834386612398084;
  msg.lon = 0.6022370535804444;
  msg.z = 0.12257613326863004f;
  msg.z_units = 116U;
  msg.speed = 0.12060322423875935f;
  msg.speed_units = 184U;
  msg.roll = 0.5009230128660784;
  msg.pitch = 0.8090635482634922;
  msg.yaw = 0.7705342564129554;
  msg.custom.assign("PAARWHNVZYPHINMVSHOIHBJCKEKRLIFQZWZCNTUKDDAEWZAECYKEQNWNKJPCFKWJDBNFGYJYJWJLIQCTPEAEVDYBVVRUVUVQOQRMXDKYGZWXUOSNPAFPTGBHWKN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Goto - Serialization/Deserialization #1")
{
  IMC::Goto msg;
  msg.setTimeStamp(0.5397798722627486);
  msg.setSource(43804U);
  msg.setSourceEntity(249U);
  msg.setDestination(22515U);
  msg.setDestinationEntity(167U);
  msg.timeout = 27628U;
  msg.lat = 0.6387103269029765;
  msg.lon = 0.27368451657937376;
  msg.z = 0.270140739632581f;
  msg.z_units = 30U;
  msg.speed = 0.3491603109851562f;
  msg.speed_units = 232U;
  msg.roll = 0.938767482527573;
  msg.pitch = 0.16606333398924433;
  msg.yaw = 0.786083366864918;
  msg.custom.assign("RJTKFQMNCPTFZCVDFJDRQJTGUVHPZKFNDANXIWNOKINYLSGAZOKOOWADYWIELSSSMHAQTCIJEJXW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Goto - Serialization/Deserialization #2")
{
  IMC::Goto msg;
  msg.setTimeStamp(0.03002034980288848);
  msg.setSource(23006U);
  msg.setSourceEntity(164U);
  msg.setDestination(22308U);
  msg.setDestinationEntity(66U);
  msg.timeout = 845U;
  msg.lat = 0.5268244856221581;
  msg.lon = 0.31231252550820976;
  msg.z = 0.35901949843594894f;
  msg.z_units = 24U;
  msg.speed = 0.12324520325922561f;
  msg.speed_units = 91U;
  msg.roll = 0.7441566977490164;
  msg.pitch = 0.6511242974759633;
  msg.yaw = 0.06313687177890515;
  msg.custom.assign("FUIPXNPRFLUCNHSSNYSQIVXCHLJORSXYLIWTFGIOJLMDWH");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PopUp - Serialization/Deserialization #0")
{
  IMC::PopUp msg;
  msg.setTimeStamp(0.6807702857321979);
  msg.setSource(3695U);
  msg.setSourceEntity(200U);
  msg.setDestination(20529U);
  msg.setDestinationEntity(157U);
  msg.timeout = 30632U;
  msg.lat = 0.6007185365247764;
  msg.lon = 0.1861444458787077;
  msg.z = 0.8799612527578666f;
  msg.z_units = 172U;
  msg.speed = 0.4131164238264208f;
  msg.speed_units = 76U;
  msg.duration = 6794U;
  msg.radius = 0.84830510188502f;
  msg.flags = 14U;
  msg.custom.assign("GGLHYBBLQWOTSADUUHJRBHMMBECOVGZOXYBJJWMPEWIIRSNVNTGWEDXRLZJPKLEEUAXKXTKVSQFNHTGKQIOFQPXMHFQZXHYDXTLYCZPCQLCBWMHOCNNTTKCNDSPBMAYIAAONJWLENCSJAFUEUKYKVMBKVEDJADRPOMVUVQCWRLDLI");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PopUp - Serialization/Deserialization #1")
{
  IMC::PopUp msg;
  msg.setTimeStamp(0.9652263966993863);
  msg.setSource(50695U);
  msg.setSourceEntity(246U);
  msg.setDestination(4163U);
  msg.setDestinationEntity(121U);
  msg.timeout = 12848U;
  msg.lat = 0.2759173570715405;
  msg.lon = 0.18032002947938885;
  msg.z = 0.49565522202095535f;
  msg.z_units = 229U;
  msg.speed = 0.11688066674254172f;
  msg.speed_units = 242U;
  msg.duration = 10161U;
  msg.radius = 0.7659589382063489f;
  msg.flags = 170U;
  msg.custom.assign("XLTVEJPGFGQSELNDDNMAAZHVHIDXMXIMZZLHEPPNBPUXWRBQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PopUp - Serialization/Deserialization #2")
{
  IMC::PopUp msg;
  msg.setTimeStamp(0.40527715093172334);
  msg.setSource(30863U);
  msg.setSourceEntity(6U);
  msg.setDestination(23303U);
  msg.setDestinationEntity(74U);
  msg.timeout = 16102U;
  msg.lat = 0.8461481644326666;
  msg.lon = 0.37777698211480915;
  msg.z = 0.17533550549073063f;
  msg.z_units = 110U;
  msg.speed = 0.5852426901637117f;
  msg.speed_units = 249U;
  msg.duration = 57153U;
  msg.radius = 0.48771205221476277f;
  msg.flags = 60U;
  msg.custom.assign("XFWMYOCHNTJERKSJEXCZQANTHQZHM");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Teleoperation - Serialization/Deserialization #0")
{
  IMC::Teleoperation msg;
  msg.setTimeStamp(0.5138109424564503);
  msg.setSource(11246U);
  msg.setSourceEntity(119U);
  msg.setDestination(14012U);
  msg.setDestinationEntity(198U);
  msg.custom.assign("SSELIBARQCTZEDFTXWVFVKLHJTUFGYVYIAPSTSRHZDWUGEXMYSDLPINFQPKYISRMEKDIZIDYQFLUDKWTNORBUZYRQCPEHXGDZQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Teleoperation - Serialization/Deserialization #1")
{
  IMC::Teleoperation msg;
  msg.setTimeStamp(0.23633299624324988);
  msg.setSource(57876U);
  msg.setSourceEntity(50U);
  msg.setDestination(29871U);
  msg.setDestinationEntity(203U);
  msg.custom.assign("UXPRNLBDESGUGNFCKVTVAFKBEWQVLSNYAGYIFUSXBPQENYXMTGOIQDIKF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Teleoperation - Serialization/Deserialization #2")
{
  IMC::Teleoperation msg;
  msg.setTimeStamp(0.048987757007826205);
  msg.setSource(65217U);
  msg.setSourceEntity(109U);
  msg.setDestination(33515U);
  msg.setDestinationEntity(69U);
  msg.custom.assign("OHCJMNIFFTOAQNKDFGSOXLGIMDCAAAWTAYIFEBQWZIVLVHSYRIRBULFMDQMLSHKUJRWGGHIYQTIQGCDBPSMYYDJPXLNODWZREXTVRJMKSZPNCPMOXMUHZTXCVGGNJPTJSEBPHDOFEKWJUEEEWZRMBUXEORVERXDYKDNFRZRNHGPUPJBBMNTLOVBOPWCXGZXCUUFLKBAVLZAJYHSYAIQHNJLYOVQQWEWUKNZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Loiter - Serialization/Deserialization #0")
{
  IMC::Loiter msg;
  msg.setTimeStamp(0.762200730512519);
  msg.setSource(38686U);
  msg.setSourceEntity(81U);
  msg.setDestination(17265U);
  msg.setDestinationEntity(206U);
  msg.timeout = 63599U;
  msg.lat = 0.5150998252247241;
  msg.lon = 0.2007427234641419;
  msg.z = 0.9308610769568508f;
  msg.z_units = 128U;
  msg.duration = 44305U;
  msg.speed = 0.49997909392254825f;
  msg.speed_units = 109U;
  msg.type = 48U;
  msg.radius = 0.48197088700212676f;
  msg.length = 0.49885147584626155f;
  msg.bearing = 0.9786187257835743;
  msg.direction = 192U;
  msg.custom.assign("YGGTMQNLWEWJLUAHZTGDSYSJQSXMWALSNJGOXTKIYPWMOLBI");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Loiter - Serialization/Deserialization #1")
{
  IMC::Loiter msg;
  msg.setTimeStamp(0.7934558572912815);
  msg.setSource(36516U);
  msg.setSourceEntity(194U);
  msg.setDestination(30082U);
  msg.setDestinationEntity(204U);
  msg.timeout = 55290U;
  msg.lat = 0.6775233761634726;
  msg.lon = 0.6242739907909862;
  msg.z = 0.4552125871871605f;
  msg.z_units = 121U;
  msg.duration = 40654U;
  msg.speed = 0.8021153544225735f;
  msg.speed_units = 205U;
  msg.type = 90U;
  msg.radius = 0.2280616413869827f;
  msg.length = 0.8817248869476272f;
  msg.bearing = 0.30450637285901405;
  msg.direction = 166U;
  msg.custom.assign("WJFWNKHGYGONCLVGITCOYRLJBIERBDVPTICNUZJKTNUUVNTFQZSSFCRXZJHICWJRUOYXEWELUMPECQEAMDOHVPEZYTSINZASVSIMMDUSIBFJMJYHPKABGEAEQQPQZRXIHMOVJJBCUBXODFCKANDLDIQKFJGTKXDBGSQFKDVMGTYHVELDZNPLOAQMZMDHLESTWRGXPPTGQPLCRQYYXHHNKTMWVLFOWUFYNFPVUXWBIWSY");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Loiter - Serialization/Deserialization #2")
{
  IMC::Loiter msg;
  msg.setTimeStamp(0.8691417801899541);
  msg.setSource(18581U);
  msg.setSourceEntity(165U);
  msg.setDestination(28451U);
  msg.setDestinationEntity(111U);
  msg.timeout = 43856U;
  msg.lat = 0.3994625561006323;
  msg.lon = 0.05928138046829934;
  msg.z = 0.9007154790933577f;
  msg.z_units = 231U;
  msg.duration = 19569U;
  msg.speed = 0.6070431879118858f;
  msg.speed_units = 68U;
  msg.type = 225U;
  msg.radius = 0.65657703624794f;
  msg.length = 0.5685768792174934f;
  msg.bearing = 0.8652998096955942;
  msg.direction = 113U;
  msg.custom.assign("NENSLRNFDQIMJHLOFPKNULERYYCFMWCTPKXANGDHYGJPCWUODXPFRWPHZBRJBZNBJIDFATGLJDLATX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IdleManeuver - Serialization/Deserialization #0")
{
  IMC::IdleManeuver msg;
  msg.setTimeStamp(0.04472620165089902);
  msg.setSource(50652U);
  msg.setSourceEntity(233U);
  msg.setDestination(47195U);
  msg.setDestinationEntity(222U);
  msg.duration = 48502U;
  msg.custom.assign("HYVAMGSNAMPXZVPPVMZUIFHUDBFJZUMWVLRMUXOKKXIZHFHGKOBQRYAWSKTBEQKESRQKUXWGEFXCYLCQUHDTNHDEJAJIGWOXRNGLQCALVHDVJVRWTNJPEXAPINZAZUFNKL");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IdleManeuver - Serialization/Deserialization #1")
{
  IMC::IdleManeuver msg;
  msg.setTimeStamp(0.9180060039175553);
  msg.setSource(65170U);
  msg.setSourceEntity(244U);
  msg.setDestination(8425U);
  msg.setDestinationEntity(75U);
  msg.duration = 3212U;
  msg.custom.assign("SUAOHCKZUXXDUIYMD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IdleManeuver - Serialization/Deserialization #2")
{
  IMC::IdleManeuver msg;
  msg.setTimeStamp(0.5189772961898745);
  msg.setSource(36569U);
  msg.setSourceEntity(85U);
  msg.setDestination(37047U);
  msg.setDestinationEntity(238U);
  msg.duration = 17599U;
  msg.custom.assign("BNLBEHAQGWQCICOCQGIOWXUUDSFHIEJAWROFLAXNZSMDTXHTWSBRZQJJYZMLNKDVITKOHXIFQWOGVLYPGLFBPBETLDZARDXVJGZPFXJTPMKAFTDGPJMVCBKYWWOATYNQFJHEBGZBSXGUDSFEYHWJBJZRXQPKN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LowLevelControl - Serialization/Deserialization #0")
{
  IMC::LowLevelControl msg;
  msg.setTimeStamp(0.39954274989337213);
  msg.setSource(28025U);
  msg.setSourceEntity(52U);
  msg.setDestination(9606U);
  msg.setDestinationEntity(141U);
  IMC::DesiredRoll tmp_msg_0;
  tmp_msg_0.value = 0.14131556399179246;
  msg.control.set(tmp_msg_0);
  msg.duration = 59087U;
  msg.custom.assign("OBLFZZXLFDTZHUSAYBSKHOIHUXRFQTIIELLTYTCMEQVIOCWWCWSJNPNAEYXIMKPPKDZFLEANVZBOTDQQGKIYDPZBHYINXJJVHQDNPAPAUVHWDVVGEQCXVDTZSBGBNAZYHOVMOSRPUQOMGCRQWRHASLXXNPXGJZBCSJKXQPMAREQUSREOYMHEUETUIUTECYIWRXJGWODZVYNJMTTODFKBUALJMFSKGVPCAWGYMCKFNLIJFLRBGUGCWRFBLFH");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LowLevelControl - Serialization/Deserialization #1")
{
  IMC::LowLevelControl msg;
  msg.setTimeStamp(0.24628999485062142);
  msg.setSource(52057U);
  msg.setSourceEntity(195U);
  msg.setDestination(16930U);
  msg.setDestinationEntity(211U);
  IMC::DesiredZ tmp_msg_0;
  tmp_msg_0.value = 0.3084373266900249f;
  tmp_msg_0.z_units = 196U;
  msg.control.set(tmp_msg_0);
  msg.duration = 63993U;
  msg.custom.assign("LPJCXQEBUVKILXASFSTKASQWWHDQNSSTUSMNXNKYRHBZLTYOBEYZXVQKXPIMEOVKUFLBYYDZRAEYGODAJNLMXIVCCGXHTXEIKDFUMNLDHMZMOBJJGCROILDMORIVRTAQTEMFVSNVCUGAWCJFWPHMZJBOAMAAUPKHUDQPEEC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LowLevelControl - Serialization/Deserialization #2")
{
  IMC::LowLevelControl msg;
  msg.setTimeStamp(0.8541107603105039);
  msg.setSource(9864U);
  msg.setSourceEntity(248U);
  msg.setDestination(3238U);
  msg.setDestinationEntity(149U);
  IMC::DesiredZ tmp_msg_0;
  tmp_msg_0.value = 0.022044301938618727f;
  tmp_msg_0.z_units = 69U;
  msg.control.set(tmp_msg_0);
  msg.duration = 40243U;
  msg.custom.assign("GZYKRMXLCORNEXQUKSZAMKCXDUHPICBHTEVUGFIRVSFJQXQCQTFIHEPFGVXPBAKUEZJLDYAHUDQLJMWFKVFCAEIJNIVUTUKZNZMDLPZAEEBXAQWKNPYBSKROOCTSBGMROYMMLKJCBYHVTVRJZIRMSQOAFBNGFWNOFTUDIXYJHQCOWCIPLYZHA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Rows - Serialization/Deserialization #0")
{
  IMC::Rows msg;
  msg.setTimeStamp(0.3649022588289248);
  msg.setSource(3963U);
  msg.setSourceEntity(157U);
  msg.setDestination(38219U);
  msg.setDestinationEntity(107U);
  msg.timeout = 10658U;
  msg.lat = 0.8225000358778315;
  msg.lon = 0.03267603749747183;
  msg.z = 0.37601017922832225f;
  msg.z_units = 74U;
  msg.speed = 0.8928563821965237f;
  msg.speed_units = 7U;
  msg.bearing = 0.41300296009276416;
  msg.cross_angle = 0.6240812618765585;
  msg.width = 0.7844395953354374f;
  msg.length = 0.8123411217418245f;
  msg.hstep = 0.37212294432764925f;
  msg.coff = 108U;
  msg.alternation = 142U;
  msg.flags = 25U;
  msg.custom.assign("YBIPWKGQJTWGMCNFIIBMEKHMOGWZNEHAXAXZKNLDXUOUGVOTKQGVFTKNYOWJUEHDDRFZKUXURBMZLZLLXNQZIQGJACDDELKPFEBYISBBDMNWKAWBFXRRATPFCWWHBIVPUMMQHSNLISFLOVGVRH");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Rows - Serialization/Deserialization #1")
{
  IMC::Rows msg;
  msg.setTimeStamp(0.8020563688390654);
  msg.setSource(53961U);
  msg.setSourceEntity(237U);
  msg.setDestination(12903U);
  msg.setDestinationEntity(235U);
  msg.timeout = 53097U;
  msg.lat = 0.3508816653466398;
  msg.lon = 0.25992779890669115;
  msg.z = 0.7943769750695675f;
  msg.z_units = 162U;
  msg.speed = 0.30277464269429644f;
  msg.speed_units = 199U;
  msg.bearing = 0.44219994904702253;
  msg.cross_angle = 0.9677095227396357;
  msg.width = 0.6435993880040891f;
  msg.length = 0.07271575245237005f;
  msg.hstep = 0.03145745379491427f;
  msg.coff = 239U;
  msg.alternation = 111U;
  msg.flags = 210U;
  msg.custom.assign("TGRZNPHLCAECESFFAVAJISZNETTRYRNCIGHFUSKIFMSUWNWFZVODOLQKYJRTHCFRXGVWHULQXTSNXLEKCAQOKMMRBVGAXABMBLTJSKPFGWYOEMAVGLRZBUPGSUVIJYPGQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Rows - Serialization/Deserialization #2")
{
  IMC::Rows msg;
  msg.setTimeStamp(0.2593967486137917);
  msg.setSource(27808U);
  msg.setSourceEntity(192U);
  msg.setDestination(40218U);
  msg.setDestinationEntity(112U);
  msg.timeout = 27922U;
  msg.lat = 0.7929675582637222;
  msg.lon = 0.8633181762218654;
  msg.z = 0.11298910405727292f;
  msg.z_units = 15U;
  msg.speed = 0.1627716381687907f;
  msg.speed_units = 104U;
  msg.bearing = 0.34914512892112626;
  msg.cross_angle = 0.5389057540898461;
  msg.width = 0.6765286540092634f;
  msg.length = 0.8216678670821421f;
  msg.hstep = 0.26572704128427094f;
  msg.coff = 74U;
  msg.alternation = 124U;
  msg.flags = 126U;
  msg.custom.assign("APVSWUKFSZIRZDCTMWFEIRELAVPKSOYDUKHCNUWMPKGAXBPQTFXOKLDZFZQFRLZMCFRNSUEEIDOGXWRHRDLFOMYANXYYQOTMCHNKLMHVLKCXDBIOBBVTDNZBSGLRURNQHBFGKNPTORWWPIQCHOWAPKJULYUUAGJHCVASJIQJTQAMAWGKHIYJQXXFNWPDMAOZTLTEYEZOZJCMEXBZBJPNPGSSBE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowPath - Serialization/Deserialization #0")
{
  IMC::FollowPath msg;
  msg.setTimeStamp(0.4625437231248055);
  msg.setSource(34529U);
  msg.setSourceEntity(182U);
  msg.setDestination(35824U);
  msg.setDestinationEntity(123U);
  msg.timeout = 44214U;
  msg.lat = 0.24666985426031574;
  msg.lon = 0.43172999680695523;
  msg.z = 0.4594733782913186f;
  msg.z_units = 229U;
  msg.speed = 0.32750179815047775f;
  msg.speed_units = 226U;
  IMC::PathPoint tmp_msg_0;
  tmp_msg_0.x = 0.6500022088222497f;
  tmp_msg_0.y = 0.4789723451315778f;
  tmp_msg_0.z = 0.5912989708672597f;
  msg.points.push_back(tmp_msg_0);
  msg.custom.assign("RLATZXRLVKAAZRMV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowPath - Serialization/Deserialization #1")
{
  IMC::FollowPath msg;
  msg.setTimeStamp(0.06733686829059604);
  msg.setSource(58744U);
  msg.setSourceEntity(161U);
  msg.setDestination(1548U);
  msg.setDestinationEntity(56U);
  msg.timeout = 45635U;
  msg.lat = 0.6067646291092996;
  msg.lon = 0.6579183230080103;
  msg.z = 0.1738397604300439f;
  msg.z_units = 17U;
  msg.speed = 0.4028877054941471f;
  msg.speed_units = 87U;
  IMC::PathPoint tmp_msg_0;
  tmp_msg_0.x = 0.35314088800439614f;
  tmp_msg_0.y = 0.2978520125949419f;
  tmp_msg_0.z = 0.2873213527648364f;
  msg.points.push_back(tmp_msg_0);
  msg.custom.assign("PDHHSTYWOCPLLSCJDQRFRBGMPPHFWKLULUGDZJFXOAXPSUPTEIXAEKMBLXNYWIFUYACUJESANMXZRWKTJITMRGLVNZABMYROCNSHYDDHOPOQQMJDGRZOM");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowPath - Serialization/Deserialization #2")
{
  IMC::FollowPath msg;
  msg.setTimeStamp(0.6759909171268855);
  msg.setSource(5971U);
  msg.setSourceEntity(223U);
  msg.setDestination(6906U);
  msg.setDestinationEntity(146U);
  msg.timeout = 4617U;
  msg.lat = 0.76041548611194;
  msg.lon = 0.042363757023997195;
  msg.z = 0.6674256896296916f;
  msg.z_units = 241U;
  msg.speed = 0.5296300328747091f;
  msg.speed_units = 139U;
  msg.custom.assign("HLJIAORMRWWOFPLSCKTTVJWZDPDKGSZJFWPAYJCBLGRCIZVUKZUJZIWGDTMXIRIVQHVIERXIHNPUYUFRWMQRZNTAHRCVCJUTDVUUMMSXONKKIAQGCYDELFYYQLZNCSMRCDYCHBUEIFKJQWEABBBMYZAMIFXQMPKSKVEWSBGDVLBEVESSXNKPXGDFLHHTOHJLZAGQGOEAWSBW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PathPoint - Serialization/Deserialization #0")
{
  IMC::PathPoint msg;
  msg.setTimeStamp(0.5187386848961812);
  msg.setSource(48532U);
  msg.setSourceEntity(231U);
  msg.setDestination(43282U);
  msg.setDestinationEntity(47U);
  msg.x = 0.7973962545567217f;
  msg.y = 0.9174287590371808f;
  msg.z = 0.22437533779431207f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PathPoint - Serialization/Deserialization #1")
{
  IMC::PathPoint msg;
  msg.setTimeStamp(0.7162601847364335);
  msg.setSource(36080U);
  msg.setSourceEntity(154U);
  msg.setDestination(31475U);
  msg.setDestinationEntity(100U);
  msg.x = 0.5919336504671979f;
  msg.y = 0.5477267784299639f;
  msg.z = 0.9793299158478592f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PathPoint - Serialization/Deserialization #2")
{
  IMC::PathPoint msg;
  msg.setTimeStamp(0.20742593108049145);
  msg.setSource(34175U);
  msg.setSourceEntity(202U);
  msg.setDestination(50531U);
  msg.setDestinationEntity(136U);
  msg.x = 0.9510105041970284f;
  msg.y = 0.25518988445316826f;
  msg.z = 0.27356018378436986f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("YoYo - Serialization/Deserialization #0")
{
  IMC::YoYo msg;
  msg.setTimeStamp(0.24084188696264652);
  msg.setSource(3630U);
  msg.setSourceEntity(140U);
  msg.setDestination(6359U);
  msg.setDestinationEntity(39U);
  msg.timeout = 14955U;
  msg.lat = 0.34422549807565206;
  msg.lon = 0.6132495072380908;
  msg.z = 0.10428074880272054f;
  msg.z_units = 214U;
  msg.amplitude = 0.5898954169070243f;
  msg.pitch = 0.7523971585219339f;
  msg.speed = 0.46104784294835444f;
  msg.speed_units = 56U;
  msg.custom.assign("WTGMCTENYFUWKRIAXGMRADDNGBBEZGDGVSIJWNQIXNYPAGZYGABORISKUECYTOSPTEQVEXDPTEHHUDHYRZNNHIPCLXMPSWAFPOXMJTVDKZMO");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("YoYo - Serialization/Deserialization #1")
{
  IMC::YoYo msg;
  msg.setTimeStamp(0.620640500588096);
  msg.setSource(37864U);
  msg.setSourceEntity(251U);
  msg.setDestination(49473U);
  msg.setDestinationEntity(216U);
  msg.timeout = 61389U;
  msg.lat = 0.8774013270786323;
  msg.lon = 0.9937251866731062;
  msg.z = 0.4909498140400703f;
  msg.z_units = 108U;
  msg.amplitude = 0.4395798786909487f;
  msg.pitch = 0.2528850958879302f;
  msg.speed = 0.4585751644214713f;
  msg.speed_units = 244U;
  msg.custom.assign("PJLOHVHPVXITWVIBMIROKJGCHZKAHCEELVPONJEEFOYMRTYP");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("YoYo - Serialization/Deserialization #2")
{
  IMC::YoYo msg;
  msg.setTimeStamp(0.09022181014119501);
  msg.setSource(13704U);
  msg.setSourceEntity(21U);
  msg.setDestination(38717U);
  msg.setDestinationEntity(54U);
  msg.timeout = 17960U;
  msg.lat = 0.175633631873509;
  msg.lon = 0.9976871032303759;
  msg.z = 0.07577497257211618f;
  msg.z_units = 174U;
  msg.amplitude = 0.9413029936856834f;
  msg.pitch = 0.637830444800602f;
  msg.speed = 0.21760987336015414f;
  msg.speed_units = 208U;
  msg.custom.assign("WFNEYFXGTXJYEPZHGKIWRHHLGGOBVHDIQQJPZCCHKAYYCNQKPMAAXSXDAAPPMCYQSMHIZVTEFZYNIXCNNJTJUUUTJMTOPEZQSNMLRUJTSLPLBAUWCKNVMULVLEOWXTNODEYSXKFSGLFAMWRQYFBWYJORTKVGDVIKBZZTJRSHGLHWBYPKLOSZUOUXROKKFJAIIZHDBCBUWGVGCZGDNSXDWUQEIPAFMCBEPV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TeleoperationDone - Serialization/Deserialization #0")
{
  IMC::TeleoperationDone msg;
  msg.setTimeStamp(0.6875599801273969);
  msg.setSource(8638U);
  msg.setSourceEntity(85U);
  msg.setDestination(1567U);
  msg.setDestinationEntity(101U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TeleoperationDone - Serialization/Deserialization #1")
{
  IMC::TeleoperationDone msg;
  msg.setTimeStamp(0.6903546183518282);
  msg.setSource(34482U);
  msg.setSourceEntity(194U);
  msg.setDestination(6912U);
  msg.setDestinationEntity(92U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TeleoperationDone - Serialization/Deserialization #2")
{
  IMC::TeleoperationDone msg;
  msg.setTimeStamp(0.897364620024823);
  msg.setSource(6107U);
  msg.setSourceEntity(230U);
  msg.setDestination(39608U);
  msg.setDestinationEntity(106U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StationKeeping - Serialization/Deserialization #0")
{
  IMC::StationKeeping msg;
  msg.setTimeStamp(0.5580336066585461);
  msg.setSource(49458U);
  msg.setSourceEntity(1U);
  msg.setDestination(29382U);
  msg.setDestinationEntity(66U);
  msg.lat = 0.07906554711931202;
  msg.lon = 0.886035345349053;
  msg.z = 0.01343558316637905f;
  msg.z_units = 203U;
  msg.radius = 0.8047828237987372f;
  msg.duration = 6739U;
  msg.speed = 0.2695016356519967f;
  msg.speed_units = 57U;
  msg.custom.assign("RUFUZNLUGCXJQHWBZTLLKNKVUAZEQFXICWZJAEQDWQQBVKMSQTOIYVHBPJLIFIIZVYMAKGYVHZRXVXLFMPLRFXRRIXMYSDAOZOUMKPDWEFTOOAGGNMAKRFTEKNQEGTLHIPEHVFYDXCIOBMXGCUYWCGCRLJZXUERWGNSPWIJTBTZMVPOTYJPJHWGKICLPUQADEDMDJBOHYBACBYPTSMSRDDQBOSZGNVNNNEKVQHSEXCS");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StationKeeping - Serialization/Deserialization #1")
{
  IMC::StationKeeping msg;
  msg.setTimeStamp(0.07505854091054309);
  msg.setSource(43799U);
  msg.setSourceEntity(99U);
  msg.setDestination(1392U);
  msg.setDestinationEntity(56U);
  msg.lat = 0.2039017291549905;
  msg.lon = 0.03675534199610131;
  msg.z = 0.03300989378562613f;
  msg.z_units = 201U;
  msg.radius = 0.49929699245035963f;
  msg.duration = 59769U;
  msg.speed = 0.7257524660000755f;
  msg.speed_units = 9U;
  msg.custom.assign("CSQTZMLGBSVXJVHAPNEFGCQLAZRWQEENQMNNXSUKUZTUUXQSMVYIFIKJTFYIKGDJGWUZEYRSMAYFOJDNTMMMPXPVIDICWWBWHLEUNBOKTTQOYPKODKUFMGHFNJBWWGZKGSKXOOFEALSLPAJSLXSHXUYKAYIJCERPMVJNYOJCQDLDRIIXZEPHHPLGPTTQHMBHZFUWROVJIRBDFZBCXBZGWDYVCHCBGHEAVDRTRDLLXCKUCQEZIRVAWO");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StationKeeping - Serialization/Deserialization #2")
{
  IMC::StationKeeping msg;
  msg.setTimeStamp(0.22879106456798393);
  msg.setSource(39854U);
  msg.setSourceEntity(42U);
  msg.setDestination(55233U);
  msg.setDestinationEntity(157U);
  msg.lat = 0.3287540172594987;
  msg.lon = 0.19362790680640773;
  msg.z = 0.16589545502281555f;
  msg.z_units = 61U;
  msg.radius = 0.5370331315442685f;
  msg.duration = 24673U;
  msg.speed = 0.14559197062061668f;
  msg.speed_units = 222U;
  msg.custom.assign("CTMAABLFWUILILJUWZAEMGJSJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Elevator - Serialization/Deserialization #0")
{
  IMC::Elevator msg;
  msg.setTimeStamp(0.603232509000286);
  msg.setSource(64614U);
  msg.setSourceEntity(120U);
  msg.setDestination(23330U);
  msg.setDestinationEntity(85U);
  msg.timeout = 14621U;
  msg.flags = 251U;
  msg.lat = 0.681195817497711;
  msg.lon = 0.141061531168439;
  msg.start_z = 0.9993337797940315f;
  msg.start_z_units = 154U;
  msg.end_z = 0.8580415502049029f;
  msg.end_z_units = 4U;
  msg.radius = 0.32772127148596075f;
  msg.speed = 0.13787064668825388f;
  msg.speed_units = 192U;
  msg.custom.assign("PXNQTYBRFUPTDAXTSMBPUMGSDPOGYXVJFNHIKEMPYRSVCEGSHUBOHCMGFAIVUTZBFTGOKRRLKRYUUSZDFWBJVIGQUTTBSVRRCMNIJKKAISLAYLCQJVXZZGKXOVQRPCWZRWMSNWIFUEUOLDVNZDMAAYMYKOKYIHCHNWPIZLEDOZAFJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Elevator - Serialization/Deserialization #1")
{
  IMC::Elevator msg;
  msg.setTimeStamp(0.4794975643427225);
  msg.setSource(20792U);
  msg.setSourceEntity(222U);
  msg.setDestination(7027U);
  msg.setDestinationEntity(202U);
  msg.timeout = 31640U;
  msg.flags = 133U;
  msg.lat = 0.4155640786745509;
  msg.lon = 0.9855922905090592;
  msg.start_z = 0.7411716689740239f;
  msg.start_z_units = 137U;
  msg.end_z = 0.4519327935723768f;
  msg.end_z_units = 201U;
  msg.radius = 0.8041969198883959f;
  msg.speed = 0.453141022396064f;
  msg.speed_units = 222U;
  msg.custom.assign("KRDNNTBKMGDSPJLFEKSNXMIYNKCZZSJHNEOIRLIZKXDDUQGOYCBJZHRAXZRZDXGTOWDNIHYLWJJCYEFBUIZTWOXGBJFVWSQQTTVPYAHUYAZVQSVUMLWQOATVGYQSJRAXLOKAXSQZYLDVBGGWAIBNMIZGKOHMFCPPYXRCSPHMVFVHEBUFWKPFLYRGLSUXKCXCCOIVERSQUDDRPTAJMWEOUCHNELGFAFBMPTITHCRPOLTWJWANVQMMFEPHIUU");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Elevator - Serialization/Deserialization #2")
{
  IMC::Elevator msg;
  msg.setTimeStamp(0.04494478652114309);
  msg.setSource(22102U);
  msg.setSourceEntity(225U);
  msg.setDestination(49540U);
  msg.setDestinationEntity(212U);
  msg.timeout = 52673U;
  msg.flags = 227U;
  msg.lat = 0.25913319262345835;
  msg.lon = 0.5961318498484829;
  msg.start_z = 0.8144095015641692f;
  msg.start_z_units = 72U;
  msg.end_z = 0.3312129815506448f;
  msg.end_z_units = 63U;
  msg.radius = 0.19088959571767883f;
  msg.speed = 0.6222703601978128f;
  msg.speed_units = 122U;
  msg.custom.assign("BQBIIRVVGVOFLLYVKPTGKPHWMIZJVCIMNBIEUITJUEGAEZUHLWNWXLTDUMOGTYNWPBFXQXTKQTQFXTHKPJWJJABXWZSHPPZVSPKEOYARUOXVORGRRZUDDXFYGCDVHJCNRVPNQFTZAJYMSDBAHZSRONOPEGAHQWGQADDZEYCBFNLISUWRCMFTWMMEBUCPFJSAXXCQAGIO");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowTrajectory - Serialization/Deserialization #0")
{
  IMC::FollowTrajectory msg;
  msg.setTimeStamp(0.8966133690109434);
  msg.setSource(19980U);
  msg.setSourceEntity(94U);
  msg.setDestination(39153U);
  msg.setDestinationEntity(84U);
  msg.timeout = 56401U;
  msg.lat = 0.5069101973643776;
  msg.lon = 0.3239789862386241;
  msg.z = 0.4729851498233265f;
  msg.z_units = 172U;
  msg.speed = 0.6319179204094139f;
  msg.speed_units = 55U;
  msg.custom.assign("QHEATTFNJRCQBIGSFKGPXSUAROMTTQVGMNZDNYHQFRIZVPLKGUHUWNSIMJDZSKDTQPCLHBAFJDUQBZJDSTSAVZCLZPECFOEEDPJOUVZPZYRSIBZYCCJFAXRWBOJXXNJJBLPVZVHCG");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowTrajectory - Serialization/Deserialization #1")
{
  IMC::FollowTrajectory msg;
  msg.setTimeStamp(0.6862662948778783);
  msg.setSource(10332U);
  msg.setSourceEntity(27U);
  msg.setDestination(62577U);
  msg.setDestinationEntity(154U);
  msg.timeout = 50920U;
  msg.lat = 0.4816528857717196;
  msg.lon = 0.9410767938504894;
  msg.z = 0.603600038806626f;
  msg.z_units = 199U;
  msg.speed = 0.7080453724630611f;
  msg.speed_units = 140U;
  IMC::TrajectoryPoint tmp_msg_0;
  tmp_msg_0.x = 0.9857019588589978f;
  tmp_msg_0.y = 0.7574014037829727f;
  tmp_msg_0.z = 0.4734180954961842f;
  tmp_msg_0.t = 0.07138478053154662f;
  msg.points.push_back(tmp_msg_0);
  msg.custom.assign("JWHRTXVYXMYOHGXSFSWOVNBGHHIBJMMGNLOYKJCNOWHPDDZCDRNGLLMKILPQAUZXEVTJFNRTPBYVNVJBBKQCNTDSQLYSYKAZI");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowTrajectory - Serialization/Deserialization #2")
{
  IMC::FollowTrajectory msg;
  msg.setTimeStamp(0.8206357374677415);
  msg.setSource(28634U);
  msg.setSourceEntity(55U);
  msg.setDestination(9276U);
  msg.setDestinationEntity(22U);
  msg.timeout = 54718U;
  msg.lat = 0.5074095586603876;
  msg.lon = 0.8987582108684593;
  msg.z = 0.3004359976089782f;
  msg.z_units = 29U;
  msg.speed = 0.8608837027776522f;
  msg.speed_units = 216U;
  msg.custom.assign("JGDQYPTFUBUMQCHLSGWDSAOYLJIFXKWYREXWQJGVJBMZWRJFXENAZIOVLBMWUVHDGIQTIEFXTYIFPNZXBITGAOOLRCHHOSTUDAZPQPCAHYLWRSILYGGNZXHVWFQCDCT");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrajectoryPoint - Serialization/Deserialization #0")
{
  IMC::TrajectoryPoint msg;
  msg.setTimeStamp(0.9530116052168257);
  msg.setSource(45949U);
  msg.setSourceEntity(173U);
  msg.setDestination(50933U);
  msg.setDestinationEntity(50U);
  msg.x = 0.14507391986281792f;
  msg.y = 0.56466872842869f;
  msg.z = 0.453917597599628f;
  msg.t = 0.22657821180632287f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrajectoryPoint - Serialization/Deserialization #1")
{
  IMC::TrajectoryPoint msg;
  msg.setTimeStamp(0.0036124685284374403);
  msg.setSource(24458U);
  msg.setSourceEntity(28U);
  msg.setDestination(2700U);
  msg.setDestinationEntity(156U);
  msg.x = 0.26707399835487367f;
  msg.y = 0.7912355994804148f;
  msg.z = 0.49148520976085897f;
  msg.t = 0.40976620597774926f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrajectoryPoint - Serialization/Deserialization #2")
{
  IMC::TrajectoryPoint msg;
  msg.setTimeStamp(0.27047069187958483);
  msg.setSource(48453U);
  msg.setSourceEntity(158U);
  msg.setDestination(40797U);
  msg.setDestinationEntity(28U);
  msg.x = 0.6624568772130668f;
  msg.y = 0.7259612130409434f;
  msg.z = 0.6496707409976635f;
  msg.t = 0.4511564656786754f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CustomManeuver - Serialization/Deserialization #0")
{
  IMC::CustomManeuver msg;
  msg.setTimeStamp(0.5035906513923805);
  msg.setSource(36927U);
  msg.setSourceEntity(39U);
  msg.setDestination(4230U);
  msg.setDestinationEntity(41U);
  msg.timeout = 23625U;
  msg.name.assign("LUUQGMITFMOZKTNNEQSGQRFBKUKTCDTWUYYLIROGIOXPWSMPALVYGVPJSQJIJDPFXVHBXHQZYXCNCZOZZNN");
  msg.custom.assign("WCVAUEDRKVXEQGZATVPTRLPHMLXMRIZANOF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CustomManeuver - Serialization/Deserialization #1")
{
  IMC::CustomManeuver msg;
  msg.setTimeStamp(0.3979214092126907);
  msg.setSource(23590U);
  msg.setSourceEntity(219U);
  msg.setDestination(11277U);
  msg.setDestinationEntity(19U);
  msg.timeout = 13765U;
  msg.name.assign("PFUHICDCLUNTWGSRJODKAQMSMIEXUHHDWLGTVKILMMXWLGGZQKVBFTIWZSVSXRVKHVZAMREQSHJTCANMFJKGZNKTDPQGYCOYDVOMQJYSAADAQRFMYBSAZKGWGPOQIBLJHLFVCDKEJIQXRXJC");
  msg.custom.assign("BIWNIUMLOXPMVDGQSJDMUCVHLLUSGXOZFCDOQYASEYFLRLVZBGEVZQNXISTZZHVJQHJHBYTXSOFCPNJMTNVBCHQAPWZUFQBRNMDSNBKOAXRUDYVPYLBGNRQOALOTEHFLFTUIKXYYNPPFJRJRYJKKASMRHWDQUTKIPZWTIBUSPKETCZJXHXLOWFDWQAFEASJMDVHWUREHW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CustomManeuver - Serialization/Deserialization #2")
{
  IMC::CustomManeuver msg;
  msg.setTimeStamp(0.3169075469241318);
  msg.setSource(49449U);
  msg.setSourceEntity(208U);
  msg.setDestination(5399U);
  msg.setDestinationEntity(16U);
  msg.timeout = 21930U;
  msg.name.assign("HRGZOTGPJHVNRHITWLYAVNHUROPQCFEHPHSBOLCYVZZMFSKXDRWAQPJTMUJISTFNBAEKZCXDFSYBGKKDYNOUUYIOUIELXVNNMPDGG");
  msg.custom.assign("XYVQIAHSUHWCLVTBKVPCGWAIIFMAZBEKBXIPZMDUNZZPLTNUJTPDRMSPPOJVSVQEDBGWJWFZOGKNOOGCVZEDRTRMZDTHOYJYLEYDVSULATUJQERKYDJGGDIABXWEMAMHVKLXTGWVXXAFOKMTNZRMOIFRAHLUJU");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleFormation - Serialization/Deserialization #0")
{
  IMC::VehicleFormation msg;
  msg.setTimeStamp(0.009672062833829376);
  msg.setSource(54344U);
  msg.setSourceEntity(173U);
  msg.setDestination(18363U);
  msg.setDestinationEntity(156U);
  msg.lat = 0.690507085387247;
  msg.lon = 0.4875075730818188;
  msg.z = 0.6419128891663812f;
  msg.z_units = 213U;
  msg.speed = 0.3619293486943046f;
  msg.speed_units = 213U;
  IMC::TrajectoryPoint tmp_msg_0;
  tmp_msg_0.x = 0.08031170379740238f;
  tmp_msg_0.y = 0.6405248104818507f;
  tmp_msg_0.z = 0.6807577099506288f;
  tmp_msg_0.t = 0.6799236233906172f;
  msg.points.push_back(tmp_msg_0);
  IMC::VehicleFormationParticipant tmp_msg_1;
  tmp_msg_1.vid = 41096U;
  tmp_msg_1.off_x = 0.5299314173062153f;
  tmp_msg_1.off_y = 0.6611383318231976f;
  tmp_msg_1.off_z = 0.9435840067638878f;
  msg.participants.push_back(tmp_msg_1);
  msg.start_time = 0.19881191848230495;
  msg.custom.assign("IXDHACGQDPXZUGUINYXBAIAGBKMCUERYJSOQHUMVVBLCOUVTRGWCOXJGMDHNBEANHDVMTLZAFSSVTYIGFQZVADOFHI");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleFormation - Serialization/Deserialization #1")
{
  IMC::VehicleFormation msg;
  msg.setTimeStamp(0.6088594008253986);
  msg.setSource(22580U);
  msg.setSourceEntity(47U);
  msg.setDestination(54230U);
  msg.setDestinationEntity(32U);
  msg.lat = 0.9713579027483974;
  msg.lon = 0.08703422402414218;
  msg.z = 0.6942852011948095f;
  msg.z_units = 250U;
  msg.speed = 0.021454270298162714f;
  msg.speed_units = 217U;
  IMC::VehicleFormationParticipant tmp_msg_0;
  tmp_msg_0.vid = 16533U;
  tmp_msg_0.off_x = 0.10746845942869754f;
  tmp_msg_0.off_y = 0.35867294283746254f;
  tmp_msg_0.off_z = 0.30820013847159644f;
  msg.participants.push_back(tmp_msg_0);
  msg.start_time = 0.4141044157007745;
  msg.custom.assign("GKAKTYHWVAFNKQOTIWSWDZZTATUMYPCEWCDGZCYVXMBSLFTBLNCLMPAZGJSXNFOIUNXPRXMACGDCHHRUCJMVVLRTHRXKJESFYQBZUGUSMFAVRVIDSRNDOWQYJTILYUKXGBDDBHOHIAEPGCBTHNSRVOPJSNITLWXMEZVXPJUQPEFMYJYGPQKWMPOXLBLLYKWLHUDGFXKJWIJOC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleFormation - Serialization/Deserialization #2")
{
  IMC::VehicleFormation msg;
  msg.setTimeStamp(0.9269566513746178);
  msg.setSource(6371U);
  msg.setSourceEntity(140U);
  msg.setDestination(44196U);
  msg.setDestinationEntity(239U);
  msg.lat = 0.6180496533405477;
  msg.lon = 0.6806308223178753;
  msg.z = 0.2746221279676436f;
  msg.z_units = 250U;
  msg.speed = 0.43782266788709f;
  msg.speed_units = 44U;
  IMC::TrajectoryPoint tmp_msg_0;
  tmp_msg_0.x = 0.783294346214744f;
  tmp_msg_0.y = 0.2671692999240103f;
  tmp_msg_0.z = 0.8531305926966143f;
  tmp_msg_0.t = 0.5306749844231079f;
  msg.points.push_back(tmp_msg_0);
  msg.start_time = 0.36251849070070985;
  msg.custom.assign("VYVUMALECFTYSKSZKEIPGDGIBTRRYWDFINEZWHQACYGCXRFBMCHRHLXTZOHNFBJILKGZVPFXENABHOJBZOPQAWLWRWOUKSPKGJIFXHOIMCFYSWEDPWOWDDGTKSRCZZYIBRJHCNTTULJLQNOCHQCEGJPMMBJDSQQRTDZIUVDQBELWABXXXJPXZYRJPAMIVPFIOCZMMVAFTVQHUUXFVYSKYSAMKNSONQUMTGTHGNQRE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleFormationParticipant - Serialization/Deserialization #0")
{
  IMC::VehicleFormationParticipant msg;
  msg.setTimeStamp(0.9497015225032069);
  msg.setSource(60919U);
  msg.setSourceEntity(90U);
  msg.setDestination(52787U);
  msg.setDestinationEntity(12U);
  msg.vid = 33794U;
  msg.off_x = 0.4033910877059078f;
  msg.off_y = 0.6858196984101449f;
  msg.off_z = 0.8821976545127782f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleFormationParticipant - Serialization/Deserialization #1")
{
  IMC::VehicleFormationParticipant msg;
  msg.setTimeStamp(0.42601245174545277);
  msg.setSource(39105U);
  msg.setSourceEntity(136U);
  msg.setDestination(47595U);
  msg.setDestinationEntity(8U);
  msg.vid = 46200U;
  msg.off_x = 0.5216547642714848f;
  msg.off_y = 0.8089844573473409f;
  msg.off_z = 0.5794254586182263f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleFormationParticipant - Serialization/Deserialization #2")
{
  IMC::VehicleFormationParticipant msg;
  msg.setTimeStamp(0.7637529128678205);
  msg.setSource(47185U);
  msg.setSourceEntity(116U);
  msg.setDestination(19050U);
  msg.setDestinationEntity(230U);
  msg.vid = 57991U;
  msg.off_x = 0.7070637980741448f;
  msg.off_y = 0.08241758369234398f;
  msg.off_z = 0.5806080246407731f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StopManeuver - Serialization/Deserialization #0")
{
  IMC::StopManeuver msg;
  msg.setTimeStamp(0.9502248879931428);
  msg.setSource(64185U);
  msg.setSourceEntity(127U);
  msg.setDestination(42275U);
  msg.setDestinationEntity(22U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StopManeuver - Serialization/Deserialization #1")
{
  IMC::StopManeuver msg;
  msg.setTimeStamp(0.23530610997144819);
  msg.setSource(1312U);
  msg.setSourceEntity(158U);
  msg.setDestination(60499U);
  msg.setDestinationEntity(123U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("StopManeuver - Serialization/Deserialization #2")
{
  IMC::StopManeuver msg;
  msg.setTimeStamp(0.913785046907558);
  msg.setSource(54299U);
  msg.setSourceEntity(163U);
  msg.setDestination(6301U);
  msg.setDestinationEntity(46U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RegisterManeuver - Serialization/Deserialization #0")
{
  IMC::RegisterManeuver msg;
  msg.setTimeStamp(0.30473576849147477);
  msg.setSource(34513U);
  msg.setSourceEntity(120U);
  msg.setDestination(16160U);
  msg.setDestinationEntity(148U);
  msg.mid = 13944U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RegisterManeuver - Serialization/Deserialization #1")
{
  IMC::RegisterManeuver msg;
  msg.setTimeStamp(0.019049430972820525);
  msg.setSource(61722U);
  msg.setSourceEntity(182U);
  msg.setDestination(53116U);
  msg.setDestinationEntity(101U);
  msg.mid = 54795U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RegisterManeuver - Serialization/Deserialization #2")
{
  IMC::RegisterManeuver msg;
  msg.setTimeStamp(0.8393505877387568);
  msg.setSource(54779U);
  msg.setSourceEntity(116U);
  msg.setDestination(16681U);
  msg.setDestinationEntity(88U);
  msg.mid = 3189U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ManeuverControlState - Serialization/Deserialization #0")
{
  IMC::ManeuverControlState msg;
  msg.setTimeStamp(0.8612418361638473);
  msg.setSource(32096U);
  msg.setSourceEntity(51U);
  msg.setDestination(622U);
  msg.setDestinationEntity(139U);
  msg.state = 178U;
  msg.eta = 30589U;
  msg.info.assign("EUBDCYIRBUTTZUGDQQCZLKJGWSAHHTLTOUCXJLODYRPZXGIKSQAGRTAWIENVJLHYTJGAYHMWBJDGARUVRNWJIGOUMEMWOILAAWCWCGSCZKZVECOVGSXITPBIKDMAPJPZQKBXDPNUXRHHUYRZKENIXHLBPFSDJNQDZDRIJSBFZYNTYEAQTXEVVCJSFPUPKVFBWQQKMCKAVISTYMELZVOFRE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ManeuverControlState - Serialization/Deserialization #1")
{
  IMC::ManeuverControlState msg;
  msg.setTimeStamp(0.2572153292830732);
  msg.setSource(7538U);
  msg.setSourceEntity(28U);
  msg.setDestination(12140U);
  msg.setDestinationEntity(68U);
  msg.state = 240U;
  msg.eta = 2547U;
  msg.info.assign("XOEPFALJAYQZOCCSNAOLTGBXMUHWRUSCZIJSAPVFOHZAJPQISKRRYGRDRJELTMPTHLNIDUEKYXSZXVYL");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ManeuverControlState - Serialization/Deserialization #2")
{
  IMC::ManeuverControlState msg;
  msg.setTimeStamp(0.6598023304826569);
  msg.setSource(22042U);
  msg.setSourceEntity(116U);
  msg.setDestination(24370U);
  msg.setDestinationEntity(170U);
  msg.state = 101U;
  msg.eta = 975U;
  msg.info.assign("AITVABLRHDLHBKDJAX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowSystem - Serialization/Deserialization #0")
{
  IMC::FollowSystem msg;
  msg.setTimeStamp(0.50909238106722);
  msg.setSource(28623U);
  msg.setSourceEntity(253U);
  msg.setDestination(43604U);
  msg.setDestinationEntity(4U);
  msg.system = 29117U;
  msg.duration = 52969U;
  msg.speed = 0.7053438853466419f;
  msg.speed_units = 3U;
  msg.x = 0.46480371029477907f;
  msg.y = 0.3550962962329317f;
  msg.z = 0.9480406796260723f;
  msg.z_units = 192U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowSystem - Serialization/Deserialization #1")
{
  IMC::FollowSystem msg;
  msg.setTimeStamp(0.742107946970801);
  msg.setSource(39163U);
  msg.setSourceEntity(195U);
  msg.setDestination(35728U);
  msg.setDestinationEntity(52U);
  msg.system = 25730U;
  msg.duration = 61560U;
  msg.speed = 0.7349790996249564f;
  msg.speed_units = 111U;
  msg.x = 0.8449468051284048f;
  msg.y = 0.8435719563591272f;
  msg.z = 0.010207668549506055f;
  msg.z_units = 2U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowSystem - Serialization/Deserialization #2")
{
  IMC::FollowSystem msg;
  msg.setTimeStamp(0.6393205170514589);
  msg.setSource(20197U);
  msg.setSourceEntity(77U);
  msg.setDestination(62224U);
  msg.setDestinationEntity(197U);
  msg.system = 19482U;
  msg.duration = 31801U;
  msg.speed = 0.7581223789652395f;
  msg.speed_units = 185U;
  msg.x = 0.019743738086935747f;
  msg.y = 0.5394735529988623f;
  msg.z = 0.8805077848003079f;
  msg.z_units = 12U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CommsRelay - Serialization/Deserialization #0")
{
  IMC::CommsRelay msg;
  msg.setTimeStamp(0.6296107580929986);
  msg.setSource(36240U);
  msg.setSourceEntity(107U);
  msg.setDestination(14006U);
  msg.setDestinationEntity(12U);
  msg.lat = 0.4674269074724525;
  msg.lon = 0.10257978925221567;
  msg.speed = 0.4484181061615998f;
  msg.speed_units = 0U;
  msg.duration = 15400U;
  msg.sys_a = 14587U;
  msg.sys_b = 48641U;
  msg.move_threshold = 0.13688039769061555f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CommsRelay - Serialization/Deserialization #1")
{
  IMC::CommsRelay msg;
  msg.setTimeStamp(0.9970691651314415);
  msg.setSource(47921U);
  msg.setSourceEntity(60U);
  msg.setDestination(64632U);
  msg.setDestinationEntity(41U);
  msg.lat = 0.4916743151672618;
  msg.lon = 0.6486494784158712;
  msg.speed = 0.14916518379184052f;
  msg.speed_units = 248U;
  msg.duration = 683U;
  msg.sys_a = 47631U;
  msg.sys_b = 25820U;
  msg.move_threshold = 0.2744855298371195f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CommsRelay - Serialization/Deserialization #2")
{
  IMC::CommsRelay msg;
  msg.setTimeStamp(0.7506523817621544);
  msg.setSource(38936U);
  msg.setSourceEntity(18U);
  msg.setDestination(30861U);
  msg.setDestinationEntity(32U);
  msg.lat = 0.3730503785031333;
  msg.lon = 0.11625641753134175;
  msg.speed = 0.042222081043783f;
  msg.speed_units = 113U;
  msg.duration = 4976U;
  msg.sys_a = 13386U;
  msg.sys_b = 53799U;
  msg.move_threshold = 0.9569220231005879f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CoverArea - Serialization/Deserialization #0")
{
  IMC::CoverArea msg;
  msg.setTimeStamp(0.5752539172219953);
  msg.setSource(63450U);
  msg.setSourceEntity(104U);
  msg.setDestination(8246U);
  msg.setDestinationEntity(230U);
  msg.lat = 0.49745820068400914;
  msg.lon = 0.9225320924960835;
  msg.z = 0.005706136469895706f;
  msg.z_units = 70U;
  msg.speed = 0.959691386570246f;
  msg.speed_units = 252U;
  IMC::PolygonVertex tmp_msg_0;
  tmp_msg_0.lat = 0.6878941254633716;
  tmp_msg_0.lon = 0.8979229370243623;
  msg.polygon.push_back(tmp_msg_0);
  msg.custom.assign("WWQAZXOFTPXRNTKFLERUWZPMFDLCXGDCMMRBESSINHNUVUXDYMDPKLYVETYEJPAWGYGVNKNENVKPMZJEDPWUSFHIHLUFHQAFPALQOBZITBFGXNHCSBRTCYVPUGYEXRKEBIMMASNGIWDJCZGSPJAEZAVVCHRTGQMIQKBOUMRQYLSQSJUHLTGCIHISZYFDFAACKPTFOGYHKDSXJLLUXBCNWMAOZOIKCYOJVOJJWRWWQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CoverArea - Serialization/Deserialization #1")
{
  IMC::CoverArea msg;
  msg.setTimeStamp(0.3071155339536277);
  msg.setSource(53123U);
  msg.setSourceEntity(164U);
  msg.setDestination(64499U);
  msg.setDestinationEntity(54U);
  msg.lat = 0.404427513231559;
  msg.lon = 0.07374228433886931;
  msg.z = 0.9925270431398397f;
  msg.z_units = 35U;
  msg.speed = 0.1270309985857483f;
  msg.speed_units = 251U;
  msg.custom.assign("JZWFPZOPNCVTYCFIFWHUBMDSGGXOHUKYYWTPYWKTXFGJPGFEBCRHJSHOKRJKCFZRSBLUTEVNYAAQVDXOZMXVKMQIXGVSIKZDLIJVNDMDBOXCJSRMQWNZODOLHTFEHPDRLVYUTYFAMYEAFNFHRQSJUBUGAPBZZINCCCXWIQYQWXTRLJUHBQLGUYZMVJIOMDQNLAAQTEIEKWBRZDKNTVBLHETSJCAWMKIPNCEBGOURSQMXLHGOAANS");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CoverArea - Serialization/Deserialization #2")
{
  IMC::CoverArea msg;
  msg.setTimeStamp(0.09903703512092588);
  msg.setSource(33008U);
  msg.setSourceEntity(76U);
  msg.setDestination(51253U);
  msg.setDestinationEntity(238U);
  msg.lat = 0.5391571193906534;
  msg.lon = 0.08970377934307439;
  msg.z = 0.6947994338968602f;
  msg.z_units = 229U;
  msg.speed = 0.5447423133526178f;
  msg.speed_units = 239U;
  msg.custom.assign("GDHIBPTFLTBMCLIVZTNGVKLMMYGRQFX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PolygonVertex - Serialization/Deserialization #0")
{
  IMC::PolygonVertex msg;
  msg.setTimeStamp(0.019510837868040753);
  msg.setSource(5523U);
  msg.setSourceEntity(182U);
  msg.setDestination(34117U);
  msg.setDestinationEntity(48U);
  msg.lat = 0.7486362226614971;
  msg.lon = 0.9572934490163221;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PolygonVertex - Serialization/Deserialization #1")
{
  IMC::PolygonVertex msg;
  msg.setTimeStamp(0.6118497026928906);
  msg.setSource(58711U);
  msg.setSourceEntity(73U);
  msg.setDestination(47781U);
  msg.setDestinationEntity(176U);
  msg.lat = 0.7403766695775023;
  msg.lon = 0.0712935387865633;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PolygonVertex - Serialization/Deserialization #2")
{
  IMC::PolygonVertex msg;
  msg.setTimeStamp(0.6691723113791892);
  msg.setSource(34281U);
  msg.setSourceEntity(128U);
  msg.setDestination(37184U);
  msg.setDestinationEntity(62U);
  msg.lat = 0.20815750566501723;
  msg.lon = 0.9215768380968841;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompassCalibration - Serialization/Deserialization #0")
{
  IMC::CompassCalibration msg;
  msg.setTimeStamp(0.8000311708069183);
  msg.setSource(41297U);
  msg.setSourceEntity(183U);
  msg.setDestination(41147U);
  msg.setDestinationEntity(249U);
  msg.timeout = 28918U;
  msg.lat = 0.8612254442769336;
  msg.lon = 0.5675341420980132;
  msg.z = 0.5474296980499992f;
  msg.z_units = 98U;
  msg.pitch = 0.3676380096164904f;
  msg.amplitude = 0.42638562508240163f;
  msg.duration = 22371U;
  msg.speed = 0.393239239145421f;
  msg.speed_units = 124U;
  msg.radius = 0.1494593082983423f;
  msg.direction = 129U;
  msg.custom.assign("TSSKZYHVWWSGMNHFMAVUFULFCTERLEFGDBUDSSAIFYRTTNYCAWYKDFBDUQXJHIBTCJDAFEXRHBWRNUYVVLFLQQCKNRXABOMPPIDKBGJWITYKZBUMPJJIKXJPPRCWZZWQQGSVXVCALRJTQEWLFNMESZPVLGHSWCSXIVCEKODGBIPZYBACHHYOOPANSMEOWRGZLTRNKKFLHYUZMOBGUJZRNVQOMNHDXOOGIOULQQNETEIAPXUTDCAEGI");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompassCalibration - Serialization/Deserialization #1")
{
  IMC::CompassCalibration msg;
  msg.setTimeStamp(0.5833535112773874);
  msg.setSource(12532U);
  msg.setSourceEntity(214U);
  msg.setDestination(24761U);
  msg.setDestinationEntity(222U);
  msg.timeout = 15862U;
  msg.lat = 0.668405809988815;
  msg.lon = 0.5849939153001819;
  msg.z = 0.09101212888320542f;
  msg.z_units = 215U;
  msg.pitch = 0.8334490609930064f;
  msg.amplitude = 0.9501187031055525f;
  msg.duration = 26553U;
  msg.speed = 0.08651663051451686f;
  msg.speed_units = 68U;
  msg.radius = 0.7578614475143464f;
  msg.direction = 26U;
  msg.custom.assign("OGMHNRABCETEQVDSEBTNVIXXJLRHXUKHZKSAWWSSHPYASXBPAFIJBTKPZWLDYQDRDLBYTRKEUKMAURIWZYVCDQIZVVKSIWULRPYOQIWSHEIHYCJMPUAOWPZZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompassCalibration - Serialization/Deserialization #2")
{
  IMC::CompassCalibration msg;
  msg.setTimeStamp(0.42593085084520244);
  msg.setSource(35303U);
  msg.setSourceEntity(238U);
  msg.setDestination(12636U);
  msg.setDestinationEntity(214U);
  msg.timeout = 38495U;
  msg.lat = 0.10731211324400058;
  msg.lon = 0.05947819115248343;
  msg.z = 0.7833846424108771f;
  msg.z_units = 45U;
  msg.pitch = 0.0488997583246944f;
  msg.amplitude = 0.8501232487563163f;
  msg.duration = 17533U;
  msg.speed = 0.6718225495014413f;
  msg.speed_units = 132U;
  msg.radius = 8.34117820532887e-05f;
  msg.direction = 25U;
  msg.custom.assign("BWFPCJNBWATPZBEOWCDVDIPUXUKVSUGDAABTYPUZOYEXHUYANJCPVMHBLRPKQIRMGZGOLJFWFDNGLLJDZIEAMIESEBQROWMRJINJYGKSZYYDVRFZFLAVJKEELITFCEKHMCLKGLTBNLXKTXRIFHYHQRMVMPUVDUPYHGJWWRKSXUTCYCCQUIVMPZJOHQBSAJSSNMBDINFQQBXLSTMXO");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationParameters - Serialization/Deserialization #0")
{
  IMC::FormationParameters msg;
  msg.setTimeStamp(0.4587214173751538);
  msg.setSource(46536U);
  msg.setSourceEntity(190U);
  msg.setDestination(52512U);
  msg.setDestinationEntity(49U);
  msg.formation_name.assign("GUISKWAPHLIJVRLMTVSXDFCLSJCTKZQSQNNGWRHLJMZMMWFPUCMFGWDSMNPRJJRZVOXDHZVSZQUYBWPJXVTBIFAAPLSYHQQENVFLMEOOXNZGUIGBDFXOUROEJRATNVHXREOVIZEGYYIMZKTWYPUEWRGKASWBLLOXNMBDFD");
  msg.reference_frame = 252U;
  IMC::VehicleFormationParticipant tmp_msg_0;
  tmp_msg_0.vid = 21748U;
  tmp_msg_0.off_x = 0.12469675041347461f;
  tmp_msg_0.off_y = 0.8873799596181104f;
  tmp_msg_0.off_z = 0.07879441599195047f;
  msg.participants.push_back(tmp_msg_0);
  msg.custom.assign("LARLKFVGISAZESAPTPBIKHRDADYKWHBJJXUMZZDDJXPQAEYMHAXPTEFQZQRVURPSIHKPWVADDYSGUAQDSGJNOYMFRYIVJZHSBOMICFNXJFUMZONFRKESTHMWCGUWAEGFZLN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationParameters - Serialization/Deserialization #1")
{
  IMC::FormationParameters msg;
  msg.setTimeStamp(0.14732261501253874);
  msg.setSource(11636U);
  msg.setSourceEntity(17U);
  msg.setDestination(10614U);
  msg.setDestinationEntity(44U);
  msg.formation_name.assign("YXDAPVMGQNIEBUVV");
  msg.reference_frame = 123U;
  msg.custom.assign("EWPXRYKZHUNXGUAQBMZRLVIJEYMNYUNDAWNSZHZVODQUSYRFREXLXKXOZSTLKQTSOYYFISLDZISRFENWPTRMJFCBBJGAWBQARSGBMNKCEUKEBMERTLYLWFEMVDPHYUTHEIJOADPGVUFWNVQHCACMAIYFNUZDSZDJACNCOOGIXGBOULXCHVMIQKUWJS");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationParameters - Serialization/Deserialization #2")
{
  IMC::FormationParameters msg;
  msg.setTimeStamp(0.8702433424951781);
  msg.setSource(7960U);
  msg.setSourceEntity(170U);
  msg.setDestination(62127U);
  msg.setDestinationEntity(93U);
  msg.formation_name.assign("JYKAGYYNWWZZSICXDYDSUARZOXXRSAOWJKMWHJMPDEXUEBCHTNVKVFNGCGJQMCOQHTDJFSIFGIPUKBNLYIZFUNXWAAHJFJAWKXKPVQLYOEE");
  msg.reference_frame = 222U;
  IMC::VehicleFormationParticipant tmp_msg_0;
  tmp_msg_0.vid = 50133U;
  tmp_msg_0.off_x = 0.4762827608780543f;
  tmp_msg_0.off_y = 0.7778134814468737f;
  tmp_msg_0.off_z = 0.3492578073415529f;
  msg.participants.push_back(tmp_msg_0);
  msg.custom.assign("PPANUDSAXX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationPlanExecution - Serialization/Deserialization #0")
{
  IMC::FormationPlanExecution msg;
  msg.setTimeStamp(0.2749963621072258);
  msg.setSource(21794U);
  msg.setSourceEntity(48U);
  msg.setDestination(5731U);
  msg.setDestinationEntity(126U);
  msg.group_name.assign("RJCSYKOPHLXEGUDGHSIVPYAOBDTLURPNWPRFOIOFPGDZLXZNABQSWIYCUFJALGEXKAAKFDBINXGMWGQFQJEOVAIAKMEKILDEWTRCGCXZKENTXUGCVXOUNBTCZLSVVKYAMUHVIHZDJFUCZMURSIJSBWTTWCSYMPRGUOWCBNCAHRF");
  msg.formation_name.assign("UCCHCTCDPWSPBBUSRIKNMGCGHGTYRMLKMMMXBJBUWGRDMIUYBNXWIXXETCOUHAHCFRN");
  msg.plan_id.assign("KNBNYYFLOEWGAZPEAZCOAJKTSDHTQGAHFQWWVSDCIXDPAMYOBAZHONKBBUUZNXYCXCJJPHK");
  msg.description.assign("MJWOUIGRYQMSLNTLNKDQCIAHVCMDOIHPDOWHNPKEEKAZSXMFITSBLSCONUUANTBVWXHXNEWEAFEVZGPLROBFLVVNAYRJINKHELSQUQJOYJKZZJITASOBPKFGVOWDGQAVJTRZZFEUSCGWGMHUKZGAGTIMHPFRSBIJXSJQCXTQFWWFZMRUGWNDTUXKDVRPAYKBBBLUJGRZHTXXPLQVUCIREZWJTYDLICEROSBDM");
  msg.leader_speed = 0.002692513853757128f;
  msg.leader_bank_lim = 0.8954619511636659f;
  msg.pos_sim_err_lim = 0.8388009844099399f;
  msg.pos_sim_err_wrn = 0.12777958970196446f;
  msg.pos_sim_err_timeout = 24681U;
  msg.converg_max = 0.07375701494225129f;
  msg.converg_timeout = 32454U;
  msg.comms_timeout = 22346U;
  msg.turb_lim = 0.028690989341729645f;
  msg.custom.assign("BCFJJQOGHLLPJNQRGRVOOAXBFOTDJOFJIAAUBMXOLWTJAWUNPOJZOONRHDTPCNUVGDZBFRDKJURYSKTYHIRZCIKIHMKGBMHSVITGHLUGPQNXXYYUTAIBMLYSGQPHKPDXZADWWQXRZWEATYCYZQGSGVEFFMVPLEBTVZSYQBSNWFKLRVCNFZQSCFKE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationPlanExecution - Serialization/Deserialization #1")
{
  IMC::FormationPlanExecution msg;
  msg.setTimeStamp(0.7534798446254064);
  msg.setSource(64292U);
  msg.setSourceEntity(13U);
  msg.setDestination(10089U);
  msg.setDestinationEntity(32U);
  msg.group_name.assign("SCCOOJFCZEUBAERHKZHGSIYVBMUYWTPEKFJCODMQINHLKNC");
  msg.formation_name.assign("TIFEXEXXWLUFGSGVLYQTCETUHUHIBMDARDKOVHQYOOPSSNTRJXPCULUDJTIZZNXWFWOXZDIXKIBHMGUMEQNIBMUVAAZSAGKXUWRUECVOBGPECVTKMOVFUKCIORJYFSPIBYJTRSWHYQGMTZALICPAPAZMPAPH");
  msg.plan_id.assign("NXZKVNDIEPRPRUHTQQZWQLGVLWGMECYXMPKNSJJKEKIGOUXRQACXHRNBLTCDUFWOHZFGZSUDLQEAXHNVXPIV");
  msg.description.assign("FJTQFEPPDPRDHQGBUBJWSALSNOEXHFAXOIMQNINOADAZBMONUGXOCOITQWSIIVXPUTPFYGAFXYIATPHFUHFAWFIWJKUSCYIHLWK");
  msg.leader_speed = 0.5321758957310607f;
  msg.leader_bank_lim = 0.643165411029087f;
  msg.pos_sim_err_lim = 0.5574454937652566f;
  msg.pos_sim_err_wrn = 0.6760722795766183f;
  msg.pos_sim_err_timeout = 14014U;
  msg.converg_max = 0.0932954633363613f;
  msg.converg_timeout = 29575U;
  msg.comms_timeout = 306U;
  msg.turb_lim = 0.6512791557181383f;
  msg.custom.assign("EHMZXKQJVMPADJEGNODNQBKJPSCWHFREHGXTIZDVILEXYMSQSQTZADNBSIAWOFYGUFUHTRGGENULBQBYOBCMJFRLNDWHLBURCKXVJJNZLIZJNZERBEAQYAOWHYCAMWKPFOYHILNRJSIDQMKVAYGBIPPRGLRDSHXAPCOTWCUMOUVTCTWKGXVCRNXTIMFIESVBZXVUULPGYULUQQDLZCAKWNOOYPBSJZGOMFPJDR");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationPlanExecution - Serialization/Deserialization #2")
{
  IMC::FormationPlanExecution msg;
  msg.setTimeStamp(0.8366268756029178);
  msg.setSource(6974U);
  msg.setSourceEntity(74U);
  msg.setDestination(18698U);
  msg.setDestinationEntity(117U);
  msg.group_name.assign("OIHTLTPCFKOTTEFJLASLRWMAQPNUSPVWMDDHWVMMKZLCINBOCRAMQQAZSKNCEKYTWLGDSRAXTOOZVWYCFJZGEHFGZFFDBIYTCAFTXWTMMFQQXWUCRUSQRVLIXCYHZUDOJJGOKTXYEXBDENJHIMPOJRPQWDUNIAVVSYWNXRSJSOUZCNSMHHVGBENXUGXRBBLPZGP");
  msg.formation_name.assign("OPZBMWLBAHYZRYBBPGEIMINSGXOQWHNOJLKAYBGGNTYTKIJQGRCLMUEFCUIJRNQOCWUBIOZQVCZZPCUKNQLWYEDEQJMPLZOHTQEAKEKLXDZCDAXTCOHKXFIUBXLVAXFSGXY");
  msg.plan_id.assign("VCGMARQNHBHPLLCVJHCMDAHLEBAMUDOOTQNPOTTZAIURQHXBTBSULJFKEDYJZXKGTITNVZWFUAMOJUEQISZVQVVQKEMRAGDMISSZHRVPKXCSGQNNWTOLIUPOYNR");
  msg.description.assign("JCKFQLZRFNLTHRISANQDSXHLKXGRMYVFJLRBXWXWCAHTNKFZHWYPDEOQIZOFEUHVSIAIQEKTEPZTGVWCOEZBQDEBYQCQSINSNMCCJCKBGTEFAYVWMAGUBYJUOKQBLSOGJKYSMAWHGBYLADXMDFKYYLOTHOUPPNHGVRJWZNOAGRSEVMXMJNFTUULEAVEUWWLBPJXJHMKU");
  msg.leader_speed = 0.2463261538709165f;
  msg.leader_bank_lim = 0.4130226863105362f;
  msg.pos_sim_err_lim = 0.38844200101530846f;
  msg.pos_sim_err_wrn = 0.9667065697274558f;
  msg.pos_sim_err_timeout = 2521U;
  msg.converg_max = 0.29288765093887315f;
  msg.converg_timeout = 9581U;
  msg.comms_timeout = 37948U;
  msg.turb_lim = 0.9196770341387505f;
  msg.custom.assign("CEWRNUJFQRGETXOLSLKFJUPSMHEOLYHLW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowReference - Serialization/Deserialization #0")
{
  IMC::FollowReference msg;
  msg.setTimeStamp(0.48309504592752084);
  msg.setSource(53439U);
  msg.setSourceEntity(37U);
  msg.setDestination(29936U);
  msg.setDestinationEntity(124U);
  msg.control_src = 41754U;
  msg.control_ent = 125U;
  msg.timeout = 0.7897439089585043f;
  msg.loiter_radius = 0.01615459158814936f;
  msg.altitude_interval = 0.9924917129615641f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowReference - Serialization/Deserialization #1")
{
  IMC::FollowReference msg;
  msg.setTimeStamp(0.3747609888221455);
  msg.setSource(18752U);
  msg.setSourceEntity(243U);
  msg.setDestination(59213U);
  msg.setDestinationEntity(171U);
  msg.control_src = 29542U;
  msg.control_ent = 219U;
  msg.timeout = 0.983394167600574f;
  msg.loiter_radius = 0.0504078954484567f;
  msg.altitude_interval = 0.7620101642405709f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowReference - Serialization/Deserialization #2")
{
  IMC::FollowReference msg;
  msg.setTimeStamp(0.723381276110858);
  msg.setSource(13963U);
  msg.setSourceEntity(82U);
  msg.setDestination(15119U);
  msg.setDestinationEntity(135U);
  msg.control_src = 55145U;
  msg.control_ent = 212U;
  msg.timeout = 0.7198938464535856f;
  msg.loiter_radius = 0.803224575330946f;
  msg.altitude_interval = 0.640251127575314f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Reference - Serialization/Deserialization #0")
{
  IMC::Reference msg;
  msg.setTimeStamp(0.5348376965966158);
  msg.setSource(29566U);
  msg.setSourceEntity(242U);
  msg.setDestination(12449U);
  msg.setDestinationEntity(14U);
  msg.flags = 38U;
  IMC::DesiredSpeed tmp_msg_0;
  tmp_msg_0.value = 0.2167381710844708;
  tmp_msg_0.speed_units = 213U;
  msg.speed.set(tmp_msg_0);
  IMC::DesiredZ tmp_msg_1;
  tmp_msg_1.value = 0.3339890748678066f;
  tmp_msg_1.z_units = 31U;
  msg.z.set(tmp_msg_1);
  msg.lat = 0.8264449411508467;
  msg.lon = 0.3062104218245938;
  msg.radius = 0.8040245595844824f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Reference - Serialization/Deserialization #1")
{
  IMC::Reference msg;
  msg.setTimeStamp(0.31712504130526953);
  msg.setSource(43649U);
  msg.setSourceEntity(88U);
  msg.setDestination(12700U);
  msg.setDestinationEntity(246U);
  msg.flags = 85U;
  IMC::DesiredSpeed tmp_msg_0;
  tmp_msg_0.value = 0.24383028993258027;
  tmp_msg_0.speed_units = 164U;
  msg.speed.set(tmp_msg_0);
  IMC::DesiredZ tmp_msg_1;
  tmp_msg_1.value = 0.2577548933713131f;
  tmp_msg_1.z_units = 219U;
  msg.z.set(tmp_msg_1);
  msg.lat = 0.2987439613917109;
  msg.lon = 0.3499598241435544;
  msg.radius = 0.9832567809089764f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Reference - Serialization/Deserialization #2")
{
  IMC::Reference msg;
  msg.setTimeStamp(0.6317958848996862);
  msg.setSource(49983U);
  msg.setSourceEntity(185U);
  msg.setDestination(8637U);
  msg.setDestinationEntity(187U);
  msg.flags = 218U;
  IMC::DesiredSpeed tmp_msg_0;
  tmp_msg_0.value = 0.39388688021183826;
  tmp_msg_0.speed_units = 42U;
  msg.speed.set(tmp_msg_0);
  IMC::DesiredZ tmp_msg_1;
  tmp_msg_1.value = 0.19320004738819097f;
  tmp_msg_1.z_units = 206U;
  msg.z.set(tmp_msg_1);
  msg.lat = 0.5320775349170841;
  msg.lon = 0.5351019942988434;
  msg.radius = 0.7240426481824266f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowRefState - Serialization/Deserialization #0")
{
  IMC::FollowRefState msg;
  msg.setTimeStamp(0.7111561858280331);
  msg.setSource(9703U);
  msg.setSourceEntity(174U);
  msg.setDestination(51900U);
  msg.setDestinationEntity(204U);
  msg.control_src = 32718U;
  msg.control_ent = 110U;
  IMC::Reference tmp_msg_0;
  tmp_msg_0.flags = 48U;
  IMC::DesiredSpeed tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.value = 0.6384454369368758;
  tmp_tmp_msg_0_0.speed_units = 81U;
  tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
  IMC::DesiredZ tmp_tmp_msg_0_1;
  tmp_tmp_msg_0_1.value = 0.14256564968792584f;
  tmp_tmp_msg_0_1.z_units = 188U;
  tmp_msg_0.z.set(tmp_tmp_msg_0_1);
  tmp_msg_0.lat = 0.8394466969212757;
  tmp_msg_0.lon = 0.01954306846878817;
  tmp_msg_0.radius = 0.4084518135536045f;
  msg.reference.set(tmp_msg_0);
  msg.state = 100U;
  msg.proximity = 33U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowRefState - Serialization/Deserialization #1")
{
  IMC::FollowRefState msg;
  msg.setTimeStamp(0.35460283766478395);
  msg.setSource(4667U);
  msg.setSourceEntity(201U);
  msg.setDestination(27922U);
  msg.setDestinationEntity(223U);
  msg.control_src = 59367U;
  msg.control_ent = 56U;
  IMC::Reference tmp_msg_0;
  tmp_msg_0.flags = 165U;
  IMC::DesiredSpeed tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.value = 0.5182635232153531;
  tmp_tmp_msg_0_0.speed_units = 197U;
  tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
  IMC::DesiredZ tmp_tmp_msg_0_1;
  tmp_tmp_msg_0_1.value = 0.7468132570667749f;
  tmp_tmp_msg_0_1.z_units = 249U;
  tmp_msg_0.z.set(tmp_tmp_msg_0_1);
  tmp_msg_0.lat = 0.37399952025713046;
  tmp_msg_0.lon = 0.17160579013321664;
  tmp_msg_0.radius = 0.910601303966081f;
  msg.reference.set(tmp_msg_0);
  msg.state = 163U;
  msg.proximity = 126U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowRefState - Serialization/Deserialization #2")
{
  IMC::FollowRefState msg;
  msg.setTimeStamp(0.7279595544293552);
  msg.setSource(40936U);
  msg.setSourceEntity(81U);
  msg.setDestination(31810U);
  msg.setDestinationEntity(165U);
  msg.control_src = 63497U;
  msg.control_ent = 182U;
  IMC::Reference tmp_msg_0;
  tmp_msg_0.flags = 73U;
  IMC::DesiredSpeed tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.value = 0.9583272328172971;
  tmp_tmp_msg_0_0.speed_units = 201U;
  tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
  IMC::DesiredZ tmp_tmp_msg_0_1;
  tmp_tmp_msg_0_1.value = 0.5389639663180046f;
  tmp_tmp_msg_0_1.z_units = 153U;
  tmp_msg_0.z.set(tmp_tmp_msg_0_1);
  tmp_msg_0.lat = 0.659914879183453;
  tmp_msg_0.lon = 0.21322092003082038;
  tmp_msg_0.radius = 0.13678910635665698f;
  msg.reference.set(tmp_msg_0);
  msg.state = 198U;
  msg.proximity = 160U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationMonitor - Serialization/Deserialization #0")
{
  IMC::FormationMonitor msg;
  msg.setTimeStamp(0.9111908649346477);
  msg.setSource(3584U);
  msg.setSourceEntity(14U);
  msg.setDestination(46377U);
  msg.setDestinationEntity(0U);
  msg.ax_cmd = 0.3521432626092885f;
  msg.ay_cmd = 0.6453530711972739f;
  msg.az_cmd = 0.03731525820516213f;
  msg.ax_des = 0.5703530582779958f;
  msg.ay_des = 0.794852726908377f;
  msg.az_des = 0.3934431324418527f;
  msg.virt_err_x = 0.7749357367348664f;
  msg.virt_err_y = 0.8983863100042816f;
  msg.virt_err_z = 0.41116566456682135f;
  msg.surf_fdbk_x = 0.1397611478814551f;
  msg.surf_fdbk_y = 0.38235093291422806f;
  msg.surf_fdbk_z = 0.7669832144630825f;
  msg.surf_unkn_x = 0.9994340642122834f;
  msg.surf_unkn_y = 0.9281465634708526f;
  msg.surf_unkn_z = 0.022610163277346995f;
  msg.ss_x = 0.3865630214304201f;
  msg.ss_y = 0.04856736709355314f;
  msg.ss_z = 0.2167579476974707f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationMonitor - Serialization/Deserialization #1")
{
  IMC::FormationMonitor msg;
  msg.setTimeStamp(0.21695035617265757);
  msg.setSource(5324U);
  msg.setSourceEntity(49U);
  msg.setDestination(55033U);
  msg.setDestinationEntity(181U);
  msg.ax_cmd = 0.9303049954422732f;
  msg.ay_cmd = 0.841108765108236f;
  msg.az_cmd = 0.38494806770443224f;
  msg.ax_des = 0.697208547658337f;
  msg.ay_des = 0.5819360141726232f;
  msg.az_des = 0.12124861530214859f;
  msg.virt_err_x = 0.3954196679709636f;
  msg.virt_err_y = 0.7873029197559774f;
  msg.virt_err_z = 0.9115823237364796f;
  msg.surf_fdbk_x = 0.9132806443777364f;
  msg.surf_fdbk_y = 0.49318050710301864f;
  msg.surf_fdbk_z = 0.6696129779730686f;
  msg.surf_unkn_x = 0.707169208881424f;
  msg.surf_unkn_y = 0.14307937298611617f;
  msg.surf_unkn_z = 0.035022794883203257f;
  msg.ss_x = 0.8186069495484983f;
  msg.ss_y = 0.5658682644302637f;
  msg.ss_z = 0.2636025640204597f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationMonitor - Serialization/Deserialization #2")
{
  IMC::FormationMonitor msg;
  msg.setTimeStamp(0.79844045254092);
  msg.setSource(29817U);
  msg.setSourceEntity(237U);
  msg.setDestination(58541U);
  msg.setDestinationEntity(239U);
  msg.ax_cmd = 0.5200451812602724f;
  msg.ay_cmd = 0.72474692903201f;
  msg.az_cmd = 0.49001785274899856f;
  msg.ax_des = 0.8726502062513708f;
  msg.ay_des = 0.7092008460288405f;
  msg.az_des = 0.24879140409666978f;
  msg.virt_err_x = 0.08333254943909274f;
  msg.virt_err_y = 0.4394732400194893f;
  msg.virt_err_z = 0.03178496291875599f;
  msg.surf_fdbk_x = 0.6674484834940201f;
  msg.surf_fdbk_y = 0.21631611111956228f;
  msg.surf_fdbk_z = 0.7103748447949114f;
  msg.surf_unkn_x = 0.6118045623223287f;
  msg.surf_unkn_y = 0.4180999826386146f;
  msg.surf_unkn_z = 0.6745122805901536f;
  msg.ss_x = 0.7190348928099844f;
  msg.ss_y = 0.4026205200015017f;
  msg.ss_z = 0.8065597272520051f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RelativeState - Serialization/Deserialization #0")
{
  IMC::RelativeState msg;
  msg.setTimeStamp(0.12754560533888992);
  msg.setSource(26177U);
  msg.setSourceEntity(121U);
  msg.setDestination(49425U);
  msg.setDestinationEntity(238U);
  msg.s_id.assign("ZRRDKYGLKXADOKBOUPLQJLRGVGHWZAYJXAETIFIFPKOSTVHMIJLBG");
  msg.dist = 0.6693195777069121f;
  msg.err = 0.011823131277716614f;
  msg.ctrl_imp = 0.3867846470104622f;
  msg.rel_dir_x = 0.27954405781009983f;
  msg.rel_dir_y = 0.6989390508913712f;
  msg.rel_dir_z = 0.925882696212355f;
  msg.err_x = 0.1297734056459049f;
  msg.err_y = 0.01464697402332249f;
  msg.err_z = 0.690157858274299f;
  msg.rf_err_x = 0.6183958102343944f;
  msg.rf_err_y = 0.8022430532037014f;
  msg.rf_err_z = 0.02560417838958251f;
  msg.rf_err_vx = 0.5160963967494082f;
  msg.rf_err_vy = 0.8034351754978657f;
  msg.rf_err_vz = 0.32983000191266076f;
  msg.ss_x = 0.3505195134173892f;
  msg.ss_y = 0.3447751256599585f;
  msg.ss_z = 0.4778445153964537f;
  msg.virt_err_x = 0.7716405287175767f;
  msg.virt_err_y = 0.931368793617529f;
  msg.virt_err_z = 0.5478391618448349f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RelativeState - Serialization/Deserialization #1")
{
  IMC::RelativeState msg;
  msg.setTimeStamp(0.8663542336135397);
  msg.setSource(2776U);
  msg.setSourceEntity(121U);
  msg.setDestination(29271U);
  msg.setDestinationEntity(64U);
  msg.s_id.assign("PJLGBNEQKRGZKROXPBAWDEPPLIDSWMLRLTRNGAFTYBXBDZOVOJEWVPOPSIXRNLHFIGAHRUKWSIGECBLZSFNZDHYSOADEBQIEWUYQYSJIKOYKKPJRTTIJRCCVTBVVTDMNAGOQKJVBWDEDOVWMZXTDZFTZZIMJUHCASMUUCGLTGXGZIMUJIHMCCPSZWDJJFTXCSWHAHFCQNHLNXYMFMQHBQB");
  msg.dist = 0.10446494440081622f;
  msg.err = 0.8596480248544422f;
  msg.ctrl_imp = 0.6544424619830863f;
  msg.rel_dir_x = 0.7737991045148624f;
  msg.rel_dir_y = 0.7863964800505314f;
  msg.rel_dir_z = 0.24997730226213344f;
  msg.err_x = 0.8717533339175013f;
  msg.err_y = 0.24520221781251061f;
  msg.err_z = 0.6096767145925487f;
  msg.rf_err_x = 0.20385205017919839f;
  msg.rf_err_y = 0.9259977178374628f;
  msg.rf_err_z = 0.8404783505647254f;
  msg.rf_err_vx = 0.5257114114621229f;
  msg.rf_err_vy = 0.7940283327822188f;
  msg.rf_err_vz = 0.19401142722368347f;
  msg.ss_x = 0.26724411309220486f;
  msg.ss_y = 0.8549626544471617f;
  msg.ss_z = 0.18814347920920205f;
  msg.virt_err_x = 0.5610769464066173f;
  msg.virt_err_y = 0.3069616163461323f;
  msg.virt_err_z = 0.8547787033849743f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RelativeState - Serialization/Deserialization #2")
{
  IMC::RelativeState msg;
  msg.setTimeStamp(0.7676372745512468);
  msg.setSource(10856U);
  msg.setSourceEntity(83U);
  msg.setDestination(8898U);
  msg.setDestinationEntity(198U);
  msg.s_id.assign("UGHYAMZEPJEMHKTJJFQXUNLEDUCYBYRZJWGFEUXBNPCOQQDOGIDRSYFVDAMHEVEFIYEICBRGTZYLLDSJWLSYT");
  msg.dist = 0.4385329224774561f;
  msg.err = 0.060196045689885236f;
  msg.ctrl_imp = 0.8583771225823355f;
  msg.rel_dir_x = 0.15041873175324405f;
  msg.rel_dir_y = 0.4396137601884412f;
  msg.rel_dir_z = 0.6267754335977297f;
  msg.err_x = 0.48126381194964063f;
  msg.err_y = 0.5842604071158845f;
  msg.err_z = 0.7517217812977007f;
  msg.rf_err_x = 0.14800811726658236f;
  msg.rf_err_y = 0.5500662729121983f;
  msg.rf_err_z = 0.49271930234508443f;
  msg.rf_err_vx = 0.15416070665236303f;
  msg.rf_err_vy = 0.7053937901534492f;
  msg.rf_err_vz = 0.047608596422406224f;
  msg.ss_x = 0.4161201736918979f;
  msg.ss_y = 0.6762682864374192f;
  msg.ss_z = 0.9879153907615839f;
  msg.virt_err_x = 0.9909928807168116f;
  msg.virt_err_y = 0.4706401431089181f;
  msg.virt_err_z = 0.8885322272327262f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Dislodge - Serialization/Deserialization #0")
{
  IMC::Dislodge msg;
  msg.setTimeStamp(0.2419196957111005);
  msg.setSource(2667U);
  msg.setSourceEntity(79U);
  msg.setDestination(41882U);
  msg.setDestinationEntity(87U);
  msg.timeout = 5100U;
  msg.rpm = 0.7298999750774448f;
  msg.direction = 61U;
  msg.custom.assign("HKIBDXEJAHGJLAEBHBCILUOHWDUGFMYIZSXEOFOGJTLTOPDHXNBWMCPOLPNKEHGVLLTYKVIQIUZXXVZOEVTCFTNKKOATGMQYBPIKDYESIQSMIYNYTSJQXBWSUVJWILEZORYX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Dislodge - Serialization/Deserialization #1")
{
  IMC::Dislodge msg;
  msg.setTimeStamp(0.20726240111655114);
  msg.setSource(8416U);
  msg.setSourceEntity(2U);
  msg.setDestination(61810U);
  msg.setDestinationEntity(70U);
  msg.timeout = 14549U;
  msg.rpm = 0.5876591748310458f;
  msg.direction = 14U;
  msg.custom.assign("OIFKPINYPBXMURAYPULBMDPDISRAKTGCNBLLDEEGKCTLSHKSUBSRAUPBHCGEICNECKZTVBNBOSSPLJDQNMBAATFRMQMCARGDVVTGRVOPGHANHRFSFOQZZYZCVHIPQCSJWPU");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Dislodge - Serialization/Deserialization #2")
{
  IMC::Dislodge msg;
  msg.setTimeStamp(0.5256511611520697);
  msg.setSource(55589U);
  msg.setSourceEntity(130U);
  msg.setDestination(4610U);
  msg.setDestinationEntity(206U);
  msg.timeout = 38109U;
  msg.rpm = 0.9034340893560703f;
  msg.direction = 14U;
  msg.custom.assign("ZIBQJDYZGYXFXPDMFPHEYNVOJTVCPXAEAHXQCBXCOAOZKKYQSEQRZMGEFVWOWRNMIHQLTHCC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Formation - Serialization/Deserialization #0")
{
  IMC::Formation msg;
  msg.setTimeStamp(0.7777303399214625);
  msg.setSource(3076U);
  msg.setSourceEntity(24U);
  msg.setDestination(10762U);
  msg.setDestinationEntity(239U);
  msg.formation_name.assign("LURMOVGHFCTYAUCMKMHWRKDNZIMQQNBKIBMSEBDGCOERPLEPSAYHLWARCYTKZFVXRAOBVKENPUHSQVNPCJTDUJQZYHLNGPLLUJHLQTWBQOKPIBFHSNFVNZTAREOXDDIXPXJBFOVTESAZIXYSQZFDVVJMTBYLAXYOSWAYYWUWUROWDUIDTGZNMVJZFGIPEQPCHYNKXHSIMZIGGEUTNLBRWCBGKRXDCSXSFXDMJQ");
  msg.type = 163U;
  msg.op = 230U;
  msg.group_name.assign("SCXVFKQOHLPZJNORNNFJKYWAUZLJBBIXPFFLCUQNBYJHPZMYLVUTCGZIKPXRGXAMOIHDOXPXSHIMOAZGJHZUTDPZSOSCPBREYBXAKBEQRTAANWFGTYMSIDLOEPBWEVIHWVJZIWXSQADTJOMUAERRIVAMYZDIZJYTJXQNPDFBBLTGCCSKTQYDFWSKGIEVFDKKORBQYGTORQDDEVLKAMUCCNEVCLNFUUMKQFGUGWYWWWEQRXNJGPNSHHV");
  msg.plan_id.assign("ZQOJQTUDEXZZNXTOIAIHYUBVELJAAIVMYPUHJFGDQQOKXYUFMYLLWNGSUAMHGCACJRYBHXFROVYXUQRMAUSZNIXWZRETANESKIVLTIOI");
  msg.description.assign("RDQXAKOOFZTFK");
  msg.reference_frame = 133U;
  msg.leader_bank_lim = 0.4425642788557834f;
  msg.leader_speed_min = 0.9336300160938166f;
  msg.leader_speed_max = 0.7062453523007746f;
  msg.leader_alt_min = 0.8662012989922686f;
  msg.leader_alt_max = 0.289530919115196f;
  msg.pos_sim_err_lim = 0.8229662964803768f;
  msg.pos_sim_err_wrn = 0.2679649381641649f;
  msg.pos_sim_err_timeout = 45711U;
  msg.converg_max = 0.9276947013126983f;
  msg.converg_timeout = 57830U;
  msg.comms_timeout = 49954U;
  msg.turb_lim = 0.8526383935264562f;
  msg.custom.assign("JGEQNUBYOVSKMAHWHEQXBUPIYNWACQSRQXMLNDPJRFHDIAQZAFRYQNKNBAYBTGGWEDCBVNKHTGCLGHEHZYHOGFVLGCQCMNUZOFTWLRPOJMDOUSYDGHMNGPKPMSPALXXEJZBZADLXRZWUCQPIFNBSRDXUXIYMYTHKSRCWOUPETXEIYXWLBLOVMDHVTTSVMSKPWZFEKDBTAUKFWXLZIKVWOLSREFTVQJRJIFCJJAU");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Formation - Serialization/Deserialization #1")
{
  IMC::Formation msg;
  msg.setTimeStamp(0.14896247523354944);
  msg.setSource(42342U);
  msg.setSourceEntity(100U);
  msg.setDestination(48665U);
  msg.setDestinationEntity(36U);
  msg.formation_name.assign("LGZEEVKQBIHJAFWXJZUMVQZSTZYCQKOAZZWCCLGJDVOWMWXJGOFBJUITQTEKCPAKFAWSYYWHTYXFTHUZWOTPPHUHPKMIRIASBETMQDNHOCLFFVBVDDPRTNULSYHAYLCXRFMIBDRPEJRDTVMKVPGXFVCGMJBAINHQJDLRCXOQSZBEVSAKOKOIVIJPYODYSZULTILEESNAWMXNBHGMOELMNXXDFCNP");
  msg.type = 52U;
  msg.op = 224U;
  msg.group_name.assign("YISAZTGBPMZTPGJGGNKZCFEZPBECIRJSYQSDIPTCMFATAPTGJRPBWLDEDVOFUVLULXVHILYCJZGYURZDBOYQLWKUGNBHOXE");
  msg.plan_id.assign("BHCKNQULTZJHQDCDKMGNEQDQBLROGUUEMBIVBYYETXMYUPIXAJFSBITFJZUKFCJKTODFOHFELHAPWOJUWZIHHMDGRDVFZMWLPPRHEASVBRBAZPNSOHYDJUDNYMGWWWZWQMCPAHJERJXCPXUUSKFKLCSYAGNIYOZGEQOIWSZLRILDABYMIJKCTPXSOXJAQKGWFIGTBXXCANNGBUDORVVOLWVSGLTFVCXEHVNZ");
  msg.description.assign("UVKBZSPCCGFAJOETQXZEVA");
  msg.reference_frame = 239U;
  msg.leader_bank_lim = 0.4525112727508732f;
  msg.leader_speed_min = 0.39048962865802483f;
  msg.leader_speed_max = 0.9672617315890428f;
  msg.leader_alt_min = 0.878345669008781f;
  msg.leader_alt_max = 0.8160803697469188f;
  msg.pos_sim_err_lim = 0.07905345857508295f;
  msg.pos_sim_err_wrn = 0.5891159949566741f;
  msg.pos_sim_err_timeout = 18996U;
  msg.converg_max = 0.147236859193016f;
  msg.converg_timeout = 42835U;
  msg.comms_timeout = 9671U;
  msg.turb_lim = 0.6369621060659864f;
  msg.custom.assign("YHZFSLFCNWJQRSFFPKDXK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Formation - Serialization/Deserialization #2")
{
  IMC::Formation msg;
  msg.setTimeStamp(0.3344328019364803);
  msg.setSource(22773U);
  msg.setSourceEntity(201U);
  msg.setDestination(8467U);
  msg.setDestinationEntity(167U);
  msg.formation_name.assign("VAUXHSXJMZWLQLOIMSZNDCNKMAFERWKNVDAVFHCQLQEBYAOKNPTTKITRKXZILIQYHIARXCBIGUVJRZDEODEEXFFBSESFCLTYCMWQZYKXQKTBPKYSGCGFONMZNSJCZWGJXWBUAVJMGVKPSTVLYYNPMAILVOPEPJSG");
  msg.type = 143U;
  msg.op = 98U;
  msg.group_name.assign("ECMFSWRJVQSHIUMDS");
  msg.plan_id.assign("IWCLXAUSFUMCEOHLZPVDIWSYKJXXCVDKOVPZONBPQZDSILXCKSVTL");
  msg.description.assign("VPFPWSFBTGDJRBQUKGVDDPMGGMDSFZDQWGNYMCEUFEQKNTFCXOEWHYEFFYVRCIPTPGVJOSAOOSBTHZMUMLSNMQFTXJWAIAXVYXLGKOKAYTDKEZYJDIUPVKRQIOCZTQZWSRNSZMWCZUBOVLMVSOUXUHVQEIUJOETCRNMQLWJPXLPIJEWJQXAHRCBTNIHPIZGKYHOKYFXQX");
  msg.reference_frame = 100U;
  msg.leader_bank_lim = 0.34069606429279964f;
  msg.leader_speed_min = 0.5605572316812482f;
  msg.leader_speed_max = 0.7987637969999875f;
  msg.leader_alt_min = 0.6022705821540381f;
  msg.leader_alt_max = 0.41837763970196307f;
  msg.pos_sim_err_lim = 0.9678505124448021f;
  msg.pos_sim_err_wrn = 0.3492206273251459f;
  msg.pos_sim_err_timeout = 33044U;
  msg.converg_max = 0.7086763613662209f;
  msg.converg_timeout = 18970U;
  msg.comms_timeout = 37562U;
  msg.turb_lim = 0.6285524032145072f;
  msg.custom.assign("UWZKBKFUXHMGQCMJJDTYTPLTNFSPZEYEXTDVGZAWPGWTJSRJLHCTBTGQOJUOISIHGMXCHQGTOYERBCKNIMZMRBNLSRVKDOFIKLDBAVFNHVJXQSEUEUWUBFKTEKSRCNSNOLCROFNXMQALIXVTUWUIUX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Launch - Serialization/Deserialization #0")
{
  IMC::Launch msg;
  msg.setTimeStamp(0.19080099693416896);
  msg.setSource(54514U);
  msg.setSourceEntity(11U);
  msg.setDestination(6644U);
  msg.setDestinationEntity(186U);
  msg.timeout = 44119U;
  msg.lat = 0.24211701602713886;
  msg.lon = 0.9733559637991991;
  msg.z = 0.5510836086703219f;
  msg.z_units = 20U;
  msg.speed = 0.2976115381179665f;
  msg.speed_units = 51U;
  msg.custom.assign("HDOHXEFBZVXUXFKZNHNRTSRSVGFEQBELORPKMVO");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Launch - Serialization/Deserialization #1")
{
  IMC::Launch msg;
  msg.setTimeStamp(0.5640572911249039);
  msg.setSource(20538U);
  msg.setSourceEntity(155U);
  msg.setDestination(36104U);
  msg.setDestinationEntity(216U);
  msg.timeout = 56695U;
  msg.lat = 0.07569729686096338;
  msg.lon = 0.1794688600317933;
  msg.z = 0.3571186580162904f;
  msg.z_units = 79U;
  msg.speed = 0.7043385046675084f;
  msg.speed_units = 159U;
  msg.custom.assign("JGHOYDGVFAMCSBTLAUHBEHMLTNWMWJABRZVNSMKOPMTIAVGLEYXCBZLVHCWKHRCYLHBFIFAWYLFQRSUSWGCZJMFZOVEOINQSWMDPFPOEBIQIEKUDXZKRUGCJIAQNJWSVNDYYQSINIFVNDXLMKTEPTDJBOCZNVTCYDHFDNIPZRROGQDBXPYKJZCBXETOUUJQQUILXBRVEHUWAASKMXQVJGWEZTTYKXGNOXUSQGRGUEFLTMWY");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Launch - Serialization/Deserialization #2")
{
  IMC::Launch msg;
  msg.setTimeStamp(0.25174063093081434);
  msg.setSource(61600U);
  msg.setSourceEntity(93U);
  msg.setDestination(41045U);
  msg.setDestinationEntity(20U);
  msg.timeout = 45415U;
  msg.lat = 0.5012873393252592;
  msg.lon = 0.4898271239323645;
  msg.z = 0.8902436722668764f;
  msg.z_units = 4U;
  msg.speed = 0.7517075494162826f;
  msg.speed_units = 101U;
  msg.custom.assign("QWZBHIIXASWHUBRRJIBAZQTEFUDLZHIAMZDSANHDKKBWEMLCBCAPIEYHTUVGVGLNCMKWJAYXTUAYWDDSYXZZGNIPPKDTTZUNQNOCQHUFEUXBXSYOPFXKSQGFOBSELXAMMMFJIIOGBFQXTCESRLEYWVTUZBAPRBQHDDIJXXFRPQTGMVYFWJGHPL");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Drop - Serialization/Deserialization #0")
{
  IMC::Drop msg;
  msg.setTimeStamp(0.8967141910341866);
  msg.setSource(37539U);
  msg.setSourceEntity(92U);
  msg.setDestination(55170U);
  msg.setDestinationEntity(146U);
  msg.timeout = 42934U;
  msg.lat = 0.0964082120121319;
  msg.lon = 0.47952834543069633;
  msg.z = 0.19206403532787197f;
  msg.z_units = 0U;
  msg.speed = 0.6979151071373891f;
  msg.speed_units = 97U;
  msg.custom.assign("XDEJSKIZJWLHPBIFZBOMEECOPKRRLYAGSDMGDWHUWCK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Drop - Serialization/Deserialization #1")
{
  IMC::Drop msg;
  msg.setTimeStamp(0.1558841935387858);
  msg.setSource(52273U);
  msg.setSourceEntity(140U);
  msg.setDestination(42342U);
  msg.setDestinationEntity(223U);
  msg.timeout = 47518U;
  msg.lat = 0.9364080802624619;
  msg.lon = 0.916525750649234;
  msg.z = 0.31487807865712925f;
  msg.z_units = 207U;
  msg.speed = 0.5752358611754465f;
  msg.speed_units = 28U;
  msg.custom.assign("QVDPHUAXBXZLRGVIHSTDNFJLKOVZUNMZVRGTWKKHKWNAOSOFOLRCMVEYCMQYFCMMOXBFEVXHEVLYLRLOJGJWJVPDDUCQPMYZHZELNDNUDDKYGFGPFTIRYCBWEKHYANKY");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Drop - Serialization/Deserialization #2")
{
  IMC::Drop msg;
  msg.setTimeStamp(0.6770497481130195);
  msg.setSource(47079U);
  msg.setSourceEntity(15U);
  msg.setDestination(26248U);
  msg.setDestinationEntity(177U);
  msg.timeout = 21855U;
  msg.lat = 0.026696614387325956;
  msg.lon = 0.7474054611238898;
  msg.z = 0.6796564268538117f;
  msg.z_units = 45U;
  msg.speed = 0.010685480398662128f;
  msg.speed_units = 24U;
  msg.custom.assign("NORXYGGYMWPCPPEGKOIFVFQDVHLOAXSMJLVVMMJBCXDEYXPQXGMRFODYPWCRWQEQLUIHASEMWASDICTAHHLWAEKFCAWWHCEJBLNUGQPMT");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ScheduledGoto - Serialization/Deserialization #0")
{
  IMC::ScheduledGoto msg;
  msg.setTimeStamp(0.6776241277171288);
  msg.setSource(50999U);
  msg.setSourceEntity(162U);
  msg.setDestination(23134U);
  msg.setDestinationEntity(126U);
  msg.arrival_time = 0.6850806663599672;
  msg.lat = 0.35419244385549364;
  msg.lon = 0.8311474427999775;
  msg.z = 0.840152157992215f;
  msg.z_units = 180U;
  msg.travel_z = 0.9133403710828413f;
  msg.travel_z_units = 248U;
  msg.delayed = 50U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ScheduledGoto - Serialization/Deserialization #1")
{
  IMC::ScheduledGoto msg;
  msg.setTimeStamp(0.4289188278132452);
  msg.setSource(61156U);
  msg.setSourceEntity(150U);
  msg.setDestination(7185U);
  msg.setDestinationEntity(243U);
  msg.arrival_time = 0.13901933383805998;
  msg.lat = 0.47298651128006564;
  msg.lon = 0.7993762510271991;
  msg.z = 0.21591636447126594f;
  msg.z_units = 16U;
  msg.travel_z = 0.3074460969381415f;
  msg.travel_z_units = 234U;
  msg.delayed = 147U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ScheduledGoto - Serialization/Deserialization #2")
{
  IMC::ScheduledGoto msg;
  msg.setTimeStamp(0.2371882999069761);
  msg.setSource(65247U);
  msg.setSourceEntity(165U);
  msg.setDestination(6624U);
  msg.setDestinationEntity(55U);
  msg.arrival_time = 0.7565674494947802;
  msg.lat = 0.8305446877341163;
  msg.lon = 0.5122567707599123;
  msg.z = 0.5802802333723431f;
  msg.z_units = 117U;
  msg.travel_z = 0.0894434133617511f;
  msg.travel_z_units = 34U;
  msg.delayed = 182U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RowsCoverage - Serialization/Deserialization #0")
{
  IMC::RowsCoverage msg;
  msg.setTimeStamp(0.8005373581231915);
  msg.setSource(38212U);
  msg.setSourceEntity(64U);
  msg.setDestination(6388U);
  msg.setDestinationEntity(248U);
  msg.lat = 0.5786537906322947;
  msg.lon = 0.539756167312405;
  msg.z = 0.1540359809345927f;
  msg.z_units = 150U;
  msg.speed = 0.5743708892228607f;
  msg.speed_units = 207U;
  msg.bearing = 0.6549152248273689;
  msg.cross_angle = 0.8276904619269213;
  msg.width = 0.382657417689082f;
  msg.length = 0.0920897388020242f;
  msg.coff = 139U;
  msg.angaperture = 0.41043873870139724f;
  msg.range = 48822U;
  msg.overlap = 196U;
  msg.flags = 165U;
  msg.custom.assign("GZLJAWNMCZURRBRILIIRHJLDWMKSQTPYQVAJOZGJPTLVYOKPTNHARMSDLZBPDVITKSPVNVTRXMCIXMPGJOBXRQDCNACSYWEYSQEPWDZHZTSVGNITFWAJLDITUHKUNXYNVXMWJUYXLANECQDUFCVEOHFHCAEOMKQERESQUDHNBKCQOQFCSWGGLAOLFGLBBUOZJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RowsCoverage - Serialization/Deserialization #1")
{
  IMC::RowsCoverage msg;
  msg.setTimeStamp(0.8977342577183808);
  msg.setSource(35566U);
  msg.setSourceEntity(91U);
  msg.setDestination(60360U);
  msg.setDestinationEntity(4U);
  msg.lat = 0.27769266985218166;
  msg.lon = 0.9147763399507384;
  msg.z = 0.9104529348168662f;
  msg.z_units = 14U;
  msg.speed = 0.5641166792743941f;
  msg.speed_units = 97U;
  msg.bearing = 0.5849950473846207;
  msg.cross_angle = 0.34483534551741724;
  msg.width = 0.7334681818137317f;
  msg.length = 0.9863825160969905f;
  msg.coff = 172U;
  msg.angaperture = 0.6249322094152204f;
  msg.range = 39868U;
  msg.overlap = 16U;
  msg.flags = 86U;
  msg.custom.assign("LQAGULHUMBTMXMRIFHIHAJXEMZQTIDXDVKZOXLYDXAGDWVXKGOHPKUBWCOYSZKBTNBWJR");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RowsCoverage - Serialization/Deserialization #2")
{
  IMC::RowsCoverage msg;
  msg.setTimeStamp(0.4041997434670923);
  msg.setSource(42591U);
  msg.setSourceEntity(199U);
  msg.setDestination(44953U);
  msg.setDestinationEntity(222U);
  msg.lat = 0.947454132853489;
  msg.lon = 0.7635647588770959;
  msg.z = 0.12659427323445416f;
  msg.z_units = 92U;
  msg.speed = 0.25341732488542534f;
  msg.speed_units = 64U;
  msg.bearing = 0.5385139361344667;
  msg.cross_angle = 0.5931561427513993;
  msg.width = 0.5965901987609292f;
  msg.length = 0.46542196501032707f;
  msg.coff = 165U;
  msg.angaperture = 0.5610131482688829f;
  msg.range = 29968U;
  msg.overlap = 26U;
  msg.flags = 177U;
  msg.custom.assign("WVHHSFTNTADPJZOSZXHOTLYWHBBLILYLBALCCVPANJAUOEXPMYKPYFGCDOUTPZIFYKZNYMVNTPDWWXFDMEHBVPQREIRKQQZOXUQXEEQYGGJFHNZNXKOUKJSWLARRCUBQCJHVTNRSJLXEDMAVDMMBCUPJBCSRIVRGZXEODIEOVQSSSMMIHBGXBNMHXGVFFTQUDWKNMITUVGSKAIQGFZC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Sample - Serialization/Deserialization #0")
{
  IMC::Sample msg;
  msg.setTimeStamp(0.0792601085136101);
  msg.setSource(41063U);
  msg.setSourceEntity(146U);
  msg.setDestination(1105U);
  msg.setDestinationEntity(184U);
  msg.timeout = 43493U;
  msg.lat = 0.5798355216632449;
  msg.lon = 0.9434625042386333;
  msg.z = 0.813669451436962f;
  msg.z_units = 214U;
  msg.speed = 0.45056348608124486f;
  msg.speed_units = 108U;
  msg.syringe0 = 38U;
  msg.syringe1 = 178U;
  msg.syringe2 = 174U;
  msg.custom.assign("SUXWCRQLFSHSNFFKOTGTRSDPSMOIEEILZYHZSSXXRZAFNDBGVTLWNUTIUCKXNLPOAQGOOKXBZLUGRPYRKFHEXXWRLPBUSPAELDMFMKMEJBJACGTEGPKHRQDBIDJSDNNHCMWCIGIBDXXQCAVHZOYHZKFRMIKUAGQMOTEJJIZGDGJUUUFT");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Sample - Serialization/Deserialization #1")
{
  IMC::Sample msg;
  msg.setTimeStamp(0.8360046475547905);
  msg.setSource(21354U);
  msg.setSourceEntity(42U);
  msg.setDestination(57712U);
  msg.setDestinationEntity(75U);
  msg.timeout = 24752U;
  msg.lat = 0.23410780103648388;
  msg.lon = 0.5368589562511145;
  msg.z = 0.36031630734370124f;
  msg.z_units = 62U;
  msg.speed = 0.8124617288762911f;
  msg.speed_units = 41U;
  msg.syringe0 = 0U;
  msg.syringe1 = 52U;
  msg.syringe2 = 5U;
  msg.custom.assign("OEITUWPXIZNOISYLLAFVWIZIKULPRCWXUDYOSHYTOTPZXNVAAYVDMRCRFYHDJMNVASHL");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Sample - Serialization/Deserialization #2")
{
  IMC::Sample msg;
  msg.setTimeStamp(0.5604273887722853);
  msg.setSource(17664U);
  msg.setSourceEntity(219U);
  msg.setDestination(29301U);
  msg.setDestinationEntity(1U);
  msg.timeout = 10828U;
  msg.lat = 0.9999886611915474;
  msg.lon = 0.46332561948908646;
  msg.z = 0.614896481314976f;
  msg.z_units = 133U;
  msg.speed = 0.14936160791606357f;
  msg.speed_units = 204U;
  msg.syringe0 = 60U;
  msg.syringe1 = 184U;
  msg.syringe2 = 31U;
  msg.custom.assign("MGKLCCOYBXVORZLDOXZGRAXMVUSOQVBTJQMVWHPRJPZBJZMDNOZZMQJFWIBHCHSRVYNTYRSNQAQXCQQOVPUCEICMRUCSTSBUYXGNZHPUJEPDXGSKINMKBNTJCDWYAYEFBCILEIZAEPUKGIBUMHYSUIFRKEWXSJPNAFKZRYDPEVLAOO");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ImageTracking - Serialization/Deserialization #0")
{
  IMC::ImageTracking msg;
  msg.setTimeStamp(0.3816876268855396);
  msg.setSource(44421U);
  msg.setSourceEntity(48U);
  msg.setDestination(38519U);
  msg.setDestinationEntity(236U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ImageTracking - Serialization/Deserialization #1")
{
  IMC::ImageTracking msg;
  msg.setTimeStamp(0.9484127638662588);
  msg.setSource(50877U);
  msg.setSourceEntity(211U);
  msg.setDestination(49768U);
  msg.setDestinationEntity(10U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ImageTracking - Serialization/Deserialization #2")
{
  IMC::ImageTracking msg;
  msg.setTimeStamp(0.020273264009733505);
  msg.setSource(48077U);
  msg.setSourceEntity(27U);
  msg.setDestination(9263U);
  msg.setDestinationEntity(12U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Takeoff - Serialization/Deserialization #0")
{
  IMC::Takeoff msg;
  msg.setTimeStamp(0.03692296079756929);
  msg.setSource(6546U);
  msg.setSourceEntity(202U);
  msg.setDestination(19864U);
  msg.setDestinationEntity(246U);
  msg.lat = 0.04857994255682663;
  msg.lon = 0.8883503531773603;
  msg.z = 0.7772769351069402f;
  msg.z_units = 245U;
  msg.speed = 0.9398306564019132f;
  msg.speed_units = 130U;
  msg.takeoff_pitch = 0.03997080849266632f;
  msg.custom.assign("BFVZYNODZCXUTGRWLKXDARXQAZBJWVBEZXVSGVJEOHWUAEBYZZBTQYSGQYDXBOLOTCSMEAFGCVSWIBDHQYDDNSWSOLTRKTFJFNOVDKNJZSIHNHJUTWYTIEAJPZRSABVHABPRBYIWYATVLCUEXYHWISXAEGOMOMMMDFLCJMGCRGDMXNFLCCKYIJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Takeoff - Serialization/Deserialization #1")
{
  IMC::Takeoff msg;
  msg.setTimeStamp(0.1315902126636438);
  msg.setSource(8110U);
  msg.setSourceEntity(103U);
  msg.setDestination(33029U);
  msg.setDestinationEntity(44U);
  msg.lat = 0.11721235736757996;
  msg.lon = 0.04544893753277801;
  msg.z = 0.15272760670553165f;
  msg.z_units = 98U;
  msg.speed = 0.7602182760829058f;
  msg.speed_units = 12U;
  msg.takeoff_pitch = 0.249546791554611f;
  msg.custom.assign("THGCJBJXTVAGTYSUHUXKENEPNMQNIZBAUZXIWSZOGOPORNIJKJBPSGEBSEQYRSYVTWFLULMELPHMFEZCBVXKPNWAGZA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Takeoff - Serialization/Deserialization #2")
{
  IMC::Takeoff msg;
  msg.setTimeStamp(0.8986142381137329);
  msg.setSource(58454U);
  msg.setSourceEntity(23U);
  msg.setDestination(60980U);
  msg.setDestinationEntity(103U);
  msg.lat = 0.5943072375318423;
  msg.lon = 0.035915979887425564;
  msg.z = 0.048363633284492225f;
  msg.z_units = 140U;
  msg.speed = 0.30482851507417563f;
  msg.speed_units = 9U;
  msg.takeoff_pitch = 0.6796711288064571f;
  msg.custom.assign("MSGJGWPJLHIDERDOMKLAOEQHZRBHKWIVZBQTCPWTKCBHOCBFIMMPOILXUUWFYVTTLRGIISBVKHDVROEMJAOCKNVEPMT");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Land - Serialization/Deserialization #0")
{
  IMC::Land msg;
  msg.setTimeStamp(0.08862500429001186);
  msg.setSource(45405U);
  msg.setSourceEntity(2U);
  msg.setDestination(51750U);
  msg.setDestinationEntity(177U);
  msg.lat = 0.04057912003617503;
  msg.lon = 0.8183382558709081;
  msg.z = 0.46569522533677554f;
  msg.z_units = 215U;
  msg.speed = 0.21338299946063177f;
  msg.speed_units = 59U;
  msg.abort_z = 0.11577593326032398f;
  msg.bearing = 0.6599534226537945;
  msg.glide_slope = 98U;
  msg.glide_slope_alt = 0.41608016640055634f;
  msg.custom.assign("CEBGJKSUSCOWQXYOQGLVEIUGQPMYIKZLFRXWFAAIGMPETPKNZZZSRZKLKTDEWDSZBRHBOLUHIWYBHKGGXNTRJGMBHIUDKDXLOIPMHXBACJPCRTTUORISXQYNRQWIQTPKFDQYENWAVRDZEFMZOVOTQIKDJEWAJFYQNSCVLPHKNJEYLEFZNVVZVWQTFSDVPUYIN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Land - Serialization/Deserialization #1")
{
  IMC::Land msg;
  msg.setTimeStamp(0.329682157441333);
  msg.setSource(46234U);
  msg.setSourceEntity(10U);
  msg.setDestination(54130U);
  msg.setDestinationEntity(68U);
  msg.lat = 0.7598476784667596;
  msg.lon = 0.9164827710237093;
  msg.z = 0.7434719754544025f;
  msg.z_units = 247U;
  msg.speed = 0.969394147285812f;
  msg.speed_units = 29U;
  msg.abort_z = 0.7189126495563507f;
  msg.bearing = 0.08316738333231877;
  msg.glide_slope = 205U;
  msg.glide_slope_alt = 0.432646277331192f;
  msg.custom.assign("LNJKPGRDYVPJIDXHOBYOCTLIFCDTWNMPEHWNAEIGRJZBANUUNPVCBZTXOAMTQKQFQKSSPSZNSORAJDIMLDDOQWSJUVMJWGTWEVBCFOLJCAVHKHUMUEGYXYQNPCLVPQDPZLYNAFYJEWLZTFRFGIKTPYRQGWDBETZYCFXAELLHOMMHVSSCBMUXTJHHHBPITZSSASWYUQNUKUXRZBIVE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Land - Serialization/Deserialization #2")
{
  IMC::Land msg;
  msg.setTimeStamp(0.23434328596251874);
  msg.setSource(56554U);
  msg.setSourceEntity(86U);
  msg.setDestination(53951U);
  msg.setDestinationEntity(39U);
  msg.lat = 0.38169702241538894;
  msg.lon = 0.09335664288871393;
  msg.z = 0.7262928986465933f;
  msg.z_units = 2U;
  msg.speed = 0.5599701006146051f;
  msg.speed_units = 250U;
  msg.abort_z = 0.6486913554668876f;
  msg.bearing = 0.7362669845248886;
  msg.glide_slope = 222U;
  msg.glide_slope_alt = 0.26947841521573956f;
  msg.custom.assign("PJKYEEWWEKBVDENQRQQFOAOYEDJLXKMMXQVWAJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AutonomousSection - Serialization/Deserialization #0")
{
  IMC::AutonomousSection msg;
  msg.setTimeStamp(0.5508172907140741);
  msg.setSource(29745U);
  msg.setSourceEntity(118U);
  msg.setDestination(46239U);
  msg.setDestinationEntity(58U);
  msg.lat = 0.00953232255207348;
  msg.lon = 0.5631921418339575;
  msg.speed = 0.3887090810448115f;
  msg.speed_units = 48U;
  msg.limits = 121U;
  msg.max_depth = 0.2653116093111303;
  msg.min_alt = 0.1436978798424572;
  msg.time_limit = 0.869008665743331;
  msg.controller.assign("RWPPKVGTXICCHGQLITCRJVZZINKCARQJCIAFYZNGPNISZBESEPVCZAVSEYAEXSNHFWADQWQYQVBOFCNUPDIHWEMBSBMJJPDGKABURXOYRPKQJDOHGXMJWYVLDKRRSXDLWORHVKEOOFWUIFMLWSOJZBTHNMYFBLXMSXANLUKLIVXGTBOGBCZRTFEMYDJTQIQUFMMAUIAGETPNEOYRQPHULUJTDBUTHHSLKVK");
  msg.custom.assign("ZKRFXTAEEBFZDGCTGWHGLWDNZILSXAQFMZBDBUCNJXHOABWYBXKMPJKOYWRYPCKEDKIWJMZCWQJZIRYNIALNC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AutonomousSection - Serialization/Deserialization #1")
{
  IMC::AutonomousSection msg;
  msg.setTimeStamp(0.7779978383622033);
  msg.setSource(50388U);
  msg.setSourceEntity(123U);
  msg.setDestination(27852U);
  msg.setDestinationEntity(119U);
  msg.lat = 0.566517982016723;
  msg.lon = 0.38335645397695295;
  msg.speed = 0.0055686757015712685f;
  msg.speed_units = 250U;
  msg.limits = 234U;
  msg.max_depth = 0.3936243059588441;
  msg.min_alt = 0.8627859190095749;
  msg.time_limit = 0.2662148177282563;
  msg.controller.assign("DNXWPTCTMPJEVSSXXVUMENYGSJUAKSSYRKRIWLQTITFDEFJLNWGFDPYWRZSYZOIMOTNZHBQAOCWBTCKMMHAZIKDMVGLPUQPQELGRNPHQNQ");
  msg.custom.assign("LMVTFIZTPYKRVPRSVDBSZHYNYALCAYHWOTDXJPVDORFAFGLFACCJDOQNGRSPWBNHZWBZVHWQHLKJFICXEZCLNCOCTQUSHGOTAXUJMAPXMMFKIDUKEUGZGLLRFPSGQJMAQKXXHPNWVRNIYUJFNFLHQBEYCNWUBZBMOWIODXTKMBPOEKYYQEPTYIBJMRSFDIESADEIQXZSOZLGMXNXEROVYCW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AutonomousSection - Serialization/Deserialization #2")
{
  IMC::AutonomousSection msg;
  msg.setTimeStamp(0.4235181097044979);
  msg.setSource(48567U);
  msg.setSourceEntity(160U);
  msg.setDestination(60333U);
  msg.setDestinationEntity(63U);
  msg.lat = 0.38262688463947203;
  msg.lon = 0.05926907774161161;
  msg.speed = 0.3395136032215429f;
  msg.speed_units = 67U;
  msg.limits = 238U;
  msg.max_depth = 0.7827105728519627;
  msg.min_alt = 0.4920346632583239;
  msg.time_limit = 0.574575919987441;
  msg.controller.assign("BPBFSECDCRPZWIVFPDIMSITHDWDZOOWBCXNWKSRSQEYIJQYLOOLMNUNSYAGACLOJPQEXWOHYNQTKLFZBSAFQVGXFQCNEAFPVMJHYUGRIJMEPVLZRUDRGBKZPNECSWTVBUOVYOAIFIEWHAEXXHKPMIUTTBXGWNNCFUQGPMIJTSUKZHZRKXWALUCBJQGTMRHMCHVHXVDNQBOLCMJHGKSLRUGZFFAVKDKYZTZDJYKYVWISYDX");
  msg.custom.assign("LJZTWCDNICOWPAYUOPGGSXGVUHBXJEQMPNYIZSUSJBTILCCCQBMPKDDKSTSHGLOYNJRBTJDVLSJKYHPCQMEGZIEIEBMWOTKZAKBIEXHEVXEHUUWFYREDHPAXBUHHFLNAJBCAWVYOOTWDNRQNKTPRRXIACVWOHUYALVGMJOKQVMLUDFBVACFFRHA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowPoint - Serialization/Deserialization #0")
{
  IMC::FollowPoint msg;
  msg.setTimeStamp(0.43203644896454585);
  msg.setSource(26549U);
  msg.setSourceEntity(124U);
  msg.setDestination(19568U);
  msg.setDestinationEntity(252U);
  msg.target.assign("ILMBVWQXZBLATFKSVGEAGQRVRPNBFSJOPAFXFZWDJDEGEQJPPEADWEIAPJLCQLAXXHZDMHYVPFIVSNRYYGBSMZCOCKHWJHBCPSIZOSOXSYDCYQSANOFRTVHLSJCKDURBHSGKEWULDJIDKUUYBMWVRLUQOGUMKOOAUNHZEKEDKTMVJJNQNTYOHUDCGGTTPPBZMFNTEHRTGLOWHQKFACBZR");
  msg.max_speed = 0.708770171648773f;
  msg.speed_units = 115U;
  msg.lat = 0.38914790709177416;
  msg.lon = 0.6257922736610416;
  msg.z = 0.9125234844536873f;
  msg.z_units = 11U;
  msg.custom.assign("NXRUKHDBPUMYRMSFTJOUVKZHTEAVSQIPZAKRFDIYRDSHAAEFBSODNIKHIZMHCPAEQXFVSCBAWEC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowPoint - Serialization/Deserialization #1")
{
  IMC::FollowPoint msg;
  msg.setTimeStamp(0.4826979565548618);
  msg.setSource(17449U);
  msg.setSourceEntity(143U);
  msg.setDestination(31509U);
  msg.setDestinationEntity(190U);
  msg.target.assign("OQGZHAURRJBHWKYUNOFRWYIK");
  msg.max_speed = 0.7148115035587022f;
  msg.speed_units = 10U;
  msg.lat = 0.3575355843120601;
  msg.lon = 0.9702201265380109;
  msg.z = 0.3881047246711673f;
  msg.z_units = 167U;
  msg.custom.assign("RXKLKEBCZJZHGOVEQRTLXOLYPTZWMRRKNAXFBGOMMUKHCAZDZCTBWJUXDMISQBICFTNJXLVELAUKYLJCJIQWOGMPRMKVBSQZSLQHBUVDYDVDIPOBIPKSFGPOUTNFIIENEBNIVULWBVHTYDTEXXNRHMA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FollowPoint - Serialization/Deserialization #2")
{
  IMC::FollowPoint msg;
  msg.setTimeStamp(0.5997726446999012);
  msg.setSource(32127U);
  msg.setSourceEntity(188U);
  msg.setDestination(25106U);
  msg.setDestinationEntity(208U);
  msg.target.assign("UKARHIBBKWTUHPTXDPCESQRNCBTHXQBKZWRZBMTTNKFPDEKDY");
  msg.max_speed = 0.6872575961862053f;
  msg.speed_units = 97U;
  msg.lat = 0.8193407235760409;
  msg.lon = 0.309283234923169;
  msg.z = 0.9876781204838112f;
  msg.z_units = 6U;
  msg.custom.assign("WKPVJUQODTMLANTSMOZKZQTQMOOBPEFSWHCLFIMESPQFZZMOXCHEUINUESCHTLPHFPZAGIIIGUDEXIGTJNXCJNOBVUDCSJGBRYSZURUJVAWFWSFEYURWRYVIBYMNJIKYYVAVRTWGKWRBTHDRKEIIFAHCOXUCAMXQCNPHNXJKKSTMXZZDBVFVKAAEXYBWLKALDJFBGCJVLUDQQNKNPXP");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Alignment - Serialization/Deserialization #0")
{
  IMC::Alignment msg;
  msg.setTimeStamp(0.4087009464812772);
  msg.setSource(26872U);
  msg.setSourceEntity(232U);
  msg.setDestination(4035U);
  msg.setDestinationEntity(155U);
  msg.timeout = 63123U;
  msg.lat = 0.7707018206454671;
  msg.lon = 0.20383326723195205;
  msg.speed = 0.008061697498605636f;
  msg.speed_units = 252U;
  msg.custom.assign("VPPKGWFFMFHYHHAUAANVMBPFUNBDWWKULSRGLKDQRWPEUJMZBCDLVDOYXVCYTVEFOGIZSCNOHIVDVMMLXWNJPJMXLAQOGZCHXUGBOPDECCGLPHQNRWDZYIIHAJKNMQBEOSKEBNARDJUXAXISRRRLVYSZUXCZQBC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Alignment - Serialization/Deserialization #1")
{
  IMC::Alignment msg;
  msg.setTimeStamp(0.43815062961316265);
  msg.setSource(27592U);
  msg.setSourceEntity(226U);
  msg.setDestination(62547U);
  msg.setDestinationEntity(186U);
  msg.timeout = 43001U;
  msg.lat = 0.8919481683007094;
  msg.lon = 0.4556653318327042;
  msg.speed = 0.6397931687256541f;
  msg.speed_units = 59U;
  msg.custom.assign("HEBRLZIJKCMGVAUMWLGZBATYMDXKBBHORDAFOQMDYUFQDXDRPYOOPHAWCPURMRCZFMKRWTGXSYFVVOKHEVRWDJWCABKPIKIQLALOWGOJHPPIJNTEZFBVGOGWMHAASDMCXLXGHVGYNKDGLASZSFQJPRQVEZFRQNUZTYPFYWZUSUNUWUBNJINQZTCQLRNJSXHQTXVYOJNCSDLAHBJLIMUZDNJTCIUTTNKE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Alignment - Serialization/Deserialization #2")
{
  IMC::Alignment msg;
  msg.setTimeStamp(0.7608251263756317);
  msg.setSource(27934U);
  msg.setSourceEntity(83U);
  msg.setDestination(45948U);
  msg.setDestinationEntity(103U);
  msg.timeout = 20445U;
  msg.lat = 0.033129775052717414;
  msg.lon = 0.7985611902626929;
  msg.speed = 0.8068952867697051f;
  msg.speed_units = 174U;
  msg.custom.assign("FIMUZDWCAGKMSXBGRNEHNQVLGWFUQWHJIJKFITDACERYQOUEVYNUVSXOCAQTIBTUUYIKJEPZAFOWUQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleState - Serialization/Deserialization #0")
{
  IMC::VehicleState msg;
  msg.setTimeStamp(0.10730705220069858);
  msg.setSource(48719U);
  msg.setSourceEntity(234U);
  msg.setDestination(57322U);
  msg.setDestinationEntity(229U);
  msg.op_mode = 25U;
  msg.error_count = 91U;
  msg.error_ents.assign("TQAXSNCUJJWWWXDSYQLNGKVULBCBHZZPOMZQUKWGESPPTVFELSXYDGCNVXRFAEWCFJBHAEPLUAVAOYCXADWTHYCZRKKYMMHJGPWTZAKZIBSWLBABLVUVVDFRJGBUOHTGZCZQHEDIBDKQFQPAOYFGZKNJOUPPHUJNNTXHDQTNEPTRIYCHCISJRLERFPDOIQNGFI");
  msg.maneuver_type = 1040U;
  msg.maneuver_stime = 0.14906872328634735;
  msg.maneuver_eta = 23163U;
  msg.control_loops = 478456661U;
  msg.flags = 115U;
  msg.last_error.assign("NGLXUJUTZWUABCOJTWTDGAYODRMSVNYYQFQIUNEAWZYPPWHSNBCCCZFKCKWYDIEGVKXHBEXLO");
  msg.last_error_time = 0.8529917103317874;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleState - Serialization/Deserialization #1")
{
  IMC::VehicleState msg;
  msg.setTimeStamp(0.2262277863143899);
  msg.setSource(32216U);
  msg.setSourceEntity(74U);
  msg.setDestination(42975U);
  msg.setDestinationEntity(114U);
  msg.op_mode = 233U;
  msg.error_count = 177U;
  msg.error_ents.assign("ARSMYIARIYTZVGX");
  msg.maneuver_type = 54273U;
  msg.maneuver_stime = 0.43466002582625174;
  msg.maneuver_eta = 21368U;
  msg.control_loops = 3670368657U;
  msg.flags = 48U;
  msg.last_error.assign("QFBZZHCKJLHOFHDSTYJEUJEVHBBMHBACEFRODRDFSSQJLQYPDSXTO");
  msg.last_error_time = 0.8163359240920063;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleState - Serialization/Deserialization #2")
{
  IMC::VehicleState msg;
  msg.setTimeStamp(0.44027200595476856);
  msg.setSource(27788U);
  msg.setSourceEntity(43U);
  msg.setDestination(5078U);
  msg.setDestinationEntity(250U);
  msg.op_mode = 179U;
  msg.error_count = 108U;
  msg.error_ents.assign("FZPIAWDMDOSVQJVNBNSGVELM");
  msg.maneuver_type = 39158U;
  msg.maneuver_stime = 0.9383574710497989;
  msg.maneuver_eta = 1303U;
  msg.control_loops = 1241361328U;
  msg.flags = 161U;
  msg.last_error.assign("JUWWZUQTHYWBNDBDNTGXFBWPZBPWIJVRLNMLKKWTQYVSSZQGNQXGAHFXCDUAZPOXLRDVOMSXJYICUAPCJSCDIWPOEHGFFMSMIFGKUJPZUEEMQMUMNRHZRNKRVYMESWFCKEBLNIYFLAULLFRIHUOYURVLCSDBXVJHEJYJQVIBZFGZDCAYKPFGRAQLIYLPBJOTAMOYOXTGWHRWSQTHEODXKBNRQ");
  msg.last_error_time = 0.17027039256193;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleCommand - Serialization/Deserialization #0")
{
  IMC::VehicleCommand msg;
  msg.setTimeStamp(0.5463171672334671);
  msg.setSource(40433U);
  msg.setSourceEntity(119U);
  msg.setDestination(25792U);
  msg.setDestinationEntity(81U);
  msg.type = 9U;
  msg.request_id = 20226U;
  msg.command = 213U;
  IMC::Teleoperation tmp_msg_0;
  tmp_msg_0.custom.assign("TJTRTQVJDBFLZPRWWKNHJMJOMDLRPENTRSIFUGUYGBDDMQLPDTHUUZKOPNFISLVTRXCHHQVXLZBAIPCATEBAXFNASIPPJVGGCWWFSMDKDKHYEKYCOZLDABPWHWTUSNYBARBJQMDMYYZQBIEYTOVZZCWXHNSYSHGGGYTRKYBORVWPVLUXECQDWNFENCNCSMHNKZZFVAZAJAVGQOKEEEL");
  msg.maneuver.set(tmp_msg_0);
  msg.calib_time = 34619U;
  msg.info.assign("BDRXZVTUVVYALXVFIILQKLYVWCBWKXRYDXOBBVIVCRPDTHYOXDPREHJRPADESMSXABXKNIOWAJOGROTGGUOHKLXSALGHIIWTTTNBMCJMQBZGYHBWZJFAZFDDUOWESLZPINNSSTHFIKATYDZJSQNGPQMVVRKLSLYQDQAFARFERKOPQHMYCHWUJIQRGZMKCWGZFNFHWGX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleCommand - Serialization/Deserialization #1")
{
  IMC::VehicleCommand msg;
  msg.setTimeStamp(0.7526071848804687);
  msg.setSource(49330U);
  msg.setSourceEntity(43U);
  msg.setDestination(14863U);
  msg.setDestinationEntity(244U);
  msg.type = 162U;
  msg.request_id = 24795U;
  msg.command = 208U;
  IMC::Land tmp_msg_0;
  tmp_msg_0.lat = 0.5185143100349783;
  tmp_msg_0.lon = 0.6484062014776805;
  tmp_msg_0.z = 0.11091639076604354f;
  tmp_msg_0.z_units = 212U;
  tmp_msg_0.speed = 0.1071816354194004f;
  tmp_msg_0.speed_units = 120U;
  tmp_msg_0.abort_z = 0.7239279916592022f;
  tmp_msg_0.bearing = 0.504299736993855;
  tmp_msg_0.glide_slope = 59U;
  tmp_msg_0.glide_slope_alt = 0.9216768354246216f;
  tmp_msg_0.custom.assign("NSAUZPGEOEXUPGWQTQNZMYHJUWZUARENXXBICFDOIYGLPKKDPAFXCNASTWEIPXZKDTQCDBVDWXTLKMEDJBUDSIMMGBPZLRFOOTBRFKKJEXVRFWUCVSICJRSZGYYCMRMJQCHFIGDSOQMLPDHWXEBPWLTYQFZHNMFKWGSHNBOQKHTAUSGZTPYYNY");
  msg.maneuver.set(tmp_msg_0);
  msg.calib_time = 64520U;
  msg.info.assign("XMAZISTFNMCSAQOBAJGKJYOVYRBZNPEFNEHHTTVXRQCDZKFLEWGDSCRBOMGVCZPHHWVUBZZHNMEYOBTMDJNTDGUYQXFYMBOTFOIGFMJPNQCDJTHUPXHRCALISEZEQDDAXOTHLXWAWPRKSLXJTYIEWJVJIQAFYVFGLXUKUKMSGACBPREOSQJPBNCTQFKEIVAODCWDUIL");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleCommand - Serialization/Deserialization #2")
{
  IMC::VehicleCommand msg;
  msg.setTimeStamp(0.1273600953145031);
  msg.setSource(28467U);
  msg.setSourceEntity(145U);
  msg.setDestination(63225U);
  msg.setDestinationEntity(43U);
  msg.type = 139U;
  msg.request_id = 9717U;
  msg.command = 33U;
  IMC::CompassCalibration tmp_msg_0;
  tmp_msg_0.timeout = 2003U;
  tmp_msg_0.lat = 0.13720561496465344;
  tmp_msg_0.lon = 0.5222333210210156;
  tmp_msg_0.z = 0.5583056214907919f;
  tmp_msg_0.z_units = 153U;
  tmp_msg_0.pitch = 0.1072095304344447f;
  tmp_msg_0.amplitude = 0.8185342911454405f;
  tmp_msg_0.duration = 13116U;
  tmp_msg_0.speed = 0.8432399476748024f;
  tmp_msg_0.speed_units = 183U;
  tmp_msg_0.radius = 0.11071798622906759f;
  tmp_msg_0.direction = 171U;
  tmp_msg_0.custom.assign("XNWUZVIKRSXPHTCPDJZEHKTSQUKBTEYPFQNWELDVXFKLBYOXSEHMNIVJCXPUMFTJRZUONGWEIOYYZGJZBDJKRPHLLZOBHKOQDJZVGUIAASMCFGYVFIQMSRRHEVSMRBGWLEFICOWHXXYW");
  msg.maneuver.set(tmp_msg_0);
  msg.calib_time = 30761U;
  msg.info.assign("KYRAPNVBEYZYBWZPRCGEEGODKOCHARJKIQYIOGOLAYOFCXMQKLSSOHQBWKVLABQYUFFUUASIXBRVEXHVCYKWNNTMGQIDUTNEZEPPDCBTNDCRLGSWATZDHJJXVIOJMWXQUJUWRSVBDGEEZACFKWIKLDPUPHISPRFNXOJRLLNTPNIMYDJVYHJC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MonitorEntityState - Serialization/Deserialization #0")
{
  IMC::MonitorEntityState msg;
  msg.setTimeStamp(0.29340033544843347);
  msg.setSource(25087U);
  msg.setSourceEntity(115U);
  msg.setDestination(9855U);
  msg.setDestinationEntity(114U);
  msg.command = 57U;
  msg.entities.assign("NYBDLPJLXN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MonitorEntityState - Serialization/Deserialization #1")
{
  IMC::MonitorEntityState msg;
  msg.setTimeStamp(0.07712323895067741);
  msg.setSource(51731U);
  msg.setSourceEntity(123U);
  msg.setDestination(3888U);
  msg.setDestinationEntity(105U);
  msg.command = 77U;
  msg.entities.assign("VOCLQWHKLAEIEHMPWUHDZVIDSEHSUPFIZFZSBKYGKELIPKUGFEOCXYJNAFMONDBLDKUXJTYRJYMPLQGPUOGDBJCABINBJLUXBXQTMXN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MonitorEntityState - Serialization/Deserialization #2")
{
  IMC::MonitorEntityState msg;
  msg.setTimeStamp(0.8182646823257612);
  msg.setSource(31098U);
  msg.setSourceEntity(170U);
  msg.setDestination(11726U);
  msg.setDestinationEntity(239U);
  msg.command = 160U;
  msg.entities.assign("GNUEVXKLBJHVGSNTJLXYFZQJUGZHTUXMQNDPPIUZWDKIPEFOBWMSNIZCVCSZXVQBOUGISWPGFWQLERHAQJOGJNPPBSWFTJIAIPJYVQNYLBSXOSUUVPFMASREALWKZILEVBHDQOWBZOMHOKRMKTCYFKTARBLZCAMAYKGXXYAKWTDPKDOFRNDVGT");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityMonitoringState - Serialization/Deserialization #0")
{
  IMC::EntityMonitoringState msg;
  msg.setTimeStamp(0.21736260682627007);
  msg.setSource(19866U);
  msg.setSourceEntity(36U);
  msg.setDestination(47423U);
  msg.setDestinationEntity(167U);
  msg.mcount = 35U;
  msg.mnames.assign("MNYPRMXZPBXQEZIPLELKYWFPGJKXYJVEYTNVRJRPQVPILJZXHYJDGQPQSBKROAOUAIGNZGYTTH");
  msg.ecount = 26U;
  msg.enames.assign("VPCQATNEIQKRKKJYGTNOXFXDGROXLUHGTDOMEJUZANDLVYZUMQWMFGYXWW");
  msg.ccount = 126U;
  msg.cnames.assign("PVBNCYJISHPUMODTXGACPFQJGETRHMSXTTHOYGDOBIZHSBZUONUBBYSARLFZCAZYFKNPHIRQIGOVOCJWEDSWSJ");
  msg.last_error.assign("BGJNVPVQOLKBVCGQDYRETFPJEPBICMLXMHJFWZHRZZEBVJQHRUWKTTEAZISLZYPJTWMWTDLRUOKJUZVOCHKDAGRGAXWXSCAWVUGLVWKXGVLISAIINPFCCAEGFAXNUQUNWZBKAYXRDCMEOYDIORDTQFNIRKZUCMMFUJKROCNBRHOPLSTLFQISZFIYTULOWEDQFEH");
  msg.last_error_time = 0.9823501776743124;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityMonitoringState - Serialization/Deserialization #1")
{
  IMC::EntityMonitoringState msg;
  msg.setTimeStamp(0.3304233876533893);
  msg.setSource(5351U);
  msg.setSourceEntity(102U);
  msg.setDestination(28302U);
  msg.setDestinationEntity(85U);
  msg.mcount = 237U;
  msg.mnames.assign("TMJZOROZLALOAXQMGAGYNNXYEMFWTQIXWXBFO");
  msg.ecount = 28U;
  msg.enames.assign("KRXAVLLWIEFZRXWQSHXBDRPYCAMBJFYSCVKUDMBHYAJFUOSJBPTGAIEOXUFNPJGFEMFMALSRHTWDMTISZKCGFWGJACNDXUUNPBMKLFLRYECPKQJEELOYVMNTAOMHZCPZZMVVHTLRKZHQGRQTIAXCONAIBCWKZQOIGPBTKODQIWNXYXZMZHJRGYXUWQNXWZPIDLLGDFR");
  msg.ccount = 66U;
  msg.cnames.assign("BRICXPPDKSJXWAFNOBSHIFCIPMVMYQRYAABJOGUNEEGSTMSCVUNTDIRUHMXJRWCTDEFQDKRYEWYFLIHRLESMQFYFHJNOYOKLNFVVDLXYSEIHXHRGEFQCHWGOWETLVZVKOYZVPXJABWWCQSKKIZTPNUHLMFJGRPZXXAZNUGVGFUQNWNOSLQZAUTBKORSXJMDABARILWVMTPCSXGPJHJWDZQNALV");
  msg.last_error.assign("YBXCKZVATOZS");
  msg.last_error_time = 0.13155800065472;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityMonitoringState - Serialization/Deserialization #2")
{
  IMC::EntityMonitoringState msg;
  msg.setTimeStamp(0.03321513219829009);
  msg.setSource(36562U);
  msg.setSourceEntity(2U);
  msg.setDestination(38801U);
  msg.setDestinationEntity(150U);
  msg.mcount = 73U;
  msg.mnames.assign("OVDPPLOQXTZUELEFCWPZPZKNZXVVRIOHXGAEXUURBRRHPIHWMJJLQNZ");
  msg.ecount = 74U;
  msg.enames.assign("YNEITKFTPDEXRUCEJHASXE");
  msg.ccount = 140U;
  msg.cnames.assign("EQPTFUOFFAZWQIVPGZTENXQMXVLJRAAQAKTLNPLNKYPVJMGQABGKLIJWWODQZPFXMYCZAXYMLSVOMVEGDXDICGRQJNYJKNHCLKZKIRTSCSFOQIALXTCLQUCSDTEUDJXYWHIPZFUBZNF");
  msg.last_error.assign("NBVGDBJGSRFSMGWNAWQMGAUBYYQCEIPFMHGFBKUKXQXZTTRGXDGEXUCEXJVJSODVEAPDYPUCNBLEWAVFFYTBLUMLRBWLVDVAGXAZEYPCGTQHOQRKCOAJJHHFJVEXTMSUTYTCDISCNRSFIZBRKIOLEOAZZXTLUNPHABQMIYCNIUNCQOOTDSKWIMMPWGHNRASNEKPJUVIDQRVOTYEZHHOFXWZULWZPKCHRJKBIWZKWL");
  msg.last_error_time = 0.24037771669531582;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("OperationalLimits - Serialization/Deserialization #0")
{
  IMC::OperationalLimits msg;
  msg.setTimeStamp(0.01805482808239256);
  msg.setSource(23809U);
  msg.setSourceEntity(79U);
  msg.setDestination(50496U);
  msg.setDestinationEntity(25U);
  msg.mask = 195U;
  msg.max_depth = 0.6569603803023527f;
  msg.min_altitude = 0.9329766109191645f;
  msg.max_altitude = 0.26361274820525415f;
  msg.min_speed = 0.3192255046859813f;
  msg.max_speed = 0.04249615294310638f;
  msg.max_vrate = 0.5936010226010968f;
  msg.lat = 0.9462160125824867;
  msg.lon = 0.9735082628355636;
  msg.orientation = 0.5137780007242082f;
  msg.width = 0.4998086119906212f;
  msg.length = 0.049092401725243096f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("OperationalLimits - Serialization/Deserialization #1")
{
  IMC::OperationalLimits msg;
  msg.setTimeStamp(0.33917615232244824);
  msg.setSource(24849U);
  msg.setSourceEntity(36U);
  msg.setDestination(62024U);
  msg.setDestinationEntity(152U);
  msg.mask = 91U;
  msg.max_depth = 0.16915975020998486f;
  msg.min_altitude = 0.129357970278123f;
  msg.max_altitude = 0.192126031411063f;
  msg.min_speed = 0.18118581362222297f;
  msg.max_speed = 0.16265739649677147f;
  msg.max_vrate = 0.40915619850719176f;
  msg.lat = 0.7266616148623446;
  msg.lon = 0.9756369198994242;
  msg.orientation = 0.5398895022883291f;
  msg.width = 0.08667176838916046f;
  msg.length = 0.7425386126908196f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("OperationalLimits - Serialization/Deserialization #2")
{
  IMC::OperationalLimits msg;
  msg.setTimeStamp(0.2579011061720863);
  msg.setSource(34497U);
  msg.setSourceEntity(76U);
  msg.setDestination(55591U);
  msg.setDestinationEntity(217U);
  msg.mask = 172U;
  msg.max_depth = 0.2320753297295144f;
  msg.min_altitude = 0.146945946416136f;
  msg.max_altitude = 0.41108228990990303f;
  msg.min_speed = 0.11772131162379207f;
  msg.max_speed = 0.7885954052501695f;
  msg.max_vrate = 0.7654011918022653f;
  msg.lat = 0.6774689010940704;
  msg.lon = 0.24370875706700978;
  msg.orientation = 0.7317108319937068f;
  msg.width = 0.21112425461860918f;
  msg.length = 0.4788231190466822f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetOperationalLimits - Serialization/Deserialization #0")
{
  IMC::GetOperationalLimits msg;
  msg.setTimeStamp(0.2629878852137516);
  msg.setSource(21700U);
  msg.setSourceEntity(194U);
  msg.setDestination(10515U);
  msg.setDestinationEntity(83U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetOperationalLimits - Serialization/Deserialization #1")
{
  IMC::GetOperationalLimits msg;
  msg.setTimeStamp(0.4730309621204448);
  msg.setSource(8868U);
  msg.setSourceEntity(49U);
  msg.setDestination(19350U);
  msg.setDestinationEntity(240U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetOperationalLimits - Serialization/Deserialization #2")
{
  IMC::GetOperationalLimits msg;
  msg.setTimeStamp(0.7540161740549176);
  msg.setSource(6720U);
  msg.setSourceEntity(39U);
  msg.setDestination(5568U);
  msg.setDestinationEntity(23U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Calibration - Serialization/Deserialization #0")
{
  IMC::Calibration msg;
  msg.setTimeStamp(0.09653008409844666);
  msg.setSource(56371U);
  msg.setSourceEntity(61U);
  msg.setDestination(28294U);
  msg.setDestinationEntity(52U);
  msg.duration = 54353U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Calibration - Serialization/Deserialization #1")
{
  IMC::Calibration msg;
  msg.setTimeStamp(0.41678099345420994);
  msg.setSource(32834U);
  msg.setSourceEntity(35U);
  msg.setDestination(12858U);
  msg.setDestinationEntity(236U);
  msg.duration = 32394U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Calibration - Serialization/Deserialization #2")
{
  IMC::Calibration msg;
  msg.setTimeStamp(0.7345964779542563);
  msg.setSource(31767U);
  msg.setSourceEntity(180U);
  msg.setDestination(14618U);
  msg.setDestinationEntity(18U);
  msg.duration = 52454U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ControlLoops - Serialization/Deserialization #0")
{
  IMC::ControlLoops msg;
  msg.setTimeStamp(0.5597413325441565);
  msg.setSource(30302U);
  msg.setSourceEntity(158U);
  msg.setDestination(10747U);
  msg.setDestinationEntity(184U);
  msg.enable = 237U;
  msg.mask = 2746260761U;
  msg.scope_ref = 1583598263U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ControlLoops - Serialization/Deserialization #1")
{
  IMC::ControlLoops msg;
  msg.setTimeStamp(0.7582678368562329);
  msg.setSource(18666U);
  msg.setSourceEntity(159U);
  msg.setDestination(30631U);
  msg.setDestinationEntity(115U);
  msg.enable = 154U;
  msg.mask = 1795326363U;
  msg.scope_ref = 3284327049U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ControlLoops - Serialization/Deserialization #2")
{
  IMC::ControlLoops msg;
  msg.setTimeStamp(0.402792469407786);
  msg.setSource(33840U);
  msg.setSourceEntity(135U);
  msg.setDestination(21715U);
  msg.setDestinationEntity(126U);
  msg.enable = 74U;
  msg.mask = 1443919623U;
  msg.scope_ref = 724504920U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleMedium - Serialization/Deserialization #0")
{
  IMC::VehicleMedium msg;
  msg.setTimeStamp(0.7921566921560358);
  msg.setSource(28776U);
  msg.setSourceEntity(15U);
  msg.setDestination(45950U);
  msg.setDestinationEntity(166U);
  msg.medium = 35U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleMedium - Serialization/Deserialization #1")
{
  IMC::VehicleMedium msg;
  msg.setTimeStamp(0.9591761977796425);
  msg.setSource(52163U);
  msg.setSourceEntity(14U);
  msg.setDestination(23612U);
  msg.setDestinationEntity(129U);
  msg.medium = 30U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleMedium - Serialization/Deserialization #2")
{
  IMC::VehicleMedium msg;
  msg.setTimeStamp(0.4750021663645585);
  msg.setSource(40606U);
  msg.setSourceEntity(173U);
  msg.setDestination(4954U);
  msg.setDestinationEntity(46U);
  msg.medium = 197U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Collision - Serialization/Deserialization #0")
{
  IMC::Collision msg;
  msg.setTimeStamp(0.18458838145963663);
  msg.setSource(42084U);
  msg.setSourceEntity(91U);
  msg.setDestination(60861U);
  msg.setDestinationEntity(86U);
  msg.value = 0.7047704501991847f;
  msg.type = 130U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Collision - Serialization/Deserialization #1")
{
  IMC::Collision msg;
  msg.setTimeStamp(0.9206984003273435);
  msg.setSource(12846U);
  msg.setSourceEntity(119U);
  msg.setDestination(56790U);
  msg.setDestinationEntity(118U);
  msg.value = 0.49212469480353427f;
  msg.type = 76U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Collision - Serialization/Deserialization #2")
{
  IMC::Collision msg;
  msg.setTimeStamp(0.9120683810281273);
  msg.setSource(7404U);
  msg.setSourceEntity(231U);
  msg.setDestination(55217U);
  msg.setDestinationEntity(137U);
  msg.value = 0.6612902536274511f;
  msg.type = 71U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormState - Serialization/Deserialization #0")
{
  IMC::FormState msg;
  msg.setTimeStamp(0.7782455811040869);
  msg.setSource(12066U);
  msg.setSourceEntity(160U);
  msg.setDestination(41641U);
  msg.setDestinationEntity(124U);
  msg.possimerr = 0.9080040270462442f;
  msg.converg = 0.4727161265182771f;
  msg.turbulence = 0.8342290370454615f;
  msg.possimmon = 168U;
  msg.commmon = 154U;
  msg.convergmon = 63U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormState - Serialization/Deserialization #1")
{
  IMC::FormState msg;
  msg.setTimeStamp(0.3442043414070596);
  msg.setSource(1352U);
  msg.setSourceEntity(5U);
  msg.setDestination(44003U);
  msg.setDestinationEntity(142U);
  msg.possimerr = 0.19632343297313637f;
  msg.converg = 0.49296738455852773f;
  msg.turbulence = 0.6077486120620079f;
  msg.possimmon = 167U;
  msg.commmon = 109U;
  msg.convergmon = 44U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormState - Serialization/Deserialization #2")
{
  IMC::FormState msg;
  msg.setTimeStamp(0.3377012412071245);
  msg.setSource(42716U);
  msg.setSourceEntity(28U);
  msg.setDestination(42472U);
  msg.setDestinationEntity(109U);
  msg.possimerr = 0.24501053217674196f;
  msg.converg = 0.4710360545297254f;
  msg.turbulence = 0.5395004643449374f;
  msg.possimmon = 207U;
  msg.commmon = 64U;
  msg.convergmon = 154U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AutopilotMode - Serialization/Deserialization #0")
{
  IMC::AutopilotMode msg;
  msg.setTimeStamp(0.05444991401458488);
  msg.setSource(24295U);
  msg.setSourceEntity(31U);
  msg.setDestination(2444U);
  msg.setDestinationEntity(134U);
  msg.autonomy = 157U;
  msg.mode.assign("NLFOAMQCGIOWEGLPMHHGVDLTKIGNFMSSTFMAZNQAYDPXEYZGOHNYRSCMXWMUXLRYTOBKJTEEZEVWHKAGZR");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AutopilotMode - Serialization/Deserialization #1")
{
  IMC::AutopilotMode msg;
  msg.setTimeStamp(0.8836902720938139);
  msg.setSource(14317U);
  msg.setSourceEntity(196U);
  msg.setDestination(65482U);
  msg.setDestinationEntity(83U);
  msg.autonomy = 148U;
  msg.mode.assign("DWWGSIQYPGJZTRLZOAQEPBYZILBNGBHDFMUZWTGABC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("AutopilotMode - Serialization/Deserialization #2")
{
  IMC::AutopilotMode msg;
  msg.setTimeStamp(0.10120265771869419);
  msg.setSource(4120U);
  msg.setSourceEntity(85U);
  msg.setDestination(50686U);
  msg.setDestinationEntity(49U);
  msg.autonomy = 107U;
  msg.mode.assign("VCQTDKMSWOBYPSXCILYPFDNPDCURHFTGOHSUJOORTFQGMVZDNSOXMWTGZNRUILEEXAVBAWLFCNCBXMADAIDBAXWOYXFJMLZAWUZEKTIVCPVRDUFFJITHVCKSHLXUEEUHQBKYZBIGMKJECCEODRTYWPBGYKHMRKMNPXJQXQFLOLZGRSLVGSWAAEYOKVWBSUISBJPJPUIQVHDVZNCWRNLTBAGITNDRJFMQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationState - Serialization/Deserialization #0")
{
  IMC::FormationState msg;
  msg.setTimeStamp(0.49486405931814803);
  msg.setSource(36076U);
  msg.setSourceEntity(33U);
  msg.setDestination(40959U);
  msg.setDestinationEntity(21U);
  msg.type = 118U;
  msg.op = 99U;
  msg.possimerr = 0.06343541989697321f;
  msg.converg = 0.5598392061741199f;
  msg.turbulence = 0.20245719997000655f;
  msg.possimmon = 129U;
  msg.commmon = 157U;
  msg.convergmon = 222U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationState - Serialization/Deserialization #1")
{
  IMC::FormationState msg;
  msg.setTimeStamp(0.5370589541336516);
  msg.setSource(19258U);
  msg.setSourceEntity(176U);
  msg.setDestination(61416U);
  msg.setDestinationEntity(108U);
  msg.type = 161U;
  msg.op = 193U;
  msg.possimerr = 0.32865830558645215f;
  msg.converg = 0.08912690391570788f;
  msg.turbulence = 0.9807562223845567f;
  msg.possimmon = 33U;
  msg.commmon = 39U;
  msg.convergmon = 185U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationState - Serialization/Deserialization #2")
{
  IMC::FormationState msg;
  msg.setTimeStamp(0.9067694056009029);
  msg.setSource(37697U);
  msg.setSourceEntity(49U);
  msg.setDestination(43612U);
  msg.setDestinationEntity(74U);
  msg.type = 206U;
  msg.op = 134U;
  msg.possimerr = 0.24636350381234307f;
  msg.converg = 0.5244202879762733f;
  msg.turbulence = 0.0914455518331373f;
  msg.possimmon = 235U;
  msg.commmon = 137U;
  msg.convergmon = 117U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReportControl - Serialization/Deserialization #0")
{
  IMC::ReportControl msg;
  msg.setTimeStamp(0.36941448851746805);
  msg.setSource(2292U);
  msg.setSourceEntity(111U);
  msg.setDestination(57428U);
  msg.setDestinationEntity(8U);
  msg.op = 158U;
  msg.comm_interface = 129U;
  msg.period = 24248U;
  msg.sys_dst.assign("LSFPQTCEOWOZJGDLYWMATKYIBHMEIYPAMWPQKGVSEOVQEMDRMBDXINOAILOOGYZTMBULPUBKJHXVTQZWDNDLRTMXYQD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReportControl - Serialization/Deserialization #1")
{
  IMC::ReportControl msg;
  msg.setTimeStamp(0.7670497514543769);
  msg.setSource(8524U);
  msg.setSourceEntity(63U);
  msg.setDestination(48031U);
  msg.setDestinationEntity(138U);
  msg.op = 9U;
  msg.comm_interface = 15U;
  msg.period = 22847U;
  msg.sys_dst.assign("PLDAHLAJCJLEMCNXXJUYKSHCYZFWXGEQSMMYMEKYRAHKLNFNQDGXHVUNVCNYZUZVXCWXLIIQUEROLWHJJFTQFSRPYAZOUFVAOMPQORTCFLOKGSQWVJDIKZQDPWMBGESADYHBJGCHSLJFTBVRFDRUXUPKWPW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReportControl - Serialization/Deserialization #2")
{
  IMC::ReportControl msg;
  msg.setTimeStamp(0.744110345004545);
  msg.setSource(33715U);
  msg.setSourceEntity(124U);
  msg.setDestination(24004U);
  msg.setDestinationEntity(200U);
  msg.op = 233U;
  msg.comm_interface = 127U;
  msg.period = 4362U;
  msg.sys_dst.assign("SYDEDXCJGPSLDYBYIAFYEMLTQATZMLVICYZFQXPTIWZXQPLZOGHOUEITJOYFGAKFXWRSARVTYZWQPVOWVGSHDHLKDDNSDXMOICGZNKMBMEKUVBGEHAICMKWNTGLQCEMCSNKNFBUJCOFWYVWTFVCTKWMEJDOJZQLZAVBSBPBIPNWYMNURCRFRAIKCQRKVULP");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Abort - Serialization/Deserialization #0")
{
  IMC::Abort msg;
  msg.setTimeStamp(0.26943601689214713);
  msg.setSource(33616U);
  msg.setSourceEntity(165U);
  msg.setDestination(8029U);
  msg.setDestinationEntity(82U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Abort - Serialization/Deserialization #1")
{
  IMC::Abort msg;
  msg.setTimeStamp(0.6335492497234853);
  msg.setSource(51354U);
  msg.setSourceEntity(200U);
  msg.setDestination(29162U);
  msg.setDestinationEntity(226U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Abort - Serialization/Deserialization #2")
{
  IMC::Abort msg;
  msg.setTimeStamp(0.16572324443841224);
  msg.setSource(48978U);
  msg.setSourceEntity(195U);
  msg.setDestination(1214U);
  msg.setDestinationEntity(39U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanSpecification - Serialization/Deserialization #0")
{
  IMC::PlanSpecification msg;
  msg.setTimeStamp(0.6037460330963138);
  msg.setSource(9932U);
  msg.setSourceEntity(185U);
  msg.setDestination(60737U);
  msg.setDestinationEntity(29U);
  msg.plan_id.assign("LGJARABVCUCBDLQZKSXOHLYQCGYSUADFAKAZSUTAJJHRXGMXLWPWPBWFWDDNZZOYZUNROXTSDTHXDPLNTSUPOIPGCYCRWHEVKMRBKVLUBRYOFCBHPZLIFQAOVKTMBBAOJVDDEHZLWPUQPOCNWTMVJVOJTZSGVRCRPQEIHKIXTIEEQFXVVZWGTGIYISAYHXUMYXMJYEJFBEJHLUMIKKUCMSIWSEAXMDQJOFKNTHZNSMENGINPBNQEWFGLCRFQF");
  msg.description.assign("HYTBIVJCOFGXGBDRCOLTHJEQEUAEDENUNAWLNUK");
  msg.vnamespace.assign("EFXOVSEBOLGZOQVBPZBCSRUDYNWIKZTQURZLMLLSESGMFRJAQOPMWLREKIFWUDWEIZ");
  IMC::PlanVariable tmp_msg_0;
  tmp_msg_0.name.assign("HTRSDUXNEMVHTCIVAMDIZUQOZEYRDKTWPLYEHLKHUCPHIGXQYLZRTJLJBRDUGFWMXYWSMVXEBSUAWVWZPHCFWQBVNFTFBPVOKQDPRCSQOKSIMKPOVMELNQLPD");
  tmp_msg_0.value.assign("MFAIGIUDFDFOTFBWFRNZOQALVJSNTFTHQIULLIKSPPZCAGSGEXGUPVWBLIRIKPWJKDHPSWIOHCCAJORKKXWGFUQRFUCOKQIGZECYHBJTSQVEEODETGWNLBYYCCYOKLY");
  tmp_msg_0.type = 204U;
  tmp_msg_0.access = 144U;
  msg.variables.push_back(tmp_msg_0);
  msg.start_man_id.assign("ROZBMOKIKNFZVSQGVYPZPKYPSEAKFILPXNIODKMKYSAYDKBNAWZM");
  IMC::PlanManeuver tmp_msg_1;
  tmp_msg_1.maneuver_id.assign("XTPEUSGRNFEEMFNXPFTPOVKBYIRIENDVCFCATXPFKOPHJQHNCIDNGJWDZECGRPINJTWOKXZIPRNAJLZYBGWNMJAFKAHHMSZRLMWXZLCEDYULVXGIMSCTCRRQLJBPIMUYYXSQBMYSOSHVAOJSWZL");
  IMC::StationKeeping tmp_tmp_msg_1_0;
  tmp_tmp_msg_1_0.lat = 0.2275223026094073;
  tmp_tmp_msg_1_0.lon = 0.4629408444237417;
  tmp_tmp_msg_1_0.z = 0.2231005543029675f;
  tmp_tmp_msg_1_0.z_units = 10U;
  tmp_tmp_msg_1_0.radius = 0.16493663681851234f;
  tmp_tmp_msg_1_0.duration = 44788U;
  tmp_tmp_msg_1_0.speed = 0.40033855906152205f;
  tmp_tmp_msg_1_0.speed_units = 230U;
  tmp_tmp_msg_1_0.custom.assign("GSOBTUAHLGCBOEAEKNILDEACNAWWBTPUYWVIGNQNKLDCZWMUEGUFQQIPISQWFWHJLLOKBSPRZKKRBPETKANRGDIJVHFTHDOKPIDSUMAPEQFQPJLFVGORMRHVDARIIXBTMCEYZSNDJGRAYCWSMTFMNKJBMXKHGXFIECQOWHNNPVEJYRDZCAJOSSDLXJXKWEOZQZSTFCHJLZYVNOHVYTYMYQXLQJVMXLRMFPYUZCBCA");
  tmp_msg_1.data.set(tmp_tmp_msg_1_0);
  msg.maneuvers.push_back(tmp_msg_1);
  IMC::CpuUsage tmp_msg_2;
  tmp_msg_2.value = 131U;
  msg.end_actions.push_back(tmp_msg_2);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanSpecification - Serialization/Deserialization #1")
{
  IMC::PlanSpecification msg;
  msg.setTimeStamp(0.3896389287510279);
  msg.setSource(43918U);
  msg.setSourceEntity(136U);
  msg.setDestination(30105U);
  msg.setDestinationEntity(231U);
  msg.plan_id.assign("QEZEOAUZBHGICFQSTJEXSEMFXBHIVOUYJHFGSIRKFMCRGRNPHJFYAHAWCBQLFVTY");
  msg.description.assign("KQFUYSKDHKFUEYBKHMXNKRIDZLYELNGWHFGZWTTLAPYHOGRUYEOKPJCQMVFAYDDPRGWSXQNMJBSQAKBVRNVIBGLNXSMOUVTWOTUHQMRXFTCYSYIYIBSLRUZCCBERHQXBWIEJGGFWMMWFIGKNIFNDBJZZTLDIHUFRQRJUITRBOCXVOPXLHKPQZNOLXTOVWMZDN");
  msg.vnamespace.assign("TJKQYHNCSPKIAJNPGPAEQCCYAFXSWBUNHNXVTYGUUVOTLRYAUSVAGCZOCDKSWPPGLEVJRRVVGFIBJIPBFDJFQSHKLBMKEURETDLIUQFCXJLOQGWSNUQGLMRIU");
  IMC::PlanVariable tmp_msg_0;
  tmp_msg_0.name.assign("PDTSRTHMTNQKGVBTXYABJWUSRCXIFHEOVMSLZSFARXEBEGNGHKCONMUZNBXOJPCCPUENFQ");
  tmp_msg_0.value.assign("RNKWLYWFMWQJCDEXUOFXOOUPIAGHVCYRRVSALWPVRXNABQMBBDZICCRFQDQWNKEOIOKARIVQRDUZMLBWKDHYQSLNKTCSEHDEVQEMZOJJTEBXGVGNNHBMQETHXFPFHOLDCARUTYULYITUQZVXTLMHQM");
  tmp_msg_0.type = 119U;
  tmp_msg_0.access = 126U;
  msg.variables.push_back(tmp_msg_0);
  msg.start_man_id.assign("BXVTLCLIWCBIEOYZRJWYQOHBWQLVCBNUWMGXAFHDYNPIDFVNZRCAOGSRRZHXXOYYEBMJDDKGPKKLNJUGUKAJZAINYMYLCEGLARDNGIZSGPKEUHZOJRWDIPWXFEGQSRUQONKCLFSFOVYLFQLKKUBEDRFJJBSUAMZQWIH");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanSpecification - Serialization/Deserialization #2")
{
  IMC::PlanSpecification msg;
  msg.setTimeStamp(0.790019249365909);
  msg.setSource(27739U);
  msg.setSourceEntity(79U);
  msg.setDestination(53649U);
  msg.setDestinationEntity(55U);
  msg.plan_id.assign("HBVKUHFWWWZDAOUGUVFDMIROGCVTTLEWFIYEISQCOPEABUDGQGRSZXLRNTTFXXKGEMMHLP");
  msg.description.assign("MGSZUXODLOYPUNUNMILMEUBATDGPMV");
  msg.vnamespace.assign("HKAHSDPVKSDWLBZFHZRMSTMUDJOQYFEJAVWPRAIKOTCBNGBQDTGIXKJBMZXXNDLBWCNLJZKPHDOVEUEPLKCYNREJWLDKIRWSYRMWWIIPCQEHUQVULWGFDZGGMPRDFIRAUQZCAHMETYSZJRXHPSBJQWMOEFXPYZFFFVSQFXK");
  IMC::PlanVariable tmp_msg_0;
  tmp_msg_0.name.assign("HPVMCMIMVPWDGUZWZOMKZQFHTEILRDEWUYZGYRSNSNCVMUIPALPHZMEFCRFWPHEAONKHVQFDEBXTTIFVUIVVFPHHGNVLRNHGNWGYBKXWGXPKLAYYHRKASYLGTSEYENAZGRUZOBOUJZ");
  tmp_msg_0.value.assign("ZUCKHISRQIHKOZAWHGRQDHFEOYJBHFOOCWMAPTDWOXOOLDMONXSDKNUQIVVFVGJLRTIMEBFIZUDST");
  tmp_msg_0.type = 68U;
  tmp_msg_0.access = 13U;
  msg.variables.push_back(tmp_msg_0);
  msg.start_man_id.assign("MLGCWMVJNLGHPCNDQBDXSLVSDAHNFXEBCAOTVXQGRRNITORLKSRESPSNSPASYNHWKVGTOSGEMPCYKNTMKMXJUFKEADACIWFZGZXVPFLEIGYDBQZFRWBOWYZUOKTBJFQBVJHGJBEWOPCTXEWARXUUHTKWHFTDEYUQIUHAQUYMZ");
  IMC::PathControlState tmp_msg_1;
  tmp_msg_1.path_ref = 1528788651U;
  tmp_msg_1.start_lat = 0.7181910415576793;
  tmp_msg_1.start_lon = 0.9464011803949434;
  tmp_msg_1.start_z = 0.5696196232520346f;
  tmp_msg_1.start_z_units = 173U;
  tmp_msg_1.end_lat = 0.12590906908861454;
  tmp_msg_1.end_lon = 0.2503097821844007;
  tmp_msg_1.end_z = 0.2900368472038336f;
  tmp_msg_1.end_z_units = 133U;
  tmp_msg_1.lradius = 0.7435046532085654f;
  tmp_msg_1.flags = 119U;
  tmp_msg_1.x = 0.8251607407414959f;
  tmp_msg_1.y = 0.4166062525605384f;
  tmp_msg_1.z = 0.5577395187651117f;
  tmp_msg_1.vx = 0.4962306048358305f;
  tmp_msg_1.vy = 0.5511739789663119f;
  tmp_msg_1.vz = 0.39691506143661703f;
  tmp_msg_1.course_error = 0.4584620469745173f;
  tmp_msg_1.eta = 51987U;
  msg.start_actions.push_back(tmp_msg_1);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanManeuver - Serialization/Deserialization #0")
{
  IMC::PlanManeuver msg;
  msg.setTimeStamp(0.8895717294402686);
  msg.setSource(25579U);
  msg.setSourceEntity(161U);
  msg.setDestination(47852U);
  msg.setDestinationEntity(150U);
  msg.maneuver_id.assign("DEVXQJHYZUMOWUALLHPJWLVBBMATBROUSPOCDDOZPTHVOKIYSHMNRBUSRJLAQQOQZPYWLYKLJFNKBJIAKCVGEIFSJDUGPOHJLAJPXPXZFIXAGOMNWVZGCKDGUECTEZDMVTYGYSNFYOPKANFFTYUBBDYCTF");
  IMC::Elevator tmp_msg_0;
  tmp_msg_0.timeout = 30825U;
  tmp_msg_0.flags = 127U;
  tmp_msg_0.lat = 0.26410964759611766;
  tmp_msg_0.lon = 0.9390749040440884;
  tmp_msg_0.start_z = 0.39722286915280813f;
  tmp_msg_0.start_z_units = 136U;
  tmp_msg_0.end_z = 0.2962614660695154f;
  tmp_msg_0.end_z_units = 78U;
  tmp_msg_0.radius = 0.22856145491576718f;
  tmp_msg_0.speed = 0.8631369171594543f;
  tmp_msg_0.speed_units = 189U;
  tmp_msg_0.custom.assign("KHRYVFKJXZNOVAHQLYZUJYUAYJMRVBSFSWWGFBVOBPYWDMZNCSQOYPGWGHGEKNZGLQXZVIAAFEASZUJNJIPWDETVWZZPPOSRJUTPAPEVDTKKZIDVXQDCFFTLNCTBCCEYNCOMIHNGDFOTIBXLK");
  msg.data.set(tmp_msg_0);
  IMC::NavigationData tmp_msg_1;
  tmp_msg_1.bias_psi = 0.7529146755102014f;
  tmp_msg_1.bias_r = 0.06767413841431469f;
  tmp_msg_1.cog = 0.5518183044720154f;
  tmp_msg_1.cyaw = 0.5430297156980343f;
  tmp_msg_1.lbl_rej_level = 0.03282800324828761f;
  tmp_msg_1.gps_rej_level = 0.4266927527611625f;
  tmp_msg_1.custom_x = 0.9103868669975542f;
  tmp_msg_1.custom_y = 0.7051619777632745f;
  tmp_msg_1.custom_z = 0.9115017839073679f;
  msg.start_actions.push_back(tmp_msg_1);
  IMC::CreateSession tmp_msg_2;
  tmp_msg_2.timeout = 3273942433U;
  msg.end_actions.push_back(tmp_msg_2);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanManeuver - Serialization/Deserialization #1")
{
  IMC::PlanManeuver msg;
  msg.setTimeStamp(0.3066907487190139);
  msg.setSource(11027U);
  msg.setSourceEntity(189U);
  msg.setDestination(56858U);
  msg.setDestinationEntity(196U);
  msg.maneuver_id.assign("EZSPMJGRTPCSEFTLOLFVKDHVKLKRUCHDNEIWLFUIUWJZCXJUMKCNLFVTHSTYKNUQEMILSMAMTSJNCADTZIOJGCULCOMNUQOVOFQGDAYZAKVPHBMWIHIZQWTBNRYBYUOBAXPGIKWRWHEUYNDVRFPTA");
  IMC::FollowReference tmp_msg_0;
  tmp_msg_0.control_src = 24785U;
  tmp_msg_0.control_ent = 113U;
  tmp_msg_0.timeout = 0.4707399443829642f;
  tmp_msg_0.loiter_radius = 0.748289297637464f;
  tmp_msg_0.altitude_interval = 0.7022762878317059f;
  msg.data.set(tmp_msg_0);
  IMC::PlanDBState tmp_msg_1;
  tmp_msg_1.plan_count = 47501U;
  tmp_msg_1.plan_size = 1609235660U;
  tmp_msg_1.change_time = 0.73214797023475;
  tmp_msg_1.change_sid = 19460U;
  tmp_msg_1.change_sname.assign("RNWDKZGBKBMHKYAOQIVOVZFCJZWMTTGBASOHLBMQQHHXGUZGGZYNJOTENPOUYISRENOSKVVFVPEYGZTXLZXFCNWWLANCFNDURTUFVZEQAMFNQPKMCUOAKDKZSWPOSFMRBDXGQHMQXYLFUREVIWRAWRKACXHBJLCJYNDCJIVLAOREKRITNEUXSEXTPBFAETHZLGHUSDAITCXPYVGSIQDGHQIMDPPKLJITJBISWULFBYVEQJDPSXMUHBJPLJO");
  const char tmp_tmp_msg_1_0[] = {-124, -41, 47, 100, 121, -21, -75, 34, 78, 114, -8, -72, 16, -53, 17, -15, -30, 52, -102, -23, 81, -16, -2, -88, 56, 105, 93, 76, 112, -21, 34, 54, 24, -5, -114, -47, 57, -70, 34, -106, -64, 85, 29, 65, -111, -40, -86, -48, 114, 53, -21, 123, -107, -66, -10, 81, 64, -86, -32, -98, -28, 10, 54, 0, -112, 41, 50, -26, -12, 58, -74, 37, -122, 45, 32, 119, -57, -47, 6, 58, -30, 97, -39, 25, -10, -90, 58, -14, -56, -59, -51, -52, -38, -113, -64, 20, -113, -90, 40, -103, -6, -68, 20, 97, -96, -42, -18, 105, -115, 12, -16, 108, 34, 94, -106, 54, -5, -110, 113, -97, -42, -60, -61, -35, -96, 39, 26, 123, 78, -98, -104, 36, -112, -38, 49, 51, 75, -7, -62, 21, -13, 78, -20, -57, 62, 57, 39, -38, 63, 0, -84, 37, 21, 85, -70, 40, 26, 11, 74, 108, -108, -60, -66, -18, 29, 115, 77, 74, 72, 112, 87, -67, -11, 84};
  tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
  msg.start_actions.push_back(tmp_msg_1);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanManeuver - Serialization/Deserialization #2")
{
  IMC::PlanManeuver msg;
  msg.setTimeStamp(0.8982916344476388);
  msg.setSource(44336U);
  msg.setSourceEntity(93U);
  msg.setDestination(48018U);
  msg.setDestinationEntity(74U);
  msg.maneuver_id.assign("LLKZSTCTVPCCPXFLJILKEZBWUBKCMVTYORMAJBJCIHPITERVWGMJAHHHNIEOCPKQFIFDAEFWRUYZSZXAJSNLZQVEWTUGMCMNIGLAGTWDYRBWWJSQQXBNAHOKEGPYGGEXLNDIFDKOOXMTAFSSCZWPFXHRFTDCMZVNSDBQMVIJSDZFYKZWDAUCGUBRVVTZROLNYKUIOLQUGAHNPURVAJFYYSQLQHMONHORJYXGP");
  IMC::Dislodge tmp_msg_0;
  tmp_msg_0.timeout = 65162U;
  tmp_msg_0.rpm = 0.35349698191597456f;
  tmp_msg_0.direction = 134U;
  tmp_msg_0.custom.assign("RRYZALSXBJONOYGJQYDGYNIAXQLCRDHBUDPCUNGTLBPVXNARQUMIQCNHBWEGIBCMVYZEYSQQDRJDGRHVHHVEMJMMMVXDJLEOKLKBVGKNPAUXBPSFNTTZYERIFJTTXUISMKFLZUXEAKPCSGZJTOYKPTACMKITDOTWZZKRJSLMKVNRZELKZFWVJHRYWUSBFIXAZNUUHIDAHABQOJXWCVSDIHGWMPPDQPGCOHWOGQWFSUPFOWCNFEFVEQW");
  msg.data.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanTransition - Serialization/Deserialization #0")
{
  IMC::PlanTransition msg;
  msg.setTimeStamp(0.7833113633049802);
  msg.setSource(5924U);
  msg.setSourceEntity(7U);
  msg.setDestination(4932U);
  msg.setDestinationEntity(172U);
  msg.source_man.assign("CMHKVDRZJVKFNQEPXFTFZEDTPWDOAWBDBLRUBUENLMPJACFRPOPJCHSNXQGKCXEOBLILWHAOVGHW");
  msg.dest_man.assign("KYXYIFIXXSBWLLZGSJDFXARKXBKSEMHADCFMDNMHMMZYNUELFJLHQRKCBTOPAVERHOSIXRVDMLAOJEGGOQIEQAZOVGBPYZLJFDTOPIDMPBNWZNPHCFICSZVYWALOBKDGIVDRJGMQZNTUUATETRUUHGQMKYHWIRVO");
  msg.conditions.assign("XRAMRNUSFQOLDVTFQEVRHHDXTGOIVPPUXNEMZRF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanTransition - Serialization/Deserialization #1")
{
  IMC::PlanTransition msg;
  msg.setTimeStamp(0.9893266110423428);
  msg.setSource(57821U);
  msg.setSourceEntity(213U);
  msg.setDestination(49131U);
  msg.setDestinationEntity(126U);
  msg.source_man.assign("XWAGUFFFOJKOKTAAXWXZMWTLZLVJYHKTNWFBRIMFHBPLIHGDLJVKEQPQFRKWFSOXMBNYNSCIVMQURZONBYLEQIFRNXDJAUDKNDZGIHUYPBUCIZSPMLYLLHTZIQAEBKMJGWYRVIBBAGJCJPSXETMFPCLHADXAMWEZPREUBWHQXGZUXREVQDMNQNHGUIOLOKCGKTDOJEQTHHAT");
  msg.dest_man.assign("BBJYFOKLLVESFTAJREEIUKMVOQMGYHWQUIESPSAKYRTSEPENZXFIPMAVIKFSIBXZHCBSYSPMBPFVGRCRQCNIVJUCYVJQHQNKCFNJBRGMKWWUCSFONLILWTHEQOWWEUUHZOAYKCMXOAJGOPTDULNFXCGDQFPLDQNWKAJUGJHLYQPMZDUYLDQBKTXKYZRV");
  msg.conditions.assign("BQISAMFGIKQDFZSBKVANBTIMUGTRUPXYLRPRXDXNWCSMFNWCWNWKRFZQJGTDMAKNLUKJIOHMQFHOJLGNBKDHARZRLBCVASVJPXYPNHVQIDPSEFCUVBPNHMPVIADHCOEUJWMLQBLOMBWKYEOGVZTWJTGDZGYDCSEHYWRXFTICTBDVFSSOAVDCPEOBGMA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanTransition - Serialization/Deserialization #2")
{
  IMC::PlanTransition msg;
  msg.setTimeStamp(0.49806208137577923);
  msg.setSource(2827U);
  msg.setSourceEntity(201U);
  msg.setDestination(30232U);
  msg.setDestinationEntity(51U);
  msg.source_man.assign("LIMXACASRSIOCHDQTEMCAJVQIFAEYJBFEZPOBRTOJJAOFEVXZVBHXVOUXSKVNZWFHOSKFTNGBMWURCZWBGNQWMOTTTTXASEPSRKKQZNLYDYFGCJDAQXVWYPPDWNIGKPUPGNNHMLGKYGPFXMLSCRZJPHSOVHDCCSURUNMCLADIEBXDGHQJOWJBSVECMUXKAETXYJRNEEYDQALBDQKKRGDPLQUZIFHFBJBIVVZFWYRKUP");
  msg.dest_man.assign("UNFVADFXPUQQTWMBXPODXJCAVRKYJABRYEOAZHKVPPERXFYUNOYJYNAZHKDCSITRXCMLBHCIQPDIVOREILEHTVPSBPCKAUTWZSABINXYLIUTQPZGJHRXLWWMMVWJAZMCGCOKZRXKUNJGQILLFLFKSBBGUAIMMPDOCSCDGKSHZEDXJERWLHRSUFQFONZTOTVOMDVJDZDZHSGHYB");
  msg.conditions.assign("JYDWHBSTYNKAYLYOKFVURZZZABWXLDJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EmergencyControl - Serialization/Deserialization #0")
{
  IMC::EmergencyControl msg;
  msg.setTimeStamp(0.7243581046828429);
  msg.setSource(59293U);
  msg.setSourceEntity(244U);
  msg.setDestination(61429U);
  msg.setDestinationEntity(130U);
  msg.command = 136U;
  IMC::PlanSpecification tmp_msg_0;
  tmp_msg_0.plan_id.assign("JABCDSMIJGEICZAPMVZBUYMCGGWBXIQBJTVXMVPDKALQFNYHVRJOMSXQBTAZONLWIGLQFYIXPEWAKEUEIOKCDJTKTJYIUUKMSEYGYSVVHHRHWZKNNBHXCPOSNCTLUJZKZDYNFAUSHWDNNPWEWPRMJEMAF");
  tmp_msg_0.description.assign("AGAKAVSXNWZZJBXDNOXYYRAEQOFVZVWNMISHTDEEEMXDRCJUEYRLYWEICXAOLVYRVRGYAFKWCLHWMIFRZIDKFLPKYFHMGZZTUVYQPVAHHGNOQHSUJNTMWSGCHCSAAJKFSOXTGUNUKXFTPBMONPHBTLHKPQKWIQLTEECSRPHTRIUGFEIVJWOZYIMRUDJXBZ");
  tmp_msg_0.vnamespace.assign("NWKRWJQAHXOCIJFAEKEWFEAHNZGBMLGIMLGLKYMDTHOGERILANRXCQKO");
  IMC::PlanVariable tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.name.assign("WJJIDEFVBWYHF");
  tmp_tmp_msg_0_0.value.assign("IUUOUXRXSBMGCSYVEHJZJUQNLIDEKAGADJHFSZFSWYBIANZFMWBKSLDJZNXPIVBVKNXMNJPVFJGQETFQVOLBKCNBCMTGBROLWPEPSZEFKHGOIHMEBRCAUCTNKGWW");
  tmp_tmp_msg_0_0.type = 39U;
  tmp_tmp_msg_0_0.access = 231U;
  tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
  tmp_msg_0.start_man_id.assign("KIAAHOEIQJULOUUFAIXAODVYZPVRWSBTWVTQDXNXDLXDVCJIVWMEVLIGWXKBRJRODSY");
  IMC::PlanManeuver tmp_tmp_msg_0_1;
  tmp_tmp_msg_0_1.maneuver_id.assign("HIBQQIVRHLZFCUQJNSTTGLOCCUKAGBMULOGOGPZXDTCZOBXPEOTDZNASACAAMFOVYKNYQXNXHUQ");
  IMC::FollowPoint tmp_tmp_tmp_msg_0_1_0;
  tmp_tmp_tmp_msg_0_1_0.target.assign("MBLMEIHRAUEOGXXKUTNVOSTEKGFIQFFVWSECNNAMABBPZWKYGNQUYIFCPWOTDJNVHSENWBXIVMCCVHFYPDOYZTLYQDLKTHQZZNBPPYHDHJXRWLVWUTAABRGDGDDRRJSWOOJSWTMHAIEQLOYJIHVZKIAXTATSNXUPYGFMGXBAZQKGGORFMIIQCVUFUCRQLNEPDRJLMKFUUZMWLVCYSEKOXQJFLBNZUBDZBHRPXIDXPQJESGKVS");
  tmp_tmp_tmp_msg_0_1_0.max_speed = 0.8942383889280565f;
  tmp_tmp_tmp_msg_0_1_0.speed_units = 170U;
  tmp_tmp_tmp_msg_0_1_0.lat = 0.4798769164605534;
  tmp_tmp_tmp_msg_0_1_0.lon = 0.9369159377591091;
  tmp_tmp_tmp_msg_0_1_0.z = 0.4243319735170632f;
  tmp_tmp_tmp_msg_0_1_0.z_units = 186U;
  tmp_tmp_tmp_msg_0_1_0.custom.assign("OSZHGJBNUYRLKWNDRPZBQDGTOCMLQHEVGZ");
  tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
  tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
  IMC::PH tmp_tmp_msg_0_2;
  tmp_tmp_msg_0_2.value = 0.38030050297442086f;
  tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
  IMC::HistoricCTD tmp_tmp_msg_0_3;
  tmp_tmp_msg_0_3.conductivity = 0.018170936701260798f;
  tmp_tmp_msg_0_3.temperature = 0.7363068889178642f;
  tmp_tmp_msg_0_3.depth = 0.6776381034301476f;
  tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
  msg.plan.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EmergencyControl - Serialization/Deserialization #1")
{
  IMC::EmergencyControl msg;
  msg.setTimeStamp(0.5118194432055054);
  msg.setSource(59212U);
  msg.setSourceEntity(66U);
  msg.setDestination(53326U);
  msg.setDestinationEntity(75U);
  msg.command = 167U;
  IMC::PlanSpecification tmp_msg_0;
  tmp_msg_0.plan_id.assign("HGKEHNIRYMXQANBRNMFXBGZGAWRCQPNLZWZYJUUDDTHDVWJDOSXXNWXQZWUHBYLEMCZGOZHIVGMUOPHPUTVBKXJQLLQASYEXCYAEKFXSRZIDOIODPICTRCWVLSNKX");
  tmp_msg_0.description.assign("QKXGTTZDEHOSGLHZDQAXOBZFJCJOUTUMOUIELXLNFLYGNDPAHBMJNASYGKBNPSVHKPWVDQWNSLVMNDAYUZGYWZISRUSINFQEOLMBGRIEKWMDFOJIHSFHKVCVUJOWJPQIACSTNHESDCMTQFFHRPECAWCZSCRPDNROXDIFLIARYEJCRLZJRGMHXDLBVKYMPQXKF");
  tmp_msg_0.vnamespace.assign("IONOYCHAOUXUGTJHIPIKFRWUVMLBORPQHSDYYIVDXMKXJAETLHRKTLWWERVHUPKSUZGLISNPJXIHVZNQPWTFBPXNOMWLNTTNVYZBIAGFFGVGMOAXCHNYCDOLWYZGVEDEWKKEMJQRLUUZSFQFKSWGHZUOPQMELMIJXCZEUBFABTFPTTEBOQPSDBRCYSTGKAQ");
  tmp_msg_0.start_man_id.assign("PKONPIBXFMCELIIEKIDUENCQCHJDFZCFGEPWXVTVFS");
  IMC::PopUp tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.timeout = 55519U;
  tmp_tmp_msg_0_0.lat = 0.7396411985399781;
  tmp_tmp_msg_0_0.lon = 0.09250819570262125;
  tmp_tmp_msg_0_0.z = 0.3189071344264591f;
  tmp_tmp_msg_0_0.z_units = 163U;
  tmp_tmp_msg_0_0.speed = 0.16709619098008943f;
  tmp_tmp_msg_0_0.speed_units = 22U;
  tmp_tmp_msg_0_0.duration = 5604U;
  tmp_tmp_msg_0_0.radius = 0.7364232542411755f;
  tmp_tmp_msg_0_0.flags = 233U;
  tmp_tmp_msg_0_0.custom.assign("GBZTRVXMIXML");
  tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
  msg.plan.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EmergencyControl - Serialization/Deserialization #2")
{
  IMC::EmergencyControl msg;
  msg.setTimeStamp(0.47655098225962433);
  msg.setSource(17435U);
  msg.setSourceEntity(176U);
  msg.setDestination(14848U);
  msg.setDestinationEntity(220U);
  msg.command = 95U;
  IMC::PlanSpecification tmp_msg_0;
  tmp_msg_0.plan_id.assign("BRWNKZXWHMVSKFGLWZJMTANUSOAHSHSOLDHCGPCPRQJFCVUWORJQUEZYGNWYKIFJDTOZRWYFWTBDMTSJZPTHENHBMYEPVRUQRPMZADAYYABJNTAIUPCBOAGQEFXCCVLBXEGQRLWMPFJIUSTNIJIHDIGKQYZGOXUEKNUYSJFLXKDZTLUKKHLSBQICGIFAWTETMQSCHLPDOGWQVDRLCZFAEDAOVYJYKXXZDPEMRXOBRNFEBQSVIXPOHXMKCVV");
  tmp_msg_0.description.assign("YTMBKCNZLROQGQHKPTXCHMXSNCFQRSBRVBILNFOSVWATKJLIWUYIQQTJTENTGHJXFXMOHOCJKANYWUOEJFLMYPAQZXRZBSUDKAEMZLYVJZEUSWQWBUCTIDNPZGMRRXHVKFIVVRGMGLBACTOSULNYZEISRBUOIJHTPPXKPF");
  tmp_msg_0.vnamespace.assign("LKYGQLFNMMJLTRBXMHZYXACDEQLNPWWDQVDYXOKFIVHSKDQTSBWANLRRMVROCMCPPINCFQCOTQELSAIGMUWIZAMEVKKFKGPAIGPZSHPFTYBUPUPHTEBZJJFUUCXZYLV");
  IMC::PlanVariable tmp_tmp_msg_0_0;
  tmp_tmp_msg_0_0.name.assign("WGSRJLIDXJSWNBTGQWPUSJLPCIPHKCLBCARPXOQIVCZEVLYHMSCPUCDGNPIIQUIOZEWXJVVZWDLRCHOCUARSWXIRFFEEYFBHKZMEDRGZTAOWCOSTLPJWGXXNBRKEHYYVVIPNYOQAEGSJGPQZUBGTHHNMKZQLODNDTKVUOIAZXVFQOYUQAMKFW");
  tmp_tmp_msg_0_0.value.assign("BUJKQEGWLAXYQSEOKODYVPMISWNAHYLHUXGCPQRXFAPBQACOZHCCCJHNKSRTIQSMYWJOSTJFVXTAGVVNBLWMYTNMCKNQDBRQUGYJFPDPJFXRTHTMHMAAYBXKHFVFWGXILGEVYEPFKWKLPCGDPKULAEUTZWNBHVNPUDIZDSXOCZZORWIUINJUHHZZYJWOSWOSNCPSXKGMDEIZVJMBBEROQILEMLQERDJLFNABOFCERKRAZMIUGDTR");
  tmp_tmp_msg_0_0.type = 220U;
  tmp_tmp_msg_0_0.access = 90U;
  tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
  tmp_msg_0.start_man_id.assign("NGXMSTCTNVXELVGCGXDDSIERWPXXSJPOBJDEWFCFUTSMOHHRLLAWEZLDNBMGLLNBBSCIWKWJTATZAHPHJKPPAGUVHIWAUXAHIDOFVQMVAXJICZPMEYIZQFMVTPJQYOVJFWNYRUIIXYRSYEKQZQZNCSRUGFJLGUTEMUUESUBDFZHPSEDMNTTDCKNBRKDYXDMGBBWRVZJS");
  IMC::PlanTransition tmp_tmp_msg_0_1;
  tmp_tmp_msg_0_1.source_man.assign("PDLQZMNKNRIAZJWOSXWFUGPHHHIWXQWHMURKAMOKGTINAPJWBPJVQQVPRATSFZGFMVLWKGHYJLTNFPVTEKYNPFCYJBTZAVLCGGSVIUOB");
  tmp_tmp_msg_0_1.dest_man.assign("HXKMCIMSOEFGUQXGKULYYKXBQFEBZVDKNGEVCMZPFYTVCRNLWQCGFAGLUOKIVIQKZNEEPIMHVERAJMASYGGPMWULDTLHFXZVABBOJFTVUBSWRODILXUXYQGALNNKS");
  tmp_tmp_msg_0_1.conditions.assign("EQTEJWXZTHSKSGKJQMQXGGRGPIINZBSKYXAKWLSBPVPPTETFUANIZUVYHDTFAORHDDUUEHHYLZBCZCCJIVCRAVAMWQRMISWYEVOHRQBCCXDNMVYMMKAKBPIIIPLDJGDTLJTLBVSFEEYRMUFXHBLQVUOKQPJHWDMHPQOGCNVNJQWWTJHCOKVNUPODZ");
  tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
  IMC::Fluorescein tmp_tmp_msg_0_2;
  tmp_tmp_msg_0_2.value = 0.5841709796062524f;
  tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
  msg.plan.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EmergencyControlState - Serialization/Deserialization #0")
{
  IMC::EmergencyControlState msg;
  msg.setTimeStamp(0.48515874183054764);
  msg.setSource(42387U);
  msg.setSourceEntity(13U);
  msg.setDestination(65157U);
  msg.setDestinationEntity(114U);
  msg.state = 175U;
  msg.plan_id.assign("QZTZQTHMKGWFXAFKZPILJWNEBLDZGUQJYFUUIOFAMVFZNRVBBYRTOMEOALVDWZUWVBOGENIMPXCDBIYEIXSHMDSOAEDBUOJINTUKDJZCWMEQKDTBDARQODLNRWYEUIRHZSPKXEYWQTCQPGKLXFTWYJYHUQNPANGRYKPNJLTHOABNCZDHHCAQIUCSKSOKVFSMBVJELVCYPJSJSNPECSWYGRRIFGKGCSHLLCQZOPXHPFXXHWLABMJU");
  msg.comm_level = 91U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EmergencyControlState - Serialization/Deserialization #1")
{
  IMC::EmergencyControlState msg;
  msg.setTimeStamp(0.882197581973341);
  msg.setSource(38025U);
  msg.setSourceEntity(208U);
  msg.setDestination(37259U);
  msg.setDestinationEntity(122U);
  msg.state = 133U;
  msg.plan_id.assign("NHGXBBGHNDSPKTZTRYRJWVROFFUHARIMUXMERBTCXRJOZLCWILDAVCRGQWVVPPJHWVDQBYOIEUCENUVFEPDKBXVYVOQTQPHLZSTZZDCDIBYTAFNWWXTKXNKLBIWUDDOSMSLEXSBUGZFTMYJIGIGCTLANHCYGKLQCJWU");
  msg.comm_level = 198U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EmergencyControlState - Serialization/Deserialization #2")
{
  IMC::EmergencyControlState msg;
  msg.setTimeStamp(0.7801296708143225);
  msg.setSource(27526U);
  msg.setSourceEntity(66U);
  msg.setDestination(63696U);
  msg.setDestinationEntity(253U);
  msg.state = 13U;
  msg.plan_id.assign("EGXNKGLMFMYOTGMOJEKFEKBDOCFYFGKZMUDJXZTAISZONJJUNGWIIINHKZVDZWESLPEBREBQNIHMPIVBCFGQJBTULQBCCNDLADBAFCSFHPFTALQHAOPCIYRGWVWLVTYNPRMHKNXOMRUPBYDKDEZVNXQQARCSCDSHIMHWMSPYHMIXDWNQXUFXYFLHYSRUZAJOS");
  msg.comm_level = 66U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDB - Serialization/Deserialization #0")
{
  IMC::PlanDB msg;
  msg.setTimeStamp(0.16140983542674825);
  msg.setSource(26964U);
  msg.setSourceEntity(231U);
  msg.setDestination(23899U);
  msg.setDestinationEntity(11U);
  msg.type = 159U;
  msg.op = 130U;
  msg.request_id = 41432U;
  msg.plan_id.assign("SWOXQBIHDOPVBNDZJCUGQGQYLZDMJKFUDFRSECMIFDFKLSFBHEOHRXEHQOMOHMQVTQJGEXRTOZJSRLDECWFXCKANAMAWIMGLHQADONLCUMOIPJBKXURYEZVRVQXNST");
  IMC::OpticalBackscatter tmp_msg_0;
  tmp_msg_0.value = 0.5016458603961881f;
  msg.arg.set(tmp_msg_0);
  msg.info.assign("GYHKLQADAFDSXXMWJCTRGWYYAVPRGJKETNUMLCLXGXGTLYOJCUIMZJZBMPXTDIEIZDAQVCSCRBXROENVRKJHVQNQQIZFJYDPXIWH");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDB - Serialization/Deserialization #1")
{
  IMC::PlanDB msg;
  msg.setTimeStamp(0.30443197970488123);
  msg.setSource(64605U);
  msg.setSourceEntity(153U);
  msg.setDestination(60047U);
  msg.setDestinationEntity(190U);
  msg.type = 88U;
  msg.op = 28U;
  msg.request_id = 18018U;
  msg.plan_id.assign("NIYACOWEUESTKWVQEJAJFVLJAAUXTXIYTFVCKZTJEBEQGLLZLEGBTNOHCLOJBUNMSZKNSGPFHSPCVQLQAHXTCWGQMZMBPIYRMKFNOOBSERXBZKGSRENDGVEJZJXDMMYNUQORTSOGXWTQUYXWMCYHWPRKJCHQJALYLDWCFVIVHNIXPZ");
  IMC::Chlorophyll tmp_msg_0;
  tmp_msg_0.value = 0.3280260838290241f;
  msg.arg.set(tmp_msg_0);
  msg.info.assign("NHFSTHGVUYNQGNAJGUXKWXMVQFFMDPZCQSPNJXZHIFZLKANRKODDHBWZBUOIUIRXROOFNSEZCULALMJPNZVVHREURWDUECWKMFNMKOASXZVXXOGYFJVRSXECQAFWTZJRVLVLWJKLUPJIPYECHEQBORPAYPIXIIDLEJKUTMGIGMSSRZEM");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDB - Serialization/Deserialization #2")
{
  IMC::PlanDB msg;
  msg.setTimeStamp(0.008154464608507439);
  msg.setSource(50192U);
  msg.setSourceEntity(243U);
  msg.setDestination(61778U);
  msg.setDestinationEntity(187U);
  msg.type = 163U;
  msg.op = 122U;
  msg.request_id = 36740U;
  msg.plan_id.assign("UYSTLMPBHHHQSZRCNHYVIBQGYQZOXCGHGAEBLOSBLPNRSVQTIILXUJZVKVDEKDOAKGGCXDAFPTGEFWRSXVVMHJJMJEMWSMJCRLDNBQEPBIOJQYXNDNBUTSQKIFBXVADFIAYDWDUEFMVJPPLEXRMNHCNTZDTSCGLBZPVDZQJMNKWH");
  IMC::IridiumTxStatus tmp_msg_0;
  tmp_msg_0.req_id = 7948U;
  tmp_msg_0.status = 213U;
  tmp_msg_0.text.assign("JFSBGALOORKWYFSBIADIJQHMAEZMWDAPFFZASJDRCXKIRZFNCWIQGVKTUCNUMZARAHGAMUEKRBJPVQJSLYFHAVLUIURDIGTWPBECLLBPVRKREMGVETETNJXLPNEUAVNFDULFTCOQIROIYKQPTWXHTZDKNYZYVODGHSXCQDDHFQCOUXXFXTMZXBIHOJWZTO");
  msg.arg.set(tmp_msg_0);
  msg.info.assign("DZAPSSSJPXXIWFAZONHKQUMIBMDDUJQDINJHSKLWLEBNOWRYPOQGBLLAZTYQCRUCYOXICCQKVGPCXEPFZGEGQHCVQIAJBWMDYWYKUFURJERZLDPPIHPUSUOVNRNFQIBKHHCTTVTLBUSYVMBTICGVCFASMFOESHRRLUJDFMDRBGKTYHOJTXETAOAYMGRPXKAODWQEEZRZTFFVBMBQNJCOWYGYZFHNIZZAPXGLLVXTSWXWWNK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDBState - Serialization/Deserialization #0")
{
  IMC::PlanDBState msg;
  msg.setTimeStamp(0.8574989424971143);
  msg.setSource(41276U);
  msg.setSourceEntity(121U);
  msg.setDestination(57775U);
  msg.setDestinationEntity(204U);
  msg.plan_count = 51590U;
  msg.plan_size = 155778731U;
  msg.change_time = 0.07980310409074154;
  msg.change_sid = 50437U;
  msg.change_sname.assign("TLIDSQQGRYHYIYOZOXUYSXVVPOTFVYROCNFJNSUTEPVEQIFTJXTYZGLVDGWWKUVZUNIMYHJFHVKGSWKBRXJQYFSVKQMMXBSZARZCCLUEKHIBMEHJRECEWWTMKMKOEAARGNLBZAUGHLDQRGBLOLDBNEDCDJFOTCJLGZHDPPPEUXMSARFAJOKNPYKQLNWMSZ");
  const char tmp_msg_0[] = {120, 104, -104, -74, -52, 80, 14, -98, 38, 24, -80, -74, -123, -42, -121, 89, -114, -40, 90, 11, 28, 30, 2, -50, -97, -10, 34, 89, 13, -14, -6, 119, -91, 114, 114, 99, 55, -118, 46, -65, -123, 65, -123, 60, -45, -69, 93, -120, 42, -85, -93, -98, -110, 34, 97, 21, -28, 47, -64, -21, -39, 81, 123, -97, -91};
  msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDBState - Serialization/Deserialization #1")
{
  IMC::PlanDBState msg;
  msg.setTimeStamp(0.45559606290935106);
  msg.setSource(29493U);
  msg.setSourceEntity(219U);
  msg.setDestination(5477U);
  msg.setDestinationEntity(42U);
  msg.plan_count = 58210U;
  msg.plan_size = 2088498751U;
  msg.change_time = 0.9529254243614519;
  msg.change_sid = 48035U;
  msg.change_sname.assign("YRJLXNSHQZXGKCBFIHSDXLIGHMDUTTGHWUFKIQCMTYZGKLGKOBIAWTYSQUWPJEDABZ");
  const char tmp_msg_0[] = {15, -49, 96, -63, 119, 110, -24, 16, -2, -30, 38, 79, 120, -39, -60, -113, 21, -15, -47, 20, -92, 45, -109, -95, 113, -5, -83, 105, 69, -57, -36, -53, 123, -36, 41, -97, 18, -95, -105, 69, -16, -125, 117, -44, 96, -112, 108, -61, -4, -28, -78, -114, 37, 57, 121, 11, 27, -51, 62, -71, -108, 12, 71, 20, -22, -102, 106, -61, -99, 106, -4, -114, -49, -48, -104, -4, -21, -58, -8, -11, -51, -120, -80, 51, 7, 53, 19, -63, 30, -113, 49, -57, -92, 72, -10, 53, 72, -11, 62, -64, -79, 24, -57, 33, -56, 111, -100, 125, 26, -56, -25, 35, 121, 117, -83, 62, -48, 72, 82, -68, -39, 119, -112, 72, -81, -1, -92, -68, 110, 15, 86, -18, 97, 59, -124, 64, -58, -37, 55, -49, 48, 106, -37, -47, -101, -48, -64, 21, -41, -38};
  msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDBState - Serialization/Deserialization #2")
{
  IMC::PlanDBState msg;
  msg.setTimeStamp(0.03945940732949127);
  msg.setSource(56528U);
  msg.setSourceEntity(130U);
  msg.setDestination(35976U);
  msg.setDestinationEntity(212U);
  msg.plan_count = 61475U;
  msg.plan_size = 1887100162U;
  msg.change_time = 0.3032570410686536;
  msg.change_sid = 57797U;
  msg.change_sname.assign("MWFNXTEVLKUOSGKKSYZAFFFELFLCTQDVYAJQTRJCFOWVIPJWEVVICBTPBEZZJNZPAFTWPFRZMBUTSGHILXCDJAHTLKDRDKHIOYKQUUNQJOCEORGKJCNESIRUYNTULXPGZYAARRFWPBBDHAYQV");
  const char tmp_msg_0[] = {51, 108, 99, 52, 21, 24, -75, -102, 63, 78, -20, 30, -65, 52, -126, -79, 69, -125, 34, 64, -6, 123, -90, 20, 75, 29, -120, -25, -78, 4, -78, 41, 75, -61, -106, 12, 96, -95, -34, 10, 54, 79, 125, 31, -60, 104, 100, 39, 98, -124, 72, 58, -13, -52, -62, -17, 57, -45, -85, -122, -87, 77, 114, 19, -52, -108, -54, -115, -124, 79, 58, -94, 65, -42, 26, -89, -69, -22, 44, -27, -102, -37, -126, -93, 15, 52, 75, -99, -36, -110, 49, 66, -79, -7, -48, 42, -59, 7, 71, -120, -37, 121, 96, 5, -61, -70, 70, -54, 37, -115, 45, -11, -71, 96, 27, -24, -124, 5, 9, 51, -10, 75, -96, 47};
  msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
  IMC::PlanDBInformation tmp_msg_1;
  tmp_msg_1.plan_id.assign("UBTDDIQCDPHOMAFRVZXMDDQUYRJJPCYRNITMBWHYGRQHVRZLXEXFWJUISKCLREQSJTQEGYBJQGJLATNMUOVETNMKPXTPOYXWFBWVAUKQJHNSIJKRAAAFNFPXJMRLCTSFKLEUGBCIAQDAKKBZFAOZWXMHGZYNUBXZECXFXHKNPHLMOBIIMUWCNESTWCSSYDWRSKGIPSNVLVZMUECVZVNIEQOZCY");
  tmp_msg_1.plan_size = 39873U;
  tmp_msg_1.change_time = 0.8756713650349396;
  tmp_msg_1.change_sid = 1926U;
  tmp_msg_1.change_sname.assign("ULRVYTIRCBQEHSQPSJTAEMBZCUKGEBXFMLVBGEVSRNHMYACTPMYXSLORHITXDKOFKBLZNYDODZWCWJXHWGVMNHEMTNAWYRSJASFTEVYREWDXUJIEPSBIGXGKQMMFKIXCVJKOOOLOKJWDFLGZYUCPQZICPLUVDPXXHNSLUNROTUBJUW");
  const char tmp_tmp_msg_1_0[] = {9, -117, -61, -121, -32, -29, -24, 51, 116, -104, 53, -72, -118, 55, -90, 1, 98, 18, 71, -111, 110, -46, 96, 24, -90, -103, 52, 51, 48, -18, -94, -54, -88, 81, 75, 41, -20, 35, 45, -10, 50, -26, -115, 40, -10, 95, 4, -6, -113, 67, -66, -45, 83, 82, -58, -116, -119, -61, -2, -14, -64, 60, 80, 26, -86, 120, 50, 85, -126, 123, -104, 83, -88, 64, 91, 36, -17, -63, 116, -56, 21, 37, -72, -76, -44, -13, -121, -41, -98, 67, 31, -22, -30, 123, 64, 108, 51, -40, -64, -128, -119, -32, -33, -15, -83, -5, -23, 81, -18, 43, -59, 41, 23, -58, -36, -43, 28, 83, 83, -85, 121, -114, -118, 10, 29, -126, 48, -124, -80, 23, -24, -79, 66, 94, 112, -116, -40, 85, -65, 86, 13, 16, -115, 88, 34, -101, -9, -46, 123, -29, -66, 101, -111, -109, -126, 107, -72, 54, 42, -83, -81, -103, 59, 114, -22, -84, -80, 76, 19, 89, -28, -31, 21, 123, 71, 27, 12, -78, 40, -106, 98, -93, 88, -14, 64, 123, -122, 123, -48, -44, -119, -112, 11, 5, -114, -77, -106, -34, -4, 89, 59, -54, -128, 31, -65, 17, -121, -83, -82, -4, -124, -120, 60, 69, -9, 45, -80, -100, 57, -22, 55, 44, 102, 17, -85, 88, 119, -31};
  tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
  msg.plans_info.push_back(tmp_msg_1);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDBInformation - Serialization/Deserialization #0")
{
  IMC::PlanDBInformation msg;
  msg.setTimeStamp(0.4364827917497677);
  msg.setSource(39721U);
  msg.setSourceEntity(4U);
  msg.setDestination(46474U);
  msg.setDestinationEntity(208U);
  msg.plan_id.assign("ZGXSBDLEUIPJGIDQHPJTUAOCREERPXANTUJVXKBWLNAJWNTQCVWMBNATAQFHIBIVMTGVCPLENYXKEODLNURZYGXQZYUSKYHDFZMEAQBPRDOREDFQOXCHLILICFLSUZMQFCWMLVQTIRPDYBHWZHKSJSWOCPJSGKCQDYYYFYPFDWPUMTUIVHRWCNOOAGSSEOQM");
  msg.plan_size = 53944U;
  msg.change_time = 0.4846620429640889;
  msg.change_sid = 24298U;
  msg.change_sname.assign("MKWIVDIWKNYZIPTWTBRSHKHXCPUERRSCSEUAMLXEBRXATWZMZYQEDZVAJTSSPBFQFOKAFOLRXLDFGJUNRQRCNIGQEVHELWNHKYQMLDKZETMAJOYIAGVUIOUSAADWRIBJOJYVIMNBFGVXOSNFGQGOLMUTLAGNVCXPGPHMKUESTHSRUGQHEHWXNDLUKJPOGXBTBWYHCTQRACPSPQVFZJWZJIODYQWFCIPXKPZNCJNBZYDBEDLCKMDTCFMYBO");
  const char tmp_msg_0[] = {-15, 68, 115, -106, 120, -76, -115, -20, 101, 88, -91, 63, 5, 20, -90, -11, -61, -63, -123, -86, -62, -48, -33, -67, -29, 35, -59, -7, -53, 30, 123, 105, 78, 13, -2, -86, -97, -54, 17, -29, 31, 52, -57, -63, -24, -38, -97, 48, -19, -106, -3, -28, 54, -112, 71, -58, 68, 35, -71, -87, -16, 50, 63, 126, 87, 108, -87, 21, -14, -9, 65, 104, 28, 84, -47, -52, 113, 62, -122, 123, -20, -114, 0, -11, 0, 70, 88, 114, -9, -5, 99, 29, -108, -116, 95, 33, -9, -10, -97, -34, -114, -26, -20, 83, -52, -26, -85, -63, -17, 24, 118, -51, 61, -65, 61, 82, -122, -108, 91, -46, -110, -47, -106, 31, 7, -71, -115, -61, -127, 74, -10, 76, 73, -126, 121, -47, -121, 124, -31, -53, 26, 119, 12, 79, 123, -127, 26, -123};
  msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDBInformation - Serialization/Deserialization #1")
{
  IMC::PlanDBInformation msg;
  msg.setTimeStamp(0.2240777953839851);
  msg.setSource(21641U);
  msg.setSourceEntity(249U);
  msg.setDestination(41577U);
  msg.setDestinationEntity(195U);
  msg.plan_id.assign("HGYKGZGCGNHMQYSKDDXRIQWILLGPRKULJJEZPDOYCRPVZHBTERMMZVUQOFPPDLHVUZMNMXCJIWSULYSBRQXIIOVNAEFYIDAAYFKAMOZEBPXGOYGKVTGRSTLMCPZQFDPUADRMQWXSINHUNVKCXWSAAJXJJWQNTNQMGWBUKKUXRFCTBAQBFOCEHLZSTELLJELITCGMNHQDFREPTOXCIJNKOBKXOWUJUVZ");
  msg.plan_size = 37755U;
  msg.change_time = 0.6146028900285895;
  msg.change_sid = 5983U;
  msg.change_sname.assign("YPWEZRKIQBLSANZQTWGNPURLROGMVIACPLOERUXLOHUNUYJYCJLEAIWSCFSIBGVXTOGPIXCQNADXXIDJKISBUOKTDROLENVKYTZCPTSVCFRJHTAIJHMLSFOYGFTEEMSDOKBWQVQNBRCSPYXKCFVMNJYXHWPBZHRNZCFDEWU");
  const char tmp_msg_0[] = {53, -51, -109, 76, -7, 104, 57, 64, -44, 11, -55, 116, 90, 99, -127, 7, 79, 12, 105, 75, 89, -91, 65, 23, -72, -41, 100, -76, 116, 62, 121, -100, -119, -120, 126, 11, 118, -45, 13, 93, 120, 31, -40, 121, -37, -51, -104, -57, 87, 117, -127, 28, -42, 66, 123, 35, 116, -34, 62, -81, -114, 69, 10, 4, -101, 51, -57, -118, -77, -10, -111, -102, -73, -92, -90, 101, -6, -70, -46, -102, 117, 74, 102, -52, -14, 108, 55, -57, -81, 41, -7, -65, -66, -85, -39, -14, 25, 78, -66, 120, -22, -44, 99, -122, -35, -5, 117, 52, 61, 17, 35, -75, -115, 29, -34, -8, 51, -47, -35, -11, 118, -13, 120, 86, 56, -121, 22, 67, -58, 58, -32, -95, -39, -125, -6, 68, -1, -121, 24, -128, 45, 21, 13, 82, -24, 112, 42, -16, 55, -55, -16, 41, -41, 44, -16, -88, -95, 123, 53, -123, 43, 13, 56, 123};
  msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanDBInformation - Serialization/Deserialization #2")
{
  IMC::PlanDBInformation msg;
  msg.setTimeStamp(0.6236196236619725);
  msg.setSource(1687U);
  msg.setSourceEntity(157U);
  msg.setDestination(25482U);
  msg.setDestinationEntity(83U);
  msg.plan_id.assign("FZJXWKOSHECATKAPXGELELHICKBVLHBZAUPJFQGVQGGIRGYICWWOXKQRTPBPOWDKEGQQOSPNHYZVVCQCUUERGQVAALGAEJTNLRMEFDHYMNXWBDVWRUBFXPMRADNPPIAJHJWDSVJJXMIJNZKMZQTHCETCUNJXZVPTHEDHMRTIPLKBVNOGDSUKRRJBXARDMYBFLSFUOLYTTLHNSBDZLYBQKTUFMCWFQYOIZCNYEOIZNAYUOSOXFMSWMSWI");
  msg.plan_size = 4480U;
  msg.change_time = 0.7171591446976644;
  msg.change_sid = 15991U;
  msg.change_sname.assign("AEZGAAQUKXCODHVWTCYVQUMQZGICEVFOQIFJWTUXPJCYDNWLZZPSJGYVIAFNDSVJHFK");
  const char tmp_msg_0[] = {51, -9, 31, 117, -15, 71, 23, -82, 73, 126, 78, -48, -106, 80, -58, -128, -1, -101, 19, -11, 9, 71, 19, 44, 79, 29, 10, 11, 55, 56, -8, -51, 57, 101, -103, -92, 103, -18, 57, 79, -46, 28, 52, -88, 111, -115, -77, 35, -65, 62, -100, 76, 98, 54, -66, 7, 14, 94, -110, 13, 89, -90, 112, -55, 80, 57, 62, 87, -85, 74, 26, -63, 63, 53, -67, -121, 20, 85, -87, 52, -98, 24, 89, -32, 113, -42, 124, -39, -99, -101, -15, -45, -48, 37, -5, -45, -19, 119, -94, -126, 24, 106, 117, -29, 93, 58, 78, -68, -42, 102, 79, 90, 19, 83, -115, -15, 99, 38, -97, -7, 99, 107, -101, 20, -41, -7, 94, -14, 74, 95, -90, -120, 95, 121, 95, -87, -8, 96, -83, -113, -42, 72, 18, -2, -93, -121, -39, -82, 28, 35, -33, -3, -91, -82};
  msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanControl - Serialization/Deserialization #0")
{
  IMC::PlanControl msg;
  msg.setTimeStamp(0.511745182865002);
  msg.setSource(10318U);
  msg.setSourceEntity(119U);
  msg.setDestination(40183U);
  msg.setDestinationEntity(14U);
  msg.type = 197U;
  msg.op = 81U;
  msg.request_id = 61143U;
  msg.plan_id.assign("HHODKUFOOTMQLINIUNOQUEHVJIORJBEZWFBWPCMKEBV");
  msg.flags = 40418U;
  IMC::EstimatedState tmp_msg_0;
  tmp_msg_0.lat = 0.018115429782630366;
  tmp_msg_0.lon = 0.334859544459464;
  tmp_msg_0.height = 0.6806471435779383f;
  tmp_msg_0.x = 0.8246828369485221f;
  tmp_msg_0.y = 0.07412312100600671f;
  tmp_msg_0.z = 0.668110417134158f;
  tmp_msg_0.phi = 0.09039763278759749f;
  tmp_msg_0.theta = 0.7174025849794708f;
  tmp_msg_0.psi = 0.0010484210605683497f;
  tmp_msg_0.u = 0.34054747822554354f;
  tmp_msg_0.v = 0.9567855926658833f;
  tmp_msg_0.w = 0.5704261080624917f;
  tmp_msg_0.vx = 0.23039869525448975f;
  tmp_msg_0.vy = 0.5721135435677426f;
  tmp_msg_0.vz = 0.2524377869291794f;
  tmp_msg_0.p = 0.29655841984668396f;
  tmp_msg_0.q = 0.3597051327212134f;
  tmp_msg_0.r = 0.020709677730980647f;
  tmp_msg_0.depth = 0.6711555056616217f;
  tmp_msg_0.alt = 0.48565057927472877f;
  msg.arg.set(tmp_msg_0);
  msg.info.assign("RCBTIHTSXNCSU");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanControl - Serialization/Deserialization #1")
{
  IMC::PlanControl msg;
  msg.setTimeStamp(0.5613272563196008);
  msg.setSource(64984U);
  msg.setSourceEntity(151U);
  msg.setDestination(46622U);
  msg.setDestinationEntity(165U);
  msg.type = 63U;
  msg.op = 190U;
  msg.request_id = 17488U;
  msg.plan_id.assign("OZKZOWZMFVUKIEOXIENAXCKRHQUEPNRRDEAPTSMLWAJSIDCWWXKZSPGYOYBVPJFCLVPWVAFXLUYDCRDVEQHLYWIRXGFYNSTQNMDBDKCJEJZCMZLMASMLAPYJHTWUQUBDBXZAEQPSNUKKNRHXIEQVVDWHFNYNQWBTACSLJQZUSMUFHPYPXBGHJMOGGXAFMLBHNJQVIT");
  msg.flags = 718U;
  IMC::DesiredHeading tmp_msg_0;
  tmp_msg_0.value = 0.5880624782423548;
  msg.arg.set(tmp_msg_0);
  msg.info.assign("RZBKBSWNMRYEJPXTQFMKLPWSTPCSVQECIUPTIXPZEZIEWTOJDZGLFDCARVXVVLRMOBHXBTMYQBZDQJGFFFYOZOOSJQMGDQYASXCWYRBMTVBAYCWADBUNGJDSONCJEEZFNQWOTYDFKAXRGGIHYHTMZIJJOUIYXLPCKAUZNFWHLLCRKGQNPHUKINAEUZKXIVOJKTWMKXMLUGSHGNPUEAABDHWGR");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanControl - Serialization/Deserialization #2")
{
  IMC::PlanControl msg;
  msg.setTimeStamp(0.49467238870585273);
  msg.setSource(44030U);
  msg.setSourceEntity(21U);
  msg.setDestination(36007U);
  msg.setDestinationEntity(63U);
  msg.type = 194U;
  msg.op = 238U;
  msg.request_id = 49727U;
  msg.plan_id.assign("ZEQLGGASJCAMXNLSQBOOAUTIGYLEWDKELWIIDIXEYMJKNDIYLJKKDPCRHBSVKQVRSRWFEBQULKRBTBZYFCNRDIHZZYKZZWYWGSGCUUQOOSYRMSCWVAOLGMKXGVHYFASHOWIJTWSVJTMDFNPEFRXIUSOXDGUFVQTHHBICUYNJ");
  msg.flags = 55814U;
  IMC::Sample tmp_msg_0;
  tmp_msg_0.timeout = 32720U;
  tmp_msg_0.lat = 0.46775451534896895;
  tmp_msg_0.lon = 0.9175585370835551;
  tmp_msg_0.z = 0.8764786131353688f;
  tmp_msg_0.z_units = 103U;
  tmp_msg_0.speed = 0.6842274376888763f;
  tmp_msg_0.speed_units = 23U;
  tmp_msg_0.syringe0 = 229U;
  tmp_msg_0.syringe1 = 174U;
  tmp_msg_0.syringe2 = 61U;
  tmp_msg_0.custom.assign("PHSZQDQEOLIMKSMZPHWGGPEJRZJIBZCBLGXDAUT");
  msg.arg.set(tmp_msg_0);
  msg.info.assign("SHMEVMHKVETZGXTKEYPVSPELTADKDJJZSQCMXQONSHCNRHLNGAAIPBDZGXPBELDCTWCULRMBQRIJDRXILTADJCUEEFBKFUPPSQJNSWXVMYGFSUZDFKDIJUGNWQQEULUJKXJODBMMQKLMBAUYTEFWUYWYYSXVJWCZRWFHVITPSTMZOBICCSGANHCAFROJYRKEPYGZKVLVGM");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanControlState - Serialization/Deserialization #0")
{
  IMC::PlanControlState msg;
  msg.setTimeStamp(0.4340980419502809);
  msg.setSource(15893U);
  msg.setSourceEntity(75U);
  msg.setDestination(54409U);
  msg.setDestinationEntity(101U);
  msg.state = 135U;
  msg.plan_id.assign("VJQXEHMMNIGYXTOHXZVBALLFRUHDRFUZTJETOKSLORMVSNYCBCLRWDKWPSGCUAJBUZGGAFWDQGTXNEUPTDQCFXYIYLNFBMALKCZWBPEPRHDMUAXAHWNFXQCSEISIYWQFVDZZARLSUPYGIHROEHLPKNWVBQFV");
  msg.plan_eta = 793503036;
  msg.plan_progress = 0.5460775756843489f;
  msg.man_id.assign("OLOFVPTCCCNVWTHTIWDJZUBKSNHGZRLMAQLATEWWGWRVEHYUVPTNMGQMFDZYXYBMFXZVQFCPULWCAJDUCMAVACTMLBUQGREUJISKENSENSQSMBDTWDFUNFXFHSXKPOLABSSQOGQIPTQCAMPJNEIYOOWITOVVBKYJEZKDMRRGJFXPXKFQBHIXGQKD");
  msg.man_type = 55204U;
  msg.man_eta = 1391876487;
  msg.last_outcome = 215U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanControlState - Serialization/Deserialization #1")
{
  IMC::PlanControlState msg;
  msg.setTimeStamp(0.04536667117555404);
  msg.setSource(24780U);
  msg.setSourceEntity(62U);
  msg.setDestination(49585U);
  msg.setDestinationEntity(221U);
  msg.state = 224U;
  msg.plan_id.assign("FGRXEIJBMOAZLUATFOSAQYXDYOYDVVRHLZWOXESUSVOA");
  msg.plan_eta = -1134683930;
  msg.plan_progress = 0.06266265905775392f;
  msg.man_id.assign("YGNBPIYRBMRAOCTKMFMFHVTBFUBIJTAVTGECWTFNTHGSPANVGFQARGSSYQWLERDQDQMBZOHICKPILUBDSXFPIDQVFLSOLZPZHYP");
  msg.man_type = 17615U;
  msg.man_eta = -523306493;
  msg.last_outcome = 191U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanControlState - Serialization/Deserialization #2")
{
  IMC::PlanControlState msg;
  msg.setTimeStamp(0.44715899495538336);
  msg.setSource(62866U);
  msg.setSourceEntity(161U);
  msg.setDestination(54059U);
  msg.setDestinationEntity(85U);
  msg.state = 129U;
  msg.plan_id.assign("GNVMDRRFSVTTKTSRRYENUJHVIOFKOZGFBBAQXOLACEUQZPMLCIHOCKTBVHIUYDZLBSNPCEMLKJZGNMUVHKHGGDLVQTDDLGPBPYWSMAAISSZBOOUZYNNXELUPIWGHFYJRERWDIUTNDNVBBTSTYCWYFJVCOQRLRXLACJVFYXABSWXOJHUYJXSJIMXRYZWWCIPJFCPMNOOLXNP");
  msg.plan_eta = -478190132;
  msg.plan_progress = 0.989901153786062f;
  msg.man_id.assign("IZHFEUNCTPAYAIAQTEOCHRJRNGCLJEVJEISLBXHIRDBVORCOFSWHIHFKSEZUZPDAQVCMPERMDIKVWXMFSXQTAJWFF");
  msg.man_type = 18635U;
  msg.man_eta = -1011500639;
  msg.last_outcome = 244U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanVariable - Serialization/Deserialization #0")
{
  IMC::PlanVariable msg;
  msg.setTimeStamp(0.5044454970830025);
  msg.setSource(45688U);
  msg.setSourceEntity(65U);
  msg.setDestination(52937U);
  msg.setDestinationEntity(226U);
  msg.name.assign("CJNDVGZTTFTQOGQIUARQVXKUNSHCAP");
  msg.value.assign("UVDOEWWQVZCDUAEVYMRPZAEEORJRFIKDALWLUNQBMFUMABIIPZJVFTJQBVHPJNPSKOGRZQMTCUSJXGNRANYFHJFCAYOS");
  msg.type = 56U;
  msg.access = 195U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanVariable - Serialization/Deserialization #1")
{
  IMC::PlanVariable msg;
  msg.setTimeStamp(0.8394603546644838);
  msg.setSource(39198U);
  msg.setSourceEntity(183U);
  msg.setDestination(37630U);
  msg.setDestinationEntity(94U);
  msg.name.assign("CHXZAFXTHQEIVAOFRPNUETSAXGLKZOBFYNYWTXLECCPEPGGALZJRPJUZIZZCQFPUQYUYCSMSLCGUUWIBJHOIGKMTRNFOWWXTDZNJMVAKQWDXMYJRPZKFBQHXWDAHXTNCSVVIWRLNWAGNZUMVJBGWVUUPVYGIQFAKSUTELZHXCPHJYROBRJRDBJCHQLWISIMDKKPLEITSBQODLSMJDBOBNSEOPLMGEVHRTGAXMFKKDTRAOEYFQHDSVQ");
  msg.value.assign("ZEGXNNPZOWLTZGRVXUVTYKWHEVNQNGBRBAXEVSUCMIBCAIQDELI");
  msg.type = 129U;
  msg.access = 136U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanVariable - Serialization/Deserialization #2")
{
  IMC::PlanVariable msg;
  msg.setTimeStamp(0.8500223659882218);
  msg.setSource(2676U);
  msg.setSourceEntity(154U);
  msg.setDestination(12057U);
  msg.setDestinationEntity(27U);
  msg.name.assign("NVGFTRNBPMSGJLQNCUKFLXLZLXJINRIHSWHQTAGRPBNMOREZEXOVAUUUFFUZMWIVUPIMYTTMAMDDBJSAWHCJYHYLWIQTCMJCECYXQOCMWETKMEJFDAZDWRRXDYVFAIWBRZSOTYAIAJHKBIZCEKJQCXTAOPBEUGDEELLZLIGHFHDTVVGTZSKPVRNRCMENKAUK");
  msg.value.assign("KKDAVDHTNVGICDXIKNFYPSUSGQKZVRUGAZNKPICIWZDKFZLOTABQHJSOKECHDLTXSJAQMDPGCCLABYHMYWGZULMZUDMSSBMZVUKJBBCRHUJBIZXOAJFWPDQYIYLMFUTINEFN");
  msg.type = 207U;
  msg.access = 0U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanGeneration - Serialization/Deserialization #0")
{
  IMC::PlanGeneration msg;
  msg.setTimeStamp(0.38091210756771277);
  msg.setSource(43790U);
  msg.setSourceEntity(244U);
  msg.setDestination(48635U);
  msg.setDestinationEntity(68U);
  msg.cmd = 23U;
  msg.op = 38U;
  msg.plan_id.assign("IYJBVNIFRKMVHRGFTSYPEAKUBOVYHLVHFLNGMXUPRQMBOOJNJAWWLHODEYLYVAMHZMCIZTVAEGJEENDZONWBTWQIFIKBGJJZRMXWXFTWHCILSAOGYOLLXXCUJJKIBEXQQITDROZZBXBKWVEPDUNUMCUQHQXHFACJFKPQMPEZRDZTSNPORFPCKQSYODPIVGGSSJNSTPTTDFDMCVSSGHALXKUPZGLWGWRFAEDUIDKTYRBVM");
  msg.params.assign("HOXLGQPICACHZTTWJNHDCHACLEUBYLIEBSEUPOMAJLEHUHSJKLFIJYAOOEZODNQVYQNFQZBZFXJPWUVMIJQKRMWLNUYDDGJTAQJZIBXHUEIGTZMYOSVWHPASMBRSRXWNBVWLWVMZYDGDFAZZUSKFSVMWUNKIXBNEVJRETCTA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanGeneration - Serialization/Deserialization #1")
{
  IMC::PlanGeneration msg;
  msg.setTimeStamp(0.5302485567102247);
  msg.setSource(47111U);
  msg.setSourceEntity(253U);
  msg.setDestination(37368U);
  msg.setDestinationEntity(173U);
  msg.cmd = 166U;
  msg.op = 176U;
  msg.plan_id.assign("IDDXCNYNJNRSXGXUWLREPNCBEAYWLARKQHFYPFXESZAOVOUOGSQEUGVCTFYCXFWXTSZACULPJQNMXVFJUHPOWMRYGDKDVCZLUTIZABUEYYOHHMMBITIJQDENBCUPNHVOHZBRBKLFHZWAIFRKPDSREILOTAMWBCPGLPZIPQKQ");
  msg.params.assign("DLJPCCDNRVSBYVWSPEXNLQTMCRIKRAWFPOAHBJVFQFBQVOWZUECBEHATIUGLMMDTGKWYGSRSZPFHFFEXPDMXVGPSHHTKJYHBYIDTHOUDEAZKMRGWKCNAJGLEVCVJYFLLOIXNSJBPMLYBONUXNPCOK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanGeneration - Serialization/Deserialization #2")
{
  IMC::PlanGeneration msg;
  msg.setTimeStamp(0.4081924846191556);
  msg.setSource(28999U);
  msg.setSourceEntity(20U);
  msg.setDestination(23890U);
  msg.setDestinationEntity(0U);
  msg.cmd = 179U;
  msg.op = 161U;
  msg.plan_id.assign("SNUSYNEOMZSLTCUTDFAOJMFKJWDAOPPUOQGGSCOLUHETBVQLNWASTBIWBUARJXCCYKRKOYG");
  msg.params.assign("UZHFJKXOTVJNAAXAIWYCUEZMGLMDBRPTBIKNEXNDKMJAHCDQWCTLEOWLAOPOSVFRGCPMIKOVTTROJHXRWIDSBJYSJYKNCWQVSWDJPLSSYKRXBDNUEYNQWEPDPAPXQNTZCSECMVHNZGDVWOLPNVYOKGUJRRTSIDFYVRBGCYAJGXKMFZOZUIZAEFBHHLBPRZXOYSXQHCFGLMQUAUBNRWBFLGIMQMLIUEHZYTQTHAKGECJFDBWGIIHEFFXPMQZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LeaderState - Serialization/Deserialization #0")
{
  IMC::LeaderState msg;
  msg.setTimeStamp(0.6422166433368083);
  msg.setSource(45810U);
  msg.setSourceEntity(236U);
  msg.setDestination(28531U);
  msg.setDestinationEntity(130U);
  msg.group_name.assign("SKRXQUQJVYLCWTDVLBWHEBEAVKGIK");
  msg.op = 1U;
  msg.lat = 0.23523560096661333;
  msg.lon = 0.6586213519824526;
  msg.height = 0.2704623285412985f;
  msg.x = 0.9824952679157773f;
  msg.y = 0.5750996750657534f;
  msg.z = 0.42166548803958126f;
  msg.phi = 0.8717050665857486f;
  msg.theta = 0.6105733802476975f;
  msg.psi = 0.12141089030184915f;
  msg.vx = 0.21027993849744964f;
  msg.vy = 0.45212336903004724f;
  msg.vz = 0.9026572000593929f;
  msg.p = 0.8516878436522862f;
  msg.q = 0.019452473261703074f;
  msg.r = 0.4944170751804958f;
  msg.svx = 0.16080485279911416f;
  msg.svy = 0.869869624076174f;
  msg.svz = 0.5087334195056369f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LeaderState - Serialization/Deserialization #1")
{
  IMC::LeaderState msg;
  msg.setTimeStamp(0.9506510750487706);
  msg.setSource(59825U);
  msg.setSourceEntity(173U);
  msg.setDestination(1036U);
  msg.setDestinationEntity(171U);
  msg.group_name.assign("OURAGARYMCILBKZHYQCIMPPMZJORSJPDQEVZURUFAVNIKFHTJEIUXMLBIRXWQDKAVBHBHKIVBYDBLQWSHTZSZQRTEFJZKMCXBBLXDGGEDIOOLOYTQXVLRWPOUIFOGTNGVDDNQCLQGLSPDFAMXJTMWWKUSWMUKFVFECZCDNVZWJWYATSUUBGGKSKEMOQNPNRAFCCWAFKSZUHJTYPFIBEWDRSEHXTGCRPASHXLYTLGHVINEOXHJJ");
  msg.op = 52U;
  msg.lat = 0.747327346804389;
  msg.lon = 0.3324405453485556;
  msg.height = 0.11910193893249232f;
  msg.x = 0.222248773991349f;
  msg.y = 0.6343220614418419f;
  msg.z = 0.1426601916703355f;
  msg.phi = 0.6785524075476899f;
  msg.theta = 0.9761168851968682f;
  msg.psi = 0.42930400501976607f;
  msg.vx = 0.22221118064593126f;
  msg.vy = 0.12965528284355998f;
  msg.vz = 0.42380634005682716f;
  msg.p = 0.7508987823442317f;
  msg.q = 0.22827539407912123f;
  msg.r = 0.25414887566173505f;
  msg.svx = 0.6646187939268191f;
  msg.svy = 0.6607801417128116f;
  msg.svz = 0.549167179554782f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("LeaderState - Serialization/Deserialization #2")
{
  IMC::LeaderState msg;
  msg.setTimeStamp(0.9644624817445208);
  msg.setSource(31820U);
  msg.setSourceEntity(131U);
  msg.setDestination(19384U);
  msg.setDestinationEntity(63U);
  msg.group_name.assign("GTGZDUQVHMUHMJSAYVBPYGYPLVYMMZDAFSTEYMBNBLQIZKZWOFHWJBEPCDJARAKDJLCJNIPFGIQRQRXCVCPOWRANLHAJTXPAYGIRKRZYIOZWETCBWVJDBXPQSXYKOWVOVDIDLWD");
  msg.op = 102U;
  msg.lat = 0.9412968985364791;
  msg.lon = 0.9867207001364436;
  msg.height = 0.3717413717153818f;
  msg.x = 0.06047088547330082f;
  msg.y = 0.9378517107859221f;
  msg.z = 0.10711678233869204f;
  msg.phi = 0.6797008704252582f;
  msg.theta = 0.6079809002736043f;
  msg.psi = 0.6171379463081996f;
  msg.vx = 0.6811787174218923f;
  msg.vy = 0.4851920214918317f;
  msg.vz = 0.6775115183938155f;
  msg.p = 0.2884285726674911f;
  msg.q = 0.23980996611277516f;
  msg.r = 0.8920183655377975f;
  msg.svx = 0.5719659839900435f;
  msg.svy = 0.10126982762502446f;
  msg.svz = 0.10512393431628475f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanStatistics - Serialization/Deserialization #0")
{
  IMC::PlanStatistics msg;
  msg.setTimeStamp(0.010313411081936397);
  msg.setSource(19698U);
  msg.setSourceEntity(74U);
  msg.setDestination(9434U);
  msg.setDestinationEntity(11U);
  msg.plan_id.assign("KPSATXKZSARANBIWXXHHCALQUGDPLRVPJXNITUOHJGIZIVRRZJENDEHFLBYHVTEOIPFBDDDVBPUFVOYUZSDOTFGTCEX");
  msg.type = 197U;
  msg.properties = 133U;
  msg.durations.assign("MEMEHCKGPJQGVNZNWCUSUXSDTMAEZLKTCIJORVSVYXOQDTTRYRZWPEQQVOKH");
  msg.distances.assign("LGXMHITONXNAQRHCUQDKEPWAJHYPVNGGJOXKOIYJQJHGLLDHDWFBUWQVGFSKEQDETPUNWJUNOZNRPEBYBDCTOQSZIKFOUSPAYQTRVLZEVJDVUAEGBUBMPPHWCIHWTREWWRCWXKBRLVTMETESWQOZUHDCZAMKJSVXKMFBFXYPSANYFHDVXZMBITZSHXNIXJRLZCVKJCVXSRGCRF");
  msg.actions.assign("FNBQOXEEURTLLTXVPXSHPVVGDPJQFMHYRFHHUN");
  msg.fuel.assign("RMPUURKXZQXWRVXCMSKJQOAPFDRUKCFZGWETXTKQBSPMYCXGEKMHBHXIJIYDLPGUOUXXGFFVTKBKBWXADMNETTGMRABHVDLJMVTLZDZRSJOKWWBGAMNFCNZOIVKNIHHBFMGHDFCEOENMLEQPFWYEEQLOOQOA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanStatistics - Serialization/Deserialization #1")
{
  IMC::PlanStatistics msg;
  msg.setTimeStamp(0.11112947431215348);
  msg.setSource(22732U);
  msg.setSourceEntity(122U);
  msg.setDestination(21908U);
  msg.setDestinationEntity(24U);
  msg.plan_id.assign("SAZHGRHTYFMWWRXIKGUAZDNSXYAZGPUQEJULHJISTLMPQTDDFHAOWXVZQBMPYXKKKNXPRJHBREPOIYAZGVKOCBEERFQKJBERMMLIYWCXSZPLYGUPQFQXOWJNTYCQTNF");
  msg.type = 85U;
  msg.properties = 209U;
  msg.durations.assign("JNWTJAAGTVQLDNIPFOZFCTLPGZQQEFJT");
  msg.distances.assign("KMOBYJUVVLMAWECPTBLIFIRMYHDIYNMFDELXLHCIHNESVXHFXFLGKNQGVRVLNCRARLGIYGKHUQMUQDKNSVJKXMOJXDNVADQCCOMZAXSUPRFFLCFTGZSQAKHEKDDTRSMBSOAHPYZWBTUWPZX");
  msg.actions.assign("UVROGFZJSNEQZHOGWEZHZZIBGPQHGKRMSKEMGOLVBZSYXQKLUIARJSQQZTDZSWUEPRHHXAFIOTBWPMGIEVMJIAHNXOPF");
  msg.fuel.assign("UNMKGIOPTMQGFRJUIMYAWYDVJEWPTMZCPKPBSWPXJRTZOKBSSHVQDNMQXEVKGCJNLXJULGLOYQYITZCZSOKETCFZHEKEXXBDQAGJSIVHSWUOPVCPAMYNBFJALVRMFQGJTPGCZADZYWRDYNAPCFHFKZSHTBUXGZXANLDXHRDRLOQCSUYMHJUUTKNOW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PlanStatistics - Serialization/Deserialization #2")
{
  IMC::PlanStatistics msg;
  msg.setTimeStamp(0.6661364967853012);
  msg.setSource(6954U);
  msg.setSourceEntity(222U);
  msg.setDestination(3248U);
  msg.setDestinationEntity(7U);
  msg.plan_id.assign("RJROOQIRBWIXTAZWMOJKLPOKLTEQ");
  msg.type = 14U;
  msg.properties = 69U;
  msg.durations.assign("VMIZQEKTMJAPSVOQKWMONKUSSOAGBXVFQRCUBCXKXLIVUDDXHLZPOMCFBOFXNAYGPWTNCDIWEMEEJZVVCBBDGHAEBSSJTLJUNVIULTJARMDAQZHMVHWBGITKRPMXFKAZRNXTDPLXFRPYOVSLKEGGQIZRDECKWPRIEZONHMYRJELUIWULCYJQBSGQOUWUAPARCBQQAXZYKPFHSRXDWTWCMLVTKGHSYNJTPOGELDYNHBNQ");
  msg.distances.assign("DIGOBAVAQOPKHKCCPGYTQYJPNFTMWFZKHXHLLUDVMWNNXBCJWGGQNHQJSVHAVUYRPVLFZAJPIMXIBBGXGDEMEAJFYIABKRMHKNYSOICTMMLFFRXRESPHKDCSXDDSKFSRZFNCASEUTOIOSOBMZBVOMQSQPRJVQYNMCYQQZKHZZWUNFVYYUJIGTEAUODWQPTLE");
  msg.actions.assign("AIWSKLTWYVDNYBAAQMBFOZXDWESRRZVFJFKUMUDJFDCG");
  msg.fuel.assign("VRRKCVITDXAWHGKLFMRNDMTNZGLJYNTSNGXUBWYIOIYCNOYZQTOZMFDGHACGQLISBDXHZXVUAXYUAEZQEKEZVCWPTMOGFDXPEUFHCRFEOJWVKFPZVKLDQCQZKIIOJNPTDMYFHBZEUBBKUIIWWYWTECCVMBQWADJHLHFYWFGHLRXIPPNSUARSEPAIJHRAUKOJMKMQPBBAGJRLEYSJTSPOEXLJGRDSYSTAULNHSDNXTJOGMRBVXOQKLVSF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReportedState - Serialization/Deserialization #0")
{
  IMC::ReportedState msg;
  msg.setTimeStamp(0.9209668270522969);
  msg.setSource(18065U);
  msg.setSourceEntity(61U);
  msg.setDestination(37864U);
  msg.setDestinationEntity(126U);
  msg.lat = 0.41189602877445497;
  msg.lon = 0.12673205820144262;
  msg.depth = 0.08297466687085242;
  msg.roll = 0.8580079336059809;
  msg.pitch = 0.46384843706803913;
  msg.yaw = 0.21269380329436793;
  msg.rcp_time = 0.050538453114416404;
  msg.sid.assign("ZUCHGTDVLPOCMXDBEBAIATWLUYWOEDIGNTFDFBNUHXGOYKVBJEJNCPAPVPJNSOJHYZGSOVYMNLZFOQOOVUZMIOMXZZQCQXRHTWZSFNECMBWAFIUONBKAPHWCLIDXKTWIFKQRJREPVWKBQZMWHMVAEKUMSXRLPKQEASGUYLUPFZEVRPAJSBFXRNNQWYYZSPJKXLKTDWCYGQSLJ");
  msg.s_type = 68U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReportedState - Serialization/Deserialization #1")
{
  IMC::ReportedState msg;
  msg.setTimeStamp(0.8823630784863709);
  msg.setSource(37991U);
  msg.setSourceEntity(243U);
  msg.setDestination(22418U);
  msg.setDestinationEntity(13U);
  msg.lat = 0.4876970161612719;
  msg.lon = 0.7878979967639081;
  msg.depth = 0.581891956097747;
  msg.roll = 0.4218546463751266;
  msg.pitch = 0.1153308163726322;
  msg.yaw = 0.6650219887012057;
  msg.rcp_time = 0.012567178896366826;
  msg.sid.assign("GAMYCIBDDJKHPTZVPTWEKMWLFAZFRSNMGWDHCAIGYKHBGRUHCFZWXEMSXXJQAQMESOUSFPHPIKJFSXSJVLHTTTPRALASCYBCNIFPQUUDIVJIMQZKORXAZQELULTOWJYXODOWEZMOPFQHPUIROJDYGJYNGZRIDSCRVQZRRWBMSWBYAIGUZBNXBTEQWLTBBIJTLGYYKXJDOYSVKCDHGRUNHCGZKALCEE");
  msg.s_type = 246U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ReportedState - Serialization/Deserialization #2")
{
  IMC::ReportedState msg;
  msg.setTimeStamp(0.5161067777111156);
  msg.setSource(4216U);
  msg.setSourceEntity(202U);
  msg.setDestination(5370U);
  msg.setDestinationEntity(220U);
  msg.lat = 0.7666998104337452;
  msg.lon = 0.7319584982834655;
  msg.depth = 0.7749525491355344;
  msg.roll = 0.694635491008835;
  msg.pitch = 0.9208155467276207;
  msg.yaw = 0.11610981942328458;
  msg.rcp_time = 0.5872762822800397;
  msg.sid.assign("YDPOORHODDPSM");
  msg.s_type = 58U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteSensorInfo - Serialization/Deserialization #0")
{
  IMC::RemoteSensorInfo msg;
  msg.setTimeStamp(0.3722725254348882);
  msg.setSource(10372U);
  msg.setSourceEntity(91U);
  msg.setDestination(51603U);
  msg.setDestinationEntity(202U);
  msg.id.assign("LIZTEANAFCPHIQVQREOVCHPJPKMNASQHPTGQUBELLLRVSCHWMGDKA");
  msg.sensor_class.assign("BZTNJNVNHNYTIVUVWWYFGVTKSLWNIAFULYHSFMCPEMOXIDNDFIXJMAG");
  msg.lat = 0.6024558868526584;
  msg.lon = 0.37647035577676347;
  msg.alt = 0.05716344584287869f;
  msg.heading = 0.2681030694878156f;
  msg.data.assign("KLLXIHTUJUMKZWCMZHITDTABBZNWWQSXSASPTOUEHF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteSensorInfo - Serialization/Deserialization #1")
{
  IMC::RemoteSensorInfo msg;
  msg.setTimeStamp(0.6552765521155381);
  msg.setSource(11776U);
  msg.setSourceEntity(169U);
  msg.setDestination(61873U);
  msg.setDestinationEntity(159U);
  msg.id.assign("CUVYLEIRTVQAWJHMYAKCNWCIMKBWNPQIMOPUFVKJVREKZGDRENHQAOTDZPIEVLBSLFDEMBQWDUCJEOYVBWWENHGNWQICQQDPAVLFWXPTKZUNULFXGJGRATITLBIPUHFSNXUZBVOMSJPHJWXQIYJYDYITPMGAXVMCCFOYCLLHRZXEBTZYDUFSFGMFJQOGJGAOXHDCTSMBZYERRNNRZAUSJXPLRTXCTKNKGGKRSZSDHKFPOKZIDSOBXOQYLA");
  msg.sensor_class.assign("OOQCWETKDAELWZBTRYQLOSKPPKFAGSYQLGRGY");
  msg.lat = 0.8876276341788737;
  msg.lon = 0.8073462956117023;
  msg.alt = 0.33629960895180944f;
  msg.heading = 0.3493691310163056f;
  msg.data.assign("OQCWFMJROUDQXKPZJFXILWEVYFWABOVKPYFVZQXPPXHYNAFLKGGSEJKTEVACEEDDBHMXTNLUQYIOKGUPNWATXHUUENSAVIFBOHKFUDTIISNYVIKBORFDMGCQFNSMSEJZAFTRBSOTZCRJLJEXBAYCHVDZGGRDWNLDSHRWUUSCLSMCQVJIWYIHYOWNNLOCPWQXLZAVVAEINKKPCBHPZHAKYSZHJBLRJGRBTRGECYPQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteSensorInfo - Serialization/Deserialization #2")
{
  IMC::RemoteSensorInfo msg;
  msg.setTimeStamp(0.15097273955304047);
  msg.setSource(21644U);
  msg.setSourceEntity(171U);
  msg.setDestination(46809U);
  msg.setDestinationEntity(101U);
  msg.id.assign("NMUEMBCEEOROWYRYXHQBZJEKPACOKIFYHOFPRPOWVHFWUNKUZADPLDBLPHTOGGJUCLQQPGIAXORVQHEKKILNZIUGJNXCEDUHTFHESVHCSAQPD");
  msg.sensor_class.assign("ZSJIRUDCINTWJFBKRHCZOXOHHVPCAYKPUSGHQRBSQKQEGTBCXTN");
  msg.lat = 0.7469761353552324;
  msg.lon = 0.6553955968389024;
  msg.alt = 0.14156517776579858f;
  msg.heading = 0.7018096693457249f;
  msg.data.assign("GHPDWIWZWGLZRTDIIVDTRPVAXMPCGQQFLODAVXZTEPUKFTUVYKGFJKLYMQBYZIUQHDEURNUFSB");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Map - Serialization/Deserialization #0")
{
  IMC::Map msg;
  msg.setTimeStamp(0.28892210307906385);
  msg.setSource(52368U);
  msg.setSourceEntity(93U);
  msg.setDestination(20059U);
  msg.setDestinationEntity(201U);
  msg.id.assign("ETROWTYLAPESHVCHCSWLDBSPJZMIADWXHBQCTHTTKCKFQOQQTTJUOUCFZMRMJGYUKRSYVWNLUGICPCVHNRDBLDTNXVNSGBMQAHOXKSNJIGMQMIBVKRZOYBLWCJAASWQIXGEPZKRFLIQOHECEBLAGNBIXEYERWHOAMGZZVBZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Map - Serialization/Deserialization #1")
{
  IMC::Map msg;
  msg.setTimeStamp(0.08950791576860673);
  msg.setSource(13871U);
  msg.setSourceEntity(86U);
  msg.setDestination(8217U);
  msg.setDestinationEntity(86U);
  msg.id.assign("RYDBHVRBTSQUUUGEEVKDRREVZVEBYBUUMOACVHWSKPIDLVPHYXGUZXGOBHVGCZQKDZTFNMNAJYNPJNXMTJAKZOYDCQIFZUVLIZJKNKOBPEJFVNBQICWXNQTZGIHXMWRWUCCUFMHMWYSKKKTOOFPCFJALLMDTZWOSBLPYIQUIMDPYGISXAHQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Map - Serialization/Deserialization #2")
{
  IMC::Map msg;
  msg.setTimeStamp(0.4279820463209617);
  msg.setSource(37460U);
  msg.setSourceEntity(22U);
  msg.setDestination(30163U);
  msg.setDestinationEntity(90U);
  msg.id.assign("LFWWMTFPCAPRGMQZWDRTOWKNHZUPGBGDFXKADJDTBBDSNILKZNTTEPXLZVBOZRSCCJSNOFIUZCTWQHKUOUTLNAPSSUOSYDQYPQNFRDUMHLABOMFZZVMHGN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MapFeature - Serialization/Deserialization #0")
{
  IMC::MapFeature msg;
  msg.setTimeStamp(0.5711142149958243);
  msg.setSource(15956U);
  msg.setSourceEntity(74U);
  msg.setDestination(10358U);
  msg.setDestinationEntity(64U);
  msg.id.assign("QVPARJFWIBDSFUKRJCQTKLETAXWMEAHZKVRWEVNCEKSZSRUWXVGQAPDUSMRNZLBNYLMEFNUCNDCMJCAGLDQSOASFEXEMOPCJGIMYLNZORFYXTITHLRHXJIXOGDDKKMYMJVLOBBNNMZVSRFEXWRXHXYOYVIUIXGZBFYQIDCOFAJEDPHQGGRCBCIHDQEUKTHIJSKJOPWYZVLOJQTUTBAZBVWOWPMWUGPHNGYYLISS");
  msg.feature_type = 190U;
  msg.rgb_red = 227U;
  msg.rgb_green = 203U;
  msg.rgb_blue = 49U;
  IMC::MapPoint tmp_msg_0;
  tmp_msg_0.lat = 0.07925713662045353;
  tmp_msg_0.lon = 0.47646241714789306;
  tmp_msg_0.alt = 0.7792194458874755f;
  msg.feature.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MapFeature - Serialization/Deserialization #1")
{
  IMC::MapFeature msg;
  msg.setTimeStamp(0.8864611572004784);
  msg.setSource(37697U);
  msg.setSourceEntity(142U);
  msg.setDestination(52882U);
  msg.setDestinationEntity(248U);
  msg.id.assign("DETRBCYWMFWCRMOEGRYNOTTAMTWSBNCQGDUVZHIPENNHBYGZBTXZZYJDUFKCAPQIL");
  msg.feature_type = 110U;
  msg.rgb_red = 252U;
  msg.rgb_green = 67U;
  msg.rgb_blue = 79U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MapFeature - Serialization/Deserialization #2")
{
  IMC::MapFeature msg;
  msg.setTimeStamp(0.12586210810976772);
  msg.setSource(58715U);
  msg.setSourceEntity(30U);
  msg.setDestination(8847U);
  msg.setDestinationEntity(126U);
  msg.id.assign("KVTKKRJZSZFMCVXTGVQFNAESCHUBDAILJYEULGHGCTMKXNKRPVIXAYDEEPGNSJIBQMXRGNSLDZLLDMFXVILBEBGPRFZPFCCGQMIPFGPZENADAQWOPASZYGQOXHBNFBHJOOBZKLIIMVUWWMOTWYWSCJMOEVXIHNYZAQWTUVSZVALTJMHIQUJSHLVECDNGZXIJBTHFYQSWRQM");
  msg.feature_type = 147U;
  msg.rgb_red = 202U;
  msg.rgb_green = 49U;
  msg.rgb_blue = 104U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MapPoint - Serialization/Deserialization #0")
{
  IMC::MapPoint msg;
  msg.setTimeStamp(0.8918739101242288);
  msg.setSource(31074U);
  msg.setSourceEntity(28U);
  msg.setDestination(9340U);
  msg.setDestinationEntity(200U);
  msg.lat = 0.2956984665731882;
  msg.lon = 0.5178103990592104;
  msg.alt = 0.920349643974299f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MapPoint - Serialization/Deserialization #1")
{
  IMC::MapPoint msg;
  msg.setTimeStamp(0.7488271148504405);
  msg.setSource(49304U);
  msg.setSourceEntity(72U);
  msg.setDestination(24335U);
  msg.setDestinationEntity(51U);
  msg.lat = 0.41909772461354755;
  msg.lon = 0.3949319499561984;
  msg.alt = 0.5611071101956627f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MapPoint - Serialization/Deserialization #2")
{
  IMC::MapPoint msg;
  msg.setTimeStamp(0.16521533356936247);
  msg.setSource(62183U);
  msg.setSourceEntity(113U);
  msg.setDestination(14096U);
  msg.setDestinationEntity(117U);
  msg.lat = 0.44087663630379303;
  msg.lon = 0.5369314052913446;
  msg.alt = 0.29384095146118294f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CcuEvent - Serialization/Deserialization #0")
{
  IMC::CcuEvent msg;
  msg.setTimeStamp(0.4047610988373156);
  msg.setSource(43902U);
  msg.setSourceEntity(179U);
  msg.setDestination(45035U);
  msg.setDestinationEntity(97U);
  msg.type = 25U;
  msg.id.assign("LNFTEHYOCWUTUALKJWGCBUOQVGHDKLYMGPLBSBZIFLKIAJLQXWINPWVTZZNTFVYXCKOIYFARYFRRJDDQJCDARKIKNKAGRMHUOOIYCBZUJTDLAUORMCZHWXSHHKVUSDOUPGKVMFRGLPCXYUNMTZQPCXSOFYXUMEIJQSSPHQHIKJYIDJVXEVNNBMWJEWANJNISEWBZSZCOOBFEMEWBDFPRNDTFWEBPRQMRXQTAVPSTAQVHXSLBGGQAZMGPZ");
  IMC::LblConfig tmp_msg_0;
  tmp_msg_0.op = 8U;
  msg.arg.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CcuEvent - Serialization/Deserialization #1")
{
  IMC::CcuEvent msg;
  msg.setTimeStamp(0.05053311636209856);
  msg.setSource(42166U);
  msg.setSourceEntity(150U);
  msg.setDestination(45414U);
  msg.setDestinationEntity(97U);
  msg.type = 52U;
  msg.id.assign("DLRIBUKMDWAWKPEIQAWEQUZTLQMZTFWFGWXYQDFUVSAGOBHANJYUG");
  IMC::DevCalibrationState tmp_msg_0;
  tmp_msg_0.total_steps = 84U;
  tmp_msg_0.step_number = 151U;
  tmp_msg_0.step.assign("KGLTJJAIALUSWGGNXMVTINKXJBDFGWFVFQBYNSHMYUFCHDJTYCAXVVJXYUAPOWPDGCSBKAENPTDFRBSRRFRIAOOUNSZXORSPLTMFEMKXSBOAHIEKRHRRYENYUNUGQPJEGZZJLTIGDOLEPHVIJYZQQVLKGDHLCHVWEYTIDPBIWINJAOCCBKOULSXVYEQZQWX");
  tmp_msg_0.flags = 15U;
  msg.arg.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CcuEvent - Serialization/Deserialization #2")
{
  IMC::CcuEvent msg;
  msg.setTimeStamp(0.6568108525873019);
  msg.setSource(15438U);
  msg.setSourceEntity(19U);
  msg.setDestination(10195U);
  msg.setDestinationEntity(194U);
  msg.type = 128U;
  msg.id.assign("HQTPYJNCRXEYMBSQJBQLZJVVRRJAPRFCZLINVPLHNMDFLDMLVYOWXBLSASOBBQQOXSHKOSWUGSUMDKKNOESZRFZIZKWJDMBWQADHVKRYPIMCJZCGLKAUDIGJYUIFNGVPHNMTWUGEGUYQPRHBPTNURJCCKHFYIBOOIGGCOYDZPCWBEZEVAJNAFLCTFQORUDSXZEXWWFVHPRQPEUXABCJETYGTTZMDXYQIVKLETGSUN");
  IMC::Current tmp_msg_0;
  tmp_msg_0.value = 0.03467712095065434f;
  msg.arg.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleLinks - Serialization/Deserialization #0")
{
  IMC::VehicleLinks msg;
  msg.setTimeStamp(0.34996139608723464);
  msg.setSource(43265U);
  msg.setSourceEntity(71U);
  msg.setDestination(44370U);
  msg.setDestinationEntity(75U);
  msg.localname.assign("IKQEUHZXUTYXRBWVDBXWHGPHREWBVJCYJTJCEKAUAKDPWTGWBVKKDTFDUBSUJABIIBDHRVOXAUSUOKLYAGHPEOTQZNQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleLinks - Serialization/Deserialization #1")
{
  IMC::VehicleLinks msg;
  msg.setTimeStamp(0.6824161919636379);
  msg.setSource(50801U);
  msg.setSourceEntity(41U);
  msg.setDestination(12428U);
  msg.setDestinationEntity(125U);
  msg.localname.assign("OMDXHPDMUBWYQKDAFENZWDPKRWSWXTINOXXWEKFEGIGUPHCBCZVOWQOFXAQQTVQWFDYZTLLHSUIZNJRYBSBVRIFOAMBAHAJTTKAXMAUYVEMLZLPRBMYEEMNIRUZSZFIPNKXQVKBYSGGISQCEWAHPVOJNNRYQCAKVRLGVFIVKHLJBUEPOULYIDCXEC");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("VehicleLinks - Serialization/Deserialization #2")
{
  IMC::VehicleLinks msg;
  msg.setTimeStamp(0.5050455352750917);
  msg.setSource(36629U);
  msg.setSourceEntity(185U);
  msg.setDestination(40432U);
  msg.setDestinationEntity(56U);
  msg.localname.assign("ESFEXGRGFUGONPCHQNPCELIYDIISUPIVEHFLVZAWYSFQUJVALHGACMUSULEIRKWQHMFNRLZOBBRHKBSALPYJTEMTQICSFGNFKWSZXXMKCVZIWRKJMNVSAYZKXTYRCHUVURDFJNAORAX");
  IMC::Announce tmp_msg_0;
  tmp_msg_0.sys_name.assign("WGEMXQZZNCZJCWCJQASPCPIUEZVUBGLTHBXYVROJDRSTPIMWBFYJLAQNOKIZUVVXHDTXLWAUHXFMRHPMDENDDLPEPLICQTGFVICYABRTNOZIZJQHUOKKLKUGPGYVJWWMHKCEXQLGOBLZWQBNZSSIJYSBJDTTYCPGEFSGJBUAYFBXMOBAMDNYDPVSQFKECIVQJQKXOXSFRDMCRONKMVNKMHSWGRUHLRXFEGAWN");
  tmp_msg_0.sys_type = 154U;
  tmp_msg_0.owner = 13843U;
  tmp_msg_0.lat = 0.5076489564826715;
  tmp_msg_0.lon = 0.5497450135699521;
  tmp_msg_0.height = 0.5770536233554914f;
  tmp_msg_0.services.assign("MATLPSPOZAQABRZUROFTRJRVDWMFPZWKJCCSQSHEUFQXKQLAJDBWFDNEAKJOWVOMYJIBMGENUKMHWWULHPRVBJCFYWI");
  msg.links.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexObservation - Serialization/Deserialization #0")
{
  IMC::TrexObservation msg;
  msg.setTimeStamp(0.4746345281512515);
  msg.setSource(14000U);
  msg.setSourceEntity(109U);
  msg.setDestination(6712U);
  msg.setDestinationEntity(103U);
  msg.timeline.assign("KRDHXMTADCQZKEBBYVDWNOQGFQKZGBJMFOHBUFSBUJXCLSTNNJIWCSAOFDQSQHGVSZRCZEGRTJWHJLZPZGPJUITVDXDIYINVVKABIKKNMXBSHWCYWEVFFMNRUWGNEYZVOQCGZQEQTJOPTACYXOWFMHEBPAVRMJAYNXYZPLSUGUXI");
  msg.predicate.assign("GGJSVBPOZABQJLPDPSTZSRDHDRQPQOCKQEJMFPJUTBTABLQXQOWRNZEDXIYEVLEOXGNYHMDGQ");
  msg.attributes.assign("KCNNKEPJOHWFFIRJMQAUHZCUJVURYKUZNLTSPNCDBVIFAUTTGWRYTVJOZASDBPQJUPAJQWOMFEBIFMDIJSCNBGVEAVDSPMTDCBTQDCNMEMMMKQCKCXDLLXEDGIZGVLLPNRQKLVAWXHYIDFWDIBREJCAMXLQTCYZGKLJQNJZOLOVBTIFPROZOFFHGZHPLYRHYOBXKHOXHZBWGIUIWXSXGNRX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexObservation - Serialization/Deserialization #1")
{
  IMC::TrexObservation msg;
  msg.setTimeStamp(0.6869251363781124);
  msg.setSource(9018U);
  msg.setSourceEntity(69U);
  msg.setDestination(58686U);
  msg.setDestinationEntity(232U);
  msg.timeline.assign("GONDJUMBXSNVUAKFDHFFQVPTYFOUNGTMCHEVSBUFJMKEUHXLN");
  msg.predicate.assign("TJSXCQUXNPLAYMWULALDHWXKLQGKDAJLFNGXPCLZJIAAPXZYDRTKZOQMGHTFQLNCQYTSEEBGEQTKIDKKWR");
  msg.attributes.assign("KHGVOISLDESSTVUCKMIXKYNEZAZJYQJOSJVRTBPUSMETICWWCWMWNPBTSEOXSDFFBQHZTKRHRGQIDXKQNOZCJDFERAMVNLCCJRVJWD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexObservation - Serialization/Deserialization #2")
{
  IMC::TrexObservation msg;
  msg.setTimeStamp(0.6635614764062182);
  msg.setSource(63558U);
  msg.setSourceEntity(147U);
  msg.setDestination(11151U);
  msg.setDestinationEntity(170U);
  msg.timeline.assign("HYFOTYYMSWLFVSHVZIUFWAVJXVSUELYCAPQPEANGSLARQDWNHTDBHRXTSAJYILDONTYAWANTDJIOSPJJSNQBWVCRUNKTZEROELQJZMJQNXMTNWFYUQMXDOMEUGFOGKV");
  msg.predicate.assign("JBCKDWFRQVLAXNFLMOETAWXKDEMZFWYNKNDPTBQYXYSQPDQKWHGSYRWYMTJTHVXKSOEIHISLCTDKXGTXGVYMBCXXKMSAORZJYNGHUQHJUDGFUESCCLZCFZZOLYPIUQERUMNGFKCZKGPUNOXSEYIWNQVJQEMWUHRCNALRFZXRSTGILV");
  msg.attributes.assign("ZSAKXRZGERTUQCRKXZIAXCYLCRGPMUKECGWQDZBFHEQCUJEONXFPELQOLTUMNGRTDXRHBJHBBLUOVXCQIGHCXUJOUNTZBDVJTRAPCFJNMSJMYMYYPFJTTAJLOFWASTZSBRWIDIOKVFMLHWEPHJHKUHGEIYZQWOQFPOGKYDBMDGVKWSEVQNWSXEBRPFVNYSKWMVCLDAYVBGMAKAMZJXPSOZSNNIEAIXVFDUYDTFCPLYIUSTWONHPKGHLALD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexCommand - Serialization/Deserialization #0")
{
  IMC::TrexCommand msg;
  msg.setTimeStamp(0.4114066785965109);
  msg.setSource(54477U);
  msg.setSourceEntity(121U);
  msg.setDestination(3728U);
  msg.setDestinationEntity(206U);
  msg.command = 175U;
  msg.goal_id.assign("JCSCYDPNQBZRRGVSOMBSSTOXFJWEPCHTXLIQYZBXBLMUCFJBFVIFRWYGAMFSQKYAEFROYESAQCQJXMXKHKZCBGXXKJWEFRRWQTGGUISPUOBOHACHHTNAPGDMBXGNLMUDIVOBOYVHPDVFNGRIPGTGEWAKLCDLHLNSEDNANCNYPVZIYQYDOQISLKZZDLZKNTEPUZIALEMDYUHTSJWUHAFCTQJRXMTTVKEOVJHWWMNFQJUBIURLA");
  msg.goal_xml.assign("YMFYOKKJPUTOOXJIWLGIQDMMATPLRSHXENFJETLFHQGSBUBRXZGSOESRVCOBPLTZBHRXTJINXVUMWBNRYTQGAQIBTIVRSLVNFBWSKUCWXOFOPKQIOYVFXGGHWJLQFKJZWNWADQADZEDYGUDWUZTJUJVCAAWCSEKREUPIPHFXGDHBUGENZSLIFLX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexCommand - Serialization/Deserialization #1")
{
  IMC::TrexCommand msg;
  msg.setTimeStamp(0.07761757104658229);
  msg.setSource(15042U);
  msg.setSourceEntity(115U);
  msg.setDestination(7864U);
  msg.setDestinationEntity(206U);
  msg.command = 121U;
  msg.goal_id.assign("XMWSWLIGNFRNVXEPPSUXBQZQJLTTZSVZAXLDKHCBOPGFWDEGKVTVODZKDLAJXKBAIBUYUHQNONBPWHWIJFGNR");
  msg.goal_xml.assign("AWNHDFTWWBGHOHOHGXRTSTBUTR");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexCommand - Serialization/Deserialization #2")
{
  IMC::TrexCommand msg;
  msg.setTimeStamp(0.7461120397390224);
  msg.setSource(17106U);
  msg.setSourceEntity(35U);
  msg.setDestination(41638U);
  msg.setDestinationEntity(23U);
  msg.command = 146U;
  msg.goal_id.assign("LDEHYAYHHROXWWPBTBYCFOAKZKFSVPRIOQYMUTHWDRVCUJWJJLXXYTRRSIGLGDTMUBDGIMONCOXVWXSBAHKIAMWJBWQEAPCAUZFSEFAKKB");
  msg.goal_xml.assign("UXKTGFSWQERMDESKWZVVXENIUSBPMGDAZBDNZYKXOSBPJAXCWEIYTJRYEHGNMZAKZAUZKKKVXIOGTHKUMDQCLRLXIYIIUPTCFJHNARNDYQMFIVLKIHGQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexOperation - Serialization/Deserialization #0")
{
  IMC::TrexOperation msg;
  msg.setTimeStamp(0.3271081833026074);
  msg.setSource(40931U);
  msg.setSourceEntity(141U);
  msg.setDestination(63170U);
  msg.setDestinationEntity(148U);
  msg.op = 211U;
  msg.goal_id.assign("BFIEYWPSDCEHGZLZWTCMQJEBXFNXUNYDUXXIYOGWAGPLDIEWHXOMXLRBKAWECSIPWOVFIQZNLEYNHYLGOTXRPPVTDADKBDIIQVQBTBCVOMEHPGXYQKXAKJFOCNNVVKGVRMZNROTCBRYOCAJZBZU");
  IMC::TrexToken tmp_msg_0;
  tmp_msg_0.timeline.assign("TOXRXRNLPYVUZAPJEXGNFMJZQIJFFOHYNUOUGDKRYDFWZINWADGRGSTRZCENWLXHGNFYLREVNDPEWZW");
  tmp_msg_0.predicate.assign("JMJCEDZMXWTOQWOZOGODVYZNBFUHJNZJMFFBNKUPYIQLCMYWRVKANIPJLOTGJROFCEDNSO");
  msg.token.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexOperation - Serialization/Deserialization #1")
{
  IMC::TrexOperation msg;
  msg.setTimeStamp(0.47985257224545164);
  msg.setSource(38454U);
  msg.setSourceEntity(239U);
  msg.setDestination(22167U);
  msg.setDestinationEntity(34U);
  msg.op = 68U;
  msg.goal_id.assign("RLOUGYJETQPKPFTHNICCVZWDZDRLHVFKRVXJHSWPDHANWEADQUNOBQFTHSTSAQOYGFQRZDSXHMJMIRMMGDBKOWJMRVWZJDNLUVGKALEIBBIPVFOMYSKBRCALPPFXIIJBUYSTYCPKJXEUMLOIUKBXZVWZEYCKUEZFYNMETENJGANPTZGJEOYUABREXFUCFNFTICPWSRG");
  IMC::TrexToken tmp_msg_0;
  tmp_msg_0.timeline.assign("SRITPAOKCUHSXVBBUVXHHAOJDQQWOYGHPQKDFRYSUOGUCUPKIODHLNMNWGLZIFIEZJTTEBTNNXAEBVNLTNENJCJUZEKWEPAZEJZBBLUHOGFTTBVJZQQSFKDCNHPIZVJYUXRSRXCYYWKDFLVXPRSRQCOTDICVFPVWVCYCQMSEZQAMARIIGGMWYKMXPAUAHNBXMWPVBZIODKFOLSCALDMFYWRROTKBUTXMYI");
  tmp_msg_0.predicate.assign("VSTYDZZMGHAZGYMRBHSLKLUFRCDVYMFJKBVPKDXICZTZBYRQZPHRCKXOYGWNBKDMBJDYQMRIYWLBLVNIUR");
  msg.token.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexOperation - Serialization/Deserialization #2")
{
  IMC::TrexOperation msg;
  msg.setTimeStamp(0.18516589947742879);
  msg.setSource(36900U);
  msg.setSourceEntity(65U);
  msg.setDestination(10503U);
  msg.setDestinationEntity(84U);
  msg.op = 40U;
  msg.goal_id.assign("YLEKNGVIXCZYJPOBRZPUWVXXMGAOWTVOJTTXYDHQCJFPZPPJRSNLRLFKQDQHSOENIAJMISBPQKPKXXMREWNIXHHAZFMUQWNKCYMSUNVTALWMBWNJEBHDBJVEOYSUTLFELKDWJGEEGXSCMWXCZHABLVVJOCDNQBMPYXVHHZQLSQIUUMATZFRBLEERFMNGZZYHOBCQUTRSJDNGAFIYKKUVUIWITRLOCOAF");
  IMC::TrexToken tmp_msg_0;
  tmp_msg_0.timeline.assign("PAPBTOFHBOGCWHCZCWOIMUJZGMLEEJLQWZAFETNADOSTUWKFQXTZVEHIJIRQNQKFSEPULTCNGVCXMXNJODKFERCPFNOGVEBBGPVWZPAWWJEVLTXKCKHJKZDPMMYAQGYGZXBWDSRZHMMFNIYSYGDIFIIBTSWAPKEJMJQLXOMNFULALOQDQTVUSTCWBRQJIKBUPKDYRMD");
  tmp_msg_0.predicate.assign("WIKHQIXCWRDFFZNORIOJWMJVXIFYSKXQUIAKWHPYRLAXIFKCABSODCGGDNTSXGALOZHOSQMINZIBXGFXPMDGEPMTVRGOPNHXPSENKYEZORNKOHJQHQDWDHPNRLCBUAEZPYDJJSLTVMTVABQZOBUPFHEABU");
  msg.token.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexAttribute - Serialization/Deserialization #0")
{
  IMC::TrexAttribute msg;
  msg.setTimeStamp(0.7224712640785349);
  msg.setSource(58818U);
  msg.setSourceEntity(91U);
  msg.setDestination(28458U);
  msg.setDestinationEntity(102U);
  msg.name.assign("YGFHQIDFHYLSOKVROLWFQNZUUPRUXAXQRMDD");
  msg.attr_type = 233U;
  msg.min.assign("TWOWEOVSMIASNPKSXVCBTUGAIBRGDYDVFKBNFUHKKOJPOKHBFTHEEEAEMVQFKXXRBXWLHAWJYWAETUPRNJMTZBRQFQCJOECJLBXRUOMLKQMILYTIZQCLURUBQOKAZAYDUGXNTKVWMKLWVFIEVMFDADNOGCLYZ");
  msg.max.assign("FZMLJZVKXZMXWJXETPEGVQNXBZRUMVPLYHVVADCKOVAOPMHKDHBIHULODIUEYNAAQ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexAttribute - Serialization/Deserialization #1")
{
  IMC::TrexAttribute msg;
  msg.setTimeStamp(0.9771297361852335);
  msg.setSource(65225U);
  msg.setSourceEntity(6U);
  msg.setDestination(46685U);
  msg.setDestinationEntity(148U);
  msg.name.assign("OZZKLYEWDJYEVLPWRRGMCLXNBYNHOOAGXVHWUYGCEFQOVWAHHSGPJ");
  msg.attr_type = 189U;
  msg.min.assign("FZNSIPUGBCBGGHWLZHDUQQZLINUSKYAFSBYWNJTDKAIIUAHEJQNDVZAIQIFVCGWCLNFVXVVXLLUEOVEEDMAWQJMIACAIARJDBCHSQITMRJRELLGDRLCPRJGZZYEBNQBPGPOTRXXTHHSGYRNCZEPDKOYDLSHOMEWNWYGFVPIDBRKPUYRASOBFWQOKTMJSXOSTUJBCCJMPOLFNYVVZ");
  msg.max.assign("DUECNKIYHBXQEBFEGXXHTVIKLODIYMFQOUSACFWGKNSUVJFQCRORZNWCMWMUAOPJBHKSVDCZXSWZVR");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexAttribute - Serialization/Deserialization #2")
{
  IMC::TrexAttribute msg;
  msg.setTimeStamp(0.6870855523369056);
  msg.setSource(32727U);
  msg.setSourceEntity(16U);
  msg.setDestination(3225U);
  msg.setDestinationEntity(34U);
  msg.name.assign("THIXLRPJFYRKKOTFCDU");
  msg.attr_type = 47U;
  msg.min.assign("SCEZTXBTWVHREVFLBMNEWSBMMUMYFDQHVIKXAJUUHBIDZABOXMCACJNWUKMQGJDCADPXZUQIRAUSGTYFZJDYELIKHGUVLNNDQKOHTDSQJWTTWFCZAINVZRYEPCGRWAGBRWNPENXPRTVQKXCUVCOPLBWBMPBJOMORHRSMQVWZNXZLOBYLFPZVYLHYADDEKEOHGDYIEFSXGNTFJAFKJTYU");
  msg.max.assign("GJSPWTIPYSTHAQDEZRLUHPTKQYAMHUSBVKKKMDHDWKSQVMEUJZNYPNLCOWFUXKRBJQLSBSUAOOOOSPZISQWONFIUHYPYIBQGJRBFGYIYNGCVLLUDQBXCTVWHSTDIGVXFMGHPALEZRJEMZEFCSZIVNBEZTVMDKYVOXBREBRQZXYGNHGYCEXOTOIEVNBWTFLNCHUJMTDXCKZDAGHMFAFXXLDICJKUAJDFTWGIEALMWKRPAPPJJRXQNORV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexToken - Serialization/Deserialization #0")
{
  IMC::TrexToken msg;
  msg.setTimeStamp(0.5858417246435391);
  msg.setSource(13181U);
  msg.setSourceEntity(35U);
  msg.setDestination(24030U);
  msg.setDestinationEntity(226U);
  msg.timeline.assign("QVPMJDJDSZWDSEXUIAUYMHIXAWKGJHQGZDEHTOWPBQPDVZYGWLEJJXHFJVACIUGXXBZRSRMUYBO");
  msg.predicate.assign("FPPHVGXDSLZYQIRSNYNAUTTCF");
  IMC::TrexAttribute tmp_msg_0;
  tmp_msg_0.name.assign("ADFHXGWQYMZIGSYPCTJKREONSWLTHWJKLWXPKNECGKDIMKYNTZSCDGVVEOOMOYSXTDVZVMYWPJTBBHUQJCPBSMTTGEFBDFOQRFASTLJLVHHVKLOMRMVE");
  tmp_msg_0.attr_type = 10U;
  tmp_msg_0.min.assign("JMBOBPXRMDGVPFMGVBNTURHKJQKDWOHMCUSCKXKEERJKNLVBDBCQICGRAOZVTXPIOROPDBHZTGJEDUYXIKWAAWJNZYAGZYNITAFSXHJLMQHIKDFIZFPTNLANWCBTHYSCAAKXXUISDVEYQLMWNMLRCUFRAZEQJLJVOAVCZCUTHQXIZXWGSGVYDZUNBTRFTFWUJQRDUTGQEPWYBKPLNMVHGWIHYKSIROYCDYVFSEJBSGFLONWOPPLLOSEFSZ");
  tmp_msg_0.max.assign("XYKTGFYRZSNEBSUWSLVMCEOXODZAOQZGGHMWXBMZOGILATAKBORBHYIDMYEURFIVCEYGJTOKEETFNSWKUBDXFUJPNLCGNALSSVHWY");
  msg.attributes.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexToken - Serialization/Deserialization #1")
{
  IMC::TrexToken msg;
  msg.setTimeStamp(0.40408523958936293);
  msg.setSource(22691U);
  msg.setSourceEntity(253U);
  msg.setDestination(1843U);
  msg.setDestinationEntity(173U);
  msg.timeline.assign("ELGXISNBQWNKMLYJFYDKMBGHENKXNSRJYCXNVIPCSRPAGAGRLVGTEFILLDQALWVZCLOIOXMKZMHMNQZEWYDUAIJFJLJEXQTTMKHICUTKQQBUZSVKYREQGYUSFZXLANATPOFNFIHFSEBNIDYWDPIPQDBEQJJAEGORUHZAPXNCSKWURTRPCCBDALSMBOXMJWXMOFVBVHKVSBDHVUZPXYJGZFBATCOJWZVHTORESR");
  msg.predicate.assign("OTSEVVNHWCAEOEXXAPQQFGOXJCPQORZGBXLADVYLJZSPGFQEUCHCVMCQWZIJWFE");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexToken - Serialization/Deserialization #2")
{
  IMC::TrexToken msg;
  msg.setTimeStamp(0.11552446336575539);
  msg.setSource(24843U);
  msg.setSourceEntity(230U);
  msg.setDestination(56832U);
  msg.setDestinationEntity(119U);
  msg.timeline.assign("DNWNFDAIPNXPCMHVJXPFPLWBRMQVEGJCDKOWUUZLCQVTZLJUFSLHNXCLPATUSSFOEVNYPZBJFPHVGDTWRSJTT");
  msg.predicate.assign("SFZUWKLEWJGRQXKKVMSPQHAZTBQNMMHDBCJJWVAFVYQDCPZBYUCMZZZTZCUITSFEKQMYLJVECSNFIEITSYIFXOVAQZHUWCOUSJDOVTUMFYTRBRBXOPOXNETBXKXQBWNHALFGRSIIVGOGLLW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexPlan - Serialization/Deserialization #0")
{
  IMC::TrexPlan msg;
  msg.setTimeStamp(0.0031079981377426513);
  msg.setSource(19U);
  msg.setSourceEntity(152U);
  msg.setDestination(20424U);
  msg.setDestinationEntity(173U);
  msg.reactor.assign("VNLTAXAFCJZRDHTPFNXWXNCNEMVKG");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexPlan - Serialization/Deserialization #1")
{
  IMC::TrexPlan msg;
  msg.setTimeStamp(0.284377831615113);
  msg.setSource(64997U);
  msg.setSourceEntity(3U);
  msg.setDestination(45554U);
  msg.setDestinationEntity(98U);
  msg.reactor.assign("ZOPDRQSEGQYMYTSQEBNDYKFSOIGLMKORPHEXOGLOKIHJXUTYCAGJEJXQRBRXSLFPNHWNNCULUDBNLQJDLZV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("TrexPlan - Serialization/Deserialization #2")
{
  IMC::TrexPlan msg;
  msg.setTimeStamp(0.6850559813001048);
  msg.setSource(44613U);
  msg.setSourceEntity(102U);
  msg.setDestination(10610U);
  msg.setDestinationEntity(61U);
  msg.reactor.assign("JVTVQSOQZMFUSXLKAXAJFPHFGDBAYRFNKQZNBTBRLYUJEWGFAWXIUMKPDSYJQLEMAZTRUWINCKJODNDZORYDTHIQCTSRGAOCHZRITWFPEPQJGPWDGHBENHRUSZCYDXXHIIXUEVUTPGTVFLKGCJUMNDAFYKKNIILTEZURLWVJCMVLMOOQIQLNOPVCKWRAGJPNSVGOCMWHEMHHYCWLSXXUAQBPGBYZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Event - Serialization/Deserialization #0")
{
  IMC::Event msg;
  msg.setTimeStamp(0.8990465399045557);
  msg.setSource(42222U);
  msg.setSourceEntity(97U);
  msg.setDestination(6926U);
  msg.setDestinationEntity(206U);
  msg.topic.assign("JYWBYPUAFQCMCWJPKGPEIWUNWJYVHCUZZLKGMGZDWGODBTOETBFJTKIM");
  msg.data.assign("DRPUFGQVIULPZLDLCFPDLMEYBOIFHUCMWMVXDLFRZLSVTCYYZLKWDCUNBKIAXICCONUISCEARQPRBOXDJWWVAFFPUGXMHTSHYFNKNBVWNRIBDSAJPLQZJZAZHYOVXEHHFSUONAPTWFSWOCNWMTTNTGQXGTOYNIRMAGSHJVCMRZJUJZEPKYOFHAGERETTUBXXQDJYISVOKUJSHWMIKGVNVQGGDXJPZDXYZAJRCH");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Event - Serialization/Deserialization #1")
{
  IMC::Event msg;
  msg.setTimeStamp(0.7185071190423502);
  msg.setSource(41635U);
  msg.setSourceEntity(251U);
  msg.setDestination(40969U);
  msg.setDestinationEntity(32U);
  msg.topic.assign("DMFONEEUOEDVNTHQXCNAAOBPFYLUUVIUSLZCPUWJQLNXIREGGKAZEVPEUGIPVBKWVYMQDGJEWNRNWFCBRSCKFRCXKBGWQZKFWLLFNETMTDWJMTJGILURYAMSHBHLRGYCXRPYJTZHRPMOAMGJKFCVEBMJHYRQDTS");
  msg.data.assign("ORKSPMOIOJAFFPYKAVMYUPNOQHRRYPZKSTUDACAOCFXZOJEBANUVSGSGOMONJMCWYAARNRDTXISBWRHCSZUUIPUPTNQCXEEYMLVXHYLVHDVZIIFUPBHBGATYGFKYCUITZQDEFQTGDBXNHKQZNVSUIEWCCMMGLJHTMNLNIRRWJVLFJUJZBRSPGG");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Event - Serialization/Deserialization #2")
{
  IMC::Event msg;
  msg.setTimeStamp(0.2371443089690517);
  msg.setSource(20471U);
  msg.setSourceEntity(47U);
  msg.setDestination(39415U);
  msg.setDestinationEntity(26U);
  msg.topic.assign("PTMUIAWRQDMDRDBRLANBEMXIZSIXPDCKSHNMUIKSMMTWYKIUNWHVJPXEDTROKIFTBECGOSKPKQELMUWAHHDVGXHGQOBOIRTDABAEKUPQYXGTFZTNPTJCLHGCEMSGRXFYZCSEOYMIHJFXZWSIEUZBNPBPUHSRYVUWKCVJBNFVAVNFCJA");
  msg.data.assign("ENNKXBBJPQJYPQMRBDWNFCNLGGUTQHLBPOCDJFOKTAWGFDCHXLJOFRLPBFJGOSZVIZPTUTRMAXFYCBMGAYJMQVKIADBXWXYKPHZUTWOYLVKNTSOHLOJJZWRMLCLQEEOAXPITKBUUOKGKBEIDHSSSUQZNQDZSUPHWJXSYRVLSMZNMDTEZCAXGHVYNOATPVFKWDIDRYEIBVASMVUWIJECHVYDXQRMSTARVFMQNUKEHQIFPRU");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompressedImage - Serialization/Deserialization #0")
{
  IMC::CompressedImage msg;
  msg.setTimeStamp(0.9509519183219269);
  msg.setSource(34578U);
  msg.setSourceEntity(16U);
  msg.setDestination(14685U);
  msg.setDestinationEntity(204U);
  msg.frameid = 188U;
  const char tmp_msg_0[] = {66, -114, 82, -111, -81, 109, -31, -73, 99, -82, -106, 16, -82, 36, -105, 69, -24, -113, -56, -41, -80, 90, 42, -30, 87, -39, 20, -4, -1, 14, 44, -82, 44, 20, -82, 87, -112, 63, -94, 107, 110, 121, 59, 61, 27, 35, -104, 113, -26, -16, -63, 92, -24, -6, -48, -78, -42, 39, -81, 47, -44, 68, 77, -7, 70, 29, -33, 18, -100, -28, -91, 76, -114, -56, 40, -114, 65, -40, 48, 70, -32, 116, 97, 80, 86, -21, -128, 6, 18, -20, -112, -38, 123, 1, 73, -54, 40, -64, 66, 74, -56, -84, 4, -103, -17, -23, 64, 43, -114, 74, 100, -74, 97, -33, -75, -30, -85, -104, -44, -88, -6, 37, -34, -53, 36, -83, 97, -46, 20, 38, 16, -85, 80, 35, -119, 125, -70, 102, -54, -30, -12, -120, 20, -96, 5, 82, -80, -32, -36, -72, -33, -62, -31, -28, 110, -77, 114, 35, -5, -116, 100, 17, -64, 32, 91, 18, -33, 101, 44, -27, -119, 114, 28, -31, 86, -6, -19, -80, 108, 3, 40, -110, 0, -58, 38, 58, -75, 15, -13, -58, -86, 115, -124, 71, 108, 62, 21, 73, -98, -61, 17, -103, 32, 1, 68, 12, 107, -53};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompressedImage - Serialization/Deserialization #1")
{
  IMC::CompressedImage msg;
  msg.setTimeStamp(0.5694800659639724);
  msg.setSource(2381U);
  msg.setSourceEntity(60U);
  msg.setDestination(60208U);
  msg.setDestinationEntity(245U);
  msg.frameid = 38U;
  const char tmp_msg_0[] = {-101, 113, -81, -88, 29, -6, -71, -41, 66, 63, -80, -108, 96, 53, -99, 55, 58, -97, -95, -17, 92, -113, -67, -73, -65, -40, -70, 16, 108, 30, 30, -28, -106, 113, -2, 104, 54, 124, 41, -50, -87, -10, -36, -90, 48, 121, -121, 101, -84, 28, 10, 36, 57, -85, 83, -112, 86, -101, 81, 41, -81, -110, -113, -106, 67, 30, -105, 92, -34, 73, -19, 78, 18, 47, 86, -4, -53, -59, -26, -10, -107, 54, 22, 80, 17, 69, 114, -42, 113, -50, -79, -20, 81, 49, 31, -75, 2, -118, -18, -101, 75, 91, 69, -109, 101, -91, -25, -90, -4, -24, -118, -61, -61, 18, 125, 19, 109, 97, -126, 59, -121, -39, -2, 61, -68, -1, -64, -66, -121, -127, -115, -108, 68, 74, 25, -5, -128, 114, -97, 57, -27, 39, -91, -72, -101, -54, 38, -96, -80, -22, -84, 84, 17, 83, -113, 57, -23, -128, 0, -10, -56, 74, 106, 43, 89, -12, 97, 13, -98, 26, -87, 33, 45, -52, -103, 46, -32, 120, -88, 56, 49, -114, -106, -85, 22, 6, -85, 94, -74, 101, -49, -10, 87, -36, 36, -124, -109, 84, -47, -104, -61, 17, -94, 124, 122, -90, -21, 63, 18, 64, -88, 126, 56, 5, -46, 22, -121, -60, -85, 82, -21, -51, -60, 28, 32, -85, -102, -61, -17, -43, 95, -22, 8, 25, -52, -64, -114, 52, -103, -7, 22, -8, -65, -21, -24, -86, 66, -124, 80, -125, 49, -66, -85, 23};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CompressedImage - Serialization/Deserialization #2")
{
  IMC::CompressedImage msg;
  msg.setTimeStamp(0.5969219187911879);
  msg.setSource(47660U);
  msg.setSourceEntity(200U);
  msg.setDestination(53819U);
  msg.setDestinationEntity(52U);
  msg.frameid = 27U;
  const char tmp_msg_0[] = {1, 79, 97, -126, -20, 60, -103, -55, 96, 1, 118, -20, -37, -52, 88, -78, 31, -27, 22, 0, -61, -22, 17, -41, -44, -2, 37, -93, 86, -114, 93, 15, -87, 89, -5, -13, -115, -124, 7, 19, -98, -39, -65, -64, -50, -20, 70, -7, 84, 64, 36, -41, 62, -13, 82, 2, -115, -9, 10, -96, 123, -50, 29, -14, -21, -68, 88, 10, -55, -57, 42, 125, -76, 36, -17, -47, -53, -69, -11, 31, -127, -122, -104, -123, -115, 63, 43, -126, 120, 33, -75, 109, 43, 92};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ImageTxSettings - Serialization/Deserialization #0")
{
  IMC::ImageTxSettings msg;
  msg.setTimeStamp(0.16450348463640152);
  msg.setSource(48566U);
  msg.setSourceEntity(124U);
  msg.setDestination(40156U);
  msg.setDestinationEntity(106U);
  msg.fps = 108U;
  msg.quality = 65U;
  msg.reps = 148U;
  msg.tsize = 78U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ImageTxSettings - Serialization/Deserialization #1")
{
  IMC::ImageTxSettings msg;
  msg.setTimeStamp(0.40299407764207296);
  msg.setSource(16889U);
  msg.setSourceEntity(44U);
  msg.setDestination(25202U);
  msg.setDestinationEntity(188U);
  msg.fps = 151U;
  msg.quality = 232U;
  msg.reps = 51U;
  msg.tsize = 229U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ImageTxSettings - Serialization/Deserialization #2")
{
  IMC::ImageTxSettings msg;
  msg.setTimeStamp(0.29721429353563256);
  msg.setSource(1443U);
  msg.setSourceEntity(103U);
  msg.setDestination(25851U);
  msg.setDestinationEntity(113U);
  msg.fps = 51U;
  msg.quality = 199U;
  msg.reps = 187U;
  msg.tsize = 124U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteState - Serialization/Deserialization #0")
{
  IMC::RemoteState msg;
  msg.setTimeStamp(0.020115186603454682);
  msg.setSource(55425U);
  msg.setSourceEntity(209U);
  msg.setDestination(41382U);
  msg.setDestinationEntity(251U);
  msg.lat = 0.8775477621128706f;
  msg.lon = 0.8235391561178201f;
  msg.depth = 8U;
  msg.speed = 0.9915698593184916f;
  msg.psi = 0.4000770076181527f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteState - Serialization/Deserialization #1")
{
  IMC::RemoteState msg;
  msg.setTimeStamp(0.45837436345163507);
  msg.setSource(45493U);
  msg.setSourceEntity(248U);
  msg.setDestination(43573U);
  msg.setDestinationEntity(99U);
  msg.lat = 0.6525646138965542f;
  msg.lon = 0.45998741830403544f;
  msg.depth = 39U;
  msg.speed = 0.03281746518136841f;
  msg.psi = 0.2818759806814509f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("RemoteState - Serialization/Deserialization #2")
{
  IMC::RemoteState msg;
  msg.setTimeStamp(0.7958446351411871);
  msg.setSource(9779U);
  msg.setSourceEntity(149U);
  msg.setDestination(23493U);
  msg.setDestinationEntity(104U);
  msg.lat = 0.04630163481221106f;
  msg.lon = 0.9981162354323333f;
  msg.depth = 149U;
  msg.speed = 0.07281438806373886f;
  msg.psi = 0.511919193683661f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Target - Serialization/Deserialization #0")
{
  IMC::Target msg;
  msg.setTimeStamp(0.35185910079409344);
  msg.setSource(26663U);
  msg.setSourceEntity(157U);
  msg.setDestination(37664U);
  msg.setDestinationEntity(69U);
  msg.label.assign("TTRZFBDRTPOXFXWRTNUVXMVJZZGSMNBLLAKDSSYBWIZKROOFZANKETDSJVSKCYBGQSNPJSRQNAVSIPZPUWBTOHNEWYCMGGPIYVPMOCIEVFIDLCJUQYP");
  msg.lat = 0.05986219184111252;
  msg.lon = 0.5755909090015079;
  msg.z = 0.3508685331314595f;
  msg.z_units = 2U;
  msg.cog = 0.5396897234392645f;
  msg.sog = 0.9125685599100253f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Target - Serialization/Deserialization #1")
{
  IMC::Target msg;
  msg.setTimeStamp(0.23069429672919206);
  msg.setSource(57304U);
  msg.setSourceEntity(54U);
  msg.setDestination(3943U);
  msg.setDestinationEntity(136U);
  msg.label.assign("QBKRLJCQRDXIIRMXORCHMMPMSQYAETWHHUFZYJNPSOAWWWRKXCITDWEZQVKEKZNHOWRPXAGRQMYKXKFGLJMHOBHYSLNNCKVKPXDZGHYSSUQVJDYGEBJLDCIVSQIMFOTUITPSWBIXUCODPJUVQIEMCJEYXZXUPZJBEB");
  msg.lat = 0.3977802150417843;
  msg.lon = 0.6453933169649064;
  msg.z = 0.13918337589954255f;
  msg.z_units = 104U;
  msg.cog = 0.5389945186158848f;
  msg.sog = 0.5665006843390947f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Target - Serialization/Deserialization #2")
{
  IMC::Target msg;
  msg.setTimeStamp(0.734763175526272);
  msg.setSource(29918U);
  msg.setSourceEntity(227U);
  msg.setDestination(16572U);
  msg.setDestinationEntity(109U);
  msg.label.assign("UANJCXVEBZOMSLUOLJJQFXGHGLDJRRSEJRBU");
  msg.lat = 0.326315376403189;
  msg.lon = 0.38904460050659795;
  msg.z = 0.09358200900264291f;
  msg.z_units = 71U;
  msg.cog = 0.6460142033117745f;
  msg.sog = 0.8846686967418737f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityParameter - Serialization/Deserialization #0")
{
  IMC::EntityParameter msg;
  msg.setTimeStamp(0.4225075540091745);
  msg.setSource(45144U);
  msg.setSourceEntity(145U);
  msg.setDestination(20970U);
  msg.setDestinationEntity(119U);
  msg.name.assign("IWWDFIYDTPTYBEQLHLOGGXEFV");
  msg.value.assign("TJVRZDHEROSRWKIXVTQWMQFAZIURKKXJGRPLDQWUEJZOVLGNUWAWTUCUXIPGMPBSOTCBAOJADWJVVCPCMEZBLRASHXOBMPETIOULNBOFVSZGIAFMNNTNICYABEIRFOUYEJMU");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityParameter - Serialization/Deserialization #1")
{
  IMC::EntityParameter msg;
  msg.setTimeStamp(0.9374813818010336);
  msg.setSource(26421U);
  msg.setSourceEntity(91U);
  msg.setDestination(43577U);
  msg.setDestinationEntity(246U);
  msg.name.assign("ZCLSEWXOAOUBWCJIGPTNOPGVQIZVRYOZITPEZKCQJL");
  msg.value.assign("QKHOLNZEYFLPBEUYAWDNVLKEMPPEYZQRNYEGCOFAAIHDLCKAQKFXYBXNTRNGYWCSPPATKFOBTTFOUIIXHMPMEOUTLTHZISHBWVPP");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityParameter - Serialization/Deserialization #2")
{
  IMC::EntityParameter msg;
  msg.setTimeStamp(0.38198720241051975);
  msg.setSource(10643U);
  msg.setSourceEntity(140U);
  msg.setDestination(5801U);
  msg.setDestinationEntity(51U);
  msg.name.assign("HPHDCPPKKILPQQSPAYUFYNSSGEWXHKYJBHZUWATPTLQGOWNKZVJRDDZERDCUYVRARFFLUOQCWZMAXJZDYMEUAOSTXNMJQYFASJWXMOBCLVEAQVGQQFDXWILTBNICHVSVFRIZWMVJKUNEAHRFMMBZNINYEKUDIAPDOBDVLNBQKMAMQLLDJOBTGPYOXWIHJTGPRRUT");
  msg.value.assign("SSWHVNZZFLGHXMWRUPLYQEAXPMXSDCAYJPVUNJWMRMRHCXLTMYZBBWSQGVIBLPDQISONEGIWBRGUWGAKCKSPUURHHXHNDYTVGDRKMNQSYVA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityParameters - Serialization/Deserialization #0")
{
  IMC::EntityParameters msg;
  msg.setTimeStamp(0.40990557553196283);
  msg.setSource(14702U);
  msg.setSourceEntity(144U);
  msg.setDestination(22977U);
  msg.setDestinationEntity(96U);
  msg.name.assign("BCMSTMKNZSRSPDVMKJRLLXQJNNXBICABOVNREINGMESULVKPEUCLLDK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityParameters - Serialization/Deserialization #1")
{
  IMC::EntityParameters msg;
  msg.setTimeStamp(0.7611406802999399);
  msg.setSource(16554U);
  msg.setSourceEntity(59U);
  msg.setDestination(4826U);
  msg.setDestinationEntity(143U);
  msg.name.assign("WEVNFRDGWLBOKUNNJVTDURJUBGFIPMRGFTBFCVEDWRKKHAZHZJTXYLAMOQQTUHYSFDZLWMZLVCSDLDFCDXMNSFNHELFKITEXQCUQCHUGQOQIMOBPZAQGRDPJIPHV");
  IMC::EntityParameter tmp_msg_0;
  tmp_msg_0.name.assign("VGNFXAHFFDTIRGXLQNYINBTNKQUXTQKLRNIJYRQYWUCVGXEARYIQAHGUPODPPTJVSNIZZMSZNBMKTZDQIUOHCEWTZYIBCRJTZJGUXXXCIDWFMATCVWSCFMSHWGCOSRFDDLJNUONBSMOUEBZOYELPLKTHCOPRAYNULQHYVOLSGZE");
  tmp_msg_0.value.assign("BJGTOCUHUIIUULCGURWLZRQXTBMWEPLYABVXNXGWFHTSYFOIDVRJAJYWADIMIKOLDYJJOQHCQOBAPVHVTQIVSHYTYQPLHZVUEXKEAFPRKHKACXNTDGDYRVALBSNGEICXWDCTGZUSMESGRWPODJDOYDHQZKMNLZBSTGEKGFQBWSVMMCF");
  msg.params.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("EntityParameters - Serialization/Deserialization #2")
{
  IMC::EntityParameters msg;
  msg.setTimeStamp(0.6558735292693185);
  msg.setSource(56534U);
  msg.setSourceEntity(82U);
  msg.setDestination(48163U);
  msg.setDestinationEntity(192U);
  msg.name.assign("QDZUCRYKCNIOEDJUWGTDPKBGVCYTIEDMDNIGWIQWJRAYYSLMKWIBJXAFRCPQVPRKUPROJVMFFPVPHOLIBTLSTKDXATZQF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityParameters - Serialization/Deserialization #0")
{
  IMC::QueryEntityParameters msg;
  msg.setTimeStamp(0.37812503862053415);
  msg.setSource(18127U);
  msg.setSourceEntity(67U);
  msg.setDestination(49726U);
  msg.setDestinationEntity(125U);
  msg.name.assign("LPWJAZFPZOQIBJDMFIBZPPWROHPTIZEQXULOHSGATJROVCLCHKKRKOGORPZEJLNFIYDWRUZSINWGMJQSAVHQAXTFBRZYTWQLWLBOWJRGMWFUMOHXEGBHDDNE");
  msg.visibility.assign("YAVRWTXNCOLSYQUEAGLOSHGVUZHUBUOYAHJQRKIEQLTADWAFGQFBEAURTIEMEOSIWHTGUDHXWZIDTGQFZVQHTKAXJCNINFVXMKLINXNWOZYGUJLEEBHPRBEJCSBIWTANLZUKDR");
  msg.scope.assign("PEEFOYYMOAOSZQZZVZLPJZFQJZPEZPQAJQRVTVIDXRNFXODBMNFIRNJIYPSXRYAKDUGWWGLQMLDKUMCXGOHLKCERSWLPKJOPGQZRLJTHHVIGESGITNXCMHIRRKEMDTVWTHCDXNVBVFUUCGVLABOFGHIMZEOJBYELDHCKACWWSQIYNSYBXKFVPDCAAQVJKXHDIQUWRLAPXMABSTUSTAKBPDYNFWCEJFI");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityParameters - Serialization/Deserialization #1")
{
  IMC::QueryEntityParameters msg;
  msg.setTimeStamp(0.7827688606660205);
  msg.setSource(13911U);
  msg.setSourceEntity(133U);
  msg.setDestination(9516U);
  msg.setDestinationEntity(166U);
  msg.name.assign("UEDOXSSORRPXQQRQZMKORGAYQXADMSDYYTNPJYUZNFCWEEWNDLGVHURNJTAQVYINMFSIOGKNPJHZFSBBMKWQSLHEUOURQTZQLGEZAOXMMJWZRMEGACIDXOFTPTPYJXCCKCHBFXLWEITVULHEHHIZIJMSVBDVKJCKAAKSPEPRNTGBCYWLPLDYVZSJWFDFAYKFLGZGZJICUDH");
  msg.visibility.assign("NHFCVXJKIUQMVVZDCLJOHLPXSYFVNWRMFWGTJIDOKNHAXZBLWOAVHLBSXCFJCLDAMNHQOLYBYARSYLYOKCMUHKJMHUQPGDRTJOAOSHLPGEBUDZHVEIASRWVLFMKNFZIUSLXTEDNXJATAWEKBCECQPZIYQDGRFEBNORQCWTVQTYKSZODZSBGOPMWIKDTTXWRYNWMRJNPPUGBQTRYQENGCFAHFCQWIFIRPIGUKGJUZMKUXPSUZDTGXEBAEVYJPZ");
  msg.scope.assign("PCFULSOUGTWPKCPBDYDPTNFSLQIASTOGGWFD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("QueryEntityParameters - Serialization/Deserialization #2")
{
  IMC::QueryEntityParameters msg;
  msg.setTimeStamp(0.0008997299829958116);
  msg.setSource(22876U);
  msg.setSourceEntity(146U);
  msg.setDestination(50218U);
  msg.setDestinationEntity(92U);
  msg.name.assign("IKDDFVHHKRLCSTNAKBIMXZUEROGJJEOFOEQQVOJZNUJJIBDBWTLHEDCCERMUOCXAKQZUZPPQABIOTMLYNISTDYKGNAFPLVGDG");
  msg.visibility.assign("BKKGCGPKDZNCPEWYHBCQYMTVFYGCDMYIPQNTXKPSOTHWEOWKXJYPNQDSNUJJVMZZRPOWAUWFGLGWEACVGRLEFURLJSAREIQZSRAPOXSMINQUIVBYKUFZ");
  msg.scope.assign("UDRBUOPZEXVFJOPGCHTXPBUDJLFCNHUNXPXKDPDTWIIYHXLXBHMQCSGXLDHCITBRHWALGRY");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetEntityParameters - Serialization/Deserialization #0")
{
  IMC::SetEntityParameters msg;
  msg.setTimeStamp(0.2915078214961523);
  msg.setSource(51908U);
  msg.setSourceEntity(105U);
  msg.setDestination(14989U);
  msg.setDestinationEntity(60U);
  msg.name.assign("VPSQVRGRBJMGCIOJYGEMXIVXNNSXNMRSPATWLAZAWHLFLHFCBZDGIBVLLTDMDLQYHFNKROUUGLRDCZSCKENWXTPOJZIHWPUTJXCBOJKPMJLQGXAWGMOFPAWFUVEFEPUCQNIKLFUNUMEIXXRQABDZK");
  IMC::EntityParameter tmp_msg_0;
  tmp_msg_0.name.assign("VEWCVSMVWSCTIKOAKWXZ");
  tmp_msg_0.value.assign("JZWXQPRJZAZLUZBATLYXNMUBEKRQWTMLLPUMQIFHEUSRCWKFPVDGNFXAIDMSYZVVAEAZKDPVFXWRESKOEIJHMDDALC");
  msg.params.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetEntityParameters - Serialization/Deserialization #1")
{
  IMC::SetEntityParameters msg;
  msg.setTimeStamp(0.18006495760260643);
  msg.setSource(8071U);
  msg.setSourceEntity(62U);
  msg.setDestination(31194U);
  msg.setDestinationEntity(241U);
  msg.name.assign("LQIYEOFKHHAEJPDLZTJBZCKCXNTDXLNUUJOSVIWAUNEVIRGBDVSNPXJYPSVLCFYGFIPZUCZCCKFBXUSPRKVMFJEDMBEIKUOEIRUEAMDPWNDRHUQZXNJBFKLOSZHQQLWCGMDHXRRMTSATWSEWCFRXWYTORVJDVJZZYONIGOGOYUPYHQQYVTFBFGLKMVXNIDKRTLAAJL");
  IMC::EntityParameter tmp_msg_0;
  tmp_msg_0.name.assign("YVXQSGTVCBHPSCESXUJDFKHRNOPNQGQYJQVNHLFXVKZPLCVDDARIMQDRXINDQDEJOWKZKZEWSNOCGBTFGEAMGDQFGMOUHFIAJRUOSHPPRWLGSFGVDAUCHTYTZMXJMBSXZECAMFPHEILRTXBALLJLTYNJFQCZPVCQBEVRUYDJKBAVYNLIWMKAKWYIBJZBTTZZFYKFK");
  tmp_msg_0.value.assign("YTXLWGQBRGIWMVKNHVQIINHPIWYGDUPRAASJRKYTDAXKGHSOQIGVTMIPUPMWUOPJBWPSWWRCZOWZVPRMDSZYHLNFNKEAXZYCJNVHFUQHAMTIQFFEXUPXRVHHDMJNLIOBSVAIFJZGEBDXEQGESOGCFKVQYXTKMNCWCUZQUPZAJBGDAKRJXLLZLBOCTSVNRGVCEFFZEBXLYDLEJSPNTTXOUEEKOHLRCMUYYCWBANAJBDZFDKBSUYJFI");
  msg.params.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetEntityParameters - Serialization/Deserialization #2")
{
  IMC::SetEntityParameters msg;
  msg.setTimeStamp(0.09289574047627691);
  msg.setSource(49858U);
  msg.setSourceEntity(59U);
  msg.setDestination(46899U);
  msg.setDestinationEntity(129U);
  msg.name.assign("VMOZULDNQZSNLRGZUZYIHSOUDBKCCQHXTBYKHWPWSEERKVRDMWMTIYPJZGSRHAGIRZXGGJDLSBLFWIKCOWGREYPHFJEJYVOZGAPOCVGCTI");
  IMC::EntityParameter tmp_msg_0;
  tmp_msg_0.name.assign("WJNVQJNOTGTQHPMVLBKEUJMPDADHCDAWASOLCUOBULGSXQEPNSQLMXWENHHPNERJLIOUKCXFKWPUCESWLOVEQDBNPIGWHTARXMGYFYKZAUAEXNGEOYWRORSRGANBYBJKGTOSJFTDDCDIWFPFRPHWIORXTCAFDJUMKHKRPZGEZZLCKQCTLYYZIZGMVBYVIQQFPYMXUTQBVHSJXBZN");
  tmp_msg_0.value.assign("TDMSCIATRVGQDZIJUPPHNPAETMAGBFDNLMZIRYHSBVZCMOVWYVQJYFEAPO");
  msg.params.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SaveEntityParameters - Serialization/Deserialization #0")
{
  IMC::SaveEntityParameters msg;
  msg.setTimeStamp(0.11342393528823003);
  msg.setSource(57792U);
  msg.setSourceEntity(58U);
  msg.setDestination(50143U);
  msg.setDestinationEntity(168U);
  msg.name.assign("FUBHURJSJVFCVIEMCZHBNZIKJGBXRFMYMNAGEGVLOVWXDXVRUMOTMTF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SaveEntityParameters - Serialization/Deserialization #1")
{
  IMC::SaveEntityParameters msg;
  msg.setTimeStamp(0.9521772948853465);
  msg.setSource(59721U);
  msg.setSourceEntity(9U);
  msg.setDestination(24421U);
  msg.setDestinationEntity(230U);
  msg.name.assign("YQHEHAKJNDDNRZFQMBWNESLCBOSOSJSIJXIXXATJLVZBSDDQIDYFSMWUIMKNUNTEVWFPUVJPHHGUWOTSOXQFVZJYTCBGYREFASGFHGANAUWBZBNI");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SaveEntityParameters - Serialization/Deserialization #2")
{
  IMC::SaveEntityParameters msg;
  msg.setTimeStamp(0.5963358966945119);
  msg.setSource(10450U);
  msg.setSourceEntity(125U);
  msg.setDestination(11182U);
  msg.setDestinationEntity(81U);
  msg.name.assign("DUPASBGZXKQUWNGUOZEUQEXODKEMJMFTCFNQNWDWVLVBTYYTHIYECGXMFQTAXZCJTMHSMRLDYIPTVVJMJFVVHNFRGQEKSIIOQOIMAAWULZEVONWEUSTJSPKDUUZRVHIPDGUPBVLCPIZQTRBYXMAZXFHUZRHOWVYRRERPPJQOBAYLBHGFTRWDKXGEOJKGKRKSXJFXCLWNLFPBDWKCTBBCLKAISYAAHSIDGQSHPLOLCZOCSMZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CreateSession - Serialization/Deserialization #0")
{
  IMC::CreateSession msg;
  msg.setTimeStamp(0.19738820152023606);
  msg.setSource(19939U);
  msg.setSourceEntity(200U);
  msg.setDestination(56983U);
  msg.setDestinationEntity(205U);
  msg.timeout = 3298704031U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CreateSession - Serialization/Deserialization #1")
{
  IMC::CreateSession msg;
  msg.setTimeStamp(0.8203973463534625);
  msg.setSource(29919U);
  msg.setSourceEntity(65U);
  msg.setDestination(20775U);
  msg.setDestinationEntity(148U);
  msg.timeout = 3866310290U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CreateSession - Serialization/Deserialization #2")
{
  IMC::CreateSession msg;
  msg.setTimeStamp(0.8531804736802554);
  msg.setSource(32705U);
  msg.setSourceEntity(29U);
  msg.setDestination(19442U);
  msg.setDestinationEntity(19U);
  msg.timeout = 155146621U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CloseSession - Serialization/Deserialization #0")
{
  IMC::CloseSession msg;
  msg.setTimeStamp(0.7580855378821356);
  msg.setSource(61132U);
  msg.setSourceEntity(56U);
  msg.setDestination(38361U);
  msg.setDestinationEntity(127U);
  msg.sessid = 222317052U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CloseSession - Serialization/Deserialization #1")
{
  IMC::CloseSession msg;
  msg.setTimeStamp(0.27961443895664706);
  msg.setSource(35529U);
  msg.setSourceEntity(96U);
  msg.setDestination(17389U);
  msg.setDestinationEntity(32U);
  msg.sessid = 428156449U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("CloseSession - Serialization/Deserialization #2")
{
  IMC::CloseSession msg;
  msg.setTimeStamp(0.24336276562487935);
  msg.setSource(33191U);
  msg.setSourceEntity(59U);
  msg.setDestination(22728U);
  msg.setDestinationEntity(163U);
  msg.sessid = 3661465280U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionSubscription - Serialization/Deserialization #0")
{
  IMC::SessionSubscription msg;
  msg.setTimeStamp(0.6381162700041716);
  msg.setSource(9352U);
  msg.setSourceEntity(53U);
  msg.setDestination(12767U);
  msg.setDestinationEntity(60U);
  msg.sessid = 2854176421U;
  msg.messages.assign("ZGHBKPJEVMWNFVMNLQCUVSILSUFGBHWEHYHUYWTK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionSubscription - Serialization/Deserialization #1")
{
  IMC::SessionSubscription msg;
  msg.setTimeStamp(0.11560612224838185);
  msg.setSource(19263U);
  msg.setSourceEntity(111U);
  msg.setDestination(7861U);
  msg.setDestinationEntity(91U);
  msg.sessid = 539517933U;
  msg.messages.assign("VJCQASMDJWWELPYKZHXAOJHREBIVIQIMWIYGRBPGSWDZFSDGWEDOJOSQYVHTFKFRFJMGS");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionSubscription - Serialization/Deserialization #2")
{
  IMC::SessionSubscription msg;
  msg.setTimeStamp(0.7996099634661408);
  msg.setSource(12424U);
  msg.setSourceEntity(43U);
  msg.setDestination(30585U);
  msg.setDestinationEntity(137U);
  msg.sessid = 136350997U;
  msg.messages.assign("BLDJRWAWBJJSROTFGRYLTPWKQFHGOGJQUYWBPZNECOMLFICERGYFILNKXQNLTOVJDHFOULXYCAKRMDHQACCEMIQOIDQNSAZAMHZFXOFXJQEKFWIWVQHHYSSEEVUPULNIDBPTEOVXHMADPUNBLIPZMSWYTLHOUKKUBXIICHPCVMSJNGKJQBNABRYUVTRAZYJVXTGAGRWMTUDPLMSGCZZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionKeepAlive - Serialization/Deserialization #0")
{
  IMC::SessionKeepAlive msg;
  msg.setTimeStamp(0.4024299284485079);
  msg.setSource(16307U);
  msg.setSourceEntity(85U);
  msg.setDestination(63704U);
  msg.setDestinationEntity(27U);
  msg.sessid = 4179339248U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionKeepAlive - Serialization/Deserialization #1")
{
  IMC::SessionKeepAlive msg;
  msg.setTimeStamp(0.6657163389255276);
  msg.setSource(15970U);
  msg.setSourceEntity(186U);
  msg.setDestination(51132U);
  msg.setDestinationEntity(176U);
  msg.sessid = 541474145U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionKeepAlive - Serialization/Deserialization #2")
{
  IMC::SessionKeepAlive msg;
  msg.setTimeStamp(0.31786997163356756);
  msg.setSource(58656U);
  msg.setSourceEntity(195U);
  msg.setDestination(19152U);
  msg.setDestinationEntity(20U);
  msg.sessid = 1647892790U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionStatus - Serialization/Deserialization #0")
{
  IMC::SessionStatus msg;
  msg.setTimeStamp(0.4177854510053187);
  msg.setSource(28031U);
  msg.setSourceEntity(170U);
  msg.setDestination(969U);
  msg.setDestinationEntity(16U);
  msg.sessid = 3420781973U;
  msg.status = 140U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionStatus - Serialization/Deserialization #1")
{
  IMC::SessionStatus msg;
  msg.setTimeStamp(0.23032377064286547);
  msg.setSource(4120U);
  msg.setSourceEntity(112U);
  msg.setDestination(51217U);
  msg.setDestinationEntity(7U);
  msg.sessid = 1403516726U;
  msg.status = 219U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SessionStatus - Serialization/Deserialization #2")
{
  IMC::SessionStatus msg;
  msg.setTimeStamp(0.16527674606922027);
  msg.setSource(43931U);
  msg.setSourceEntity(176U);
  msg.setDestination(43808U);
  msg.setDestinationEntity(237U);
  msg.sessid = 2479843260U;
  msg.status = 7U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PushEntityParameters - Serialization/Deserialization #0")
{
  IMC::PushEntityParameters msg;
  msg.setTimeStamp(0.14920587603091484);
  msg.setSource(51802U);
  msg.setSourceEntity(252U);
  msg.setDestination(55032U);
  msg.setDestinationEntity(185U);
  msg.name.assign("SJUXQRAFRXXZJQCFTPBMZAWXKBKJFCMPWRDBDCTLMQNPYZKTUAPJAREIALOTVEYKIILKAPGUMUVBRYUUTTEJRWQGHPECDASLSHTVFTANVPMEGQRYWSJEXHLYCWIFBCWPLGSGFQUMVBMHNZGHDHZOJEKLZOX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PushEntityParameters - Serialization/Deserialization #1")
{
  IMC::PushEntityParameters msg;
  msg.setTimeStamp(0.3264490750051233);
  msg.setSource(25339U);
  msg.setSourceEntity(108U);
  msg.setDestination(235U);
  msg.setDestinationEntity(160U);
  msg.name.assign("GZMSODWTUZYJQANBZGVKKPFWUADCGTWKDOHOCOIQPDXVXXNUAKWMSGNTRSABYXUNZLCNLUBHRFFMHMAOOQHVSSJLULKEHYGJVGECGNRJXWVAFEZMDQSNRYNPHMZUJFBUQORQMRWKTXTDYHIN");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PushEntityParameters - Serialization/Deserialization #2")
{
  IMC::PushEntityParameters msg;
  msg.setTimeStamp(0.1442772344354596);
  msg.setSource(50123U);
  msg.setSourceEntity(240U);
  msg.setDestination(43856U);
  msg.setDestinationEntity(248U);
  msg.name.assign("XAFPSCCQGVNPLFBHCKWUHEXZWEHBHESCSNQJTPBSMPCDIBRATXBZFWZVJQFTNUFADJJSIVLYKOJFVIBREXGDZUHFRRHSVMDCRMRIBKMCAWGAKQVTDEQGEAXFYSIKIIVOAWSUNXATYCHLBUIYPSXMZAINLWIWOEOPETERNUFPOTMLLMOOZKZYKVXUDJHCXVWQGBTNURUWAOWQVBGRNZOJSQMQCYQKHGDMMNPXLYDK");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PopEntityParameters - Serialization/Deserialization #0")
{
  IMC::PopEntityParameters msg;
  msg.setTimeStamp(0.20261159420430896);
  msg.setSource(34482U);
  msg.setSourceEntity(15U);
  msg.setDestination(55879U);
  msg.setDestinationEntity(216U);
  msg.name.assign("FRIRWYVKDBOGNRODHBWHJP");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PopEntityParameters - Serialization/Deserialization #1")
{
  IMC::PopEntityParameters msg;
  msg.setTimeStamp(0.2772527835960874);
  msg.setSource(16042U);
  msg.setSourceEntity(186U);
  msg.setDestination(39382U);
  msg.setDestinationEntity(50U);
  msg.name.assign("GQPBVXYURCEJASPDHWEFRSEMZFKPFATHKWYHEMCFTAQQNGDBLSLAGTKLLWTRIOGMUDGNSRESXUTHZJVYBNNVCOQYWKIVMMHCVOBRYOCRGIUPBNAZUMUWTBXJXOLEQEMLIDXBLEYTAMIGJXPZXDJ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("PopEntityParameters - Serialization/Deserialization #2")
{
  IMC::PopEntityParameters msg;
  msg.setTimeStamp(0.9607155232648649);
  msg.setSource(9186U);
  msg.setSourceEntity(149U);
  msg.setDestination(26247U);
  msg.setDestinationEntity(49U);
  msg.name.assign("TPDIHORHMV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IoEvent - Serialization/Deserialization #0")
{
  IMC::IoEvent msg;
  msg.setTimeStamp(0.8671391258523804);
  msg.setSource(35919U);
  msg.setSourceEntity(207U);
  msg.setDestination(51541U);
  msg.setDestinationEntity(15U);
  msg.type = 153U;
  msg.error.assign("NMWOFFTPGUPPBMGKUNMJAROPAHPLGVXYUWEZPXOQEJQWVIPGQD");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IoEvent - Serialization/Deserialization #1")
{
  IMC::IoEvent msg;
  msg.setTimeStamp(0.5965454021953608);
  msg.setSource(17981U);
  msg.setSourceEntity(252U);
  msg.setDestination(62635U);
  msg.setDestinationEntity(226U);
  msg.type = 163U;
  msg.error.assign("YQKVQUMFDPZYFARSNROKUYNKFJTLGCGQATVXUZXBJXTXXVBIWPUNZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("IoEvent - Serialization/Deserialization #2")
{
  IMC::IoEvent msg;
  msg.setTimeStamp(0.6859061717355843);
  msg.setSource(25777U);
  msg.setSourceEntity(146U);
  msg.setDestination(23141U);
  msg.setDestinationEntity(91U);
  msg.type = 80U;
  msg.error.assign("LXYJACNHDMNNUMPURTLOBAHUHJFQVIGNWCFTFRVZXRMSCWEZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxFrame - Serialization/Deserialization #0")
{
  IMC::UamTxFrame msg;
  msg.setTimeStamp(0.13747791709553192);
  msg.setSource(147U);
  msg.setSourceEntity(253U);
  msg.setDestination(37878U);
  msg.setDestinationEntity(213U);
  msg.seq = 46151U;
  msg.sys_dst.assign("BOASZKIBQPVWHKYOJHAIXRZNNWTHCSEZAUJODOVRRCGLYGMCKBHYSYMUWJDZZLMPRUDSKSWZHKDEUQXVFLMURPICWRZJSASZNOJNFAITQ");
  msg.flags = 241U;
  const char tmp_msg_0[] = {71, 30, 26, 67, -128, -89, -125, 126, 83, 64, -124, 71, 59, -8, 11, 39, -114, 98, 14, 90, 36, -20, 84, -109, 23, -87, 115, -33, -101, -7, -119, 2, -31, -98, -30, 60, 105, 23, 8, -110, -8, 124, 46, -88, -114, 119, -36, 0, 110, 31, -19, 95, -92, 41, -10, 23, -6, 85, 23, -22, -47, 103, -83, -94, 63, 70, -63, -126, -9, -25, 7, 92, -58, -70, 28, -23, 56, -57, 70, 88, -19, -82, 80, -128, 78, -5, -36, 20, 28, -105, -69, 68, 59, -65, 4, 89, 31, -104, -31, -66, 13, -95, 70, -29, -53, -40, 91, 59, -10, -93, -44, -27, 69, 87, 117, -39, 4, -122, 87, 41, -93, -58, -123, 32, 37, 12, -42, 57, 109, 120, 102, 5, 94, 19, 106, 46, 112, -60, 52, -17, -39, -84, -117};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxFrame - Serialization/Deserialization #1")
{
  IMC::UamTxFrame msg;
  msg.setTimeStamp(0.39363209299991997);
  msg.setSource(55818U);
  msg.setSourceEntity(245U);
  msg.setDestination(21603U);
  msg.setDestinationEntity(212U);
  msg.seq = 29315U;
  msg.sys_dst.assign("ZBKOIPNGQGANKNWICCTHFDGLTGMFKQVCRHSBJXWITGPLSU");
  msg.flags = 61U;
  const char tmp_msg_0[] = {-30, -105, 95, -112, 88, 33, 80, -106, -33, -43, -91, 19, -96, 24, 35, 19, 108, 50, 37, -80, -115, 80, -85, -32, 95, 90, -82, -91, 39, -122, 21, -127, 91, -12, 43, -29, 16, 88, 111, 18, 13, -50, -60, -6, 116, 108, -2, 111, -33, 113, -121, -19, 94, 84, 82, 28, -92, -55, 116, 58, 69, -31, 86, 82, 5, 14, 47, -103, -45, 74, 117, 5, -100, 104, 118, -18, 62, -47, 62, -110, -99, 103, 40, -34, -104, -10, 42, -62, -82, 82, -118, 57, 99, 3, -29, 68, 81, -9, -87, 2, -128, 70, 84, 23, -90, 88, -119, -106, 77, -35, 23, 28, -66, 43, -121, -92, 32, -42, 37, 32, 119, 71, 30, 96, -4, -125, 111, -93, 90, 77, -42, -119, 30, -18, 22, 26, 27, 75, 55, -88, -104, -51, -80, 58, 70, -125, -127, 91, -97, 38, 38, 76, -74, -7, -17, -96, -80, -33, 106, -81, 96, 59, 70, 67, -20, -86, 85, -84, -18, -117, -85, 14, 58, 36, -55, -32, 72, -25, -110, 73, -12, -1, -103, -31, -58, -3, 2, -9, 76, -56, 56, 52, -107, -126, -100};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxFrame - Serialization/Deserialization #2")
{
  IMC::UamTxFrame msg;
  msg.setTimeStamp(0.7904755025240141);
  msg.setSource(57577U);
  msg.setSourceEntity(134U);
  msg.setDestination(8444U);
  msg.setDestinationEntity(83U);
  msg.seq = 43055U;
  msg.sys_dst.assign("DSXRQBYDCSECQUUEVRCMXZAWMNOZPPHAGKHDSITGSV");
  msg.flags = 87U;
  const char tmp_msg_0[] = {-15, -106, -29, -35, 41, -76, -61, -31, 17, 18, -36, 15, -20, 88, 114, -36, 78, -19, 109, 92, 124, 58, -29, -122, -34, 31, 28, 45, 0, 44, -115, -86, -125, -75};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamRxFrame - Serialization/Deserialization #0")
{
  IMC::UamRxFrame msg;
  msg.setTimeStamp(0.5264758911953366);
  msg.setSource(28081U);
  msg.setSourceEntity(242U);
  msg.setDestination(19403U);
  msg.setDestinationEntity(73U);
  msg.sys_src.assign("KZLDKJNRYYVCSHCLFVNBQXOSKWFTTAFFLPTTLBGFJOWNNCIKGQVNCPNCTYDJIZXLSKONTMXZCWPNHNTZROGCAUTQXQIJTVUHUIXRPSFBDOKCFMBFXJWUBLWQJFVVZAHQAPHRBRRDZESHQHUREXOUPWY");
  msg.sys_dst.assign("BBUUMJVRJSGQH");
  msg.flags = 97U;
  const char tmp_msg_0[] = {0, 24, 83, -110, -104, -53, 113, -48, 54, -8, 81, -92, 29, 59, -48, -117, -25, -67, 40, -93, -103, 60, -70, -127, 50, -63, -31, 38, -91, 96, -25, -44, -81, -102, 32, -88, -128, -13, 84, -27, 38, 21, 75, -79, -107, -12, 32, 110, 41, -82, 112, -24, -47, -113, -75, -80, 9, -121, 119, 12, 72, -73, -56, -66, -83, -29, 19, 68, -73, 112, -50, 83, 94, 116, -1, 19, 53, 63, 18, -66, 29, -116, 42, -39, 100, 76, -68, -12, -46, -86, 101, 71, -105, 87, -15, -123, -97, 36, -16, -43, -86, -62, 99, 44, 117, 112, 106, 46, 2, 53, -38, 64, -99, 77, -79, 37, 16, -94, 41, -67, -73, 19, 5, 90, -46, -72, 77, 105, 109, -97, -81, -37, 11, -37, 49, 69, -59, -40, -51, 64, -47, -19, 4, 125, 24, -20, -22, 83, 20, -117, 72, -80, 43, 45, -41, 69, -49, 117, -79, -76, -92, -50, -84, -19, -40, -108, 75, -125, 39, -103, 97, 42, -41, 52, -65, 61, -26, -73, 67, -3, -88, -67, -78, 81, 56, -110, 67, -83, -65, -109, 70, 86, 124, 66, -5, -33, -48, 68, 67, -45, -40, 75, -3, 35, -76, 124, -99, -69, 74, 60};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamRxFrame - Serialization/Deserialization #1")
{
  IMC::UamRxFrame msg;
  msg.setTimeStamp(0.7307842798209624);
  msg.setSource(62323U);
  msg.setSourceEntity(130U);
  msg.setDestination(2999U);
  msg.setDestinationEntity(80U);
  msg.sys_src.assign("HYDGIQZMICJPSENJQOMFPDZWCWFKVRVMWLBZZQIPLLPLKTTVBXHKXCQTZAJAAEJS");
  msg.sys_dst.assign("SKCKBFOZVHHINECDQYHDPHWJJRKEXQKLYMUXRUIRV");
  msg.flags = 2U;
  const char tmp_msg_0[] = {104, -47, 78, 40, -114, -4, 45, 15, 46, -107, 16, 73, -105, -90, 76, 94, 123, -119, -6, -45, 22, -8, -114, -100, -124, -82, -20, 115, -7, -17, 67, -14, 63, 32, -42, 30, 22, 73, 31, -46, -44, 61, -66, -69, -17, -73, -72, -95, -114, 59, 84, 22, -10, 46, -30, 44, -61, 8, 50, 36, -32, 66, 65, -112, -116, -84, 11, 86, -87, -82, 15, -61, 107, 9, -36, 85, 101, 107, 124, -27, -81, -18, 115, 34, 66, -56, -70, 1, 125, 46, 5, 24, -14, 96, -55, 42, 70, -78, -116, 123, 22, -121, 90, -126, -25, -44, 40, 110, -105, -31, -88, 71};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamRxFrame - Serialization/Deserialization #2")
{
  IMC::UamRxFrame msg;
  msg.setTimeStamp(0.5632896571128585);
  msg.setSource(7265U);
  msg.setSourceEntity(209U);
  msg.setDestination(34596U);
  msg.setDestinationEntity(160U);
  msg.sys_src.assign("HWFZAAZYHNRCIT");
  msg.sys_dst.assign("OSUFKASUVGMIC");
  msg.flags = 6U;
  const char tmp_msg_0[] = {-126, 29, -85, 25, -116, 54, 73, -66, -61, -70, -51, -101, 5, 75, -21, 11, 91, 106, -122, -37, 124, 13, 118, -82, -65, -38, -9, 75, -116, 49, 2, -63, -14, -44, -128, -64, 14, -125, 125, -9, -34, -49, -86, -73, -12, -122, 13, 71, 5, 74, -36, 107, -35, 12, -51, -68, -92, -44, 72, -36, 88, 94, -4, 73, 92, 70, -86, -58, 60, -89, 36, 55, 61, -104, 77, -104, 126, 36, 59, 39, 4, 53, 36, 28, 119, -28, 77, 48, 98, -81, -87, 55, 44, 122, -65, 126, 102, -92, 63, -76, 48, 98, -108, -68, -21, 16, 89, 42, -77, -12, -61, 101, 36, 118, 124, 48, -17, 22, 94, -116, 103, -109, -85, 95, 63, 22, -110, 94, 119, 72, 22, -96, 93, -53, 59, 20, -5, 62, -117, 120, 81, 4, -38, -100, 12, 94, 40, 26, -112, 0, -1, -104, 82, -55, 103, 93, 51, -37, 122, -39, -89, -98, -86, 15, -1, 5, -66, -57, 109, 15, -84, -40, 63, -67, -21, 70, 63, 102, -65, 80, 82, 10, -6, -126, 17, -48, 47, -96, 120, 126, -59, 60, -111, -1, 4, 94, -15, -94, 80, 72, -50, 26, -3, 52, 75, -118, -61, -105, 57, -100, 64, 3, 53, -82, -108, 124, -106, -3, -47, 20, -72};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxStatus - Serialization/Deserialization #0")
{
  IMC::UamTxStatus msg;
  msg.setTimeStamp(0.37949005598438346);
  msg.setSource(18918U);
  msg.setSourceEntity(209U);
  msg.setDestination(41975U);
  msg.setDestinationEntity(127U);
  msg.seq = 46241U;
  msg.value = 113U;
  msg.error.assign("HSSCSLMFCDLGAVZLTHVTPJLKQSOWITMUPYHAARJCFSVTNZFHALDOQDAIJITVEUAQFDBODKEQJABAMGEOHNGIPXWORVLAWINDCMIWUGESOBJCYSDNKXWIGKPFMZRJUKFXYXXEFVRLQXJYKRCZNKJSYTUOMUYRTQZKZBYPKFCHWPQGBAUNRZNUYGWOBNLTWHPSEGLMYRDBGDHTEMZWCY");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxStatus - Serialization/Deserialization #1")
{
  IMC::UamTxStatus msg;
  msg.setTimeStamp(0.36949695242826275);
  msg.setSource(40703U);
  msg.setSourceEntity(197U);
  msg.setDestination(48304U);
  msg.setDestinationEntity(197U);
  msg.seq = 63896U;
  msg.value = 138U;
  msg.error.assign("OPHAQEQJEDUKJFIBSIPUKNVTEQHGIKCXUPMZYTUPUVJHJHJJYGYXPVGJFOUMTREEZDNOGEBJDLNA");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxStatus - Serialization/Deserialization #2")
{
  IMC::UamTxStatus msg;
  msg.setTimeStamp(0.3271791985843462);
  msg.setSource(37255U);
  msg.setSourceEntity(120U);
  msg.setDestination(62092U);
  msg.setDestinationEntity(140U);
  msg.seq = 26692U;
  msg.value = 104U;
  msg.error.assign("JGJBMGCHDLCNPNEKRRFVRQUWENKHJJWMNAEFBCTYHEWWVDXXTKGBUJYIPKCPSGQXSGVRORJVUQBTRNEAMFFQEJSIEHTAHLTZKLYYDHZXZGPSBAZZWWEDMPXUUXMQDIMITUZIBIPWLFHVSKGEOITNAYCHTRMYXNUXEQLCDIHURTLSZPVYAVAARDQXSOJOQOBCJJNLFKUBMVKBQQSVNDKFCMWSHPLZYLYURWAODKSOFPCTOV");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamRxRange - Serialization/Deserialization #0")
{
  IMC::UamRxRange msg;
  msg.setTimeStamp(0.7375172514558468);
  msg.setSource(30963U);
  msg.setSourceEntity(178U);
  msg.setDestination(46443U);
  msg.setDestinationEntity(71U);
  msg.seq = 36882U;
  msg.sys.assign("HLVXPHMNZUMVCJBAIEUXYSKTHYXBDZ");
  msg.value = 0.6384872254395643f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamRxRange - Serialization/Deserialization #1")
{
  IMC::UamRxRange msg;
  msg.setTimeStamp(0.4475477977487473);
  msg.setSource(40108U);
  msg.setSourceEntity(222U);
  msg.setDestination(38080U);
  msg.setDestinationEntity(85U);
  msg.seq = 30189U;
  msg.sys.assign("RGVAFVMLTBPIKMEVEWKQUBTACJUWJNANXYFVWPDOGIBGSRNXCSQAHKRABOXFCGFJTMKIHMRZZGIBLNAYZTULTSZDCZZNLIBDDUFWSOHTHOHZQXMRJGOPJLDOJIQUEYLMAWPQHEUMFEWGLAYTPGX");
  msg.value = 0.2556916143367224f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamRxRange - Serialization/Deserialization #2")
{
  IMC::UamRxRange msg;
  msg.setTimeStamp(0.5606456488650908);
  msg.setSource(54355U);
  msg.setSourceEntity(226U);
  msg.setDestination(29150U);
  msg.setDestinationEntity(245U);
  msg.seq = 31090U;
  msg.sys.assign("VIPUUQFKZDFBRXFMVWBKTYZQNLXGEABAFEXMJTWLZDPALJRSKCUXLRWFDACQSWAUMAIEZQKSSIPBKGVWFQZGEJDJWZHIEMODCATAGTPFEQHOHROQNLLXJWWYCJOSIYOLPZGTOKHSZNYQEAEFHMNBRDNDUKDXMTJORXSVDTMOMPHTIUKIAFNYGHSRSUGJCTQNCZMDVPVKRLBCWVJRYYHXELNYITRBMQBYFKVCLUICVXHZ");
  msg.value = 0.7348044533097513f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxRange - Serialization/Deserialization #0")
{
  IMC::UamTxRange msg;
  msg.setTimeStamp(0.4457878071398217);
  msg.setSource(51104U);
  msg.setSourceEntity(102U);
  msg.setDestination(17892U);
  msg.setDestinationEntity(42U);
  msg.seq = 1986U;
  msg.sys_dst.assign("CESRBIQCHVWMBGJQ");
  msg.timeout = 0.30944790657739063f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxRange - Serialization/Deserialization #1")
{
  IMC::UamTxRange msg;
  msg.setTimeStamp(0.7496620709990496);
  msg.setSource(36039U);
  msg.setSourceEntity(113U);
  msg.setDestination(50679U);
  msg.setDestinationEntity(131U);
  msg.seq = 24055U;
  msg.sys_dst.assign("EOFNXZJRABDIPTXNCLHFWWRJCANCBUVGYMQSHELACQTEIOUAKWLNAGQOAOIWPKDVRYPKUBISVBVEQRWTJGHWZR");
  msg.timeout = 0.03547064895223162f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UamTxRange - Serialization/Deserialization #2")
{
  IMC::UamTxRange msg;
  msg.setTimeStamp(0.25997526143584915);
  msg.setSource(13762U);
  msg.setSourceEntity(47U);
  msg.setDestination(42676U);
  msg.setDestinationEntity(116U);
  msg.seq = 35888U;
  msg.sys_dst.assign("HAJNARMMMAXDIRONTFQOOVXRKJVQFNKMYQWSSLGFPSXIQMWLNWRPSHLETCBYJIBEORQFKVBWTEUGAEQFBT");
  msg.timeout = 0.15005545543176424f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormCtrlParam - Serialization/Deserialization #0")
{
  IMC::FormCtrlParam msg;
  msg.setTimeStamp(0.867634779318382);
  msg.setSource(19584U);
  msg.setSourceEntity(156U);
  msg.setDestination(45862U);
  msg.setDestinationEntity(141U);
  msg.action = 189U;
  msg.longain = 0.5399571138391417f;
  msg.latgain = 0.6752508443745733f;
  msg.bondthick = 1166183927U;
  msg.leadgain = 0.7276562266004669f;
  msg.deconflgain = 0.992588852505826f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormCtrlParam - Serialization/Deserialization #1")
{
  IMC::FormCtrlParam msg;
  msg.setTimeStamp(0.2639998322793734);
  msg.setSource(25984U);
  msg.setSourceEntity(70U);
  msg.setDestination(54700U);
  msg.setDestinationEntity(161U);
  msg.action = 194U;
  msg.longain = 0.9901533153307832f;
  msg.latgain = 0.3870009875831022f;
  msg.bondthick = 1756720365U;
  msg.leadgain = 0.06643671084702696f;
  msg.deconflgain = 0.7317410012963425f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormCtrlParam - Serialization/Deserialization #2")
{
  IMC::FormCtrlParam msg;
  msg.setTimeStamp(0.9701354711623636);
  msg.setSource(54958U);
  msg.setSourceEntity(60U);
  msg.setDestination(1583U);
  msg.setDestinationEntity(118U);
  msg.action = 232U;
  msg.longain = 0.16061110182441374f;
  msg.latgain = 0.1298046070093608f;
  msg.bondthick = 718440180U;
  msg.leadgain = 0.053900237923159566f;
  msg.deconflgain = 0.9344495888876979f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationEval - Serialization/Deserialization #0")
{
  IMC::FormationEval msg;
  msg.setTimeStamp(0.8620507335530717);
  msg.setSource(46167U);
  msg.setSourceEntity(87U);
  msg.setDestination(64440U);
  msg.setDestinationEntity(240U);
  msg.err_mean = 0.24387704383581044f;
  msg.dist_min_abs = 0.1330360103621513f;
  msg.dist_min_mean = 0.07848524854679961f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationEval - Serialization/Deserialization #1")
{
  IMC::FormationEval msg;
  msg.setTimeStamp(0.582051814751409);
  msg.setSource(32613U);
  msg.setSourceEntity(37U);
  msg.setDestination(60137U);
  msg.setDestinationEntity(233U);
  msg.err_mean = 0.5188356651221128f;
  msg.dist_min_abs = 0.8208267376943549f;
  msg.dist_min_mean = 0.39182964665790987f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationEval - Serialization/Deserialization #2")
{
  IMC::FormationEval msg;
  msg.setTimeStamp(0.8444035335273563);
  msg.setSource(18773U);
  msg.setSourceEntity(228U);
  msg.setDestination(38689U);
  msg.setDestinationEntity(112U);
  msg.err_mean = 0.7007324855596615f;
  msg.dist_min_abs = 0.5009127681322946f;
  msg.dist_min_mean = 0.0700232860047092f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationControlParams - Serialization/Deserialization #0")
{
  IMC::FormationControlParams msg;
  msg.setTimeStamp(0.025711294526645112);
  msg.setSource(26632U);
  msg.setSourceEntity(52U);
  msg.setDestination(17338U);
  msg.setDestinationEntity(19U);
  msg.action = 206U;
  msg.lon_gain = 0.558119652082432f;
  msg.lat_gain = 0.6740537363373689f;
  msg.bond_thick = 0.2067662052677831f;
  msg.lead_gain = 0.19799072695342557f;
  msg.deconfl_gain = 0.8389105492473943f;
  msg.accel_switch_gain = 0.27918141959612697f;
  msg.safe_dist = 0.9595727420368595f;
  msg.deconflict_offset = 0.34073191068290865f;
  msg.accel_safe_margin = 0.4770926098402247f;
  msg.accel_lim_x = 0.021413014844785083f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationControlParams - Serialization/Deserialization #1")
{
  IMC::FormationControlParams msg;
  msg.setTimeStamp(0.1496012975161598);
  msg.setSource(34971U);
  msg.setSourceEntity(23U);
  msg.setDestination(8525U);
  msg.setDestinationEntity(106U);
  msg.action = 72U;
  msg.lon_gain = 0.959132688579843f;
  msg.lat_gain = 0.22623357502647745f;
  msg.bond_thick = 0.49322633538702465f;
  msg.lead_gain = 0.5002780514329552f;
  msg.deconfl_gain = 0.2320648558488737f;
  msg.accel_switch_gain = 0.9828330984777698f;
  msg.safe_dist = 0.07087710192113761f;
  msg.deconflict_offset = 0.4358377820620474f;
  msg.accel_safe_margin = 0.543945929325784f;
  msg.accel_lim_x = 0.5018244660778063f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationControlParams - Serialization/Deserialization #2")
{
  IMC::FormationControlParams msg;
  msg.setTimeStamp(0.08835912710685245);
  msg.setSource(16807U);
  msg.setSourceEntity(170U);
  msg.setDestination(17956U);
  msg.setDestinationEntity(194U);
  msg.action = 112U;
  msg.lon_gain = 0.13309401051017866f;
  msg.lat_gain = 0.025893909792158776f;
  msg.bond_thick = 0.31015419267688016f;
  msg.lead_gain = 0.23762823151495316f;
  msg.deconfl_gain = 0.3893716787794339f;
  msg.accel_switch_gain = 0.14930053365821305f;
  msg.safe_dist = 0.5532512900058519f;
  msg.deconflict_offset = 0.7025882654446503f;
  msg.accel_safe_margin = 0.42190062101305736f;
  msg.accel_lim_x = 0.20413011340760534f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationEvaluation - Serialization/Deserialization #0")
{
  IMC::FormationEvaluation msg;
  msg.setTimeStamp(0.09966068859784072);
  msg.setSource(4917U);
  msg.setSourceEntity(183U);
  msg.setDestination(2829U);
  msg.setDestinationEntity(125U);
  msg.type = 86U;
  msg.op = 108U;
  msg.err_mean = 0.5508291939401696f;
  msg.dist_min_abs = 0.1809432732342241f;
  msg.dist_min_mean = 0.22411678526470746f;
  msg.roll_rate_mean = 0.9237897920779039f;
  msg.time = 0.08524341261448576f;
  IMC::FormationControlParams tmp_msg_0;
  tmp_msg_0.action = 73U;
  tmp_msg_0.lon_gain = 0.39227011274376244f;
  tmp_msg_0.lat_gain = 0.07042488120109813f;
  tmp_msg_0.bond_thick = 0.9311384856935281f;
  tmp_msg_0.lead_gain = 0.2855732669800338f;
  tmp_msg_0.deconfl_gain = 0.23962322629548505f;
  tmp_msg_0.accel_switch_gain = 0.9487645137210029f;
  tmp_msg_0.safe_dist = 0.7446342709365892f;
  tmp_msg_0.deconflict_offset = 0.9187233519659694f;
  tmp_msg_0.accel_safe_margin = 0.2906778542119387f;
  tmp_msg_0.accel_lim_x = 0.9759259466148947f;
  msg.controlparams.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationEvaluation - Serialization/Deserialization #1")
{
  IMC::FormationEvaluation msg;
  msg.setTimeStamp(0.8207259651083114);
  msg.setSource(23085U);
  msg.setSourceEntity(62U);
  msg.setDestination(39516U);
  msg.setDestinationEntity(204U);
  msg.type = 244U;
  msg.op = 116U;
  msg.err_mean = 0.6565478218337354f;
  msg.dist_min_abs = 0.8428932046959036f;
  msg.dist_min_mean = 0.6442173072733186f;
  msg.roll_rate_mean = 0.36822618659950757f;
  msg.time = 0.6512671275984696f;
  IMC::FormationControlParams tmp_msg_0;
  tmp_msg_0.action = 48U;
  tmp_msg_0.lon_gain = 0.9618143615277617f;
  tmp_msg_0.lat_gain = 0.40038869331088156f;
  tmp_msg_0.bond_thick = 0.6016035645012593f;
  tmp_msg_0.lead_gain = 0.7665960673690903f;
  tmp_msg_0.deconfl_gain = 0.8464712569346567f;
  tmp_msg_0.accel_switch_gain = 0.05199388967985019f;
  tmp_msg_0.safe_dist = 0.9394054385758539f;
  tmp_msg_0.deconflict_offset = 0.16297690966374279f;
  tmp_msg_0.accel_safe_margin = 0.5801993346681004f;
  tmp_msg_0.accel_lim_x = 0.57040850661317f;
  msg.controlparams.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FormationEvaluation - Serialization/Deserialization #2")
{
  IMC::FormationEvaluation msg;
  msg.setTimeStamp(0.32720335400614387);
  msg.setSource(6342U);
  msg.setSourceEntity(244U);
  msg.setDestination(41086U);
  msg.setDestinationEntity(166U);
  msg.type = 31U;
  msg.op = 160U;
  msg.err_mean = 0.6389265308864951f;
  msg.dist_min_abs = 0.5499494608430547f;
  msg.dist_min_mean = 0.31494412144012707f;
  msg.roll_rate_mean = 0.26179579155602706f;
  msg.time = 0.8476647228357739f;
  IMC::FormationControlParams tmp_msg_0;
  tmp_msg_0.action = 53U;
  tmp_msg_0.lon_gain = 0.07472973864858634f;
  tmp_msg_0.lat_gain = 0.3206261331063326f;
  tmp_msg_0.bond_thick = 0.47765346173383816f;
  tmp_msg_0.lead_gain = 0.39669879626991966f;
  tmp_msg_0.deconfl_gain = 0.6868929696102655f;
  tmp_msg_0.accel_switch_gain = 0.5708277328028347f;
  tmp_msg_0.safe_dist = 0.6709211851126172f;
  tmp_msg_0.deconflict_offset = 0.7741366148834372f;
  tmp_msg_0.accel_safe_margin = 0.8349320331497494f;
  tmp_msg_0.accel_lim_x = 0.07938882832275551f;
  msg.controlparams.set(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MessagePart - Serialization/Deserialization #0")
{
  IMC::MessagePart msg;
  msg.setTimeStamp(0.6295300148203237);
  msg.setSource(3975U);
  msg.setSourceEntity(12U);
  msg.setDestination(14169U);
  msg.setDestinationEntity(19U);
  msg.uid = 124U;
  msg.frag_number = 28U;
  msg.num_frags = 47U;
  const char tmp_msg_0[] = {-58, -75, -111, 101, -34, -72, -63, -89, 95, 47, -119, 111, 125, 53, 57, 90};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MessagePart - Serialization/Deserialization #1")
{
  IMC::MessagePart msg;
  msg.setTimeStamp(0.16723276355532724);
  msg.setSource(7798U);
  msg.setSourceEntity(97U);
  msg.setDestination(45385U);
  msg.setDestinationEntity(90U);
  msg.uid = 219U;
  msg.frag_number = 9U;
  msg.num_frags = 206U;
  const char tmp_msg_0[] = {-88, -81, 9, 113, 33, -105, -71, -31, -8, 68, 20, 75, 84, -122, -1, -56, -59, 77, 53, 96, -100, 30, 94, 63, -105, 96, 33, -23, 82, -89, 26, 33, 73, -65, 49, -50, -2, -11, 102, -30, 10, -94, -76, 116, 71, -124, 109, -27, -128, 42, 83, 28, 107, -60, 107, -80, 63, 48, 33, 20, -89, -120, -86, -51, -18, -80, -70, -127, 109, -36, -57, -111, 101, 119, -13, 47, 26, -52, -50, 37, 108, -82, -10, 100, 72, 95, 3, -20, -124, 22, -109, 55, 80, 40, 12, 0, 71, -75, -8, -121, -115, -40, 19, 29, 32, -55, -117, -38, 121, 1, -53, 70, 104, 100, 80, -81, 36, 46, -33, -100, 93, -31, -98, -109, 115, -109, 40, -75, -114, -106, -23, -75, 73, -45, 49, 81};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("MessagePart - Serialization/Deserialization #2")
{
  IMC::MessagePart msg;
  msg.setTimeStamp(0.6661712736853894);
  msg.setSource(8241U);
  msg.setSourceEntity(24U);
  msg.setDestination(6577U);
  msg.setDestinationEntity(133U);
  msg.uid = 187U;
  msg.frag_number = 125U;
  msg.num_frags = 60U;
  const char tmp_msg_0[] = {-26, -126, 51, -87, -74, -64, -48, 106, -94, -108, 6, 11, -73, 120, 69, 23, -16, 65, 126, 82, -51, 84, 85, -91, -108, -13, -11, -32, -43, -104, -76, -34, -122, -2, -50, 84, 19, 125, -42, -52, -6, -51, -23, -74, 92, -10, 91, 15, 29, -80, 113, 63, 20, 121, 68, -101, 76, 74, 95, -112, -106, 96, -69, 20, -32, -28, 125, -2, 9, 82, 22, 18, -117, 49, -60, 27, 33, 52, -5, -24, 95, 16, -13, 99, 101, -17, 94, 45, -87, 11, -61, 71, 88, -14, -111, -83, -124, -38, 10, 56, 54, 18, -122, 78, -32, -50, -66, 116, -109, -39, 2, -18, 43, -11, -102, 44, 101, 48, -14, -66, 41, -78, 88, 126, -44, -128, -83, 90, -13, -50, -86, 117, -54, 96, -125, 61, 112, -82, -79, 109, 126, -125, -76, -36, -76, 29, 82, 68, -21, -15, 126, 96, 124, -2, -79, -39, 53, 100, 23, -63, -32, -104, -4, 59, -117, 69, -11, -81, -120, -123, 114, 90, 66, -63, 87, 55, -26, -57, 24, -88, 17, -124, -89, 84, -65, -103, -11, -31, -8, -124, 66, -68, 3, 125, -32, -28, -95, -84, -16, -48, 117, 14, -28};
  msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NeptusBlob - Serialization/Deserialization #0")
{
  IMC::NeptusBlob msg;
  msg.setTimeStamp(0.3751965985615703);
  msg.setSource(30888U);
  msg.setSourceEntity(151U);
  msg.setDestination(27075U);
  msg.setDestinationEntity(2U);
  msg.content_type.assign("ISCMFNNEUNCOEPVUNSECYZWQSGJWLZHYVXKPIOXOVZGZSMTDRSABLASTAIIQTOBZFWRSVFPYLBFCGWYJTQFPWOMYYWBMHLJMNUOFCOKVCKKKHRFVGAIENYXUQUBKHRBTBRBMPJPDHGDDUETIHUPHVDQPRWTQJJXZZJEYCURCRZJVTLFUNGAOWQXVJGMLMGXXWJNSRYXVQIOELPDENUFCDLSIIWABIGNMXHTDFLA");
  const char tmp_msg_0[] = {-69, 75, -82, -101, -81, -104, -1, 114, 71, 44, -39, -62, 65, -104, 92, 9, 5, -107, 88, -34, -12, 61, -60, 4, 5, -78, -38, -78, -42, 120, -114, -14, -78, 101, -37, 125, 103, 0, 74, -119, 43, -28, -107, -11, 37, 59, -64, -75, 15, 12, -46};
  msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NeptusBlob - Serialization/Deserialization #1")
{
  IMC::NeptusBlob msg;
  msg.setTimeStamp(0.5531133995299512);
  msg.setSource(14266U);
  msg.setSourceEntity(180U);
  msg.setDestination(5555U);
  msg.setDestinationEntity(97U);
  msg.content_type.assign("YWQIYRNHGLRONQJXTQGPRIFXFAAVVLLRMCGMFVZQTVLDZIANBJORZYIBMCWIQHEXWUNPQIUKEDCVAYFYJGUQCOPYTSHOKRSPS");
  const char tmp_msg_0[] = {12, 2, 94, -105, 79, -12, -84, -37, 95, -47, 75, 126, 21, 59, -31, -108, -110, -83, -21, -121, 16, -55, 113, 121, 96, -52, 35, 75, -10, -59, 116, 83, -81, -43, 125, 30, 104, 14, -110, -83, 122, -5, 118, -24, -92, -125, -11, -97, -98, 44, 18, -40, -63, 72, 124, -57, 59, 68, 65, 103, 49, 56, -97, -67, -111, 88, 81, 125, -113, -95, -56, 101, -81, 122, 58, 22, 80, -38, -67, 76, 124, -25, -107, 74, -56, 58, -30, -25, -121, 95, -26, -52, -79, -113, 80, -87, -48, 84, 23, 33, -58, 6, -26, -114, -59, 39, -58, -108, -36, -73, 122, 7, 103, -25, 102, 111, 70, -36, 70, -23, 84, 76, 86, 8, 54, -48, -54, -123, 31, -59, -37, -60, -77, -8, 43, -6, -101, -96, -27, 90, 33, 92, -23, -94, -115, -16, 85, 10, 41, -74, -41, -31, 64, 52, 104, -116, 17, -46, -11, 59, 53, 57, 38, -114, -45, -48, -77, 75, -81, -41, 85, 2, 35, -70, 28, 89, 22, 35};
  msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("NeptusBlob - Serialization/Deserialization #2")
{
  IMC::NeptusBlob msg;
  msg.setTimeStamp(0.47102567630555525);
  msg.setSource(27671U);
  msg.setSourceEntity(48U);
  msg.setDestination(40295U);
  msg.setDestinationEntity(158U);
  msg.content_type.assign("QTOIYXALKEHYWMESBHZAWLTCEFSNDXUGHJEITNCGXDZKFCEVHOMADWWGEAGCKQNLMXUDCRPPLSJTIHRZXEGPMBTWZBBXWJSCVXNZADCDUJKZIDJWHWLYJXL");
  const char tmp_msg_0[] = {32, -57, 50, 111, -10, 60, 48, 93, -47, 48, 45, -1, 4, -76, 102, 94, -65, -109, 101, 61, -13, 117, 80, -68, 1, -118, 63, -14, 87, -2, 26, -64, 123, 43, 0, -51, 88, 62, 125, -99, -43, 114, -72, -94, 23, 118, 57, 27, 94, 66, -22, -102, 67, -90, -21, -23, -90, 70, -61, -103, 4, 64, -77, -71, 123, 123, -16, 58, -48, -128, -123, -86, -128, -42, 80, -27, 121, 53, -112, -71, 56, -21, -123, -64, 24, 97, -49, 14, 66, -75, 123, 43, -36, -108, -77, -48, 25, 122, 11, 82, 73, -94, -109, 88, -116, 38, 31, 101, 126, -126, 100, 23, 7, -89, 104, 90, 62, 119, -83, -101, 8, 2, -117, 71, 124, 64, -7, -71, 43, -48, 14, 42, -8, -96, -119, -93, 23, 5, -20, 89, 65, 49, 125, 96, -51, 18, -95, 63, 40, -69, -1, 24, -118, 20, -24, 89, -85, -110, 63, -32, -25, 58, -29, 35, -21, -91, 101, -12, -76, -18, 43, -76, 6, -86, 87, -57, -49, 21, 65, 84, 117};
  msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Aborted - Serialization/Deserialization #0")
{
  IMC::Aborted msg;
  msg.setTimeStamp(0.9436355281970162);
  msg.setSource(32532U);
  msg.setSourceEntity(94U);
  msg.setDestination(58625U);
  msg.setDestinationEntity(84U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Aborted - Serialization/Deserialization #1")
{
  IMC::Aborted msg;
  msg.setTimeStamp(0.5378943983908486);
  msg.setSource(14109U);
  msg.setSourceEntity(171U);
  msg.setDestination(65291U);
  msg.setDestinationEntity(88U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Aborted - Serialization/Deserialization #2")
{
  IMC::Aborted msg;
  msg.setTimeStamp(0.367374806087146);
  msg.setSource(11038U);
  msg.setSourceEntity(104U);
  msg.setDestination(11455U);
  msg.setDestinationEntity(112U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblAngles - Serialization/Deserialization #0")
{
  IMC::UsblAngles msg;
  msg.setTimeStamp(0.5837243604958331);
  msg.setSource(62282U);
  msg.setSourceEntity(74U);
  msg.setDestination(37666U);
  msg.setDestinationEntity(147U);
  msg.target = 64737U;
  msg.bearing = 0.9682511119281553f;
  msg.elevation = 0.27997857677005455f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblAngles - Serialization/Deserialization #1")
{
  IMC::UsblAngles msg;
  msg.setTimeStamp(0.3507475539532712);
  msg.setSource(15981U);
  msg.setSourceEntity(220U);
  msg.setDestination(263U);
  msg.setDestinationEntity(198U);
  msg.target = 13405U;
  msg.bearing = 0.26311311445127517f;
  msg.elevation = 0.01726697526937271f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblAngles - Serialization/Deserialization #2")
{
  IMC::UsblAngles msg;
  msg.setTimeStamp(0.8785228475485769);
  msg.setSource(49278U);
  msg.setSourceEntity(147U);
  msg.setDestination(23660U);
  msg.setDestinationEntity(177U);
  msg.target = 33454U;
  msg.bearing = 0.07711691941937016f;
  msg.elevation = 0.6270502377245841f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblPosition - Serialization/Deserialization #0")
{
  IMC::UsblPosition msg;
  msg.setTimeStamp(0.8274621228996272);
  msg.setSource(43082U);
  msg.setSourceEntity(70U);
  msg.setDestination(23694U);
  msg.setDestinationEntity(181U);
  msg.target = 32079U;
  msg.x = 0.23204514706694535f;
  msg.y = 0.30222013394743086f;
  msg.z = 0.4088697999349822f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblPosition - Serialization/Deserialization #1")
{
  IMC::UsblPosition msg;
  msg.setTimeStamp(0.8635977793586641);
  msg.setSource(9605U);
  msg.setSourceEntity(39U);
  msg.setDestination(6048U);
  msg.setDestinationEntity(23U);
  msg.target = 9899U;
  msg.x = 0.6293173401545409f;
  msg.y = 0.3469061024843877f;
  msg.z = 0.15192657904354911f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblPosition - Serialization/Deserialization #2")
{
  IMC::UsblPosition msg;
  msg.setTimeStamp(0.38881038738898976);
  msg.setSource(62957U);
  msg.setSourceEntity(140U);
  msg.setDestination(50968U);
  msg.setDestinationEntity(227U);
  msg.target = 44308U;
  msg.x = 0.10563804323099646f;
  msg.y = 0.224968028431762f;
  msg.z = 0.5480110019964092f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblFix - Serialization/Deserialization #0")
{
  IMC::UsblFix msg;
  msg.setTimeStamp(0.11105885894790613);
  msg.setSource(41148U);
  msg.setSourceEntity(183U);
  msg.setDestination(11477U);
  msg.setDestinationEntity(59U);
  msg.target = 31626U;
  msg.lat = 0.5602890452444099;
  msg.lon = 0.9021428009805055;
  msg.z_units = 157U;
  msg.z = 0.6540389093437077f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblFix - Serialization/Deserialization #1")
{
  IMC::UsblFix msg;
  msg.setTimeStamp(0.6446234255016462);
  msg.setSource(51042U);
  msg.setSourceEntity(247U);
  msg.setDestination(20525U);
  msg.setDestinationEntity(53U);
  msg.target = 2037U;
  msg.lat = 0.33612595318125094;
  msg.lon = 0.2152704767513246;
  msg.z_units = 112U;
  msg.z = 0.09091426646817591f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblFix - Serialization/Deserialization #2")
{
  IMC::UsblFix msg;
  msg.setTimeStamp(0.2716368949258362);
  msg.setSource(27817U);
  msg.setSourceEntity(25U);
  msg.setDestination(16397U);
  msg.setDestinationEntity(180U);
  msg.target = 57830U;
  msg.lat = 0.2715816724846428;
  msg.lon = 0.8007787021219708;
  msg.z_units = 222U;
  msg.z = 0.39273404122289124f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ParametersXml - Serialization/Deserialization #0")
{
  IMC::ParametersXml msg;
  msg.setTimeStamp(0.038833445977123016);
  msg.setSource(55912U);
  msg.setSourceEntity(225U);
  msg.setDestination(44485U);
  msg.setDestinationEntity(90U);
  msg.locale.assign("IXKPBHNDHDJOBNIPMAEBENQYMROVOEIMHCCIZUIILUQGLVTGXVJICUZDFWPNDYJDIQRO");
  const char tmp_msg_0[] = {126, 2, -26, 125, -35, -81, -82, 25, 101, -117, -52, -83, -25, -35, 17, -15, 27, -19, 106, 40, 28, -39, -112, -71, -13, 39, 77, -69, 16, -63, -21, -57, -1, 70, 17, 48, -58, -32, 116, -89, 56, 21, -34, -94, 120, 14, 44, -58, 81, -32, -36, 122, 93, -6, -96, -107, -117, -73, 126, -58, -78, 34, -30, 88, -69, 96, -18, -65, -45, -27, 26, 122, 28, -67, 124, -77, -38, 3, -50, -9, 80, 55, 103, 10, 30, 88, 111, 10, -72, -74, -8, -118, 105, 50, -88, -111, 111, -87, 81, -81, 76, -39, -126, -118, -9, 81, -125, 96, -86, -13, 2, 77, -124, -51, -71, -106, -59, -5, 74, 84, 46, -33, 119, 124, -77, 5, -72, -107, 77, -125, 62, -63, 57, -31, -34, -14, -16, -28, 32, 57, 0, -64, -102, 63, 12, -36, -105, -77, 124, 125, -55, -112, -81, -37, 119, -55, -79, 124, -44, -6, 51, -114, -71, 99, 82, -52, 94, 15, 30, 45, 32, 53, 110, -128, 69, -88, -76, -13, 40, 121, -36, 83, -73, -113, -40, -95, 71, -4, 88, 3, 124, -44, -40, 34, -71, -25, -11, -89, -93, 77, 13};
  msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ParametersXml - Serialization/Deserialization #1")
{
  IMC::ParametersXml msg;
  msg.setTimeStamp(0.6559751568855928);
  msg.setSource(48624U);
  msg.setSourceEntity(154U);
  msg.setDestination(17025U);
  msg.setDestinationEntity(249U);
  msg.locale.assign("VULBSQNDOLMCGDVESBMRIYDHBVCGKOWMLCELTMWAQEXJJTHESZFFQRZHSYCDTKIUKIQFNMMEHIBTFYURPVAOZCNFJYIYOZYDCPIQJFCPUYUIWOYRLLNWSAQQDRNLKGHBSASWSJMYBHVODRWFZIFDZXSWKUXRYALHURQTVIQXOJGNOLUAXETXOSVRVIQARFUTTUGBMWKPXHPAONCHGECZ");
  const char tmp_msg_0[] = {110, -70, -27, 73, -128, 43, -108, -51, -63, -99, -52, 21, 97, 17, 105, -5, 14, 13, -110, -5, 111, -69, -101, 66, -37, -40, -70, 95, 84, 79, -46, 109, -34, -101, 100, -67, -3, -85, -55, -27, 32, 112, -53, -74, 75, 37, -4, -12, -87, -92, -12, -124, -21, 67, 31, 107, 93, -36, 40, -5, -101, 9, 6, -63, -68, 69, -53, 126, -51, 72, -34, 93, 8, 53, -105, -23, -40, 103, -121, -71, -17, 21, -54, -41, -128, -110, 99, 10, -62, 46, -33, 119, 7, 125, -42, -46, 9, -11, -115, -6, -67, -120, 91, -5, 38, 66, 112, 46, 1, -59, 40, -49, 76, -82, -6, -114, -12, 109, -14, -49, -56, 71, -85, -107, 90, -95, -94, -27, 11, -115, 8, -72, -15, -74, -43, -13, -69, 4, -120, 42, -60, 34, -97, -106, 6, 38, 125, -70, -80, -96, -110, -98, -105, 64, -88, -69, 43, 117, -91, -46, 32, 73, -87, -22, 34, 81, -14, -35, -102, 1, -9, -91, -8, 60, 124, -93, 52, 35, -101, 104, 16, -56, -74, 88, -48, 21, 42, -63, 106, -123, -72, 18, -84, 30, 64, -100, -15, 38, -30, 58, -32, -77, -37, -108, -128, -86, 112, -5, 88, -23, 23, -7, 55, -93, 14, -92, 78, 45, -14, -79, -75, 12, -58, -24, 40, 50, -42, -91, -29, -79, -61, -93, 49, 78, -108};
  msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ParametersXml - Serialization/Deserialization #2")
{
  IMC::ParametersXml msg;
  msg.setTimeStamp(0.34119389466215977);
  msg.setSource(59261U);
  msg.setSourceEntity(219U);
  msg.setDestination(55862U);
  msg.setDestinationEntity(177U);
  msg.locale.assign("ANOUODAYIZCNPHJAOHQEXFSEHEVOSGKEHLKJHDIOXVBBTFXOZCZWOPIZUZWZWMXWGSADNEUAQQENDCGXKRSIKBVMLCYUIRKPLPRXWGIGSIYFBURMPMJNKRMLATOWPUSMWTXUHTHOXNMRGUDTPVWOMRDZBKNKJQRPEHMVZSGKQJHNTSPB");
  const char tmp_msg_0[] = {-71, -67, 62, 109, -117, -105, 65, 79, -27, -77, -93, 18, 54, 64, 58, 54, 80, -33, 42, 23, -102, 107, -101, 36, 54, 94, 74, 33, 8, 4, 88, 63, 106, 90, 29, 71, 95, -121, 64, -117, -12, 13, -116, -37, -60, -110, -51, -110, 61, -116, 82, 42, -9, -97, -52, 73, 109, 34, -110, -118, 112, 14, 87, -16, -87, -116, 38, 9, -65, -37, -25, 31, 114, 86, 119, -10, 123, -33, -85, 48, 95, 21, 54, -93, 62, -84, -82, -10, 70, 77, 86, -71, -71, -54, -106, 89, -67, -62, 55, -112, 38, -120, 100, -61, 0, 100, -10, -25, 86, 99, -14, 44, -25, 125, 26, -44, 107, 4, 53, 100, 36, 104, -80, -47, 17, -85, -43, 32, 101, -128, 37, -16, -114, 4, 34, -92, 27, 6, 123, 73, -82, -87, -80, -92, -46, -123, 46, 102, -73, 57, -10, -26, 3, 37, -122, 94, 44, -39, -81, 60, 12, -59, 15, -7};
  msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetParametersXml - Serialization/Deserialization #0")
{
  IMC::GetParametersXml msg;
  msg.setTimeStamp(0.592460481578152);
  msg.setSource(41539U);
  msg.setSourceEntity(188U);
  msg.setDestination(53552U);
  msg.setDestinationEntity(160U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetParametersXml - Serialization/Deserialization #1")
{
  IMC::GetParametersXml msg;
  msg.setTimeStamp(0.8081073744308181);
  msg.setSource(289U);
  msg.setSourceEntity(207U);
  msg.setDestination(3051U);
  msg.setDestinationEntity(82U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetParametersXml - Serialization/Deserialization #2")
{
  IMC::GetParametersXml msg;
  msg.setTimeStamp(0.25425677662054147);
  msg.setSource(59990U);
  msg.setSourceEntity(14U);
  msg.setDestination(41283U);
  msg.setDestinationEntity(133U);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetImageCoords - Serialization/Deserialization #0")
{
  IMC::SetImageCoords msg;
  msg.setTimeStamp(0.09827725925425135);
  msg.setSource(49679U);
  msg.setSourceEntity(150U);
  msg.setDestination(55946U);
  msg.setDestinationEntity(245U);
  msg.camid = 105U;
  msg.x = 45420U;
  msg.y = 63886U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetImageCoords - Serialization/Deserialization #1")
{
  IMC::SetImageCoords msg;
  msg.setTimeStamp(0.8445650819787575);
  msg.setSource(26717U);
  msg.setSourceEntity(88U);
  msg.setDestination(50391U);
  msg.setDestinationEntity(112U);
  msg.camid = 112U;
  msg.x = 47961U;
  msg.y = 50855U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("SetImageCoords - Serialization/Deserialization #2")
{
  IMC::SetImageCoords msg;
  msg.setTimeStamp(0.2672208044023646);
  msg.setSource(58627U);
  msg.setSourceEntity(160U);
  msg.setDestination(12817U);
  msg.setDestinationEntity(122U);
  msg.camid = 199U;
  msg.x = 49372U;
  msg.y = 62446U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetImageCoords - Serialization/Deserialization #0")
{
  IMC::GetImageCoords msg;
  msg.setTimeStamp(0.7325725578382767);
  msg.setSource(8934U);
  msg.setSourceEntity(252U);
  msg.setDestination(63740U);
  msg.setDestinationEntity(173U);
  msg.camid = 176U;
  msg.x = 36419U;
  msg.y = 28398U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetImageCoords - Serialization/Deserialization #1")
{
  IMC::GetImageCoords msg;
  msg.setTimeStamp(0.09716350713902755);
  msg.setSource(14401U);
  msg.setSourceEntity(250U);
  msg.setDestination(62229U);
  msg.setDestinationEntity(76U);
  msg.camid = 99U;
  msg.x = 13348U;
  msg.y = 2568U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetImageCoords - Serialization/Deserialization #2")
{
  IMC::GetImageCoords msg;
  msg.setTimeStamp(0.13981751348335913);
  msg.setSource(63728U);
  msg.setSourceEntity(75U);
  msg.setDestination(51345U);
  msg.setDestinationEntity(209U);
  msg.camid = 30U;
  msg.x = 19838U;
  msg.y = 12862U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetWorldCoordinates - Serialization/Deserialization #0")
{
  IMC::GetWorldCoordinates msg;
  msg.setTimeStamp(0.7005657280658315);
  msg.setSource(20403U);
  msg.setSourceEntity(78U);
  msg.setDestination(26959U);
  msg.setDestinationEntity(31U);
  msg.tracking = 87U;
  msg.lat = 0.8256921453384176;
  msg.lon = 0.08739089351325524;
  msg.x = 0.9263904352525898f;
  msg.y = 0.38454023788426006f;
  msg.z = 0.043761943965668904f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetWorldCoordinates - Serialization/Deserialization #1")
{
  IMC::GetWorldCoordinates msg;
  msg.setTimeStamp(0.8643952313227061);
  msg.setSource(57243U);
  msg.setSourceEntity(108U);
  msg.setDestination(62387U);
  msg.setDestinationEntity(49U);
  msg.tracking = 235U;
  msg.lat = 0.4565184019026357;
  msg.lon = 0.9680872216647126;
  msg.x = 0.5459930637420943f;
  msg.y = 0.04142457860845605f;
  msg.z = 0.7567663200366087f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GetWorldCoordinates - Serialization/Deserialization #2")
{
  IMC::GetWorldCoordinates msg;
  msg.setTimeStamp(0.5880364777976375);
  msg.setSource(39548U);
  msg.setSourceEntity(143U);
  msg.setDestination(63554U);
  msg.setDestinationEntity(233U);
  msg.tracking = 174U;
  msg.lat = 0.313071191498535;
  msg.lon = 0.6817436107418572;
  msg.x = 0.2941963547116604f;
  msg.y = 0.6786999367333413f;
  msg.z = 0.42169643237444887f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblAnglesExtended - Serialization/Deserialization #0")
{
  IMC::UsblAnglesExtended msg;
  msg.setTimeStamp(0.3090350927068697);
  msg.setSource(7372U);
  msg.setSourceEntity(119U);
  msg.setDestination(18719U);
  msg.setDestinationEntity(96U);
  msg.target.assign("RURMOJEUHTKEUEAXFTDSATJQYPBWOGWVSTWNCMTKEDXVINUNSEDABDTSRRZHDLVZOVQ");
  msg.lbearing = 0.03775762215289513f;
  msg.lelevation = 0.44014949317680585f;
  msg.bearing = 0.025663304808671628f;
  msg.elevation = 0.469552303263578f;
  msg.phi = 0.5803212689259162f;
  msg.theta = 0.6478955553066139f;
  msg.psi = 0.8617540557234673f;
  msg.accuracy = 0.8810377244068124f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblAnglesExtended - Serialization/Deserialization #1")
{
  IMC::UsblAnglesExtended msg;
  msg.setTimeStamp(0.08535473130137017);
  msg.setSource(24769U);
  msg.setSourceEntity(186U);
  msg.setDestination(2082U);
  msg.setDestinationEntity(210U);
  msg.target.assign("MAKDQGRAFBKGOLPKXTUHFFHUCAOEYSMQEYLENHTUZQYEJCSLZXMDAURFGKXOLRLDGGSZZUNXIEPSJHOWTTPNSWCVLUVGHYZMRDNHSUYCWRQZADKFDBM");
  msg.lbearing = 0.4601651758413322f;
  msg.lelevation = 0.8145304387834641f;
  msg.bearing = 0.6268701691236939f;
  msg.elevation = 0.9255563309024925f;
  msg.phi = 0.12327982445955821f;
  msg.theta = 0.7148493191189947f;
  msg.psi = 0.7788041565452354f;
  msg.accuracy = 0.20674219305980368f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblAnglesExtended - Serialization/Deserialization #2")
{
  IMC::UsblAnglesExtended msg;
  msg.setTimeStamp(0.2278136622426632);
  msg.setSource(9435U);
  msg.setSourceEntity(230U);
  msg.setDestination(24474U);
  msg.setDestinationEntity(93U);
  msg.target.assign("KQYPGYNSLAYKXIXJDWWXNATSLSWOOKUUWFCXERONKBHTCHJEWAPGPXFIRKNCKLHDLAJNCTRFZFJWYJCCUMTZMVSA");
  msg.lbearing = 0.6991442109889361f;
  msg.lelevation = 0.00964999575010872f;
  msg.bearing = 0.9231594561039377f;
  msg.elevation = 0.6172189851973492f;
  msg.phi = 0.9978946419805047f;
  msg.theta = 0.6851165579648472f;
  msg.psi = 0.7915593973777745f;
  msg.accuracy = 0.8238066048559778f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblPositionExtended - Serialization/Deserialization #0")
{
  IMC::UsblPositionExtended msg;
  msg.setTimeStamp(0.4449706272724645);
  msg.setSource(58560U);
  msg.setSourceEntity(46U);
  msg.setDestination(51342U);
  msg.setDestinationEntity(214U);
  msg.target.assign("HXVXOMQAFSJAHFRMJJPXNYGIOJOXIUDPVYWOQCNCZFDNHOTFQQFQIPBTRQLFXZSDIZEQMBCPAXZKCTWJMHSRLSHUUZYWXIOOOHDNDFVMVRHBDUTCQTDMNNZSGFLRSBWLLXKICG");
  msg.x = 0.739813588137165f;
  msg.y = 0.08609403879597977f;
  msg.z = 0.8049199012044276f;
  msg.n = 0.7124904663599327f;
  msg.e = 0.6638500750615207f;
  msg.d = 0.1407671627398288f;
  msg.phi = 0.043247650753133526f;
  msg.theta = 0.7268365970244804f;
  msg.psi = 0.44871023125005827f;
  msg.accuracy = 0.6067250831520629f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblPositionExtended - Serialization/Deserialization #1")
{
  IMC::UsblPositionExtended msg;
  msg.setTimeStamp(0.7489096815136669);
  msg.setSource(47965U);
  msg.setSourceEntity(58U);
  msg.setDestination(49692U);
  msg.setDestinationEntity(88U);
  msg.target.assign("OFSLYNEIABXBWVWHFRUVWHIKZFWAFNIVTOXXDYBMDRAYLWPBOINFMTILCBSYRAPTCVMHJYIJMBFIUIGBNKRHOCVGCNGVATYKZZLEFIJYDUKAHDRZ");
  msg.x = 0.729971708593576f;
  msg.y = 0.3553322536982826f;
  msg.z = 0.04101238546226593f;
  msg.n = 0.08019050641524672f;
  msg.e = 0.4703107039016867f;
  msg.d = 0.4766353241382063f;
  msg.phi = 0.05691495130565549f;
  msg.theta = 0.7801524983178074f;
  msg.psi = 0.525119710469122f;
  msg.accuracy = 0.3967381737527369f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblPositionExtended - Serialization/Deserialization #2")
{
  IMC::UsblPositionExtended msg;
  msg.setTimeStamp(0.3483195597786959);
  msg.setSource(20609U);
  msg.setSourceEntity(173U);
  msg.setDestination(11024U);
  msg.setDestinationEntity(162U);
  msg.target.assign("SBIOMWHBYESHZLIOWQTHOYUDNFHZDMVERUMWFFVNXEPQLEUVDSMRCETPCXKKWNBUZYOPYRPXVYFOMCDGSYRYQGQHQZSNIAGDNKEKMELTAUCJADKHOAJUMRFJCRCGOXMXQBGPNSZNJXVNALWKBJTQBTVYFLBCIOJPJMQFRUFEWTJMJNXFBXLWIOVQAIXVBDRHYJPZAIKTIPSFVNWALASDEXIHCGUGKTWLVKUULCIZPAZEGDOTCRLZSGPZTBSKW");
  msg.x = 0.22374714200025403f;
  msg.y = 0.1729952641825504f;
  msg.z = 0.2396601923660736f;
  msg.n = 0.9346199451924797f;
  msg.e = 0.4687709070357462f;
  msg.d = 0.5996062675920285f;
  msg.phi = 0.6033301885127018f;
  msg.theta = 0.015564039382836237f;
  msg.psi = 0.5887298017418302f;
  msg.accuracy = 0.020678627390228854f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblFixExtended - Serialization/Deserialization #0")
{
  IMC::UsblFixExtended msg;
  msg.setTimeStamp(0.4820251100562497);
  msg.setSource(60925U);
  msg.setSourceEntity(159U);
  msg.setDestination(19957U);
  msg.setDestinationEntity(244U);
  msg.target.assign("SSKIYBBCJQVIMAMWTTGTJGABVFDVYJ");
  msg.lat = 0.9183750695658366;
  msg.lon = 0.8292013890009604;
  msg.z_units = 28U;
  msg.z = 0.4117997003212639f;
  msg.accuracy = 0.00433842971687648f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblFixExtended - Serialization/Deserialization #1")
{
  IMC::UsblFixExtended msg;
  msg.setTimeStamp(0.570609548060475);
  msg.setSource(41710U);
  msg.setSourceEntity(239U);
  msg.setDestination(25016U);
  msg.setDestinationEntity(191U);
  msg.target.assign("WMNWFFDASJEHXKWCPTWDOVNARMBDRVWHIGURIYXXVTSYCONHFZFJMLIIVAZSVHAIUZX");
  msg.lat = 0.6039652450004457;
  msg.lon = 0.8699392808062348;
  msg.z_units = 87U;
  msg.z = 0.884356981239281f;
  msg.accuracy = 0.524602882862784f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblFixExtended - Serialization/Deserialization #2")
{
  IMC::UsblFixExtended msg;
  msg.setTimeStamp(0.3282848433181571);
  msg.setSource(11054U);
  msg.setSourceEntity(125U);
  msg.setDestination(17272U);
  msg.setDestinationEntity(154U);
  msg.target.assign("HXFXIBVAGBJDXWMUOMDQEVQICSZRRJPCMFOLODPJFZBSCUEWLGJCZVOMHPFARBFUJYJRQFMAKMVKBGGPIVYLUIQHNTNNMHBFAOYVPVSWBEUYTOWDLFURAKREOHIEXQEBZISSKDLAXNAQGHUYUZGXMGFOKHEHYXULKDCZGLAESREJPNDYOPPHW");
  msg.lat = 0.9765138730247327;
  msg.lon = 0.8105625879245718;
  msg.z_units = 8U;
  msg.z = 0.23510858912804855f;
  msg.accuracy = 0.29707706546984214f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblModem - Serialization/Deserialization #0")
{
  IMC::UsblModem msg;
  msg.setTimeStamp(0.5717774362277861);
  msg.setSource(63483U);
  msg.setSourceEntity(181U);
  msg.setDestination(46790U);
  msg.setDestinationEntity(185U);
  msg.name.assign("EYEOUQKJRYQLUDOGYN");
  msg.lat = 0.48796241607744717;
  msg.lon = 0.06635607921700859;
  msg.z = 0.8062895261232444f;
  msg.z_units = 235U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblModem - Serialization/Deserialization #1")
{
  IMC::UsblModem msg;
  msg.setTimeStamp(0.19446365808368526);
  msg.setSource(17505U);
  msg.setSourceEntity(42U);
  msg.setDestination(36501U);
  msg.setDestinationEntity(219U);
  msg.name.assign("JLTVUCKYALPNRNYUYMMUJHKHMNYSRTJVIZGSGCCNKWSOOZZQ");
  msg.lat = 0.40576959117082356;
  msg.lon = 0.6923017763888426;
  msg.z = 0.23358877284512536f;
  msg.z_units = 8U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblModem - Serialization/Deserialization #2")
{
  IMC::UsblModem msg;
  msg.setTimeStamp(0.7360225291502501);
  msg.setSource(25540U);
  msg.setSourceEntity(147U);
  msg.setDestination(15108U);
  msg.setDestinationEntity(38U);
  msg.name.assign("XSQYCWFMCPZMXNLMYKJWPGAVQOENKEKXRHDCXBMWDFDIFTHEOBKWMWIBAAVCRHUCJYAPICJNWWBSITYXRZFTPRXDBHCFPRPODLRMLKKUNGQVASVVAHEDYNRUFJ");
  msg.lat = 0.3731992313891118;
  msg.lon = 0.6073429950294129;
  msg.z = 0.17622103817133572f;
  msg.z_units = 51U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblConfig - Serialization/Deserialization #0")
{
  IMC::UsblConfig msg;
  msg.setTimeStamp(0.19716155099759713);
  msg.setSource(25951U);
  msg.setSourceEntity(217U);
  msg.setDestination(48854U);
  msg.setDestinationEntity(93U);
  msg.op = 216U;
  IMC::UsblModem tmp_msg_0;
  tmp_msg_0.name.assign("KBBZMQGKPHRSCQIJFVURLUFZYQVSHWFUVCTBDZL");
  tmp_msg_0.lat = 0.6986922086508033;
  tmp_msg_0.lon = 0.454744598459359;
  tmp_msg_0.z = 0.38561959487095043f;
  tmp_msg_0.z_units = 251U;
  msg.modems.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblConfig - Serialization/Deserialization #1")
{
  IMC::UsblConfig msg;
  msg.setTimeStamp(0.7247272996231663);
  msg.setSource(34969U);
  msg.setSourceEntity(1U);
  msg.setDestination(12497U);
  msg.setDestinationEntity(147U);
  msg.op = 208U;
  IMC::UsblModem tmp_msg_0;
  tmp_msg_0.name.assign("GXRTQDRUVKWIVCPKZQWKKTHZCGEUUHNEZYLAGXAQSCMEJNFUDJUKRNKJAUWMSI");
  tmp_msg_0.lat = 0.13732868915016483;
  tmp_msg_0.lon = 0.6583849724634958;
  tmp_msg_0.z = 0.892879297861055f;
  tmp_msg_0.z_units = 169U;
  msg.modems.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("UsblConfig - Serialization/Deserialization #2")
{
  IMC::UsblConfig msg;
  msg.setTimeStamp(0.001266543608836379);
  msg.setSource(17534U);
  msg.setSourceEntity(83U);
  msg.setDestination(47879U);
  msg.setDestinationEntity(12U);
  msg.op = 54U;
  IMC::UsblModem tmp_msg_0;
  tmp_msg_0.name.assign("EQTRQNBFGNSLRPGQIRRSOWBOHXQJNKKFUIJXGXMVAYAYWLJJEXTYNKFTPZJFBTDBSWOFVIGOICZRBKLCRIDALSZRAJDDOWSEFHHQZPHYLXUDDCENRJQJWGHGZTVOICBBUOCOTOXQPHZQEUULYWLNAWCLVNGVSTASNLYUVAMRDSVDPKMCBPHSGXUKPPQYGIMKTWEZKYFCCTZKAKTZP");
  tmp_msg_0.lat = 0.39470139056567655;
  tmp_msg_0.lon = 0.7804596902637377;
  tmp_msg_0.z = 0.22033405882200152f;
  tmp_msg_0.z_units = 170U;
  msg.modems.push_back(tmp_msg_0);

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DissolvedOrganicMatter - Serialization/Deserialization #0")
{
  IMC::DissolvedOrganicMatter msg;
  msg.setTimeStamp(0.34256907731387776);
  msg.setSource(39608U);
  msg.setSourceEntity(42U);
  msg.setDestination(62624U);
  msg.setDestinationEntity(94U);
  msg.value = 0.27453824973006313f;
  msg.type = 222U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DissolvedOrganicMatter - Serialization/Deserialization #1")
{
  IMC::DissolvedOrganicMatter msg;
  msg.setTimeStamp(0.673456324031213);
  msg.setSource(64502U);
  msg.setSourceEntity(58U);
  msg.setDestination(18740U);
  msg.setDestinationEntity(193U);
  msg.value = 0.992592714490037f;
  msg.type = 176U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("DissolvedOrganicMatter - Serialization/Deserialization #2")
{
  IMC::DissolvedOrganicMatter msg;
  msg.setTimeStamp(0.7329820028064548);
  msg.setSource(49906U);
  msg.setSourceEntity(126U);
  msg.setDestination(4392U);
  msg.setDestinationEntity(52U);
  msg.value = 0.8344195133866159f;
  msg.type = 166U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("OpticalBackscatter - Serialization/Deserialization #0")
{
  IMC::OpticalBackscatter msg;
  msg.setTimeStamp(0.24954612951332422);
  msg.setSource(46413U);
  msg.setSourceEntity(12U);
  msg.setDestination(12401U);
  msg.setDestinationEntity(61U);
  msg.value = 0.7064659900244822f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("OpticalBackscatter - Serialization/Deserialization #1")
{
  IMC::OpticalBackscatter msg;
  msg.setTimeStamp(0.3232176563652559);
  msg.setSource(44264U);
  msg.setSourceEntity(82U);
  msg.setDestination(16054U);
  msg.setDestinationEntity(125U);
  msg.value = 0.8476970322479715f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("OpticalBackscatter - Serialization/Deserialization #2")
{
  IMC::OpticalBackscatter msg;
  msg.setTimeStamp(0.6252383292175794);
  msg.setSource(1765U);
  msg.setSourceEntity(13U);
  msg.setDestination(53891U);
  msg.setDestinationEntity(89U);
  msg.value = 0.5586873353545978f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Tachograph - Serialization/Deserialization #0")
{
  IMC::Tachograph msg;
  msg.setTimeStamp(0.36118037037330497);
  msg.setSource(63482U);
  msg.setSourceEntity(101U);
  msg.setDestination(25396U);
  msg.setDestinationEntity(27U);
  msg.timestamp_last_service = 0.035203408135482284;
  msg.time_next_service = 0.07844312697571043f;
  msg.time_motor_next_service = 0.5400611875794284f;
  msg.time_idle_ground = 0.0928616244902809f;
  msg.time_idle_air = 0.7409735884901486f;
  msg.time_idle_water = 0.3229060682465582f;
  msg.time_idle_underwater = 0.5186248297779494f;
  msg.time_idle_unknown = 0.9841910295896839f;
  msg.time_motor_ground = 0.9479514620206674f;
  msg.time_motor_air = 0.7171085285235399f;
  msg.time_motor_water = 0.633492844693353f;
  msg.time_motor_underwater = 0.5891398764142778f;
  msg.time_motor_unknown = 0.36023479240657486f;
  msg.rpm_min = -4467;
  msg.rpm_max = -28947;
  msg.depth_max = 0.364158758279985f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Tachograph - Serialization/Deserialization #1")
{
  IMC::Tachograph msg;
  msg.setTimeStamp(0.3539476801081024);
  msg.setSource(36169U);
  msg.setSourceEntity(113U);
  msg.setDestination(52225U);
  msg.setDestinationEntity(208U);
  msg.timestamp_last_service = 0.13610555967522475;
  msg.time_next_service = 0.41581319072805933f;
  msg.time_motor_next_service = 0.7787290108999189f;
  msg.time_idle_ground = 0.76230391426222f;
  msg.time_idle_air = 0.013318093564792854f;
  msg.time_idle_water = 0.5813975682993604f;
  msg.time_idle_underwater = 0.14248916235097508f;
  msg.time_idle_unknown = 0.3457025988391147f;
  msg.time_motor_ground = 0.17126864074596115f;
  msg.time_motor_air = 0.49895361997951837f;
  msg.time_motor_water = 0.0830505302880431f;
  msg.time_motor_underwater = 0.08215804498071178f;
  msg.time_motor_unknown = 0.18321598064592337f;
  msg.rpm_min = 30565;
  msg.rpm_max = 16019;
  msg.depth_max = 0.9589757634088136f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("Tachograph - Serialization/Deserialization #2")
{
  IMC::Tachograph msg;
  msg.setTimeStamp(0.28544242603816594);
  msg.setSource(45458U);
  msg.setSourceEntity(167U);
  msg.setDestination(12460U);
  msg.setDestinationEntity(243U);
  msg.timestamp_last_service = 0.3273681625915533;
  msg.time_next_service = 0.10758653288802278f;
  msg.time_motor_next_service = 0.04797388024426774f;
  msg.time_idle_ground = 0.7431142780389236f;
  msg.time_idle_air = 0.044022416901891126f;
  msg.time_idle_water = 0.3845883648920475f;
  msg.time_idle_underwater = 0.7616768835681155f;
  msg.time_idle_unknown = 0.5446969636574391f;
  msg.time_motor_ground = 0.17494173901300092f;
  msg.time_motor_air = 0.45094157239263744f;
  msg.time_motor_water = 0.9191325953699753f;
  msg.time_motor_underwater = 0.7904373306220214f;
  msg.time_motor_unknown = 0.41154508659079103f;
  msg.rpm_min = -1468;
  msg.rpm_max = -11775;
  msg.depth_max = 0.6221995943841819f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ApmStatus - Serialization/Deserialization #0")
{
  IMC::ApmStatus msg;
  msg.setTimeStamp(0.8463850959639913);
  msg.setSource(32389U);
  msg.setSourceEntity(162U);
  msg.setDestination(60801U);
  msg.setDestinationEntity(122U);
  msg.severity = 246U;
  msg.text.assign("FFZLOEWPQNQEXX");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ApmStatus - Serialization/Deserialization #1")
{
  IMC::ApmStatus msg;
  msg.setTimeStamp(0.45713163734991114);
  msg.setSource(4964U);
  msg.setSourceEntity(131U);
  msg.setDestination(48254U);
  msg.setDestinationEntity(46U);
  msg.severity = 30U;
  msg.text.assign("PKFBKLVOSHMMFGPKFRTAIGUMUCLFTVOLSUETKXRVHNF");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ApmStatus - Serialization/Deserialization #2")
{
  IMC::ApmStatus msg;
  msg.setTimeStamp(0.2179524441212266);
  msg.setSource(14951U);
  msg.setSourceEntity(133U);
  msg.setDestination(43128U);
  msg.setDestinationEntity(253U);
  msg.severity = 137U;
  msg.text.assign("SGBYOBOGZSSACEHHCJIZVHBQLHXYJWMKMQYBIIPMINQJPKYVFYSGKRUHXCGRNCXCEQTKWQEKSSHAIFPJEWSDPZBMFNAMJTKAQDDKLNZTJEEXVGCUUFNXTWEWNPIAFMOMPOZMJTDPNMCKGLCZELSQRDOQVUGXRHDOERSZRGTRUATBEZVYHBGTIQGFKIUXKLVY");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioState - Serialization/Deserialization #0")
{
  IMC::GpioState msg;
  msg.setTimeStamp(0.7282751895234751);
  msg.setSource(65442U);
  msg.setSourceEntity(38U);
  msg.setDestination(20224U);
  msg.setDestinationEntity(173U);
  msg.name.assign("GFHMJJTPMYLCRHEQANLIHUIWZERAIISKMNKLJCAVJCVZUGXFLERJDUTHKLRBKHOVEUPSSTEYJQBNBMXCFWAHYRDBIWRWMMOGLXBLEYDQIXROACCAMVNAPRMDZPXEITRZWGPHVXGMOZPOSKVOZFBLJNWNSCYRUUSCSC");
  msg.value = 198U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioState - Serialization/Deserialization #1")
{
  IMC::GpioState msg;
  msg.setTimeStamp(0.6034443304645487);
  msg.setSource(66U);
  msg.setSourceEntity(155U);
  msg.setDestination(10908U);
  msg.setDestinationEntity(55U);
  msg.name.assign("ZEABCHACAQFQPOMUCFDKNWTSLJZQNJOKNGANXEDZTMTPHRHMAQGGNYQLYWREP");
  msg.value = 172U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioState - Serialization/Deserialization #2")
{
  IMC::GpioState msg;
  msg.setTimeStamp(0.9292328820882608);
  msg.setSource(59464U);
  msg.setSourceEntity(113U);
  msg.setDestination(2548U);
  msg.setDestinationEntity(34U);
  msg.name.assign("IUPSQSQHSSKKIHKPRXCEPFBLYZNWYFOSVZHPWAUCQTQUEBKWHWXRMUNDBDZUYCKCAEMLOEDFTCAYPKNHDALYAGF");
  msg.value = 119U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioStateGet - Serialization/Deserialization #0")
{
  IMC::GpioStateGet msg;
  msg.setTimeStamp(0.9979040414191795);
  msg.setSource(60010U);
  msg.setSourceEntity(48U);
  msg.setDestination(37337U);
  msg.setDestinationEntity(126U);
  msg.name.assign("CDPWSRNYCPETZGNKSYLQGSYQFORKJCMEZKRLYQGMNXJUZNWQPJAVALFSVGURREEPWYWFMYDDCLTPZAUPNCVBRAOFFHVDZLGOZPPLQFACIOZCALJESAEOMOFHTNWOCGRXHIYLMMKYILMXXXIXUOKJVVBZ");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioStateGet - Serialization/Deserialization #1")
{
  IMC::GpioStateGet msg;
  msg.setTimeStamp(0.8818449159472231);
  msg.setSource(33507U);
  msg.setSourceEntity(219U);
  msg.setDestination(47619U);
  msg.setDestinationEntity(116U);
  msg.name.assign("TABKAYYEIWRHCRGRBGCROBHJFAYMGWLYZHZVULYDWQJTVDTXJKDALZVIVLURTJNMIFFOBMXTWJNHXUXDWTQHACZHNEULKPCOSBCOHPWFWNXEDOVYSGITWRNDXXPJLVRKOLTMAEXPPXACWZQKODGQPMJVKTPSAXACQPHJECSHCUQEIURFSMEGKOGZZFZGUUPKKBIVFRDMPEYYQIOFVNWZGLR");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioStateGet - Serialization/Deserialization #2")
{
  IMC::GpioStateGet msg;
  msg.setTimeStamp(0.15090742914942845);
  msg.setSource(16986U);
  msg.setSourceEntity(109U);
  msg.setDestination(12255U);
  msg.setDestinationEntity(197U);
  msg.name.assign("SPBWNXBNCPTOJCYAFQFRKWWUZJNFYRRTQOPUSZMTXOENSHNDHDXUFMAAIVBMBEVCIMIZYYLGNPKUAJHVENHAYKWIJZQHSBKHOGMENPQGROBLGVLLWMTFCKRVGRZWKPZJJHDKLRWBWJJLOMFIMEAKCEPSSDVBOTTKZIEOQDECGOJEATKZFFNHXGZCPAGVIXUCQAUEAOYIVJLSTDSTFBVSRCMDZXPGHPYIRUYHRNQUUDCYIQW");

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioStateSet - Serialization/Deserialization #0")
{
  IMC::GpioStateSet msg;
  msg.setTimeStamp(0.14652984370163336);
  msg.setSource(20081U);
  msg.setSourceEntity(34U);
  msg.setDestination(19477U);
  msg.setDestinationEntity(149U);
  msg.name.assign("HIWMWYBFJSVINLHUWMXGMIHJYKHEHLLUXZJSUIJQJNBARQXOLDEZWJMDQZUVDEHCSPIKUQNNFZANKFFFRJOSKELBGZMLCPWVLAHSUZVSPRCMXBCVDFEAFEBSUVIYNRHHKPGEMBTLGCUXNTBOQDACDPQEZWQFPAOQYIXPYNEFGWSTOITSABJBXZASCXHVYKYEPTGKGUCGDXJTTYDRZDWG");
  msg.value = 67U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioStateSet - Serialization/Deserialization #1")
{
  IMC::GpioStateSet msg;
  msg.setTimeStamp(0.24844228265544277);
  msg.setSource(56080U);
  msg.setSourceEntity(121U);
  msg.setDestination(12269U);
  msg.setDestinationEntity(121U);
  msg.name.assign("XIORNQYTWHRIRFHQAGQXROCDJSWNUUMSTLZUXTEDTCTYMLSRNWZOELLDRTLPOJNTDHVFRWFCP");
  msg.value = 15U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("GpioStateSet - Serialization/Deserialization #2")
{
  IMC::GpioStateSet msg;
  msg.setTimeStamp(0.5249065330697241);
  msg.setSource(20443U);
  msg.setSourceEntity(61U);
  msg.setDestination(4814U);
  msg.setDestinationEntity(125U);
  msg.name.assign("LKBEFCYTTLKKGJHVUGMLCCFCDYZHIQYOTA");
  msg.value = 212U;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ColoredDissolvedOrganicMatter - Serialization/Deserialization #0")
{
  IMC::ColoredDissolvedOrganicMatter msg;
  msg.setTimeStamp(0.8119542322538326);
  msg.setSource(64266U);
  msg.setSourceEntity(107U);
  msg.setDestination(31875U);
  msg.setDestinationEntity(245U);
  msg.value = 0.37381976151172625f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ColoredDissolvedOrganicMatter - Serialization/Deserialization #1")
{
  IMC::ColoredDissolvedOrganicMatter msg;
  msg.setTimeStamp(0.042681808926736786);
  msg.setSource(29865U);
  msg.setSourceEntity(122U);
  msg.setDestination(22792U);
  msg.setDestinationEntity(201U);
  msg.value = 0.31736704627380696f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("ColoredDissolvedOrganicMatter - Serialization/Deserialization #2")
{
  IMC::ColoredDissolvedOrganicMatter msg;
  msg.setTimeStamp(0.13867072824986415);
  msg.setSource(11073U);
  msg.setSourceEntity(183U);
  msg.setDestination(27990U);
  msg.setDestinationEntity(55U);
  msg.value = 0.5843594775481098f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FluorescentDissolvedOrganicMatter - Serialization/Deserialization #0")
{
  IMC::FluorescentDissolvedOrganicMatter msg;
  msg.setTimeStamp(0.45025105389547326);
  msg.setSource(30619U);
  msg.setSourceEntity(233U);
  msg.setDestination(2123U);
  msg.setDestinationEntity(63U);
  msg.value = 0.42929597049332835f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FluorescentDissolvedOrganicMatter - Serialization/Deserialization #1")
{
  IMC::FluorescentDissolvedOrganicMatter msg;
  msg.setTimeStamp(0.39878509451110167);
  msg.setSource(48212U);
  msg.setSourceEntity(21U);
  msg.setDestination(16951U);
  msg.setDestinationEntity(206U);
  msg.value = 0.3774309734081174f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}

TEST_CASE("FluorescentDissolvedOrganicMatter - Serialization/Deserialization #2")
{
  IMC::FluorescentDissolvedOrganicMatter msg;
  msg.setTimeStamp(0.3853800397335079);
  msg.setSource(1382U);
  msg.setSourceEntity(233U);
  msg.setDestination(55276U);
  msg.setDestinationEntity(84U);
  msg.value = 0.29488618390964616f;

  try
  {
    IMC::ByteBuffer bfr;
    IMC::Packet::serialize(&msg, bfr);
    IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
    REQUIRE(msg == *msg_d);
    delete msg_d;
  }
  catch (IMC::InvalidMessageSize& e)
  {
    (void)e;
    REQUIRE(msg.getSerializationSize() > IMC::Message::maxSerializedSize());
  }

  std::ostringstream ss;
  msg.toJSON(ss);
  msg.getSubId();
  msg.setSubId(1);
  delete msg.clone();
}
