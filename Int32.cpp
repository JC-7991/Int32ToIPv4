using namespace std;
std::string uint32_to_ip(uint32_t ip){
  
  int fir = (ip >> (0 * 8)) & 0xFF;
  int sec = (ip >> (1 * 8)) & 0xFF;
  int thd = (ip >> (2 * 8)) & 0xFF;
  int frt = (ip >> (3 * 8)) & 0xFF;
  return to_string(frt) + "." + to_string(thd) + "."+ to_string(sec) + "." + to_string(fir);

}