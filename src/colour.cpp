#include "colour.h"

int hexdec(char hex[]) {
  unsigned long x = strtoul(hex, 0, 16);
  char str[256];
  sprintf(str, "%ul", x);
  return atoi(str);
}

void hextorgb(char hex[], int *rgb) {
  char clean_hex[7];

  switch(strlen(hex)) {
    case 7:
      // Remove # from beginning
      memcpy(clean_hex, &hex[1], 6);
      clean_hex[6] = '\0';
      break;
    case 6:
      // Hex is clean already
      strcpy(clean_hex, hex);
            break;
    case 4:
      // Example: #fff
      clean_hex[0] = hex[1];
      clean_hex[1] = hex[1];
      clean_hex[2] = hex[2];
      clean_hex[3] = hex[2];
      clean_hex[4] = hex[3];
      clean_hex[5] = hex[4];
      clean_hex[6] = '\0';
      break;
    case 3:
      // Example: fff
      clean_hex[0] = hex[0];
      clean_hex[1] = hex[0];
      clean_hex[2] = hex[1];
      clean_hex[3] = hex[1];
      clean_hex[4] = hex[2];
      clean_hex[5] = hex[2];
      clean_hex[6] = '\0';
      break;
    default:
      sprintf(clean_hex, "FFFFFF");
      break;
  }

  char *r, *g, *b;

  rgb[0] = hexdec(strndup(clean_hex + 0, 2));
  rgb[1] = hexdec(strndup(clean_hex + 2, 2));
  rgb[2] = hexdec(strndup(clean_hex + 4, 2));
}