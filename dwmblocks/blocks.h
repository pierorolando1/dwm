static const Block blocks[] = {
//   Icon    Command                          Update Interval     Update Signal
    { "  ", "checkupdates | wc -l",                 60,               0 },
    { "",    "awk -F'[][]' '/Left:/ { print $2 }' <(amixer sget Master)", 1, 0 },
    { "",   "date '+ %d/%m/%Y   %H:%M%p'", 5, 0 },
};

// Sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
