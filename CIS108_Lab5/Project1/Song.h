#pragma once
typedef struct _Songs_def
{
	char title[64];
	char author[32];
	char album[64];
	int tracknum;
	int yearpublished;
	enum genere
	{
		Blues,
		Country,
		Electronic,
		Folk,
		Hip_Hop,
		Jazz,
		Latin,
		Pop,
		Rock
	};

}Song_def;