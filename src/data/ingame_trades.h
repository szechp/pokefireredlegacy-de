static const struct InGameTrade sInGameTrades[] = {
    [INGAME_TRADE_MR_MIME] = 
    {
        .nickname = _("MIMIEN"),
        .species = SPECIES_MR_MIME,
        .ivs = {20, 15, 17, 24, 23, 22},
        .abilityNum = 0,
        .otId = 1985,
        .conditions = {5, 5, 5, 30, 5},
        .personality = 0x00009cae,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = _("REYLEY"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_ABRA
    }, 
    [INGAME_TRADE_JYNX] = 
    {
        .nickname = _("MOOCHUM"),
        .species = SPECIES_JYNX,
        .ivs = {18, 17, 18, 22, 25, 21},
        .abilityNum = 0,
        .otId = 36728,
        .conditions = {5, 30, 5, 5, 5},
        .personality = 0x498a2e1d,
        .heldItem = ITEM_FAB_MAIL,
        .mailNum = 0,
        .otName = _("DONTAE"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_POLIWHIRL
    }, 
    [INGAME_TRADE_NIDORAN] = 
    {
#if defined(FIRERED)
        .nickname = _("GASSER"),
        .species = SPECIES_KOFFING,
        .ivs = {22, 18, 25, 19, 15, 22},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x4c970b89,
        .heldItem = ITEM_TINY_MUSHROOM,
        .mailNum = 255,
        .otName = _("SAIGE"),
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_GROWLITHE
#elif defined(LEAFGREEN)
        .nickname = _("GASSER"),
        .species = SPECIES_KOFFING,
        .ivs = {22, 18, 25, 19, 15, 22},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x4c970b89,
        .heldItem = ITEM_TINY_MUSHROOM,
        .mailNum = 255,
        .otName = _("SAIGE"),
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_GROWLITHE
#endif
    }, 
    [INGAME_TRADE_FARFETCHD] = 
    {
        .nickname = _("DUX"),
        .species = SPECIES_FARFETCHD,
        .ivs = {20, 25, 21, 24, 15, 20},
        .abilityNum = 0,
        .otId = 8810,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x151943d7,
        .heldItem = ITEM_STICK,
        .mailNum = 255,
        .otName = _("ELYSSA"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_SPEAROW
    }, 
    [INGAME_TRADE_NIDORINOA] = 
    {
#if defined(FIRERED)
        .nickname = _("TOPPER"),
        .species = SPECIES_HITMONTOP,
        .ivs = {22, 25, 18, 19, 22, 15},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x00eeca15,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = _("TURNER"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_TANGELA
#elif defined(LEAFGREEN)
        .nickname = _("TOPPER"),
        .species = SPECIES_HITMONTOP,
        .ivs = {22, 25, 18, 19, 22, 15},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x00eeca15,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = _("TURNER"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_TANGELA
#endif
    }, 
    [INGAME_TRADE_LICKITUNG] = 
    {
        .nickname = _("MARC"),
        .species = SPECIES_PILOSWINE,
        .ivs = {24, 19, 21, 15, 23, 21},
        .abilityNum = 0,
        .otId = 1239,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x451308ab,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = _("HADEN"),
        .otGender = MALE,
        .sheen = 10,
#if defined(FIRERED)
        .requestedSpecies = SPECIES_NIDOKING
#elif defined(LEAFGREEN)
        .requestedSpecies = SPECIES_NIDOKING
#endif
    }, 
    [INGAME_TRADE_ELECTRODE] = 
    {
        .nickname = _("CARNO"),
        .species = SPECIES_NIDOKING
        .ivs = {24, 19, 21, 15, 23, 21},
        .abilityNum = 0,
        .otId = 50298,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x06341016,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = _("CLIFTON"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDOQUEEN
    }, 
    [INGAME_TRADE_TANGELA] = 
    {
        .nickname = _("SLIMEGOO"),
        .species = SPECIES_DITTO,
        .ivs = {31, 31, 31, 31, 31, 31},
        .abilityNum = 0,
        .otId = 60042,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x5c77ecfa,
        .heldItem = ITEM_STARDUST,
        .mailNum = 255,
        .otName = _("NORMA"),
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_TANGELA
    },
    [INGAME_TRADE_SEEL] = 
    {
        .nickname = _("DRAGONA"),
        .species = SPECIES_DRATINI,
        .ivs = {24, 15, 22, 16, 23, 22},
        .abilityNum = 0,
        .otId = 9853,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x482cac89,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = _("GARETT"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_GRIMER
    }
};

static const u16 sInGameTradeMailMessages[][10] = {
    {
        EC_WORD_THAT_S,
        EC_WORD_A,
        EC_WORD_HEALTHY,
        EC_POKEMON(SMOOCHUM),
        EC_WORD_EXCL,
        EC_WORD_BE,
        EC_WORD_KIND,
        EC_WORD_TO,
        EC_WORD_IT
    }
};
