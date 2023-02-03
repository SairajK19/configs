static const char norm_fg[] = "#b0b0b0";
static const char norm_bg[] = "#000000";
static const char norm_border[] = "#7b7b7b";

static const char sel_fg[] = "#b0b0b0";
static const char sel_bg[] = "#454545";
static const char sel_border[] = "#b0b0b0";

static const char urg_fg[] = "#b0b0b0";
static const char urg_bg[] = "#424242";
static const char urg_border[] = "#424242";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
