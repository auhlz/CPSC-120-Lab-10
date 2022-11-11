// Alex Labitigan
// CPSC 120-12
// 2022-10-31
// alexlabitigan@csu.fullerton.edu
// @auhlz
//
// Lab 10-02
// Partners: @dianasuceli
//
// Counties
//

#include <iostream>
#include <string>
#include <vector>

#include "counties_functions.h"

int main(int argc, char const *argv[]) {
  std::vector<std::vector<std::string>> ca_counties{
      {{"Alameda",   "Alpine",        "Amador",       "Butte",
        "Calaveras", "Colusa",        "Contra Costa", "Del Norte",
        "El Dorado", "Fresno",        "Glenn",        "Humboldt",
        "Imperial",  "Inyo",          "Kern",         "Kings",
        "Lake",      "Lassen",        "Los Angeles",  "Madera",
        "Marin",     "Mariposa",      "Mendocino",    "Merced",
        "Modoc",     "Mono",          "Monterey",     "Napa",
        "Nevada",    "Orange",        "Placer",       "Plumas",
        "Riverside", "Sacramento",    "San Benito",   "San Bernardino",
        "San Diego", "San Francisco", "San Joaquin",  "San Luis Obispo",
        "San Mateo", "Santa Barbara", "Santa Clara",  "Santa Cruz",
        "Shasta",    "Sierra",        "Siskiyou",     "Solano",
        "Sonoma",    "Stanislaus",    "Sutter",       "Tehama",
        "Trinity",   "Tulare",        "Tuolumne",     "Ventura",
        "Yolo",      "Yuba"},
       {"1648556", "1235",   "41259",   "208309",  "46221",  "21917",
        "1161413", "28100",  "193221",  "1013581", "28805",  "136310",
        "179851",  "18970",  "917673",  "153443",  "68766",  "33159",
        "9829544", "159410", "260206",  "17147",   "91305",  "286461",
        "8661",    "13247",  "437325",  "136207",  "103487", "3167809",
        "412300",  "19915",  "2458395", "1588921", "66677",  "2194710",
        "3286069", "815201", "789410",  "283159",  "737888", "446475",
        "1885508", "267792", "182139",  "3283",    "44118",  "451716",
        "485887",  "552999", "99063",   "65498",   "16060",  "477054",
        "55810",   "839784", "216986",  "83421"}}};

  std::vector<std::string> args(argv, argv + argc);

  if (args.size() < 2) {
    std::cout << "Please specify a county name on the command line. Exiting.\n";
    std::cout << "For example: ./counties \"Los Angeles\" ";
    return 1;
  }
  if (CountyIndex(ca_counties, args[1]) == -1) {
    std::cout << "Error: " << args[1]
              << " is not in the vector. Please check your spelling.\n";
    std::cout << "The counties in California are: "
              << AllCountiesString(ca_counties);
    return 1;
  }
  std::cout << "The population of " << args[1] << " county is "
            << ca_counties[1][CountyIndex(ca_counties, args[1])] << ".";

  return 0;
}