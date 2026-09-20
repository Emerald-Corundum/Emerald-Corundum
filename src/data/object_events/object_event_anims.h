static const union AnimCmd sAnim_StayStill[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_Inanimate[] = {
    [ANIM_STAY_STILL] = sAnim_StayStill,
};

static const union AnimCmd sAnim_QuintyPlumpFaceSouth[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpFaceNorth[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpFaceWest[] =
{
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpFaceEast[] =
{
    ANIMCMD_FRAME(2, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoSouth[] =
{
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(3, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoNorth[] =
{
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(4, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoWest[] =
{
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoEast[] =
{
    ANIMCMD_FRAME(5, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastSouth[] =
{
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(3, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastNorth[] =
{
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(4, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastWest[] =
{
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastEast[] =
{
    ANIMCMD_FRAME(5, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFasterSouth[] =
{
    ANIMCMD_FRAME(3, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(3, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFasterNorth[] =
{
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(4, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFasterWest[] =
{
    ANIMCMD_FRAME(5, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFasterEast[] =
{
    ANIMCMD_FRAME(5, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastestSouth[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(3, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastestNorth[] =
{
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(4, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastestWest[] =
{
    ANIMCMD_FRAME(5, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_QuintyPlumpGoFastestEast[] =
{
    ANIMCMD_FRAME(5, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_QuintyPlump[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_QuintyPlumpFaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_QuintyPlumpFaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_QuintyPlumpFaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_QuintyPlumpFaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_QuintyPlumpGoSouth,
    [ANIM_STD_GO_NORTH] = sAnim_QuintyPlumpGoNorth,
    [ANIM_STD_GO_WEST] = sAnim_QuintyPlumpGoWest,
    [ANIM_STD_GO_EAST] = sAnim_QuintyPlumpGoEast,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_QuintyPlumpGoFastSouth,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_QuintyPlumpGoFastNorth,
    [ANIM_STD_GO_FAST_WEST] = sAnim_QuintyPlumpGoFastWest,
    [ANIM_STD_GO_FAST_EAST] = sAnim_QuintyPlumpGoFastEast,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_QuintyPlumpGoFasterSouth,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_QuintyPlumpGoFasterNorth,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_QuintyPlumpGoFasterWest,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_QuintyPlumpGoFasterEast,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_QuintyPlumpGoFastestSouth,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_QuintyPlumpGoFastestNorth,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_QuintyPlumpGoFastestWest,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_QuintyPlumpGoFastestEast,
};

static const union AnimCmd sAnim_FaceSouth3F[] =
{
    ANIMCMD_FRAME(0, 16),
    ANIMCMD_JUMP(0),
};

// south facing is always frame 0, regardless of two or three frames
#define sAnim_FaceSouth2F sAnim_FaceSouth3F

static const union AnimCmd sAnim_FaceNorth3F[] =
{
    ANIMCMD_FRAME(1, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceNorth2F[] =
{
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceWest3F[] =
{
    ANIMCMD_FRAME(2, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceWest2F[] =
{
    ANIMCMD_FRAME(4, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceEast3F[] =
{
    ANIMCMD_FRAME(2, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_FaceEast3F_Asym sAnim_FaceEast3F

static const union AnimCmd sAnim_FaceEast2F[] =
{
    ANIMCMD_FRAME(4, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceEast2F_Asym[] =
{
    ANIMCMD_FRAME(6, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceSouthwest3F[] =
{
    ANIMCMD_FRAME(9, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceSouthwest2F[] =
{
    ANIMCMD_FRAME(6, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceSoutheast3F[] =
{
    ANIMCMD_FRAME(9, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_FaceSoutheast3F_Asym sAnim_FaceSoutheast3F

static const union AnimCmd sAnim_FaceSoutheast2F[] =
{
    ANIMCMD_FRAME(6, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_FaceSoutheast2F_Asym sAnim_FaceSoutheast2F

static const union AnimCmd sAnim_FaceNorthwest3F[] =
{
    ANIMCMD_FRAME(10, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceNorthwest2F[] =
{
    ANIMCMD_FRAME(8, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_FaceNortheast3F[] =
{
    ANIMCMD_FRAME(10, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_FaceNortheast3F_Asym sAnim_FaceNortheast3F

static const union AnimCmd sAnim_FaceNortheast2F[] =
{
    ANIMCMD_FRAME(8, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_FaceNortheast2F_Asym sAnim_FaceNortheast2F

static const union AnimCmd sAnim_GoSouth3F[] =
{
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoSouth2F[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoNorth3F[] =
{
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoNorth2F[] =
{
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoWest3F[] =
{
    ANIMCMD_FRAME(7, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(8, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoWest2F[] =
{
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_FRAME(5, 6),
    ANIMCMD_FRAME(5, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoEast3F[] =
{
    ANIMCMD_FRAME(7, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoEast3F_Asym sAnim_GoEast3F

static const union AnimCmd sAnim_GoEast2F[] =
{
    ANIMCMD_FRAME(4, 6, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 6, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 6, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 6, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoEast2F_Asym[] =
{
    ANIMCMD_FRAME(6, 6),
    ANIMCMD_FRAME(7, 6),
    ANIMCMD_FRAME(7, 6),
    ANIMCMD_FRAME(6, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoSouthwest3F[] =
{
    ANIMCMD_FRAME(11, 8),
    ANIMCMD_FRAME( 9, 8),
    ANIMCMD_FRAME(12, 8),
    ANIMCMD_FRAME( 9, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoSouthwest2F[] =
{
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(7, 8),
    ANIMCMD_FRAME(7, 8),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoSoutheast3F[] =
{
    ANIMCMD_FRAME(11, 8, .hFlip = TRUE),
    ANIMCMD_FRAME( 9, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 8, .hFlip = TRUE),
    ANIMCMD_FRAME( 9, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoSoutheast3F_Asym sAnim_GoSoutheast3F

static const union AnimCmd sAnim_GoSoutheast2F[] =
{
    ANIMCMD_FRAME(6, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoSoutheast2F_Asym sAnim_GoSoutheast2F

static const union AnimCmd sAnim_GoNorthwest3F[] =
{
    ANIMCMD_FRAME(13, 8),
    ANIMCMD_FRAME(10, 8),
    ANIMCMD_FRAME(14, 8),
    ANIMCMD_FRAME(10, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoNorthwest2F[] =
{
    ANIMCMD_FRAME(8, 8),
    ANIMCMD_FRAME(9, 8),
    ANIMCMD_FRAME(9, 8),
    ANIMCMD_FRAME(8, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoNortheast3F[] =
{
    ANIMCMD_FRAME(13, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(10, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(10, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoNortheast3F_Asym sAnim_GoNortheast3F

static const union AnimCmd sAnim_GoNortheast2F[] =
{
    ANIMCMD_FRAME(8, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(9, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(9, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoNortheast2F_Asym sAnim_GoNortheast2F

static const union AnimCmd sAnim_GoFastSouth3F[] =
{
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastSouth2F[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastNorth3F[] =
{
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastNorth2F[] =
{
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastWest3F[] =
{
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(8, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastWest2F[] =
{
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastEast3F[] =
{
    ANIMCMD_FRAME(7, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastEast3F_Asym sAnim_GoFastEast3F

static const union AnimCmd sAnim_GoFastEast2F[] =
{
    ANIMCMD_FRAME(4, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastEast2F_Asym[] =
{
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastSouthwest3F[] =
{
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_FRAME( 9, 4),
    ANIMCMD_FRAME(12, 4),
    ANIMCMD_FRAME( 9, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastSouthwest2F[] =
{
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastSoutheast3F[] =
{
    ANIMCMD_FRAME(11, 4, .hFlip = TRUE),
    ANIMCMD_FRAME( 9, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 4, .hFlip = TRUE),
    ANIMCMD_FRAME( 9, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastSoutheast3F_Asym sAnim_GoFastSoutheast3F

static const union AnimCmd sAnim_GoFastSoutheast2F[] =
{
    ANIMCMD_FRAME(6, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastSoutheast2F_Asym sAnim_GoFastSoutheast2F

static const union AnimCmd sAnim_GoFastNorthwest3F[] =
{
    ANIMCMD_FRAME(13, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastNorthwest2F[] =
{
    ANIMCMD_FRAME(8, 4),
    ANIMCMD_FRAME(9, 4),
    ANIMCMD_FRAME(9, 4),
    ANIMCMD_FRAME(8, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastNortheast3F[] =
{
    ANIMCMD_FRAME(13, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(10, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(10, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastNortheast3F_Asym sAnim_GoFastNortheast3F

static const union AnimCmd sAnim_GoFastNortheast2F[] =
{
    ANIMCMD_FRAME(8, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(9, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(9, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastNortheast2F_Asym sAnim_GoFastNortheast2F

static const union AnimCmd sAnim_GoFasterSouth3F[] =
{
    ANIMCMD_FRAME(3, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterSouth2F[] =
{
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterNorth3F[] =
{
    ANIMCMD_FRAME(5, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(1, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterNorth2F[] =
{
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(3, 2),
    ANIMCMD_FRAME(3, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterWest3F[] =
{
    ANIMCMD_FRAME(7, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(8, 2),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterWest2F[] =
{
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(5, 2),
    ANIMCMD_FRAME(5, 2),
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterEast3F[] =
{
    ANIMCMD_FRAME(7, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFasterEast3F_Asym sAnim_GoFasterEast3F

static const union AnimCmd sAnim_GoFasterEast2F[] =
{
    ANIMCMD_FRAME(4, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterEast2F_Asym[] =
{
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(7, 2),
    ANIMCMD_FRAME(7, 2),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterSouthwest3F[] =
{
    ANIMCMD_FRAME(11, 2),
    ANIMCMD_FRAME( 9, 2),
    ANIMCMD_FRAME(12, 2),
    ANIMCMD_FRAME( 9, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterSouthwest2F[] =
{
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(7, 2),
    ANIMCMD_FRAME(7, 2),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterSoutheast3F[] =
{
    ANIMCMD_FRAME(11, 2, .hFlip = TRUE),
    ANIMCMD_FRAME( 9, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 2, .hFlip = TRUE),
    ANIMCMD_FRAME( 9, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFasterSoutheast3F_Asym sAnim_GoFasterSoutheast3F

static const union AnimCmd sAnim_GoFasterSoutheast2F[] =
{
    ANIMCMD_FRAME(6, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFasterSoutheast2F_Asym sAnim_GoFasterSoutheast2F

static const union AnimCmd sAnim_GoFasterNorthwest3F[] =
{
    ANIMCMD_FRAME(13, 2),
    ANIMCMD_FRAME(10, 2),
    ANIMCMD_FRAME(14, 2),
    ANIMCMD_FRAME(10, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterNorthwest2F[] =
{
    ANIMCMD_FRAME(8, 2),
    ANIMCMD_FRAME(9, 2),
    ANIMCMD_FRAME(9, 2),
    ANIMCMD_FRAME(8, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFasterNortheast3F[] =
{
    ANIMCMD_FRAME(13, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(10, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(10, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFasterNortheast3F_Asym sAnim_GoFasterNortheast3F

static const union AnimCmd sAnim_GoFasterNortheast2F[] =
{
    ANIMCMD_FRAME(8, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(9, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(9, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFasterNortheast2F_Asym sAnim_GoFasterNortheast2F

static const union AnimCmd sAnim_GoFastestSouth3F[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestSouth2F[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestNorth3F[] =
{
    ANIMCMD_FRAME(5, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestNorth2F[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestWest3F[] =
{
    ANIMCMD_FRAME(7, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(8, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestWest2F[] =
{
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(5, 1),
    ANIMCMD_FRAME(5, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestEast3F[] =
{
    ANIMCMD_FRAME(7, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastestEast3F_Asym sAnim_GoFastestEast3F

static const union AnimCmd sAnim_GoFastestEast2F[] =
{
    ANIMCMD_FRAME(4, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(5, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestEast2F_Asym[] =
{
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_FRAME(7, 1),
    ANIMCMD_FRAME(7, 1),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestSouthwest3F[] =
{
    ANIMCMD_FRAME(11, 1),
    ANIMCMD_FRAME( 9, 1),
    ANIMCMD_FRAME(12, 1),
    ANIMCMD_FRAME( 9, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestSouthwest2F[] =
{
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_FRAME(7, 1),
    ANIMCMD_FRAME(7, 1),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestSoutheast3F[] =
{
    ANIMCMD_FRAME(11, 1, .hFlip = TRUE),
    ANIMCMD_FRAME( 9, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 1, .hFlip = TRUE),
    ANIMCMD_FRAME( 9, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastestSoutheast3F_Asym sAnim_GoFastestSoutheast3F

static const union AnimCmd sAnim_GoFastestSoutheast2F[] =
{
    ANIMCMD_FRAME(6, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(7, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(6, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastestSoutheast2F_Asym sAnim_GoFastestSoutheast2F

static const union AnimCmd sAnim_GoFastestNorthwest3F[] =
{
    ANIMCMD_FRAME(13, 1),
    ANIMCMD_FRAME(10, 1),
    ANIMCMD_FRAME(14, 1),
    ANIMCMD_FRAME(10, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestNorthwest2F[] =
{
    ANIMCMD_FRAME(8, 1),
    ANIMCMD_FRAME(9, 1),
    ANIMCMD_FRAME(9, 1),
    ANIMCMD_FRAME(8, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GoFastestNortheast3F[] =
{
    ANIMCMD_FRAME(13, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(10, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(10, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastestNortheast3F_Asym sAnim_GoFastestNortheast3F

static const union AnimCmd sAnim_GoFastestNortheast2F[] =
{
    ANIMCMD_FRAME(8, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(9, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(9, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(8, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

#define sAnim_GoFastestNortheast2F_Asym sAnim_GoFastestNortheast2F

const union AnimCmd *const sAnimTable_Walk3F[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_GoSouth3F,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_GoNorth3F,
    [ANIM_STD_GO_NORTHWEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_NORTHEAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTHWEST] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_SOUTHEAST] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_NORTHWEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_NORTHEAST] = sAnim_GoFastestEast3F,
};

const union AnimCmd *const sAnimTable_Walk3F_Asym[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F_Asym,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F_Asym,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F_Asym,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F_Asym,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F_Asym,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_FaceEast3F_Asym,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_GoSouth3F,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_GoNorth3F,
    [ANIM_STD_GO_NORTHWEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_NORTHEAST] = sAnim_GoEast3F_Asym,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_GoFastEast3F_Asym,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_GoFasterEast3F_Asym,
    [ANIM_STD_GO_FASTEST_SOUTHWEST] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_SOUTHEAST] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_NORTHWEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_NORTHEAST] = sAnim_GoFastestEast3F_Asym,
};

const union AnimCmd *const sAnimTable_Walk3F_Diagonal[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_FaceSouthwest3F,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_FaceSoutheast3F,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_FaceNorthwest3F,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_FaceNortheast3F,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_GoSouthwest3F,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_GoSoutheast3F,
    [ANIM_STD_GO_NORTHWEST] = sAnim_GoNorthwest3F,
    [ANIM_STD_GO_NORTHEAST] = sAnim_GoNortheast3F,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_GoFastSouthwest3F,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_GoFastSoutheast3F,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_GoFastNorthwest3F,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_GoFastNortheast3F,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_GoFasterSouthwest3F,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_GoFasterSoutheast3F,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_GoFasterNorthwest3F,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_GoFasterNortheast3F,
    [ANIM_STD_GO_FASTEST_SOUTHWEST] = sAnim_GoFastestSouthwest3F,
    [ANIM_STD_GO_FASTEST_SOUTHEAST] = sAnim_GoFastestSoutheast3F,
    [ANIM_STD_GO_FASTEST_NORTHWEST] = sAnim_GoFastestNorthwest3F,
    [ANIM_STD_GO_FASTEST_NORTHEAST] = sAnim_GoFastestNortheast3F,
};

const union AnimCmd *const sAnimTable_Walk3F_Diagonal_Asym[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F_Asym,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F_Asym,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F_Asym,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F_Asym,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F_Asym,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_FaceSouthwest3F,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_FaceSoutheast3F_Asym,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_FaceNorthwest3F,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_FaceNortheast3F_Asym,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_GoSouthwest3F,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_GoSoutheast3F_Asym,
    [ANIM_STD_GO_NORTHWEST] = sAnim_GoNorthwest3F,
    [ANIM_STD_GO_NORTHEAST] = sAnim_GoNortheast3F_Asym,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_GoFastSouthwest3F,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_GoFastSoutheast3F_Asym,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_GoFastNorthwest3F,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_GoFastNortheast3F_Asym,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_GoFasterSouthwest3F,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_GoFasterSoutheast3F_Asym,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_GoFasterNorthwest3F,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_GoFasterNortheast3F_Asym,
    [ANIM_STD_GO_FASTEST_SOUTHWEST] = sAnim_GoFastestSouthwest3F,
    [ANIM_STD_GO_FASTEST_SOUTHEAST] = sAnim_GoFastestSoutheast3F_Asym,
    [ANIM_STD_GO_FASTEST_NORTHWEST] = sAnim_GoFastestNorthwest3F,
    [ANIM_STD_GO_FASTEST_NORTHEAST] = sAnim_GoFastestNortheast3F_Asym,
};

const union AnimCmd *const sAnimTable_Walk2F[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth2F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth2F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest2F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast2F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth2F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth2F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest2F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast2F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth2F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth2F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest2F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast2F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth2F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth2F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest2F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast2F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth2F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth2F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest2F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast2F,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_FaceSouth2F,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_FaceNorth2F,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_FaceWest2F,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_FaceEast2F,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_GoSouth2F,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_GoNorth2F,
    [ANIM_STD_GO_NORTHWEST] = sAnim_GoWest2F,
    [ANIM_STD_GO_NORTHEAST] = sAnim_GoEast2F,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_GoFastSouth2F,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_GoFastNorth2F,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_GoFastWest2F,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_GoFastEast2F,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_GoFasterSouth2F,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_GoFasterNorth2F,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_GoFasterWest2F,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_GoFasterEast2F,
    [ANIM_STD_GO_FASTEST_SOUTHWEST] = sAnim_GoFastestSouth2F,
    [ANIM_STD_GO_FASTEST_SOUTHEAST] = sAnim_GoFastestNorth2F,
    [ANIM_STD_GO_FASTEST_NORTHWEST] = sAnim_GoFastestWest2F,
    [ANIM_STD_GO_FASTEST_NORTHEAST] = sAnim_GoFastestEast2F,
};

const union AnimCmd *const sAnimTable_Walk2F_Asym[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth2F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth2F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest2F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast2F_Asym,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth2F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth2F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest2F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast2F_Asym,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth2F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth2F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest2F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast2F_Asym,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth2F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth2F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest2F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast2F_Asym,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth2F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth2F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest2F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast2F_Asym,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_FaceSouth2F,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_FaceNorth2F,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_FaceWest2F,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_FaceEast2F_Asym,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_GoSouth2F,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_GoNorth2F,
    [ANIM_STD_GO_NORTHWEST] = sAnim_GoWest2F,
    [ANIM_STD_GO_NORTHEAST] = sAnim_GoEast2F_Asym,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_GoFastSouth2F,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_GoFastNorth2F,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_GoFastWest2F,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_GoFastEast2F_Asym,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_GoFasterSouth2F,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_GoFasterNorth2F,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_GoFasterWest2F,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_GoFasterEast2F_Asym,
    [ANIM_STD_GO_FASTEST_SOUTHWEST] = sAnim_GoFastestSouth2F,
    [ANIM_STD_GO_FASTEST_SOUTHEAST] = sAnim_GoFastestNorth2F,
    [ANIM_STD_GO_FASTEST_NORTHWEST] = sAnim_GoFastestWest2F,
    [ANIM_STD_GO_FASTEST_NORTHEAST] = sAnim_GoFastestEast2F_Asym,
};

const union AnimCmd *const sAnimTable_Walk2F_Diagonal[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth2F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth2F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest2F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast2F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth2F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth2F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest2F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast2F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth2F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth2F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest2F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast2F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth2F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth2F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest2F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast2F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth2F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth2F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest2F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast2F,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_FaceSouthwest2F,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_FaceSoutheast2F,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_FaceNorthwest2F,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_FaceNortheast2F,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_GoSouthwest2F,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_GoSoutheast2F,
    [ANIM_STD_GO_NORTHWEST] = sAnim_GoNorthwest2F,
    [ANIM_STD_GO_NORTHEAST] = sAnim_GoNortheast2F,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_GoFastSouthwest2F,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_GoFastSoutheast2F,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_GoFastNorthwest2F,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_GoFastNortheast2F,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_GoFasterSouthwest2F,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_GoFasterSoutheast2F,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_GoFasterNorthwest2F,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_GoFasterNortheast2F,
    [ANIM_STD_GO_FASTEST_SOUTHWEST] = sAnim_GoFastestSouthwest2F,
    [ANIM_STD_GO_FASTEST_SOUTHEAST] = sAnim_GoFastestSoutheast2F,
    [ANIM_STD_GO_FASTEST_NORTHWEST] = sAnim_GoFastestNorthwest2F,
    [ANIM_STD_GO_FASTEST_NORTHEAST] = sAnim_GoFastestNortheast2F,
};

const union AnimCmd *const sAnimTable_Walk2F_Diagonal_Asym[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth2F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth2F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest2F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast2F_Asym,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth2F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth2F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest2F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast2F_Asym,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth2F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth2F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest2F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast2F_Asym,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth2F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth2F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest2F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast2F_Asym,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth2F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth2F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest2F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast2F_Asym,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_FaceSouthwest2F,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_FaceSoutheast2F_Asym,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_FaceNorthwest2F,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_FaceNortheast2F_Asym,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_GoSouthwest2F,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_GoSoutheast2F_Asym,
    [ANIM_STD_GO_NORTHWEST] = sAnim_GoNorthwest2F,
    [ANIM_STD_GO_NORTHEAST] = sAnim_GoNortheast2F_Asym,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_GoFastSouthwest2F,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_GoFastSoutheast2F_Asym,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_GoFastNorthwest2F,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_GoFastNortheast2F_Asym,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_GoFasterSouthwest2F,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_GoFasterSoutheast2F_Asym,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_GoFasterNorthwest2F,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_GoFasterNortheast2F_Asym,
    [ANIM_STD_GO_FASTEST_SOUTHWEST] = sAnim_GoFastestSouthwest2F,
    [ANIM_STD_GO_FASTEST_SOUTHEAST] = sAnim_GoFastestSoutheast2F_Asym,
    [ANIM_STD_GO_FASTEST_NORTHWEST] = sAnim_GoFastestNorthwest2F,
    [ANIM_STD_GO_FASTEST_NORTHEAST] = sAnim_GoFastestNortheast2F_Asym,
};

static const union AnimCmd sAnim_EnterPokeballSouth[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballFastSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballNorth[] =
{
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballFastNorth[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballWest[] =
{
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballFastWest[] =
{
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballEast[] =
{
    ANIMCMD_FRAME(4, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballFastEast[] =
{
    ANIMCMD_FRAME(4, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballEast_Asym[] =
{
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_EnterPokeballFastEast_Asym[] =
{
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(0, 2),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballNorth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastNorth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(2, 2),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballWest[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastWest[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 2),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballEast[] =
{
    ANIMCMD_FRAME(0, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastEast[] =
{
    ANIMCMD_FRAME(0, 1, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(4, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(4, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballEast_Asym[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(6, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_ExitPokeballFastEast_Asym[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_FRAME(6, 2),
    ANIMCMD_FRAME(6, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd* const sAnimTable_Pokeball[] =
{
    [ANIM_ENTER_POKEBALL_SOUTH] = sAnim_EnterPokeballSouth,
    [ANIM_ENTER_POKEBALL_NORTH] = sAnim_EnterPokeballNorth,
    [ANIM_ENTER_POKEBALL_WEST] = sAnim_EnterPokeballWest,
    [ANIM_ENTER_POKEBALL_EAST] = sAnim_EnterPokeballEast,
    [ANIM_ENTER_POKEBALL_FAST_SOUTH] = sAnim_EnterPokeballFastSouth,
    [ANIM_ENTER_POKEBALL_FAST_NORTH] = sAnim_EnterPokeballFastNorth,
    [ANIM_ENTER_POKEBALL_FAST_WEST] = sAnim_EnterPokeballFastWest,
    [ANIM_ENTER_POKEBALL_FAST_EAST] = sAnim_EnterPokeballFastEast,
    [ANIM_EXIT_POKEBALL_SOUTH] = sAnim_ExitPokeballSouth,
    [ANIM_EXIT_POKEBALL_NORTH] = sAnim_ExitPokeballNorth,
    [ANIM_EXIT_POKEBALL_WEST] = sAnim_ExitPokeballWest,
    [ANIM_EXIT_POKEBALL_EAST] = sAnim_ExitPokeballEast,
    [ANIM_EXIT_POKEBALL_FAST_SOUTH] = sAnim_ExitPokeballFastSouth,
    [ANIM_EXIT_POKEBALL_FAST_NORTH] = sAnim_ExitPokeballFastNorth,
    [ANIM_EXIT_POKEBALL_FAST_WEST] = sAnim_ExitPokeballFastWest,
    [ANIM_EXIT_POKEBALL_FAST_EAST] = sAnim_ExitPokeballFastEast,
};

static const union AnimCmd* const sAnimTable_Pokeball_Asym[] =
{
    [ANIM_ENTER_POKEBALL_SOUTH] = sAnim_EnterPokeballSouth,
    [ANIM_ENTER_POKEBALL_NORTH] = sAnim_EnterPokeballNorth,
    [ANIM_ENTER_POKEBALL_WEST] = sAnim_EnterPokeballWest,
    [ANIM_ENTER_POKEBALL_EAST] = sAnim_EnterPokeballEast_Asym,
    [ANIM_ENTER_POKEBALL_FAST_SOUTH] = sAnim_EnterPokeballFastSouth,
    [ANIM_ENTER_POKEBALL_FAST_NORTH] = sAnim_EnterPokeballFastNorth,
    [ANIM_ENTER_POKEBALL_FAST_WEST] = sAnim_EnterPokeballFastWest,
    [ANIM_ENTER_POKEBALL_FAST_EAST] = sAnim_EnterPokeballFastEast_Asym,
    [ANIM_EXIT_POKEBALL_SOUTH] = sAnim_ExitPokeballSouth,
    [ANIM_EXIT_POKEBALL_NORTH] = sAnim_ExitPokeballNorth,
    [ANIM_EXIT_POKEBALL_WEST] = sAnim_ExitPokeballWest,
    [ANIM_EXIT_POKEBALL_EAST] = sAnim_ExitPokeballEast_Asym,
    [ANIM_EXIT_POKEBALL_FAST_SOUTH] = sAnim_ExitPokeballFastSouth,
    [ANIM_EXIT_POKEBALL_FAST_NORTH] = sAnim_ExitPokeballFastNorth,
    [ANIM_EXIT_POKEBALL_FAST_WEST] = sAnim_ExitPokeballFastWest,
    [ANIM_EXIT_POKEBALL_FAST_EAST] = sAnim_ExitPokeballFastEast_Asym,
};

static const union AnimCmd sAnim_FieldMove[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_FieldMove[] = {
    [ANIM_FIELD_MOVE] = sAnim_FieldMove,
};

static const union AnimCmd sAnim_RockBreak[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_BreakableRock[] = {
    [ANIM_STAY_STILL] = sAnim_StayStill,
    [ANIM_REMOVE_OBSTACLE] = sAnim_RockBreak,
};

static const union AnimCmd sAnim_TreeCut[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_CuttableTree[] = {
    [ANIM_STAY_STILL] = sAnim_StayStill,
    [ANIM_REMOVE_OBSTACLE] = sAnim_TreeCut,
};

static const union AnimCmd sAnim_Surfing_FaceSouthwest[] =
{
    ANIMCMD_FRAME(12, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_FaceSoutheast[] =
{
    ANIMCMD_FRAME(12, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_FaceNorthwest[] =
{
    ANIMCMD_FRAME(14, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_FaceNortheast[] =
{
    ANIMCMD_FRAME(14, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_GoSouthwest[] =
{
    ANIMCMD_FRAME(12, 8),
    ANIMCMD_FRAME(12, 8),
    ANIMCMD_FRAME(12, 8),
    ANIMCMD_FRAME(12, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_GoSoutheast[] =
{
    ANIMCMD_FRAME(12, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_GoNorthwest[] =
{
    ANIMCMD_FRAME(14, 8),
    ANIMCMD_FRAME(14, 8),
    ANIMCMD_FRAME(14, 8),
    ANIMCMD_FRAME(14, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_GoNortheast[] =
{
    ANIMCMD_FRAME(14, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_GoFastSouthwest[] =
{
    ANIMCMD_FRAME(12, 4),
    ANIMCMD_FRAME(12, 4),
    ANIMCMD_FRAME(12, 4),
    ANIMCMD_FRAME(12, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_GoFastSoutheast[] =
{
    ANIMCMD_FRAME(12, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(12, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_GoFastNorthwest[] =
{
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_Surfing_GoFastNortheast[] =
{
    ANIMCMD_FRAME(14, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobSouth[] =
{
    ANIMCMD_FRAME( 9, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobNorth[] =
{
    ANIMCMD_FRAME(10, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobWest[] =
{
    ANIMCMD_FRAME(11, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobEast[] =
{
    ANIMCMD_FRAME(11, 32, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobSouthwest[] =
{
    ANIMCMD_FRAME(13, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobSoutheast[] =
{
    ANIMCMD_FRAME(13, 32, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobNorthwest[] =
{
    ANIMCMD_FRAME(15, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_GetOnOffSurfBlobNortheast[] =
{
    ANIMCMD_FRAME(15, 32, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_Surfing[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_Surfing_FaceSouthwest,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_Surfing_FaceSoutheast,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_Surfing_FaceNorthwest,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_Surfing_FaceNortheast,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_Surfing_GoSouthwest,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_Surfing_GoSoutheast,
    [ANIM_STD_GO_NORTHWEST] = sAnim_Surfing_GoNorthwest,
    [ANIM_STD_GO_NORTHEAST] = sAnim_Surfing_GoNortheast,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_Surfing_GoFastSouthwest,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_Surfing_GoFastSoutheast,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_Surfing_GoFastNorthwest,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_Surfing_GoFastNortheast,
    [ANIM_GET_ON_OFF_POKEMON_SOUTH] = sAnim_GetOnOffSurfBlobSouth,
    [ANIM_GET_ON_OFF_POKEMON_NORTH] = sAnim_GetOnOffSurfBlobNorth,
    [ANIM_GET_ON_OFF_POKEMON_WEST] = sAnim_GetOnOffSurfBlobWest,
    [ANIM_GET_ON_OFF_POKEMON_EAST] = sAnim_GetOnOffSurfBlobEast,
    [ANIM_GET_ON_OFF_POKEMON_SOUTHWEST] = sAnim_GetOnOffSurfBlobSouthwest,
    [ANIM_GET_ON_OFF_POKEMON_SOUTHEAST] = sAnim_GetOnOffSurfBlobSoutheast,
    [ANIM_GET_ON_OFF_POKEMON_NORTHWEST] = sAnim_GetOnOffSurfBlobNorthwest,
    [ANIM_GET_ON_OFF_POKEMON_NORTHEAST] = sAnim_GetOnOffSurfBlobNortheast,
};

static const union AnimCmd sAnim_OnFoot_FaceSouthwest[] =
{
    ANIMCMD_FRAME(18, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_FaceSoutheast[] =
{
    ANIMCMD_FRAME(18, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_FaceNorthwest[] =
{
    ANIMCMD_FRAME(19, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_FaceNortheast[] =
{
    ANIMCMD_FRAME(19, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoSouthwest[] =
{
    ANIMCMD_FRAME(20, 8),
    ANIMCMD_FRAME(18, 8),
    ANIMCMD_FRAME(21, 8),
    ANIMCMD_FRAME(18, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoSoutheast[] =
{
    ANIMCMD_FRAME(20, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(21, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoNorthwest[] =
{
    ANIMCMD_FRAME(22, 8),
    ANIMCMD_FRAME(19, 8),
    ANIMCMD_FRAME(23, 8),
    ANIMCMD_FRAME(19, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoNortheast[] =
{
    ANIMCMD_FRAME(22, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(19, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(23, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(19, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoFastSouthwest[] =
{
    ANIMCMD_FRAME(20, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_FRAME(21, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoFastSoutheast[] =
{
    ANIMCMD_FRAME(20, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(21, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoFastNorthwest[] =
{
    ANIMCMD_FRAME(22, 4),
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_FRAME(23, 4),
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoFastNortheast[] =
{
    ANIMCMD_FRAME(22, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(23, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoFasterSouthwest[] =
{
    ANIMCMD_FRAME(20, 2),
    ANIMCMD_FRAME(18, 2),
    ANIMCMD_FRAME(21, 2),
    ANIMCMD_FRAME(18, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoFasterSoutheast[] =
{
    ANIMCMD_FRAME(20, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(21, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoFasterNorthwest[] =
{
    ANIMCMD_FRAME(22, 2),
    ANIMCMD_FRAME(19, 2),
    ANIMCMD_FRAME(23, 2),
    ANIMCMD_FRAME(19, 2),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_OnFoot_GoFasterNortheast[] =
{
    ANIMCMD_FRAME(22, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(19, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(23, 2, .hFlip = TRUE),
    ANIMCMD_FRAME(19, 2, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunSouth[] =
{
    ANIMCMD_FRAME(12, 5),
    ANIMCMD_FRAME( 9, 3),
    ANIMCMD_FRAME(13, 5),
    ANIMCMD_FRAME( 9, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunNorth[] =
{
    ANIMCMD_FRAME(14, 5),
    ANIMCMD_FRAME(10, 3),
    ANIMCMD_FRAME(15, 5),
    ANIMCMD_FRAME(10, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunWest[] =
{
    ANIMCMD_FRAME(16, 5),
    ANIMCMD_FRAME(11, 3),
    ANIMCMD_FRAME(17, 5),
    ANIMCMD_FRAME(11, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunEast[] =
{
    ANIMCMD_FRAME(16, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(11, 3, .hFlip = TRUE),
    ANIMCMD_FRAME(17, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(11, 3, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunSouthwest[] =
{
    ANIMCMD_FRAME(26, 5),
    ANIMCMD_FRAME(24, 3),
    ANIMCMD_FRAME(27, 5),
    ANIMCMD_FRAME(24, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunSoutheast[] =
{
    ANIMCMD_FRAME(26, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(24, 3, .hFlip = TRUE),
    ANIMCMD_FRAME(27, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(24, 3, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunNorthwest[] =
{
    ANIMCMD_FRAME(28, 5),
    ANIMCMD_FRAME(25, 3),
    ANIMCMD_FRAME(29, 5),
    ANIMCMD_FRAME(25, 3),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RunNortheast[] =
{
    ANIMCMD_FRAME(28, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(25, 3, .hFlip = TRUE),
    ANIMCMD_FRAME(29, 5, .hFlip = TRUE),
    ANIMCMD_FRAME(25, 3, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_BrendanMayNormal[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_OnFoot_FaceSouthwest,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_OnFoot_FaceSoutheast,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_OnFoot_FaceNorthwest,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_OnFoot_FaceNortheast,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_OnFoot_GoSouthwest,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_OnFoot_GoSoutheast,
    [ANIM_STD_GO_NORTHWEST] = sAnim_OnFoot_GoNorthwest,
    [ANIM_STD_GO_NORTHEAST] = sAnim_OnFoot_GoNortheast,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_OnFoot_GoFastSouthwest,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_OnFoot_GoFastSoutheast,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_OnFoot_GoFastNorthwest,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_OnFoot_GoFastNortheast,
    [ANIM_STD_GO_FASTER_SOUTHWEST] = sAnim_OnFoot_GoFasterSouthwest,
    [ANIM_STD_GO_FASTER_SOUTHEAST] = sAnim_OnFoot_GoFasterSoutheast,
    [ANIM_STD_GO_FASTER_NORTHWEST] = sAnim_OnFoot_GoFasterNorthwest,
    [ANIM_STD_GO_FASTER_NORTHEAST] = sAnim_OnFoot_GoFasterNortheast,
    [ANIM_RUN_SOUTH] = sAnim_RunSouth,
    [ANIM_RUN_NORTH] = sAnim_RunNorth,
    [ANIM_RUN_WEST] = sAnim_RunWest,
    [ANIM_RUN_EAST] = sAnim_RunEast,
    [ANIM_RUN_SOUTHWEST] = sAnim_RunSouthwest,
    [ANIM_RUN_SOUTHEAST] = sAnim_RunSoutheast,
    [ANIM_RUN_NORTHWEST] = sAnim_RunNorthwest,
    [ANIM_RUN_NORTHEAST] = sAnim_RunNortheast,
};

static const union AnimCmd sAnim_AcroBike_FaceSouthwest[] =
{
    ANIMCMD_FRAME(27, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_FaceSoutheast[] =
{
    ANIMCMD_FRAME(27, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_FaceNorthwest[] =
{
    ANIMCMD_FRAME(28, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_FaceNortheast[] =
{
    ANIMCMD_FRAME(28, 16, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_GoSouthwest[] =
{
    ANIMCMD_FRAME(29, 8),
    ANIMCMD_FRAME(27, 8),
    ANIMCMD_FRAME(30, 8),
    ANIMCMD_FRAME(27, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_GoSoutheast[] =
{
    ANIMCMD_FRAME(29, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(27, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(30, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(27, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_GoNorthwest[] =
{
    ANIMCMD_FRAME(31, 8),
    ANIMCMD_FRAME(28, 8),
    ANIMCMD_FRAME(32, 8),
    ANIMCMD_FRAME(28, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_GoNortheast[] =
{
    ANIMCMD_FRAME(31, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(28, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(32, 8, .hFlip = TRUE),
    ANIMCMD_FRAME(28, 8, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_GoFastSouthwest[] =
{
    ANIMCMD_FRAME(29, 4),
    ANIMCMD_FRAME(27, 4),
    ANIMCMD_FRAME(30, 4),
    ANIMCMD_FRAME(27, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_GoFastSoutheast[] =
{
    ANIMCMD_FRAME(29, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(27, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(30, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(27, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_GoFastNorthwest[] =
{
    ANIMCMD_FRAME(31, 4),
    ANIMCMD_FRAME(28, 4),
    ANIMCMD_FRAME(32, 4),
    ANIMCMD_FRAME(28, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_AcroBike_GoFastNortheast[] =
{
    ANIMCMD_FRAME(31, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(28, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(32, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(28, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_BunnyHopBackWheelSouth[] =
{
    ANIMCMD_FRAME( 9, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelNorth[] =
{
    ANIMCMD_FRAME(13, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelWest[] =
{
    ANIMCMD_FRAME(17, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelEast[] =
{
    ANIMCMD_FRAME(17, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelSouthwest[] =
{
    ANIMCMD_FRAME(33, 4),
    ANIMCMD_FRAME(34, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelSoutheast[] =
{
    ANIMCMD_FRAME(33, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(34, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelNorthwest[] =
{
    ANIMCMD_FRAME(35, 4),
    ANIMCMD_FRAME(36, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopBackWheelNortheast[] =
{
    ANIMCMD_FRAME(35, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(36, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopFrontWheelSouth[] =
{
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_FRAME(12, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopFrontWheelNorth[] =
{
    ANIMCMD_FRAME(15, 4),
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopFrontWheelWest[] =
{
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_FRAME(20, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BunnyHopFrontWheelEast[] =
{
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(20, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelSouth[] =
{
    ANIMCMD_FRAME(9, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelNorth[] =
{
    ANIMCMD_FRAME(13, 4),
    ANIMCMD_FRAME( 1, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelWest[] =
{
    ANIMCMD_FRAME(17, 4),
    ANIMCMD_FRAME( 2, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelEast[] =
{
    ANIMCMD_FRAME(17, 4, .hFlip = TRUE),
    ANIMCMD_FRAME( 2, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelSouthwest[] =
{
    ANIMCMD_FRAME(33, 4),
    ANIMCMD_FRAME(27, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelSoutheast[] =
{
    ANIMCMD_FRAME(33, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(27, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelNorthwest[] =
{
    ANIMCMD_FRAME(35, 4),
    ANIMCMD_FRAME(28, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieBackWheelNortheast[] =
{
    ANIMCMD_FRAME(35, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(28, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieFrontWheelSouth[] =
{
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_FRAME( 0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieFrontWheelNorth[] =
{
    ANIMCMD_FRAME(15, 4),
    ANIMCMD_FRAME( 1, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieFrontWheelWest[] =
{
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_FRAME( 2, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_StandingWheelieFrontWheelEast[] =
{
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_FRAME( 2, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_MovingWheelieSouth[] =
{
    ANIMCMD_FRAME(21, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_FRAME(22, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieNorth[] =
{
    ANIMCMD_FRAME(23, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_FRAME(24, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieWest[] =
{
    ANIMCMD_FRAME(25, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_FRAME(26, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieEast[] =
{
    ANIMCMD_FRAME(25, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(26, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieSouthwest[] =
{
    ANIMCMD_FRAME(37, 4),
    ANIMCMD_FRAME(34, 4),
    ANIMCMD_FRAME(38, 4),
    ANIMCMD_FRAME(34, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieSoutheast[] =
{
    ANIMCMD_FRAME(37, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(34, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(38, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(34, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieNorthwest[] =
{
    ANIMCMD_FRAME(39, 4),
    ANIMCMD_FRAME(36, 4),
    ANIMCMD_FRAME(40, 4),
    ANIMCMD_FRAME(36, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_MovingWheelieNortheast[] =
{
    ANIMCMD_FRAME(39, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(36, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(40, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(36, 4, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_AcroBike[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F,
    [ANIM_STD_FACE_SOUTHWEST] = sAnim_AcroBike_FaceSouthwest,
    [ANIM_STD_FACE_SOUTHEAST] = sAnim_AcroBike_FaceSoutheast,
    [ANIM_STD_FACE_NORTHWEST] = sAnim_AcroBike_FaceNorthwest,
    [ANIM_STD_FACE_NORTHEAST] = sAnim_AcroBike_FaceNortheast,
    [ANIM_STD_GO_SOUTHWEST] = sAnim_AcroBike_GoSouthwest,
    [ANIM_STD_GO_SOUTHEAST] = sAnim_AcroBike_GoSoutheast,
    [ANIM_STD_GO_NORTHWEST] = sAnim_AcroBike_GoNorthwest,
    [ANIM_STD_GO_NORTHEAST] = sAnim_AcroBike_GoNortheast,
    [ANIM_STD_GO_FAST_SOUTHWEST] = sAnim_AcroBike_GoFastSouthwest,
    [ANIM_STD_GO_FAST_SOUTHEAST] = sAnim_AcroBike_GoFastSoutheast,
    [ANIM_STD_GO_FAST_NORTHWEST] = sAnim_AcroBike_GoFastNorthwest,
    [ANIM_STD_GO_FAST_NORTHEAST] = sAnim_AcroBike_GoFastNortheast,
    [ANIM_BUNNY_HOP_BACK_WHEEL_SOUTH] = sAnim_BunnyHopBackWheelSouth,
    [ANIM_BUNNY_HOP_BACK_WHEEL_NORTH] = sAnim_BunnyHopBackWheelNorth,
    [ANIM_BUNNY_HOP_BACK_WHEEL_WEST] = sAnim_BunnyHopBackWheelWest,
    [ANIM_BUNNY_HOP_BACK_WHEEL_EAST] = sAnim_BunnyHopBackWheelEast,
    [ANIM_BUNNY_HOP_FRONT_WHEEL_SOUTH] = sAnim_BunnyHopFrontWheelSouth,
    [ANIM_BUNNY_HOP_FRONT_WHEEL_NORTH] = sAnim_BunnyHopFrontWheelNorth,
    [ANIM_BUNNY_HOP_FRONT_WHEEL_WEST] = sAnim_BunnyHopFrontWheelWest,
    [ANIM_BUNNY_HOP_FRONT_WHEEL_EAST] = sAnim_BunnyHopFrontWheelEast,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_SOUTH] = sAnim_StandingWheelieBackWheelSouth,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_NORTH] = sAnim_StandingWheelieBackWheelNorth,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_WEST] = sAnim_StandingWheelieBackWheelWest,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_EAST] = sAnim_StandingWheelieBackWheelEast,
    [ANIM_STANDING_WHEELIE_FRONT_WHEEL_SOUTH] = sAnim_StandingWheelieFrontWheelSouth,
    [ANIM_STANDING_WHEELIE_FRONT_WHEEL_NORTH] = sAnim_StandingWheelieFrontWheelNorth,
    [ANIM_STANDING_WHEELIE_FRONT_WHEEL_WEST] = sAnim_StandingWheelieFrontWheelWest,
    [ANIM_STANDING_WHEELIE_FRONT_WHEEL_EAST] = sAnim_StandingWheelieFrontWheelEast,
    [ANIM_MOVING_WHEELIE_SOUTH] = sAnim_MovingWheelieSouth,
    [ANIM_MOVING_WHEELIE_NORTH] = sAnim_MovingWheelieNorth,
    [ANIM_MOVING_WHEELIE_WEST] = sAnim_MovingWheelieWest,
    [ANIM_MOVING_WHEELIE_EAST] = sAnim_MovingWheelieEast,
    [ANIM_BUNNY_HOP_BACK_WHEEL_SOUTHWEST] = sAnim_BunnyHopBackWheelSouthwest,
    [ANIM_BUNNY_HOP_BACK_WHEEL_SOUTHEAST] = sAnim_BunnyHopBackWheelSoutheast,
    [ANIM_BUNNY_HOP_BACK_WHEEL_NORTHWEST] = sAnim_BunnyHopBackWheelNorthwest,
    [ANIM_BUNNY_HOP_BACK_WHEEL_NORTHEAST] = sAnim_BunnyHopBackWheelNortheast,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_SOUTHWEST] = sAnim_StandingWheelieBackWheelSouthwest,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_SOUTHEAST] = sAnim_StandingWheelieBackWheelSoutheast,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_NORTHWEST] = sAnim_StandingWheelieBackWheelNorthwest,
    [ANIM_STANDING_WHEELIE_BACK_WHEEL_NORTHEAST] = sAnim_StandingWheelieBackWheelNortheast,
    [ANIM_MOVING_WHEELIE_SOUTHWEST] = sAnim_MovingWheelieSouthwest,
    [ANIM_MOVING_WHEELIE_SOUTHEAST] = sAnim_MovingWheelieSoutheast,
    [ANIM_MOVING_WHEELIE_NORTHWEST] = sAnim_MovingWheelieNorthwest,
    [ANIM_MOVING_WHEELIE_NORTHEAST] = sAnim_MovingWheelieNortheast,
};

static const union AnimCmd sAnim_TakeOutRodSouth[] =
{
    ANIMCMD_FRAME( 8, 4),
    ANIMCMD_FRAME( 9, 4),
    ANIMCMD_FRAME(10, 4),
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodNorth[] =
{
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodWest[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodEast[] =
{
    ANIMCMD_FRAME(0, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(3, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodSouthwest[] =
{
    ANIMCMD_FRAME(12, 4),
    ANIMCMD_FRAME(13, 4),
    ANIMCMD_FRAME(14, 4),
    ANIMCMD_FRAME(15, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodSoutheast[] =
{
    ANIMCMD_FRAME(12, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(13, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(14, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(15, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodNorthwest[] =
{
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_FRAME(17, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_TakeOutRodNortheast[] =
{
    ANIMCMD_FRAME(16, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(17, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodSouth[] =
{
    ANIMCMD_FRAME(11, 4),
    ANIMCMD_FRAME(10, 6),
    ANIMCMD_FRAME( 9, 6),
    ANIMCMD_FRAME( 8, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodNorth[] =
{
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_FRAME(6, 6),
    ANIMCMD_FRAME(5, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodWest[] =
{
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodEast[] =
{
    ANIMCMD_FRAME(3, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(2, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(1, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(0, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodSouthwest[] =
{
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_FRAME(17, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodSoutheast[] =
{
    ANIMCMD_FRAME(16, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(17, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodNorthwest[] =
{
    ANIMCMD_FRAME(19, 4),
    ANIMCMD_FRAME(18, 4),
    ANIMCMD_FRAME(17, 4),
    ANIMCMD_FRAME(16, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_PutAwayRodNortheast[] =
{
    ANIMCMD_FRAME(19, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(18, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(17, 4, .hFlip = TRUE),
    ANIMCMD_FRAME(16, 4, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_HookedPokemonSouth[] =
{
    ANIMCMD_FRAME(10,  6),
    ANIMCMD_FRAME(11,  6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(11, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonNorth[] =
{
    ANIMCMD_FRAME(6,  6),
    ANIMCMD_FRAME(7,  6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(7, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonWest[] =
{
    ANIMCMD_FRAME(2,  6),
    ANIMCMD_FRAME(3,  6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(3, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonEast[] =
{
    ANIMCMD_FRAME(2,  6, .hFlip = TRUE),
    ANIMCMD_FRAME(3,  6, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(3, 30, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonSouthwest[] =
{
    ANIMCMD_FRAME(14,  6),
    ANIMCMD_FRAME(15,  6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(15, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonSoutheast[] =
{
    ANIMCMD_FRAME(14,  6, .hFlip = TRUE),
    ANIMCMD_FRAME(15,  6, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(15, 30, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonNorthwest[] =
{
    ANIMCMD_FRAME(18,  6),
    ANIMCMD_FRAME(19,  6),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(19, 30),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HookedPokemonNortheast[] =
{
    ANIMCMD_FRAME(18,  6, .hFlip = TRUE),
    ANIMCMD_FRAME(19,  6, .hFlip = TRUE),
    ANIMCMD_LOOP(1),
    ANIMCMD_FRAME(19, 30, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_Fishing[] = {
    [ANIM_TAKE_OUT_ROD_SOUTH] = sAnim_TakeOutRodSouth,
    [ANIM_TAKE_OUT_ROD_NORTH] = sAnim_TakeOutRodNorth,
    [ANIM_TAKE_OUT_ROD_WEST] = sAnim_TakeOutRodWest,
    [ANIM_TAKE_OUT_ROD_EAST] = sAnim_TakeOutRodEast,
    [ANIM_PUT_AWAY_ROD_SOUTH] = sAnim_PutAwayRodSouth,
    [ANIM_PUT_AWAY_ROD_NORTH] = sAnim_PutAwayRodNorth,
    [ANIM_PUT_AWAY_ROD_WEST] = sAnim_PutAwayRodWest,
    [ANIM_PUT_AWAY_ROD_EAST] = sAnim_PutAwayRodEast,
    [ANIM_HOOKED_POKEMON_SOUTH] = sAnim_HookedPokemonSouth,
    [ANIM_HOOKED_POKEMON_NORTH] = sAnim_HookedPokemonNorth,
    [ANIM_HOOKED_POKEMON_WEST] = sAnim_HookedPokemonWest,
    [ANIM_HOOKED_POKEMON_EAST] = sAnim_HookedPokemonEast,
    [ANIM_TAKE_OUT_ROD_SOUTHWEST] = sAnim_TakeOutRodSouthwest,
    [ANIM_TAKE_OUT_ROD_SOUTHEAST] = sAnim_TakeOutRodSoutheast,
    [ANIM_TAKE_OUT_ROD_NORTHWEST] = sAnim_TakeOutRodNorthwest,
    [ANIM_TAKE_OUT_ROD_NORTHEAST] = sAnim_TakeOutRodNortheast,
    [ANIM_PUT_AWAY_ROD_SOUTHWEST] = sAnim_PutAwayRodSouthwest,
    [ANIM_PUT_AWAY_ROD_SOUTHEAST] = sAnim_PutAwayRodSoutheast,
    [ANIM_PUT_AWAY_ROD_NORTHWEST] = sAnim_PutAwayRodNorthwest,
    [ANIM_PUT_AWAY_ROD_NORTHEAST] = sAnim_PutAwayRodNortheast,
    [ANIM_HOOKED_POKEMON_SOUTHWEST] = sAnim_HookedPokemonSouthwest,
    [ANIM_HOOKED_POKEMON_SOUTHEAST] = sAnim_HookedPokemonSoutheast,
    [ANIM_HOOKED_POKEMON_NORTHWEST] = sAnim_HookedPokemonNorthwest,
    [ANIM_HOOKED_POKEMON_NORTHEAST] = sAnim_HookedPokemonNortheast,
};

static const union AnimCmd sAnim_NurseBow[] =
{
    ANIMCMD_FRAME(0,  8),
    ANIMCMD_FRAME(9, 32),
    ANIMCMD_FRAME(0,  8),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_Nurse[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoNorth3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST]  = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST]  = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F,
    [ANIM_NURSE_BOW] = sAnim_NurseBow,
};

static const union AnimCmd sAnim_BerryTreeStage0[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BerryTreeStage1[] =
{
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_FRAME(2, 32),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BerryTreeStage2[] =
{
    ANIMCMD_FRAME(3, 48),
    ANIMCMD_FRAME(4, 48),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BerryTreeStage3[] =
{
    ANIMCMD_FRAME(5, 32),
    ANIMCMD_FRAME(5, 32),
    ANIMCMD_FRAME(6, 32),
    ANIMCMD_FRAME(6, 32),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_BerryTreeStage4[] =
{
    ANIMCMD_FRAME(7, 48),
    ANIMCMD_FRAME(7, 48),
    ANIMCMD_FRAME(8, 48),
    ANIMCMD_FRAME(8, 48),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_BerryTree[] = {
    [BERRY_STAGE_PLANTED - 1] = sAnim_BerryTreeStage0,
    [BERRY_STAGE_SPROUTED - 1] = sAnim_BerryTreeStage1,
    [BERRY_STAGE_TALLER - 1] = sAnim_BerryTreeStage2,
    [BERRY_STAGE_TRUNK - 1] = sAnim_BerryTreeStage2,
    [BERRY_STAGE_BUDDING - 1] = sAnim_BerryTreeStage2,
    [BERRY_STAGE_FLOWERING - 1] = sAnim_BerryTreeStage3,
    [BERRY_STAGE_BERRIES - 1] = sAnim_BerryTreeStage4,
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_GoSouthStart[] =
{
    AFFINEANIMCMD_FRAME(0x0, 0x0, 1, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_LOOP(7),
    AFFINEANIMCMD_JUMP(0),
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_GoSouth[] =
{
    AFFINEANIMCMD_FRAME(0x0, 0x0, -1, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_LOOP(15),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 1, 1),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 1),
    AFFINEANIMCMD_LOOP(15),
    AFFINEANIMCMD_JUMP(0),
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_AttackEast[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 10, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_AttackWest[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 10, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_DipEast[] =
{
    AFFINEANIMCMD_FRAME(0x0, 0x0, -1, 1),
    AFFINEANIMCMD_LOOP(8),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_KyogreGroudon_DipWest[] =
{
    AFFINEANIMCMD_FRAME(0x0, 0x0, 1, 1),
    AFFINEANIMCMD_LOOP(8),
    AFFINEANIMCMD_END,
};

// The movements for going up use the animations for going right instead.
static const union AnimCmd *const sAnimTable_GroudonSide[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTH] = sAnim_GoSouth3F,
    [ANIM_STD_GO_NORTH] = sAnim_GoEast3F,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestEast3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F,
};

static const union AnimCmd sAnim_HoOhFlapWings[] =
{
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_HoOhStayStill[] =
{
    ANIMCMD_FRAME(3, 16),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_HoOh[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_FaceSouth3F,
    [ANIM_STD_FACE_NORTH] = sAnim_FaceNorth3F,
    [ANIM_STD_FACE_WEST] = sAnim_FaceWest3F,
    [ANIM_STD_FACE_EAST] = sAnim_FaceEast3F,
    [ANIM_STD_GO_SOUTH] = sAnim_HoOhFlapWings,
    [ANIM_STD_GO_NORTH] = sAnim_HoOhStayStill,
    [ANIM_STD_GO_WEST] = sAnim_GoWest3F,
    [ANIM_STD_GO_EAST] = sAnim_GoEast3F,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_GoFastSouth3F,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_GoFastNorth3F,
    [ANIM_STD_GO_FAST_WEST] = sAnim_GoFastWest3F,
    [ANIM_STD_GO_FAST_EAST] = sAnim_GoFastEast3F,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_GoFasterSouth3F,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_GoFasterNorth3F,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_GoFasterWest3F,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_GoFasterEast3F,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_GoFastestSouth3F,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_GoFastestNorth3F,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_GoFastestWest3F,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_GoFastestEast3F,
};

static const union AnimCmd sAnim_RayquazaCoiledAwake[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RayquazaFlyUp[] =
{
    ANIMCMD_FRAME(4, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RayquazaCoiledAsleep[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RayquazaCoiledMouthOpen[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_RayquazaNormal[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_JUMP(0),
};

// Identical to sAnim_RayquazaCoiledAsleep
static const union AnimCmd sAnim_RayquazaFaceSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

// Identical to sAnim_RayquazaCoiledAsleep
static const union AnimCmd sAnim_RayquazaFaceNorth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

// Identical to sAnim_RayquazaCoiledAsleep
static const union AnimCmd sAnim_RayquazaFaceWest[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

// Identical to sAnim_RayquazaNormal
static const union AnimCmd sAnim_RayquazaFaceEast[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_JUMP(0),
};

// Though they correspond to facing/walking movements, Rayquaza doesn't have
// equivalent images aside from flying up. Its other frames aside from the 'normal'
// frame are for the sequence where it awakens on Sky Pillar.
static const union AnimCmd *const sAnimTable_Rayquaza[] = {
    [ANIM_STD_FACE_SOUTH] = sAnim_RayquazaFaceSouth,
    [ANIM_STD_FACE_NORTH] = sAnim_RayquazaFaceNorth,
    [ANIM_STD_FACE_WEST] = sAnim_RayquazaFaceWest,
    [ANIM_STD_FACE_EAST] = sAnim_RayquazaFaceEast,
    [ANIM_STD_GO_SOUTH] = sAnim_RayquazaCoiledAsleep,
    [ANIM_STD_GO_NORTH] = sAnim_RayquazaFlyUp,
    [ANIM_STD_GO_WEST] = sAnim_RayquazaCoiledMouthOpen,
    [ANIM_STD_GO_EAST] = sAnim_RayquazaNormal,
    [ANIM_STD_GO_FAST_SOUTH] = sAnim_RayquazaCoiledAsleep,
    [ANIM_STD_GO_FAST_NORTH] = sAnim_RayquazaFlyUp,
    [ANIM_STD_GO_FAST_WEST] = sAnim_RayquazaCoiledAwake,
    [ANIM_STD_GO_FAST_EAST] = sAnim_RayquazaNormal,
    [ANIM_STD_GO_FASTER_SOUTH] = sAnim_RayquazaCoiledAsleep,
    [ANIM_STD_GO_FASTER_NORTH] = sAnim_RayquazaFlyUp,
    [ANIM_STD_GO_FASTER_WEST] = sAnim_RayquazaCoiledMouthOpen,
    [ANIM_STD_GO_FASTER_EAST] = sAnim_RayquazaNormal,
    [ANIM_STD_GO_FASTEST_SOUTH] = sAnim_RayquazaCoiledAsleep,
    [ANIM_STD_GO_FASTEST_NORTH] = sAnim_RayquazaFlyUp,
    [ANIM_STD_GO_FASTEST_WEST] = sAnim_RayquazaCoiledMouthOpen,
    [ANIM_STD_GO_FASTEST_EAST] = sAnim_RayquazaNormal,
};

static const union AffineAnimCmd *const sAffineAnimTable_KyogreGroudon[] = {
    sAffineAnim_KyogreGroudon_GoSouthStart, // Used by Kyogre/Groudon when awakened
    sAffineAnim_KyogreGroudon_GoSouth,      // Used by Kyogre/Groudon when awakened
    sAffineAnim_KyogreGroudon_AttackWest,   // Used by Kyogre during Sootopolis fight
    sAffineAnim_KyogreGroudon_AttackEast,   // Unused
    sAffineAnim_KyogreGroudon_DipWest,      // Unused
    sAffineAnim_KyogreGroudon_DipEast,      // Unused
};

// For animations with alternating steps
static const struct StepAnimTable sStepAnimTables[] = {
    {
        .anims = sAnimTable_QuintyPlump,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Walk3F,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Walk3F_Diagonal,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Walk3F_Asym,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Walk3F_Diagonal_Asym,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Walk2F,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Walk2F_Diagonal,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Walk2F_Asym,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Walk2F_Diagonal_Asym,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_BrendanMayNormal,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_AcroBike,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Surfing,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Nurse,
        .animPos = {1, 3, 0, 2},
    },
    {
        .anims = sAnimTable_Fishing,
        .animPos = {1, 3, 0, 2},
    },
    {},
};
