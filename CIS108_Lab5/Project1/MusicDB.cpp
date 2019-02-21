#include <string>
#include <fstream>
#include "Song.h"
using namespace std;
char my_songs = {};

void List_Songs(std::string List_songs)
{
	fstream file("SongsDataBase.txt", ios::in | ios::binary);
	file.read((char*)&my_songs);
}
void Add_Songs(std::string Add_songs)
{

}
void Save_songs(std::string Save_songs)
{

}
void Help(std::string Help)
{

}
bool Exit(std::string Exit)
{

}