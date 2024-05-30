#include <unordered_map>

namespace utils {
  const int*  const C_CAR_PTR     = (int*)  0x009BA088;
  const int*  const CARS_ADDR_PTR = (int*)  0x009B09D8;
  const int*  const OPT_ADDR_PRT  = (int*)  0x0091CF90;

  std::unordered_map<std::string, const char*> CAR_TABLE = {
    {"997S", "Porsche 911 Carrera S"},
    {"IS300", "Lexus IS300"},
    {"PUNTO", "Fiat Punto"},
    {"COBALTSS", "Chevrolet Cobalt SS"},
    {"GTI", "Volkswagen Golf GTI"},
    {"TT", "Audi TT 3.2 Quattro"},
    {"A3", "Audi A3 3.2 Quattro"},
    {"ECLIPSEGT", "Mitsubishi Eclipse GT"},
    {"A4", "Audi A4 3.2 FSI Quattro"},
    {"SUPRA", "Toyota Supra"},
    {"CLIO", "Renault Clio V6"},
    {"RX8", "Mazda RX8"},
    {"RX7", "Mazda RX7"},
    {"CTS", "Cadillac CTS"},
    {"MUSTANGGT", " Ford Mustang GT"},
    {"LANCEREVO8", "Mitsubishi Lancer Evolution VIII"},
    {"SL500", "Mercedes-Benz SL500"},
    {"GTO", "Pontiac GTO"},
    {"MONARO", "Vauxhall Monaro VXR"},
    {"CAYMANS", "Porsche Cayman S"},
    {"IMPREZAWRX", "Subaru Impreza WRX STi"},
    {"CLK500", "Mercedes-Benz CLK500"},
    {"ELISE", "Lotus Elise"},
    {"DB9", "Aston Martin DB9"},
    {"VIPER", "Dodge Viper SRT10"},
    {"GALLARDO", "Lamborghini Gallardo"},
    {"911TURBO", "Porsche 911 Turbo S"},
    {"CORVETTE", "Chevrolet Corvette"},
    {"MURCIELAGO", "Lamborghini Murciélago"},
    {"FORDGT", " Ford GT"},
    {"SLR", "Mercedes-Benz SLR McLaren"},
    {"CARRERAGT", "Porsche Carrera GT"},
    {"BMWM3GTRE46", "BMW M3 GTR"},
  };
}
