#include "../include/pokemon.h"
#include "../include/constants/species.h"
#include "../include/constants/file.h"

#define NELEMS_POKEFORMDATATBL 285

/**
 *  @brief hatch a PartyPokemon--creates a new PartyPokemon and initializes a few characteristics
 *
 *  @param pokemon PartyPokemon that is hatching
 *  @param heapId heap whose memory to use
 */
void sub_0206D328(struct PartyPokemon *pokemon, u32 heapId)
{
    u16 nickname[11 + 1];
    u8 isEgg = 70;
    u8 hasNickname = FALSE;
    u8 pokeball = 4; // poke ball
    u8 metLevel = 0;

    //sub_0206D038(pokemon, heapId); // carries over egg values to a clean mon
    SetMonData(pokemon, MON_DATA_IS_EGG, &isEgg);
    //GetSpeciesNameIntoArray(GetMonData(pokemon, MON_DATA_SPECIES, NULL), 0, nickname);
    SetMonData(pokemon, MON_DATA_NICKNAME, nickname);
    SetMonData(pokemon, MON_DATA_HAS_NICKNAME, &hasNickname);
    SetMonData(pokemon, MON_DATA_POKEBALL, &pokeball);
    SetMonData(pokemon, MON_DATA_MET_LEVEL, &metLevel);
   // RecalcPartyPokemonStats(pokemon);

    //ResetPartyPokemonAbility(pokemon);
}

/**
 *  @brief grab index in ARC_POKEICON from original species, egg status, and form number
 *
 *  @param mons base species index
 *  @param egg TRUE if pokémon is an egg; FALSE otherwise
 *  @param form_no form number
 *  @return icon index in ARC_POKEICON
 */
u32 LONG_CALL PokeIconIndexGetByMonsNumber(u32 mons, u32 egg, u32 form_no)
{
    u32 i;
    u32 pat = 7+mons;

    if (egg == 1)
    {
        //if (mons == SPECIES_MANAPHY)
        //{
          //  return 502; // manaphy egg icon
        //}
        //else
        //{
            return 501; // normal egg icon
        //}
    }

    if (form_no != 0)
    {
        pat = SanitizeFormNumber(mons, form_no);//70438

        if (pat != 0)
        {
            if (mons == SPECIES_DEOXYS)
            {
                return (503 + pat - 1);
            }
            if (mons == SPECIES_UNOWN)
            {
                return (507 + pat - 1);
            }
            if (mons == SPECIES_BURMY)
            {
                return (534 + pat - 1);
            }
            if (mons == SPECIES_WORMADAM)
            {
                return (536 + pat - 1);
            }
            if (mons == SPECIES_SHELLOS)
            {
                return (538 + pat - 1);
            }
            if (mons == SPECIES_GASTRODON)
            {
                return (539 + pat - 1);
            }
            if (mons == SPECIES_GIRATINA)
            {
                return (540 + pat - 1);
            }
            if (mons == SPECIES_SHAYMIN)
            {
                return (541 + pat - 1);
            }
            if (mons == SPECIES_ROTOM)
            {
                return (542 + pat - 1);
            }
            else if (mons == SPECIES_CASTFORM)
            {
                return (547 + pat - 1);
            }
            else if (mons == SPECIES_CHERRIM)
            {
                return (550 + pat - 1);
            }
        }

        // pat is now treated as the return value.  is initially set as the mons+7, but is adjusted as necessary below

        struct FormData *PokeFormDataTbl = sys_AllocMemory(HEAPID_MAIN_HEAP, NELEMS_POKEFORMDATATBL * sizeof(struct FormData));
        ArchiveDataLoad(PokeFormDataTbl, ARC_CODE_ADDONS, CODE_ADDON_FORM_DATA);

        pat = (7 + mons);
        for (i = 0; i < NELEMS_POKEFORMDATATBL; i++)
        {
            if (mons == PokeFormDataTbl[i].species && form_no == PokeFormDataTbl[i].form_no)
            {
                pat = PokeFormDataTbl[i].file + 7;
                break;
            }
        }
        sys_FreeMemoryEz(PokeFormDataTbl);
    }
    return pat;
}
