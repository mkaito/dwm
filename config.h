/* See LICENSE file for copyright and license details. */

/* appearance */
static const char font[] = "-*-xbmicons-medium-r-*-*-12-*-*-*-*-*-*-*" ","
                           "-*-terminus-medium-r-*-*-12-*-*-*-*-*-*-*";
#define NUMCOLORS 18

// Solarized													 
#define S_yellow "#b58900"
#define S_orange "#cb4b16"
#define S_red "#dc322f"
#define S_magenta "#d33682"
#define S_violet "#6c71c4"
#define S_blue "#268bd2"
#define S_cyan "#2aa198"
#define S_green "#859900"

// Dark
#define S_base03 "#002b36"
#define S_base02 "#073642"
#define S_base01 "#586e75"
#define S_base00 "#657b83"
#define S_base0 "#839496"
#define S_base1 "#93a1a1"
#define S_base2 "#eee8d5"
#define S_base3 "#fdf6e3"

static const char colors[NUMCOLORS][ColLast][9] = {
  //	border		foreground background
  {		S_base01,	S_base01 , S_base03	 }, // 1 = normal (grey on black)
  {		S_yellow,	S_base1  , S_base03	 }, // 2 = selected (white on black)
  {		S_orange,	S_orange , S_base03	 }, // 3 = urgent (black on yellow)
  {		S_violet,	S_base03 , S_base03	 }, // 4 = darkgrey on black
  {		S_violet,	S_red    , S_base03	 }, // 5 = red on darkgrey
  {		S_violet,	S_green  , S_base03	 }, // 6 = green on darkgrey
  {		S_violet,	S_yellow , S_base03	 }, // 7 = yellow on darkgrey
  {		S_violet,	S_blue   , S_base03	 }, // 8 = blue on darkgrey
  {		S_violet,	S_magenta, S_base03	 }, // 9 = magenta on darkgrey
  {		S_violet,	S_cyan   , S_base03	 }, // A = cyan on darkgrey
  {		S_violet,	S_red    , S_base03	 }, // B = darkred on darkgrey
  {		S_violet,	S_green  , S_base03	 }, // C = darkgreen on darkgrey
  {		S_violet,	S_yellow , S_base03	 }, // D = darkyellow on darkgrey
  {		S_violet,	S_blue   , S_base03	 }, // E = darkblue on darkgrey
  {		S_violet,	S_magenta, S_base03	 }, // F = darkmagenta on darkgrey
  {		S_violet,	S_cyan   , S_base03	 }, //10 = darkcyan on darkgrey
  {		S_violet,	S_base01 , S_base03	 }, //11 = lightgrey on darkgrey
  {		S_violet,	S_base1  , S_base03	 }  //12 = white on darkgrey
};

static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const Bool showbar           = True;     /* False means no bar */
static const Bool topbar            = True;     /* False means bottom bar */

static const Layout layouts[] = {
					/* symbol     arrange function */
	/* 0 */	{ "\uE019 \uE009 \uE019",      tile },    /* first entry is default */
	/* 1 */	{ "\uE019 \uE00A \uE019",      NULL },    /* no layout function means floating behavior */
	/* 2 */	{ "\uE019 \uE00B \uE019",      monocle },
	/* 3 */	{ "\uE019 \uE00D \uE019",      gaplessgrid },
	/* 4 */	{ "\uE019 \uE00D \uE019",      bstack },
};  	

/* tagging */
//static const char *tags[] = { "term", "code", "web", "IM", "Gaming", "aux", "aux", "Media", "float" };
static const Tag tags[] = {
	//name			layout					mfact			nmaster
	{ "\uE002",	&layouts[0],		-1,				-1 },
	{ "\uE003",	&layouts[0],		 0.33,		-1 },
	{ "\uE000",	&layouts[2],		-1,				-1 },
	{ "\uE013",	&layouts[0],		0.60,			-1 },
	{ "\uE006",	&layouts[2],		-1,				-1 },
	{ "\uE007",	&layouts[2],		-1,				-1 },
	{ "\uE008",	&layouts[2],		-1,				-1 },
	{ "\uE001",	&layouts[1],		-1,				-1 },
};

static const Rule rules[] = {
	//class        , instance     , title , tags mask , isfloating , iscentred , monitor
	{ "Gimp"       , NULL         , NULL  , 0         , True       , False     , -1 }    ,
	{ NULL         , "ranger"     , NULL  , 1 << 6    , False      , False     , -1 }    ,
	{ "MPlayer"    , NULL         , NULL  , 1 << 6    , False      , True      , -1 }    ,
	{ "mplayer2"   , NULL         , NULL  , 1 << 6    , False      , True      , -1 }    ,
	{ "Vlc"        , NULL         , NULL  , 1 << 6    , True       , True      , -1 }    ,
	{ "XFontSel"   , NULL         , NULL  , 0         , True       , True      , -1 }    ,
	{ "Chromium"   , NULL         , NULL  , 1 << 2    , False      , False     , -1 }    ,
	{ "Firefox"    , NULL         , NULL  , 1 << 2    , True       , True      , -1 }    ,
	{ "Firefox"    , "Navigator"  , NULL  , 1 << 2    , False      , False     , -1 }    ,
	{ "Emacs"      , "emacs"      , NULL  , 1 << 1    , False      , False     , -1 }    ,
	{ "Emacs"      , "_Remember_" , NULL  , 0         , True       , True      , -1 }    ,
	{ "Anki"       , NULL         , NULL  , 0         , True       , True      , -1 }    ,
	{ NULL         , "weechat"    , NULL  , 1 << 3    , False      , False     , -1 }    ,
	{ NULL         , "mail"       , NULL  , 1 << 3    , False      , False     , -1 }    ,
	{ NULL         , "mixer"      , NULL  , 0         , True       , True      , -1 }    ,
	{ NULL         , "music"      , NULL  , 0         , True       , True      , -1 }    ,
	{ "Galculator" , NULL         , NULL  , 0         , True       , True      , -1 }    ,
	{ "Xmessage"   , "xmessage"   , NULL  , 0         , True       , True      , -1 }    ,
};

/* layout(s) */
static const float mfact      = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster      = 1;    /* number of clients in master area */
static const Bool resizehints = False; /* True means respect size hints in tiled resizals */

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

// Commands
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }
static const char terminal[] = "termite";

static const char *dmenucmd[]      = { "dmenu_run", "-fn", font, "-nb", colors[0][ColBG], "-nf", colors[0][ColFG], "-sb", colors[1][ColBG], "-sf", colors[1][ColFG], NULL };
static const char *termcmd[]       = { terminal, NULL };
static const char *musiccmd[]      = { terminal, "--name=music", "-e", "ncmpcpp", NULL };
static const char *filemancmd[]    = { terminal, "--name=ranger", "-e", "ranger", NULL };
static const char *browsercmd[]    = { "/bin/sh", "-c", "GTK2_RC_FILES = /usr/share/themes/Aurora/gtk-2.0/gtkrc firefox", NULL };
static const char *imcmd[]         = { terminal, "--name=weechat", "-e", "weechat-curses", NULL };
static const char *emacscmd[]      = { "emacsclient", "-c", "-n", NULL };
static const char *remembercmd[]   = { "emacsclient", "--eval", "(make-remember-frame)", NULL };
static const char *mailcmd[]       = { terminal, "--name=mail", "-e", "mutt", NULL };
static const char *mixercmd[]      = { terminal, "--name=mixer", "-e", "alsamixer", NULL };
static const char *volmcmd[]       = { "amixer", "-q", "sset", "Master", "toggle", NULL };
static const char *voldcmd[]       = { "amixer", "-q", "sset", "Master", "5-", "unmute", NULL };
static const char *volucmd[]       = { "amixer", "-q", "sset", "Master", "5+", "unmute", NULL };
static const char *mpdtogglecmd[]  = { "ncmpcpp", "toggle", NULL };
static const char *mpdstopcmd[]    = { "ncmpcpp", "stop", NULL };
static const char *mpdprevcmd[]    = { "ncmpcpp", "prev", NULL };
static const char *mpdnextcmd[]    = { "ncmpcpp", "next", NULL };
static const char *screenshotcmd[] = { "scrot", "-q", "100", "-e", "mv $f ~/screenshots/ 2>/dev/null", NULL };

static Key keys[] = {
	/* modifier                     key						function        argument */

	// General apps
	{ Mod1Mask,                     XK_p,					spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_F1,				spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_F5,				spawn,					{.v = musiccmd } },
	{ MODKEY,												XK_r,					spawn,					{.v = filemancmd } },
	{ MODKEY,												XK_F2,				spawn,					{.v = browsercmd } },
	{ MODKEY,												XK_F3,				spawn,					{.v = mailcmd } },
	{ MODKEY,												XK_e,					spawn,					{.v = emacscmd } },
	{ MODKEY,												XK_q,					spawn,					{.v = remembercmd } },
	{ MODKEY,												XK_F4,				spawn,					{.v = imcmd } },

	// Games
	{ MODKEY,												XK_F11,				spawn,					SHCMD("~/dev/bin/sc2") },
	{ MODKEY,												XK_F12,				spawn,					SHCMD("~/dev/bin/eve") },

	// Media keys
	{ 0,														0x1008ff12,		spawn,					{.v = volmcmd } },
	{ MODKEY,												0x1008ff12,		spawn,					{.v = mixercmd } },
	{ 0,														0x1008ff11,		spawn,					{.v = voldcmd } },
	{ 0,														0x1008ff13,		spawn,					{.v = volucmd } },
	{ 0,														0x1008ff14,		spawn,					{.v = mpdtogglecmd } },
	{ 0,														0x1008ff15,		spawn,					{.v = mpdstopcmd } },
	{ 0,														0x1008ff16,		spawn,					{.v = mpdprevcmd } },
	{ 0,														0x1008ff17,		spawn,					{.v = mpdnextcmd } },
	{ 0,														XK_Print,			spawn,					{.v = screenshotcmd } },

	// WM Stuff
	{ MODKEY,                       XK_v,					togglebar,			{0} },
	{ MODKEY,                       XK_j,					focusstack,			{.i = +1 } },
	{ MODKEY,                       XK_k,					focusstack,			{.i = -1 } },

	// patch: push
	{ MODKEY|ShiftMask,							XK_j,					pushdown,				{0} },
	{ MODKEY|ShiftMask,							XK_k,					pushup,					{0} },

	{ MODKEY,                       XK_i,					incnmaster,			{.i = +1 } },
	{ MODKEY,                       XK_d,					incnmaster,			{.i = -1 } },
	{ MODKEY,                       XK_h,					setmfact,				{.f = -0.05} },
	{ MODKEY,                       XK_l,					setmfact,				{.f = +0.05} },
	{ MODKEY,                       XK_Return,		zoom,						{0} },
	{ MODKEY,                       XK_Tab,				view,						{0} },
	{ MODKEY,                       XK_u,	  			focusurgent,		{0} },
	{ MODKEY,                       XK_Escape,		killclient,			{0} },
	{ MODKEY,                       XK_t,					setlayout,			{.v = &layouts[0]} },
	{ MODKEY,                       XK_f,					setlayout,			{.v = &layouts[1]} },
	{ MODKEY,                       XK_m,					setlayout,			{.v = &layouts[2]} },
	{ MODKEY,                       XK_g,					setlayout,			{.v = &layouts[3]} },
	{ MODKEY,                       XK_b,					setlayout,			{.v = &layouts[4]} },
	{ MODKEY,                       XK_space,			setlayout,			{0} },
	{ MODKEY|ShiftMask,             XK_space,			togglefloating,	{0} },
	{ MODKEY,                       XK_0,					view,						{.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,					tag,						{.ui = ~0 } },
	{ MODKEY,                       XK_comma,			focusmon,				{.i = -1 } },
	{ MODKEY,                       XK_period,		focusmon,				{.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,			tagmon,					{.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period,		tagmon,					{.i = +1 } },

	// Patch: cycle
	{ MODKEY,												XK_Left,			cycle,					{.i = -1 } },
	{ MODKEY,												XK_Right,			cycle,					{.i = +1 } },
	{ MODKEY|ControlMask,						XK_Left,			tagcycle,				{.i = -1 } },
	{ MODKEY|ControlMask,						XK_Right,			tagcycle,				{.i = +1 } },

	TAGKEYS(                        XK_1,													0)
	TAGKEYS(                        XK_2,													1)
	TAGKEYS(                        XK_3,													2)
	TAGKEYS(                        XK_4,													3)
	TAGKEYS(                        XK_5,													4)
	TAGKEYS(                        XK_6,													5)
	TAGKEYS(                        XK_7,													6)
	TAGKEYS(                        XK_8,													7)
	TAGKEYS(                        XK_9,													8)
	{ MODKEY|ShiftMask,             XK_q,				 quit,						{0} },
};

/* button definitions */
/* click can be ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

