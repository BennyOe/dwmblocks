//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/			/*Command*/									/*Update Interval*/	/*Update Signal*/
// battery
    //{"^c#61afef^  ^c#abb2bf^",	 "cat /sys/class/power_supply/BAT1/capacity | awk '{print $0\"%\"}'",		60,			0},
    {"",	                        "~/.local/bin/battery",		6,			0},
// internet connection
	/* {"",                            "~/.local/bin/dwmnet",		                                                5,			0}, */
// cpu usage
	{"^c#bb9af7^ ^c#a9b1d6^",      "top -b -n1 | grep \"Cpu(s)\" | awk '{printf \"%5.2f\%\", $1 + $2}'",		1,			0},
// ram usage
	{"^c#bb9af7^ ^c#a9b1d6^",      "free -m | awk '/^Mem/ { print $3\"MB/\"$2\"MB\" }' | sed s/i//g",		    2,			0},
// hdd usage
	{"^c#bb9af7^ ^c#a9b1d6^",      "df -h | awk 'FNR == 5 {print $4\"B\"}'",					                10,			0},
// packages to update
	{"^c#7aa2f7^  ^c#a9b1d6^",	    "checkupdates | wc -l | awk '{print $0 \" pkg\"}'",				            3600,		1},
// date
	{"^c#e0af68^ ^c#a9b1d6^", 	    "date '+%a, %d. %b' ",								                        5,			0},
// clock
	{"^c#e0af68^ ^c#a9b1d6^",      "date '+%_H:%M'  ",  								                        5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "^c#7dcfff^ | ";
static unsigned int delimLen = 50;
