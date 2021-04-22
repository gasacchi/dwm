//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

  /* cpu load */
  {"   ", "~/.dev/github/dwm/dwmblocks/scripts/cpu.sh",     1,     0},

  /* watt */
  {"", "~/.dev/github/dwm/dwmblocks/scripts/watt.sh",     1,     0},

  /* cpu temp */
  {" ", "~/.dev/github/dwm/dwmblocks/scripts/temp.sh",     1,     0},
  /* fan speed */
  /* {" ", "~/.dev/github/dwm/dwmblocks/scripts/fan.sh",     1,     0}, */

  /* disk usage */
  {" ", "~/.dev/github/dwm/dwmblocks/scripts/disk.sh",     60,     0},

  /* memory usage */
  {" ", "~/.dev/github/dwm/dwmblocks/scripts/memory.sh",     3,     0},

  /* backlight */
  /* {"ﯧ ", "~/.dev/github/dwm/dwmblocks/scripts/backlight.sh",     0,     12}, */
  
  /* volume level */
  {"", "~/.dev/github/dwm/dwmblocks/scripts/volume.sh",     0,     10},

  /* battery */
  {"", "~/.dev/github/dwm/dwmblocks/scripts/battery.sh",     10,     0},

  /* Date is formatted like like this: "[Mon 01-01-00 00:00] */
  {" ", "~/.dev/github/dwm/dwmblocks/scripts/time.sh",     60,     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ∘ ";
static unsigned int delimLen = 5;
