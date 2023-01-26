static const char norm_fg[] = "#bbafc7";
static const char norm_bg[] = "#0B0B0B";
static const char norm_border[] = "#827a8b";

static const char sel_fg[] = "#bbafc7";
static const char sel_bg[] = "#725A86";
static const char sel_border[] = "#bbafc7";

static const char urg_fg[] = "#bbafc7";
static const char urg_bg[] = "#675078";
static const char urg_border[] = "#675078";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
