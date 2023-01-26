// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {" [ ", "/home/sairaj/.dwmblocks/scripts/sound", 0, 10},
	{"[ ", "/home/sairaj/.dwmblocks/scripts/brightness", 10, 0},
    {"[ ", "/home/sairaj/.dwmblocks/scripts/wifi", 1, 0},
    {"[ ", "/home/sairaj/.dwmblocks/scripts/memory", 1, 0},
//    {"[ ", "/home/sairaj/.dwmblocks/scripts/gpu", 1000, 0},
    {"[ ", "/home/sairaj/.dwmblocks/scripts/battery", 5, 0},
    {"[ ", "/home/sairaj/.dwmblocks/scripts/calender", 1000, 0},
    {"[ ", "/home/sairaj/.dwmblocks/scripts/time", 1, 0},
//    {" ", "/home/sairaj/.dwmblocks/scripts/user", 1000, 0},
};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
