#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "AbundanceBinPlugin.h"

void AbundanceBinPlugin::input(std::string file) {
 inputfile = file;
}

void AbundanceBinPlugin::run() {}

void AbundanceBinPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "abundancebin";
myCommand += " -input ";
myCommand += inputfile + " ";
myCommand += "-RECURSIVE_CLASSIFICATION";
myCommand += " ";
 system(myCommand.c_str());
}

PluginProxy<AbundanceBinPlugin> AbundanceBinPluginProxy = PluginProxy<AbundanceBinPlugin>("AbundanceBin", PluginManager::getInstance());
