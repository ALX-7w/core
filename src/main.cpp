#include <fstream>
#include <cstdlib>
#include <iostream>
#include <sstream>


#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>
#include "../deps/parser/src/SimuStandardParser.h"

using namespace std;


int main() {
    //std::system("java -cp ./deps/7-Wonders-Simulator/bin controller.Controller");
    FILE* pipe = popen("java -cp ./deps/7-Wonders-Simulator/bin controller.Controller", "r");
    SimuStandardParser parser = SimuStandardParser(pipe);
    parser.run();
}