#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "Read/ReadMikoFile.h"
/*  
#include "MikoStruct.h"
#include "API/Telegram/TelegramAPI.h"
#include "API/Instagram/InstagramApi.h"
#include "API/Discord/DiscordApi.h"
#include "API/Vk/VkApi.h"

#include "Read/ReadMikoFile.h"
*/

int main(int argc, char *argv[])
{
    std::fstream OpenMikoFile("main.miko");

    std::string *numbers = new std::string;
    std::string MikoFile = "";
    std::string t = "";

    while (!OpenMikoFile.eof())
    {
        getline(OpenMikoFile, t);
        MikoFile += "\n";
        MikoFile += t;
    }


    std::cout << MikoFile << std::endl;




    delete numbers;


    return 0;
}