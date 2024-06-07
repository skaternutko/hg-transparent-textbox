#ifndef POKEMON_H
#define POKEMON_H

#include "config.h"
//#include "save.h"
#include "types.h"
enum
{
    MON_DATA_PERSONALITY = 0,
    MON_DATA_PARTY_LOCK,
    MON_DATA_BOX_LOCK,
    MON_DATA_CHECKSUM_FAILED,
    MON_DATA_CHECKSUM,
    MON_DATA_SPECIES,
    MON_DATA_HELD_ITEM,
    MON_DATA_OTID,
    MON_DATA_EXPERIENCE,
    MON_DATA_FRIENDSHIP,
    MON_DATA_ABILITY,
    MON_DATA_MARKINGS,
    MON_DATA_GAME_LANGUAGE,
    MON_DATA_HP_EV,
    MON_DATA_ATK_EV,
    MON_DATA_DEF_EV,
    MON_DATA_SPEED_EV,
    MON_DATA_SPATK_EV,
    MON_DATA_SPDEF_EV,
    MON_DATA_COOL,
    MON_DATA_BEAUTY,
    MON_DATA_CUTE,
    MON_DATA_SMART,
    MON_DATA_TOUGH,
    MON_DATA_SHEEN,
    MON_DATA_SINNOH_CHAMP_RIBBON,
    MON_DATA_ABILITY_RIBBON,
    MON_DATA_GREAT_ABILITY_RIBBON,
    MON_DATA_DOUBLE_ABILITY_RIBBON,
    MON_DATA_MULTI_ABILITY_RIBBON,
    MON_DATA_PAIR_ABILITY_RIBBON,
    MON_DATA_WORLD_ABILITY_RIBBON,
    MON_DATA_ALERT_RIBBON,
    MON_DATA_SHOCK_RIBBON,
    MON_DATA_DOWNCAST_RIBBON,
    MON_DATA_CARELESS_RIBBON,
    MON_DATA_RELAX_RIBBON,
    MON_DATA_SNOOZE_RIBBON,
    MON_DATA_SMILE_RIBBON,
    MON_DATA_GORGEOUS_RIBBON,
    MON_DATA_ROYAL_RIBBON,
    MON_DATA_GORGEOUS_ROYAL_RIBBON,
    MON_DATA_FOOTPRINT_RIBBON,
    MON_DATA_RECORD_RIBBON,
    MON_DATA_HISTORY_RIBBON,
    MON_DATA_LEGEND_RIBBON,
    MON_DATA_RED_RIBBON,
    MON_DATA_GREEN_RIBBON,
    MON_DATA_BLUE_RIBBON,
    MON_DATA_FESTIVAL_RIBBON,
    MON_DATA_CARNIVAL_RIBBON,
    MON_DATA_CLASSIC_RIBBON,
    MON_DATA_PREMIER_RIBBON,
    MON_DATA_SINNOH_RIBBON_53,
    MON_DATA_MOVE1,
    MON_DATA_MOVE2,
    MON_DATA_MOVE3,
    MON_DATA_MOVE4,
    MON_DATA_MOVE1PP,
    MON_DATA_MOVE2PP,
    MON_DATA_MOVE3PP,
    MON_DATA_MOVE4PP,
    MON_DATA_MOVE1PPUP,
    MON_DATA_MOVE2PPUP,
    MON_DATA_MOVE3PPUP,
    MON_DATA_MOVE4PPUP,
    MON_DATA_MOVE1MAXPP,
    MON_DATA_MOVE2MAXPP,
    MON_DATA_MOVE3MAXPP,
    MON_DATA_MOVE4MAXPP,
    MON_DATA_HP_IV,
    MON_DATA_ATK_IV,
    MON_DATA_DEF_IV,
    MON_DATA_SPEED_IV,
    MON_DATA_SPATK_IV,
    MON_DATA_SPDEF_IV,
    MON_DATA_IS_EGG,
    MON_DATA_HAS_NICKNAME,
    MON_DATA_HOENN_COOL_RIBBON,
    MON_DATA_HOENN_COOL_RIBBON_SUPER,
    MON_DATA_HOENN_COOL_RIBBON_HYPER,
    MON_DATA_HOENN_COOL_RIBBON_MASTER,
    MON_DATA_HOENN_BEAUTY_RIBBON,
    MON_DATA_HOENN_BEAUTY_RIBBON_SUPER,
    MON_DATA_HOENN_BEAUTY_RIBBON_HYPER,
    MON_DATA_HOENN_BEAUTY_RIBBON_MASTER,
    MON_DATA_HOENN_CUTE_RIBBON,
    MON_DATA_HOENN_CUTE_RIBBON_SUPER,
    MON_DATA_HOENN_CUTE_RIBBON_HYPER,
    MON_DATA_HOENN_CUTE_RIBBON_MASTER,
    MON_DATA_HOENN_SMART_RIBBON,
    MON_DATA_HOENN_SMART_RIBBON_SUPER,
    MON_DATA_HOENN_SMART_RIBBON_HYPER,
    MON_DATA_HOENN_SMART_RIBBON_MASTER,
    MON_DATA_HOENN_TOUGH_RIBBON,
    MON_DATA_HOENN_TOUGH_RIBBON_SUPER,
    MON_DATA_HOENN_TOUGH_RIBBON_HYPER,
    MON_DATA_HOENN_TOUGH_RIBBON_MASTER,
    MON_DATA_HOENN_CHAMPION_RIBBON,
    MON_DATA_HOENN_WINNING_RIBBON,
    MON_DATA_HOENN_VICTORY_RIBBON,
    MON_DATA_HOENN_ARTIST_RIBBON,
    MON_DATA_HOENN_EFFORT_RIBBON,
    MON_DATA_HOENN_MARINE_RIBBON,
    MON_DATA_HOENN_LAND_RIBBON,
    MON_DATA_HOENN_SKY_RIBBON,
    MON_DATA_HOENN_COUNTRY_RIBBON,
    MON_DATA_HOENN_NATIONAL_RIBBON,
    MON_DATA_HOENN_EARTH_RIBBON,
    MON_DATA_HOENN_WORLD_RIBBON,
    MON_DATA_FATEFUL_ENCOUNTER,
    MON_DATA_GENDER,
    MON_DATA_FORM,
    MON_DATA_RESERVED_113,
    MON_DATA_RESERVED_114,
    MON_DATA_HGSS_EGG_MET_LOCATION,
    MON_DATA_HGSS_MET_LOCATION,
    MON_DATA_NICKNAME,
    MON_DATA_NICKNAME_2,
    MON_DATA_NICKNAME_3,
    MON_DATA_NICKNAME_4,
    MON_DATA_UNK_121,
    MON_DATA_GAME_VERSION,
    MON_DATA_COOL_RIBBON,
    MON_DATA_COOL_RIBBON_GREAT,
    MON_DATA_COOL_RIBBON_ULTRA,
    MON_DATA_COOL_RIBBON_MASTER,
    MON_DATA_BEAUTY_RIBBON,
    MON_DATA_BEAUTY_RIBBON_GREAT,
    MON_DATA_BEAUTY_RIBBON_ULTRA,
    MON_DATA_BEAUTY_RIBBON_MASTER,
    MON_DATA_CUTE_RIBBON,
    MON_DATA_CUTE_RIBBON_GREAT,
    MON_DATA_CUTE_RIBBON_ULTRA,
    MON_DATA_CUTE_RIBBON_MASTER,
    MON_DATA_SMART_RIBBON,
    MON_DATA_SMART_RIBBON_GREAT,
    MON_DATA_SMART_RIBBON_ULTRA,
    MON_DATA_SMART_RIBBON_MASTER,
    MON_DATA_TOUGH_RIBBON,
    MON_DATA_TOUGH_RIBBON_GREAT,
    MON_DATA_TOUGH_RIBBON_ULTRA,
    MON_DATA_TOUGH_RIBBON_MASTER,
    MON_DATA_SINNOH_RIBBON_143,
    MON_DATA_OT_NAME,
    MON_DATA_OT_NAME_2,
    MON_DATA_EGG_MET_YEAR,
    MON_DATA_EGG_MET_MONTH,
    MON_DATA_EGG_MET_DAY,
    MON_DATA_MET_YEAR,
    MON_DATA_MET_MONTH,
    MON_DATA_MET_DAY,
    MON_DATA_EGG_MET_LOCATION,
    MON_DATA_MET_LOCATION,
    MON_DATA_POKERUS,
    MON_DATA_POKEBALL,
    MON_DATA_MET_LEVEL,
    MON_DATA_MET_GENDER,
    MON_DATA_ENCOUNTER_TYPE,
    MON_DATA_RESERVED_159,
    MON_DATA_STATUS,
    MON_DATA_LEVEL,
    MON_DATA_CAPSULE,
    MON_DATA_HP,
    MON_DATA_MAXHP,
    MON_DATA_ATTACK,
    MON_DATA_DEFENSE,
    MON_DATA_SPEED,
    MON_DATA_SPECIAL_ATTACK,
    MON_DATA_SPECIAL_DEFENSE,
    MON_DATA_MAIL_STRUCT,
    MON_DATA_SEAL_COORDS,
    MON_DATA_SPECIES_EXISTS,
    MON_DATA_SANITY_IS_EGG,
    MON_DATA_SPECIES_OR_EGG,
    MON_DATA_IVS_WORD,
    MON_DATA_UNK_176,
    MON_DATA_TYPE_1,
    MON_DATA_TYPE_2,
    MON_DATA_SPECIES_NAME,
    MON_DATA_DP_POKEBALL,
    MON_DATA_SHINY_LEAF_A,
    MON_DATA_SHINY_LEAF_B,
    MON_DATA_SHINY_LEAF_C,
    MON_DATA_SHINY_LEAF_D,
    MON_DATA_SHINY_LEAF_E,
    MON_DATA_SHINY_LEAF_CROWN,
    MON_DATA_MOOD,
    MON_DATA_END
};

struct FormData
{
    u16 species;

    u16 form_no:15;
    u16 need_rev:1;

    u16 file;
};

/**
 *  @brief allocate enough space for a PartyPokemon and zero it out
 *
 *  @param heapid heap to allocate the PartyPokemon on
 *  @return pointer to zero'd PartyPokemon
 */
struct PartyPokemon *LONG_CALL AllocMonZeroed(u32 heapid);

/**
 *  @brief clear a PartyPokemon and carry over certain persistent values
 *
 *  @param pokemon PartyPokemon to use for hatching
 *  @param heapId heap to use for memory allocations
 */
void LONG_CALL sub_0206D038(struct PartyPokemon *pokemon, u32 heapId);

/**
 *  @brief get specific field from an encrypted PartyPokemon
 *
 *  @param mon PartyPokemon to grab data from
 *  @param field MON_DATA_* constant to determine which data to grab
 *  @param buffer NULL or pointer to store return array at
 *  @return requested data; data may be in buffer if an array was requested (i.e. MON_DATA_NICKNAME)
 */
u32 LONG_CALL GetMonData(struct PartyPokemon *mon, int field, void *buffer);

/**
 *  @brief set specific field on an encrypted PartyPokemon
 *
 *  @param mon PartyPokemon to set data on
 *  @param field MON_DATA_* constant to determine which data to set
 *  @param buffer pointer to data to set.  always a pointer, even for simple values
 */
void LONG_CALL SetMonData(struct PartyPokemon *mon, int field, void *buffer);

/**
 *  @brief load terminated species name into array
 *
 *  @param species species name to load
 *  @param heap_id heap to use for memory allocations
 *  @param dest destination array to throw the species name into
 */
void LONG_CALL GetSpeciesNameIntoArray(u16 species, u32 heap_id, u16 *dest);

/**
 *  @brief recalculate a PartyPokemon's stats
 *
 *  @param pp PartyPokemon whose stats to recalculate
 */
void LONG_CALL RecalcPartyPokemonStats(struct PartyPokemon *pp);

/**
 *  @brief grab index in ARC_POKEICON from original species, egg status, and form number
 *
 *  @param mons base species index
 *  @param egg TRUE if pokémon is an egg; FALSE otherwise
 *  @param form_no form number
 *  @return icon index in ARC_POKEICON
 */
u32 LONG_CALL PokeIconIndexGetByMonsNumber(u32 mons, u32 egg, u32 form_no);

/**
 *  @brief sanitize the form for species that already have forms in game (set to 0 if invalid)
 *
 *  @param mons_no species index
 *  @param form_no form number
 *  @return corrected form number
 */
u8 LONG_CALL SanitizeFormNumber(u16 mons_no, u8 form_no);

#endif
