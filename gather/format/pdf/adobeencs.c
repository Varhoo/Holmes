/*
 *  Sherlock PDF parser
 *
 *  Set of Built-in character encodings
 *
 *  (c) 2002 Milan Vancura <milan@ucw.cz>
 */

#include "sherlock/sherlock.h"
#include "gather/format/pdf/pdf.h"

static struct unichar StandardEncTable[]={
{32,	0x0020},
{33,	0x0021},
{34,	0x0022},
{35,	0x0023},
{36,	0x0024},
{37,	0x0025},
{38,	0x0026},
{39,	0x2019},
{40,	0x0028},
{41,	0x0029},
{42,	0x002A},
{43,	0x002B},
{44,	0x002C},
{45,	0x002D},
{46,	0x002E},
{47,	0x002F},
{48,	0x0030},
{49,	0x0031},
{50,	0x0032},
{51,	0x0033},
{52,	0x0034},
{53,	0x0035},
{54,	0x0036},
{55,	0x0037},
{56,	0x0038},
{57,	0x0039},
{58,	0x003A},
{59,	0x003B},
{60,	0x003C},
{61,	0x003D},
{62,	0x003E},
{63,	0x003F},
{64,	0x0040},
{65,	0x0041},
{66,	0x0042},
{67,	0x0043},
{68,	0x0044},
{69,	0x0045},
{70,	0x0046},
{71,	0x0047},
{72,	0x0048},
{73,	0x0049},
{74,	0x004A},
{75,	0x004B},
{76,	0x004C},
{77,	0x004D},
{78,	0x004E},
{79,	0x004F},
{80,	0x0050},
{81,	0x0051},
{82,	0x0052},
{83,	0x0053},
{84,	0x0054},
{85,	0x0055},
{86,	0x0056},
{87,	0x0057},
{88,	0x0058},
{89,	0x0059},
{90,	0x005A},
{91,	0x005B},
{92,	0x005C},
{93,	0x005D},
{94,	0x005E},
{95,	0x005F},
{96,	0x2018},
{97,	0x0061},
{98,	0x0062},
{99,	0x0063},
{100,	0x0064},
{101,	0x0065},
{102,	0x0066},
{103,	0x0067},
{104,	0x0068},
{105,	0x0069},
{106,	0x006A},
{107,	0x006B},
{108,	0x006C},
{109,	0x006D},
{110,	0x006E},
{111,	0x006F},
{112,	0x0070},
{113,	0x0071},
{114,	0x0072},
{115,	0x0073},
{116,	0x0074},
{117,	0x0075},
{118,	0x0076},
{119,	0x0077},
{120,	0x0078},
{121,	0x0079},
{122,	0x007A},
{123,	0x007B},
{124,	0x007C},
{125,	0x007D},
{126,	0x007E},
{0,	0x0000}, /* 127 */
{0,	0x0000}, /* 128 */
{0,	0x0000}, /* 129 */
{0,	0x0000}, /* 130 */
{0,	0x0000}, /* 131 */
{0,	0x0000}, /* 132 */
{0,	0x0000}, /* 133 */
{0,	0x0000}, /* 134 */
{0,	0x0000}, /* 135 */
{0,	0x0000}, /* 136 */
{0,	0x0000}, /* 137 */
{0,	0x0000}, /* 138 */
{0,	0x0000}, /* 139 */
{0,	0x0000}, /* 140 */
{0,	0x0000}, /* 141 */
{0,	0x0000}, /* 142 */
{0,	0x0000}, /* 143 */
{0,	0x0000}, /* 144 */
{0,	0x0000}, /* 145 */
{0,	0x0000}, /* 146 */
{0,	0x0000}, /* 147 */
{0,	0x0000}, /* 148 */
{0,	0x0000}, /* 149 */
{0,	0x0000}, /* 150 */
{0,	0x0000}, /* 151 */
{0,	0x0000}, /* 152 */
{0,	0x0000}, /* 153 */
{0,	0x0000}, /* 154 */
{0,	0x0000}, /* 155 */
{0,	0x0000}, /* 156 */
{0,	0x0000}, /* 157 */
{0,	0x0000}, /* 158 */
{0,	0x0000}, /* 159 */
{0,	0x0000}, /* 160 */
{161,	0x00A1},
{162,	0x00A2},
{163,	0x00A3},
{164,	0x2044},
{165,	0x00A5},
{166,	0x0192},
{167,	0x00A7},
{168,	0x00A4},
{169,	0x0027},
{170,	0x201C},
{171,	0x00AB},
{172,	0x2039},
{173,	0x203A},
{174,	0xFB01},
{175,	0xFB02},
{0,	0x0000}, /* 176 */
{177,	0x2013},
{178,	0x2020},
{179,	0x2021},
{180,	0x00B7},
{0,	0x0000}, /* 181 */
{182,	0x00B6},
{183,	0x2022},
{184,	0x201A},
{185,	0x201E},
{186,	0x201D},
{187,	0x00BB},
{188,	0x2026},
{189,	0x2030},
{0,	0x0000}, /* 190 */
{191,	0x00BF},
{0,	0x0000}, /* 192 */
{193,	0x0060},
{194,	0x00B4},
{195,	0x02C6},
{196,	0x02DC},
{197,	0x00AF},
{198,	0x02D8},
{199,	0x02D9},
{200,	0x00A8},
{0,	0x0000}, /* 201 */
{202,	0x02DA},
{203,	0x00B8},
{0,	0x0000}, /* 204 */
{205,	0x02DD},
{206,	0x02DB},
{207,	0x02C7},
{208,	0x2014},
{0,	0x0000}, /* 209 */
{0,	0x0000}, /* 210 */
{0,	0x0000}, /* 211 */
{0,	0x0000}, /* 212 */
{0,	0x0000}, /* 213 */
{0,	0x0000}, /* 214 */
{0,	0x0000}, /* 215 */
{0,	0x0000}, /* 216 */
{0,	0x0000}, /* 217 */
{0,	0x0000}, /* 218 */
{0,	0x0000}, /* 219 */
{0,	0x0000}, /* 220 */
{0,	0x0000}, /* 221 */
{0,	0x0000}, /* 222 */
{0,	0x0000}, /* 223 */
{0,	0x0000}, /* 224 */
{225,	0x00C6},
{0,	0x0000}, /* 226 */
{227,	0x00AA},
{0,	0x0000}, /* 228 */
{0,	0x0000}, /* 229 */
{0,	0x0000}, /* 230 */
{0,	0x0000}, /* 231 */
{232,	0x0141},
{233,	0x00D8},
{234,	0x0152},
{235,	0x00BA},
{0,	0x0000}, /* 236 */
{0,	0x0000}, /* 237 */
{0,	0x0000}, /* 238 */
{0,	0x0000}, /* 239 */
{0,	0x0000}, /* 240 */
{241,	0x00E6},
{0,	0x0000}, /* 242 */
{0,	0x0000}, /* 243 */
{0,	0x0000}, /* 244 */
{245,	0x0131},
{0,	0x0000}, /* 246 */
{0,	0x0000}, /* 247 */
{248,	0x0142},
{249,	0x00F8},
{250,	0x0153},
{251,	0x00DF},
};

struct fencoding StandardEncoding={1,StandardEncTable, 220,32};

static struct unichar MacRomanEncTable[]={
{32,	0x0020},
{33,	0x0021},
{34,	0x0022},
{35,	0x0023},
{36,	0x0024},
{37,	0x0025},
{38,	0x0026},
{39,	0x0027},
{40,	0x0028},
{41,	0x0029},
{42,	0x002A},
{43,	0x002B},
{44,	0x002C},
{45,	0x002D},
{46,	0x002E},
{47,	0x002F},
{48,	0x0030},
{49,	0x0031},
{50,	0x0032},
{51,	0x0033},
{52,	0x0034},
{53,	0x0035},
{54,	0x0036},
{55,	0x0037},
{56,	0x0038},
{57,	0x0039},
{58,	0x003A},
{59,	0x003B},
{60,	0x003C},
{61,	0x003D},
{62,	0x003E},
{63,	0x003F},
{64,	0x0040},
{65,	0x0041},
{66,	0x0042},
{67,	0x0043},
{68,	0x0044},
{69,	0x0045},
{70,	0x0046},
{71,	0x0047},
{72,	0x0048},
{73,	0x0049},
{74,	0x004A},
{75,	0x004B},
{76,	0x004C},
{77,	0x004D},
{78,	0x004E},
{79,	0x004F},
{80,	0x0050},
{81,	0x0051},
{82,	0x0052},
{83,	0x0053},
{84,	0x0054},
{85,	0x0055},
{86,	0x0056},
{87,	0x0057},
{88,	0x0058},
{89,	0x0059},
{90,	0x005A},
{91,	0x005B},
{92,	0x005C},
{93,	0x005D},
{94,	0x005E},
{95,	0x005F},
{96,	0x0060},
{97,	0x0061},
{98,	0x0062},
{99,	0x0063},
{100,	0x0064},
{101,	0x0065},
{102,	0x0066},
{103,	0x0067},
{104,	0x0068},
{105,	0x0069},
{106,	0x006A},
{107,	0x006B},
{108,	0x006C},
{109,	0x006D},
{110,	0x006E},
{111,	0x006F},
{112,	0x0070},
{113,	0x0071},
{114,	0x0072},
{115,	0x0073},
{116,	0x0074},
{117,	0x0075},
{118,	0x0076},
{119,	0x0077},
{120,	0x0078},
{121,	0x0079},
{122,	0x007A},
{123,	0x007B},
{124,	0x007C},
{125,	0x007D},
{126,	0x007E},
{0,	0x0000}, /* 127 */
{128,	0x00C4},
{129,	0x00C5},
{130,	0x00C7},
{131,	0x00C9},
{132,	0x00D1},
{133,	0x00D6},
{134,	0x00DC},
{135,	0x00E1},
{136,	0x00E0},
{137,	0x00E2},
{138,	0x00E4},
{139,	0x00E3},
{140,	0x00E5},
{141,	0x00E7},
{142,	0x00E9},
{143,	0x00E8},
{144,	0x00EA},
{145,	0x00EB},
{146,	0x00ED},
{147,	0x00EC},
{148,	0x00EE},
{149,	0x00EF},
{150,	0x00F1},
{151,	0x00F3},
{152,	0x00F2},
{153,	0x00F4},
{154,	0x00F6},
{155,	0x00F5},
{156,	0x00FA},
{157,	0x00F9},
{158,	0x00FB},
{159,	0x00FC},
{160,	0x2020},
{161,	0x00B0},
{162,	0x00A2},
{163,	0x00A3},
{164,	0x00A7},
{165,	0x2022},
{166,	0x00B6},
{167,	0x00DF},
{168,	0x00AE},
{169,	0x00A9},
{170,	0x2122},
{171,	0x00B4},
{172,	0x00A8},
{0,	0x0000}, /* 173 */
{174,	0x00C6},
{175,	0x00D8},
{0,	0x0000}, /* 176 */
{177,	0x00B1},
{0,	0x0000}, /* 178 */
{0,	0x0000}, /* 179 */
{180,	0x00A5},
{181,	0x00B5},
{0,	0x0000}, /* 182 */
{0,	0x0000}, /* 183 */
{0,	0x0000}, /* 184 */
{0,	0x0000}, /* 185 */
{0,	0x0000}, /* 186 */
{187,	0x00AA},
{188,	0x00BA},
{0,	0x0000}, /* 189 */
{190,	0x00E6},
{191,	0x00F8},
{192,	0x00BF},
{193,	0x00A1},
{194,	0x00AC},
{0,	0x0000}, /* 195 */
{196,	0x0192},
{0,	0x0000}, /* 197 */
{0,	0x0000}, /* 198 */
{199,	0x00AB},
{200,	0x00BB},
{201,	0x2026},
{0,	0x0000}, /* 202 */
{203,	0x00C0},
{204,	0x00C3},
{205,	0x00D5},
{206,	0x0152},
{207,	0x0153},
{208,	0x2013},
{209,	0x2014},
{210,	0x201C},
{211,	0x201D},
{212,	0x2018},
{213,	0x2019},
{214,	0x00F7},
{0,	0x0000}, /* 215 */
{216,	0x00FF},
{217,	0x0178},
{218,	0x2044},
{219,	0x00A4},
{220,	0x2039},
{221,	0x203A},
{222,	0xFB01},
{223,	0xFB02},
{224,	0x2021},
{225,	0x00B7},
{226,	0x201A},
{227,	0x201E},
{228,	0x2030},
{229,	0x00C2},
{230,	0x00CA},
{231,	0x00C1},
{232,	0x00CB},
{233,	0x00C8},
{234,	0x00CD},
{235,	0x00CE},
{236,	0x00CF},
{237,	0x00CC},
{238,	0x00D3},
{239,	0x00D4},
{0,	0x0000}, /* 240 */
{241,	0x00D2},
{242,	0x00DA},
{243,	0x00DB},
{244,	0x00D9},
{245,	0x0131},
{246,	0x02C6},
{247,	0x02DC},
{248,	0x00AF},
{249,	0x02D8},
{250,	0x02D9},
{251,	0x02DA},
{252,	0x00B8},
{253,	0x02DD},
{254,	0x02DB},
{255,	0x02C7},
};

struct fencoding MacRomanEncoding={1,MacRomanEncTable, 224,32};

static struct unichar WinAnsiEncTable[]={
{32,	0x0020},
{33,	0x0021},
{34,	0x0022},
{35,	0x0023},
{36,	0x0024},
{37,	0x0025},
{38,	0x0026},
{39,	0x0027},
{40,	0x0028},
{41,	0x0029},
{42,	0x002A},
{43,	0x002B},
{44,	0x002C},
{45,	0x002D},
{46,	0x002E},
{47,	0x002F},
{48,	0x0030},
{49,	0x0031},
{50,	0x0032},
{51,	0x0033},
{52,	0x0034},
{53,	0x0035},
{54,	0x0036},
{55,	0x0037},
{56,	0x0038},
{57,	0x0039},
{58,	0x003A},
{59,	0x003B},
{60,	0x003C},
{61,	0x003D},
{62,	0x003E},
{63,	0x003F},
{64,	0x0040},
{65,	0x0041},
{66,	0x0042},
{67,	0x0043},
{68,	0x0044},
{69,	0x0045},
{70,	0x0046},
{71,	0x0047},
{72,	0x0048},
{73,	0x0049},
{74,	0x004A},
{75,	0x004B},
{76,	0x004C},
{77,	0x004D},
{78,	0x004E},
{79,	0x004F},
{80,	0x0050},
{81,	0x0051},
{82,	0x0052},
{83,	0x0053},
{84,	0x0054},
{85,	0x0055},
{86,	0x0056},
{87,	0x0057},
{88,	0x0058},
{89,	0x0059},
{90,	0x005A},
{91,	0x005B},
{92,	0x005C},
{93,	0x005D},
{94,	0x005E},
{95,	0x005F},
{96,	0x0060},
{97,	0x0061},
{98,	0x0062},
{99,	0x0063},
{100,	0x0064},
{101,	0x0065},
{102,	0x0066},
{103,	0x0067},
{104,	0x0068},
{105,	0x0069},
{106,	0x006A},
{107,	0x006B},
{108,	0x006C},
{109,	0x006D},
{110,	0x006E},
{111,	0x006F},
{112,	0x0070},
{113,	0x0071},
{114,	0x0072},
{115,	0x0073},
{116,	0x0074},
{117,	0x0075},
{118,	0x0076},
{119,	0x0077},
{120,	0x0078},
{121,	0x0079},
{122,	0x007A},
{123,	0x007B},
{124,	0x007C},
{125,	0x007D},
{126,	0x007E},
{0,	0x0000}, /* 127 */
{128,	0x20AC},
{0,	0x0000}, /* 129 */
{130,	0x201A},
{131,	0x0192},
{132,	0x201E},
{133,	0x2026},
{134,	0x2020},
{135,	0x2021},
{136,	0x02C6},
{137,	0x2030},
{138,	0x0160},
{139,	0x2039},
{140,	0x0152},
{0,	0x0000}, /* 141 */
{142,	0x017D},
{0,	0x0000}, /* 143 */
{0,	0x0000}, /* 144 */
{145,	0x2018},
{146,	0x2019},
{147,	0x201C},
{148,	0x201D},
{149,	0x2022},
{150,	0x2013},
{151,	0x2014},
{152,	0x02DC},
{153,	0x2122},
{154,	0x0161},
{155,	0x203A},
{156,	0x0153},
{0,	0x0000}, /* 157 */
{158,	0x017E},
{159,	0x0178},
{0,	0x0000}, /* 160 */
{161,	0x00A1},
{162,	0x00A2},
{163,	0x00A3},
{164,	0x00A4},
{165,	0x00A5},
{166,	0x00A6},
{167,	0x00A7},
{168,	0x00A8},
{169,	0x00A9},
{170,	0x00AA},
{171,	0x00AB},
{172,	0x00AC},
{0,	0x0000}, /* 173 */
{174,	0x00AE},
{175,	0x00AF},
{176,	0x00B0},
{177,	0x00B1},
{178,	0x00B2},
{179,	0x00B3},
{180,	0x00B4},
{181,	0x00B5},
{182,	0x00B6},
{183,	0x00B7},
{184,	0x00B8},
{185,	0x00B9},
{186,	0x00BA},
{187,	0x00BB},
{188,	0x00BC},
{189,	0x00BD},
{190,	0x00BE},
{191,	0x00BF},
{192,	0x00C0},
{193,	0x00C1},
{194,	0x00C2},
{195,	0x00C3},
{196,	0x00C4},
{197,	0x00C5},
{198,	0x00C6},
{199,	0x00C7},
{200,	0x00C8},
{201,	0x00C9},
{202,	0x00CA},
{203,	0x00CB},
{204,	0x00CC},
{205,	0x00CD},
{206,	0x00CE},
{207,	0x00CF},
{208,	0x00D0},
{209,	0x00D1},
{210,	0x00D2},
{211,	0x00D3},
{212,	0x00D4},
{213,	0x00D5},
{214,	0x00D6},
{215,	0x00D7},
{216,	0x00D8},
{217,	0x00D9},
{218,	0x00DA},
{219,	0x00DB},
{220,	0x00DC},
{221,	0x00DD},
{222,	0x00DE},
{223,	0x00DF},
{224,	0x00E0},
{225,	0x00E1},
{226,	0x00E2},
{227,	0x00E3},
{228,	0x00E4},
{229,	0x00E5},
{230,	0x00E6},
{231,	0x00E7},
{232,	0x00E8},
{233,	0x00E9},
{234,	0x00EA},
{235,	0x00EB},
{236,	0x00EC},
{237,	0x00ED},
{238,	0x00EE},
{239,	0x00EF},
{240,	0x00F0},
{241,	0x00F1},
{242,	0x00F2},
{243,	0x00F3},
{244,	0x00F4},
{245,	0x00F5},
{246,	0x00F6},
{247,	0x00F7},
{248,	0x00F8},
{249,	0x00F9},
{250,	0x00FA},
{251,	0x00FB},
{252,	0x00FC},
{253,	0x00FD},
{254,	0x00FE},
{255,	0x00FF},
};

struct fencoding WinAnsiEncoding={1,WinAnsiEncTable, 224,32};

static struct unichar PDFDocEncTable[]={
{24,	0x02D8},
{25,	0x02C7},
{26,	0x02C6},
{27,	0x02D9},
{28,	0x02DD},
{29,	0x02DB},
{30,	0x02DA},
{31,	0x02DC},
{32,	0x0020},
{33,	0x0021},
{34,	0x0022},
{35,	0x0023},
{36,	0x0024},
{37,	0x0025},
{38,	0x0026},
{39,	0x0027},
{40,	0x0028},
{41,	0x0029},
{42,	0x002A},
{43,	0x002B},
{44,	0x002C},
{45,	0x002D},
{46,	0x002E},
{47,	0x002F},
{48,	0x0030},
{49,	0x0031},
{50,	0x0032},
{51,	0x0033},
{52,	0x0034},
{53,	0x0035},
{54,	0x0036},
{55,	0x0037},
{56,	0x0038},
{57,	0x0039},
{58,	0x003A},
{59,	0x003B},
{60,	0x003C},
{61,	0x003D},
{62,	0x003E},
{63,	0x003F},
{64,	0x0040},
{65,	0x0041},
{66,	0x0042},
{67,	0x0043},
{68,	0x0044},
{69,	0x0045},
{70,	0x0046},
{71,	0x0047},
{72,	0x0048},
{73,	0x0049},
{74,	0x004A},
{75,	0x004B},
{76,	0x004C},
{77,	0x004D},
{78,	0x004E},
{79,	0x004F},
{80,	0x0050},
{81,	0x0051},
{82,	0x0052},
{83,	0x0053},
{84,	0x0054},
{85,	0x0055},
{86,	0x0056},
{87,	0x0057},
{88,	0x0058},
{89,	0x0059},
{90,	0x005A},
{91,	0x005B},
{92,	0x005C},
{93,	0x005D},
{94,	0x005E},
{95,	0x005F},
{96,	0x0060},
{97,	0x0061},
{98,	0x0062},
{99,	0x0063},
{100,	0x0064},
{101,	0x0065},
{102,	0x0066},
{103,	0x0067},
{104,	0x0068},
{105,	0x0069},
{106,	0x006A},
{107,	0x006B},
{108,	0x006C},
{109,	0x006D},
{110,	0x006E},
{111,	0x006F},
{112,	0x0070},
{113,	0x0071},
{114,	0x0072},
{115,	0x0073},
{116,	0x0074},
{117,	0x0075},
{118,	0x0076},
{119,	0x0077},
{120,	0x0078},
{121,	0x0079},
{122,	0x007A},
{123,	0x007B},
{124,	0x007C},
{125,	0x007D},
{126,	0x007E},
{0,	0x0000}, /* 127 */
{128,	0x2022},
{129,	0x2020},
{130,	0x2021},
{131,	0x2026},
{132,	0x2014},
{133,	0x2013},
{134,	0x0192},
{135,	0x2044},
{136,	0x2039},
{137,	0x203A},
{138,	0x2212},
{139,	0x2030},
{140,	0x201E},
{141,	0x201C},
{142,	0x201D},
{143,	0x2018},
{144,	0x2019},
{145,	0x201A},
{146,	0x2122},
{147,	0xFB01},
{148,	0xFB02},
{149,	0x0141},
{150,	0x0152},
{151,	0x0160},
{152,	0x0178},
{153,	0x017D},
{154,	0x0131},
{155,	0x0142},
{156,	0x0153},
{157,	0x0161},
{158,	0x017E},
{0,	0x0000}, /* 159 */
{160,	0x20AC},
{161,	0x00A1},
{162,	0x00A2},
{163,	0x00A3},
{164,	0x00A4},
{165,	0x00A5},
{166,	0x00A6},
{167,	0x00A7},
{168,	0x00A8},
{169,	0x00A9},
{170,	0x00AA},
{171,	0x00AB},
{172,	0x00AC},
{0,	0x0000}, /* 173 */
{174,	0x00AE},
{175,	0x00AF},
{176,	0x00B0},
{177,	0x00B1},
{178,	0x00B2},
{179,	0x00B3},
{180,	0x00B4},
{181,	0x00B5},
{182,	0x00B6},
{183,	0x00B7},
{184,	0x00B8},
{185,	0x00B9},
{186,	0x00BA},
{187,	0x00BB},
{188,	0x00BC},
{189,	0x00BD},
{190,	0x00BE},
{191,	0x00BF},
{192,	0x00C0},
{193,	0x00C1},
{194,	0x00C2},
{195,	0x00C3},
{196,	0x00C4},
{197,	0x00C5},
{198,	0x00C6},
{199,	0x00C7},
{200,	0x00C8},
{201,	0x00C9},
{202,	0x00CA},
{203,	0x00CB},
{204,	0x00CC},
{205,	0x00CD},
{206,	0x00CE},
{207,	0x00CF},
{208,	0x00D0},
{209,	0x00D1},
{210,	0x00D2},
{211,	0x00D3},
{212,	0x00D4},
{213,	0x00D5},
{214,	0x00D6},
{215,	0x00D7},
{216,	0x00D8},
{217,	0x00D9},
{218,	0x00DA},
{219,	0x00DB},
{220,	0x00DC},
{221,	0x00DD},
{222,	0x00DE},
{223,	0x00DF},
{224,	0x00E0},
{225,	0x00E1},
{226,	0x00E2},
{227,	0x00E3},
{228,	0x00E4},
{229,	0x00E5},
{230,	0x00E6},
{231,	0x00E7},
{232,	0x00E8},
{233,	0x00E9},
{234,	0x00EA},
{235,	0x00EB},
{236,	0x00EC},
{237,	0x00ED},
{238,	0x00EE},
{239,	0x00EF},
{240,	0x00F0},
{241,	0x00F1},
{242,	0x00F2},
{243,	0x00F3},
{244,	0x00F4},
{245,	0x00F5},
{246,	0x00F6},
{247,	0x00F7},
{248,	0x00F8},
{249,	0x00F9},
{250,	0x00FA},
{251,	0x00FB},
{252,	0x00FC},
{253,	0x00FD},
{254,	0x00FE},
{255,	0x00FF},
};

struct fencoding PDFDocEncoding={1,PDFDocEncTable, 232,24};

static struct unichar MacExpertEncTable[]={
{32,	0x0020},
{33,	0xF721},
{34,	0xF6F8},
{35,	0xF7A2},
{36,	0xF724},
{37,	0xF6E4},
{38,	0xF726},
{39,	0xF7B4},
{0,	0x0000}, /* 40 */
{0,	0x0000}, /* 41 */
{42,	0x2025},
{0,	0x0000}, /* 43 */
{44,	0x002C},
{0,	0x0000}, /* 45 */
{0,	0x0000}, /* 46 */
{0,	0x0000}, /* 47 */
{48,	0xF730},
{0,	0x0000}, /* 49 */
{50,	0xF732},
{51,	0xF733},
{0,	0x0000}, /* 52 */
{0,	0x0000}, /* 53 */
{54,	0xF736},
{55,	0xF737},
{56,	0xF738},
{0,	0x0000}, /* 57 */
{58,	0x003A},
{0,	0x0000}, /* 59 */
{0,	0x0000}, /* 60 */
{61,	0xF6DE},
{0,	0x0000}, /* 62 */
{0,	0x0000}, /* 63 */
{0,	0x0000}, /* 64 */
{0,	0x0000}, /* 65 */
{0,	0x0000}, /* 66 */
{0,	0x0000}, /* 67 */
{68,	0xF7F0},
{0,	0x0000}, /* 69 */
{0,	0x0000}, /* 70 */
{0,	0x0000}, /* 71 */
{0,	0x0000}, /* 72 */
{73,	0x00BE},
{0,	0x0000}, /* 74 */
{75,	0x215C},
{0,	0x0000}, /* 76 */
{0,	0x0000}, /* 77 */
{0,	0x0000}, /* 78 */
{79,	0x2154},
{0,	0x0000}, /* 80 */
{0,	0x0000}, /* 81 */
{0,	0x0000}, /* 82 */
{0,	0x0000}, /* 83 */
{0,	0x0000}, /* 84 */
{0,	0x0000}, /* 85 */
{0,	0x0000}, /* 86 */
{0,	0x0000}, /* 87 */
{0,	0x0000}, /* 88 */
{0,	0x0000}, /* 89 */
{0,	0x0000}, /* 90 */
{0,	0x0000}, /* 91 */
{0,	0x0000}, /* 92 */
{0,	0x0000}, /* 93 */
{94,	0xF6F6},
{0,	0x0000}, /* 95 */
{96,	0xF760},
{97,	0xF761},
{98,	0xF762},
{99,	0xF763},
{100,	0xF764},
{101,	0xF765},
{102,	0xF766},
{103,	0xF767},
{104,	0xF768},
{105,	0xF769},
{106,	0xF76A},
{107,	0xF76B},
{108,	0xF76C},
{109,	0xF76D},
{110,	0xF76E},
{111,	0xF76F},
{112,	0xF770},
{113,	0xF771},
{114,	0xF772},
{115,	0xF773},
{116,	0xF774},
{117,	0xF775},
{118,	0xF776},
{119,	0xF777},
{120,	0xF778},
{121,	0xF779},
{122,	0xF77A},
{123,	0x20A1},
{0,	0x0000}, /* 124 */
{0,	0x0000}, /* 125 */
{126,	0xF6FE},
{0,	0x0000}, /* 127 */
{0,	0x0000}, /* 128 */
{129,	0xF6E9},
{130,	0xF6E0},
{0,	0x0000}, /* 131 */
{0,	0x0000}, /* 132 */
{0,	0x0000}, /* 133 */
{0,	0x0000}, /* 134 */
{135,	0xF7E1},
{136,	0xF7E0},
{137,	0xF7E2},
{138,	0xF7E4},
{139,	0xF7E3},
{140,	0xF7E5},
{141,	0xF7E7},
{142,	0xF7E9},
{143,	0xF7E8},
{144,	0xF7EA},
{145,	0xF7EB},
{146,	0xF7ED},
{147,	0xF7EC},
{148,	0xF7EE},
{149,	0xF7EF},
{150,	0xF7F1},
{151,	0xF7F3},
{152,	0xF7F2},
{153,	0xF7F4},
{154,	0xF7F6},
{155,	0xF7F5},
{156,	0xF7FA},
{157,	0xF7F9},
{158,	0xF7FB},
{159,	0xF7FC},
{0,	0x0000}, /* 160 */
{161,	0x2078},
{0,	0x0000}, /* 162 */
{163,	0x2083},
{164,	0x2086},
{165,	0x2088},
{166,	0x2087},
{167,	0xF6FD},
{0,	0x0000}, /* 168 */
{169,	0xF6DF},
{170,	0x2082},
{0,	0x0000}, /* 171 */
{172,	0xF7A8},
{0,	0x0000}, /* 173 */
{174,	0xF6F5},
{0,	0x0000}, /* 175 */
{0,	0x0000}, /* 176 */
{0,	0x0000}, /* 177 */
{178,	0xF6E1},
{0,	0x0000}, /* 179 */
{180,	0xF7FD},
{0,	0x0000}, /* 181 */
{182,	0xF6E3},
{0,	0x0000}, /* 183 */
{0,	0x0000}, /* 184 */
{185,	0xF7FE},
{0,	0x0000}, /* 186 */
{0,	0x0000}, /* 187 */
{188,	0x2080},
{189,	0xF6FF},
{190,	0xF7E6},
{191,	0xF7F8},
{0,	0x0000}, /* 192 */
{0,	0x0000}, /* 193 */
{194,	0xF6F9},
{0,	0x0000}, /* 195 */
{0,	0x0000}, /* 196 */
{0,	0x0000}, /* 197 */
{0,	0x0000}, /* 198 */
{0,	0x0000}, /* 199 */
{0,	0x0000}, /* 200 */
{201,	0xF7B8},
{0,	0x0000}, /* 202 */
{0,	0x0000}, /* 203 */
{0,	0x0000}, /* 204 */
{0,	0x0000}, /* 205 */
{0,	0x0000}, /* 206 */
{207,	0xF6FA},
{0,	0x0000}, /* 208 */
{0,	0x0000}, /* 209 */
{0,	0x0000}, /* 210 */
{0,	0x0000}, /* 211 */
{0,	0x0000}, /* 212 */
{0,	0x0000}, /* 213 */
{214,	0xF7A1},
{0,	0x0000}, /* 215 */
{216,	0xF7FF},
{0,	0x0000}, /* 217 */
{0,	0x0000}, /* 218 */
{219,	0x00B2},
{220,	0x00B3},
{0,	0x0000}, /* 221 */
{0,	0x0000}, /* 222 */
{223,	0x2076},
{224,	0x2077},
{0,	0x0000}, /* 225 */
{226,	0x2070},
{0,	0x0000}, /* 227 */
{228,	0xF6EC},
{0,	0x0000}, /* 229 */
{230,	0xF6F3},
{0,	0x0000}, /* 231 */
{0,	0x0000}, /* 232 */
{0,	0x0000}, /* 233 */
{234,	0xF6F2},
{235,	0xF6EB},
{0,	0x0000}, /* 236 */
{0,	0x0000}, /* 237 */
{0,	0x0000}, /* 238 */
{0,	0x0000}, /* 239 */
{0,	0x0000}, /* 240 */
{0,	0x0000}, /* 241 */
{242,	0xF6FB},
{243,	0xF6F4},
{244,	0xF7AF},
{245,	0xF6EA},
{0,	0x0000}, /* 246 */
{0,	0x0000}, /* 247 */
{248,	0xF6E2},
{0,	0x0000}, /* 249 */
{250,	0xF6F7},
{251,	0xF6FC},
};

struct fencoding MacExpertEncoding={1,MacExpertEncTable, 220,32};

static struct unichar SymbolEncTable[]={
{32,	0x0020},
{33,	0x0021},
{0,	0x0000}, /* 34 */
{35,	0x0023},
{36,	0x2203},
{37,	0x0025},
{38,	0x0026},
{39,	0x220B},
{40,	0x0028},
{41,	0x0029},
{42,	0x2217},
{43,	0x002B},
{44,	0x002C},
{45,	0x2212},
{46,	0x002E},
{47,	0x002F},
{0,	0x0000}, /* 48 */
{49,	0x0031},
{50,	0x0032},
{51,	0x0033},
{52,	0x0034},
{53,	0x0035},
{54,	0x0036},
{55,	0x0037},
{56,	0x0038},
{57,	0x0039},
{58,	0x003A},
{59,	0x003B},
{60,	0x003C},
{61,	0x003D},
{62,	0x003E},
{63,	0x003F},
{64,	0x2245},
{65,	0x0391},
{66,	0x0392},
{67,	0x03A7},
{68,	0x2206},
{69,	0x0395},
{70,	0x03A6},
{71,	0x0393},
{72,	0x0397},
{73,	0x0399},
{74,	0x03D1},
{75,	0x039A},
{76,	0x039B},
{77,	0x039C},
{78,	0x039D},
{79,	0x039F},
{80,	0x03A0},
{81,	0x0398},
{82,	0x03A1},
{83,	0x03A3},
{84,	0x03A4},
{85,	0x03A5},
{86,	0x03C2},
{87,	0x2126},
{88,	0x039E},
{89,	0x03A8},
{90,	0x0396},
{91,	0x005B},
{92,	0x2234},
{93,	0x005D},
{94,	0x22A5},
{95,	0x005F},
{96,	0xF8E5},
{97,	0x03B1},
{98,	0x03B2},
{99,	0x03C7},
{100,	0x03B4},
{101,	0x03B5},
{102,	0x03C6},
{103,	0x03B3},
{104,	0x03B7},
{105,	0x03B9},
{106,	0x03D5},
{107,	0x03BA},
{108,	0x03BB},
{109,	0x00B5},
{110,	0x03BD},
{111,	0x03BF},
{112,	0x03C0},
{113,	0x03B8},
{114,	0x03C1},
{115,	0x03C3},
{116,	0x03C4},
{0,	0x0000}, /* 117 */
{118,	0x03D6},
{119,	0x03C9},
{0,	0x0000}, /* 120 */
{121,	0x03C8},
{0,	0x0000}, /* 122 */
{123,	0x007B},
{124,	0x007C},
{125,	0x007D},
{126,	0x223C},
{0,	0x0000}, /* 127 */
{0,	0x0000}, /* 128 */
{0,	0x0000}, /* 129 */
{0,	0x0000}, /* 130 */
{0,	0x0000}, /* 131 */
{0,	0x0000}, /* 132 */
{0,	0x0000}, /* 133 */
{0,	0x0000}, /* 134 */
{0,	0x0000}, /* 135 */
{0,	0x0000}, /* 136 */
{0,	0x0000}, /* 137 */
{0,	0x0000}, /* 138 */
{0,	0x0000}, /* 139 */
{0,	0x0000}, /* 140 */
{0,	0x0000}, /* 141 */
{0,	0x0000}, /* 142 */
{0,	0x0000}, /* 143 */
{0,	0x0000}, /* 144 */
{0,	0x0000}, /* 145 */
{0,	0x0000}, /* 146 */
{0,	0x0000}, /* 147 */
{0,	0x0000}, /* 148 */
{0,	0x0000}, /* 149 */
{0,	0x0000}, /* 150 */
{0,	0x0000}, /* 151 */
{0,	0x0000}, /* 152 */
{0,	0x0000}, /* 153 */
{0,	0x0000}, /* 154 */
{0,	0x0000}, /* 155 */
{0,	0x0000}, /* 156 */
{0,	0x0000}, /* 157 */
{0,	0x0000}, /* 158 */
{0,	0x0000}, /* 159 */
{160,	0x20AC},
{161,	0x03D2},
{162,	0x2032},
{163,	0x2264},
{164,	0x2044},
{165,	0x221E},
{166,	0x0192},
{167,	0x2663},
{168,	0x2666},
{169,	0x2665},
{170,	0x2660},
{171,	0x2194},
{172,	0x2190},
{173,	0x2191},
{174,	0x2192},
{175,	0x2193},
{176,	0x00B0},
{177,	0x00B1},
{178,	0x2033},
{179,	0x2265},
{180,	0x00D7},
{181,	0x221D},
{182,	0x2202},
{183,	0x2022},
{184,	0x00F7},
{185,	0x2260},
{186,	0x2261},
{187,	0x2248},
{188,	0x2026},
{189,	0xF8E6},
{190,	0xF8E7},
{191,	0x21B5},
{192,	0x2135},
{193,	0x2111},
{194,	0x211C},
{0,	0x0000}, /* 195 */
{196,	0x2297},
{197,	0x2295},
{198,	0x2205},
{199,	0x2229},
{200,	0x222A},
{201,	0x2283},
{202,	0x2287},
{203,	0x2284},
{204,	0x2282},
{205,	0x2286},
{206,	0x2208},
{207,	0x2209},
{208,	0x2220},
{209,	0x2207},
{210,	0xF6DA},
{211,	0xF6D9},
{212,	0xF6DB},
{213,	0x220F},
{214,	0x221A},
{215,	0x22C5},
{216,	0x00AC},
{217,	0x2227},
{218,	0x2228},
{219,	0x21D4},
{220,	0x21D0},
{221,	0x21D1},
{222,	0x21D2},
{223,	0x21D3},
{224,	0x25CA},
{225,	0x2329},
{226,	0xF8E8},
{227,	0xF8E9},
{228,	0xF8EA},
{229,	0x2211},
{230,	0xF8EB},
{231,	0xF8EC},
{232,	0xF8ED},
{233,	0xF8EE},
{234,	0xF8EF},
{235,	0xF8F0},
{236,	0xF8F1},
{237,	0xF8F2},
{238,	0xF8F3},
{239,	0xF8F4},
{0,	0x0000}, /* 240 */
{241,	0x232A},
{242,	0x222B},
{243,	0x2320},
{244,	0xF8F5},
{245,	0x2321},
{246,	0xF8F6},
{247,	0xF8F7},
{248,	0xF8F8},
{249,	0xF8F9},
{250,	0xF8FA},
{251,	0xF8FB},
{252,	0xF8FC},
{253,	0xF8FD},
{254,	0xF8FE},
};

struct fencoding SymbolEncoding={1,SymbolEncTable, 223,32};