/*
==============
TeamBalance_MakeTeams
==============
*/

int __fastcall TeamBalance_MakeTeams(SubpartyInfo *parties, const int partyCount, PartyMember *members, const int memberCount, const int maxCountDiff, const int maxPlayers, const int teamCount, const int maxTeamSize, const int maxSquadSize)
{
  return ?TeamBalance_MakeTeams@@YAHPEAUSubpartyInfo@@HPEAUPartyMember@@HHHHHH@Z(parties, partyCount, members, memberCount, maxCountDiff, maxPlayers, teamCount, maxTeamSize, maxSquadSize);
}

/*
==============
TeamBalance_CanPartitionIntoTeams
==============
*/

int __fastcall TeamBalance_CanPartitionIntoTeams(const SubpartyInfo *parties, const int partyCount, const int maxCountDiff, const int teamCount, const int maxTeamSize)
{
  return ?TeamBalance_CanPartitionIntoTeams@@YAHPEBUSubpartyInfo@@HHHH@Z(parties, partyCount, maxCountDiff, teamCount, maxTeamSize);
}

/*
==============
DescIntCompare
==============
*/
bool DescIntCompare(const int val1, const int val2)
{
  return val1 > val2;
}

/*
==============
MakeTeams
==============
*/
char MakeTeams(SubpartyInfo *parties, const int partyCount, PartyMember *members, const int memberCount, PartitionSet *set)
{
  int v7; 
  int v8; 
  __int64 v9; 
  int *p_count; 
  int v11; 
  int *p_totalSkill; 
  __int64 v13; 
  __int64 v14; 
  int *v15; 
  int *p_remaining; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  SubpartyInfo *v26; 
  SubpartyInfo *v27; 
  int v28; 
  int v29; 
  SubpartyInfo *v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  SubpartyInfo *v35; 
  SubpartyInfo *v36; 
  int count; 
  int v38; 
  SubpartyInfo *v39; 
  __int64 v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  SubpartyInfo *v44; 
  int v45; 
  SubpartyInfo *v46; 
  __int64 v47; 
  __int64 v48; 
  int v49; 
  SubpartyInfo *v50; 
  int v51; 
  SubpartyInfo *v52; 
  __int64 v53; 
  __int64 v54; 
  int v55; 
  SubpartyInfo *v56; 
  int v57; 
  SubpartyInfo *v58; 
  __int64 v59; 
  __int64 v60; 
  int v61; 
  SubpartyInfo *v62; 
  int v63; 
  SubpartyInfo *v64; 
  __int64 v65; 
  __int64 v66; 
  int v67; 
  SubpartyInfo *v68; 
  SubpartyInfo *v69; 
  bool v70; 
  int v71; 
  int v72; 
  SubpartyInfo *v73; 
  __int64 v74; 
  __int64 v75; 
  int v76; 
  SubpartyInfo *v77; 
  int v78; 
  SubpartyInfo *v79; 
  __int64 v80; 
  __int64 v81; 
  int v82; 
  VirtualParty virtualParties; 

  memset_0(&virtualParties, 0, 0x27D80ui64);
  v7 = partyCount;
  v8 = 0;
  v9 = partyCount;
  if ( partyCount > 0 )
  {
    p_count = &parties->count;
    do
    {
      v11 = p_count[1];
      p_totalSkill = &virtualParties.totalSkill;
      v13 = 0i64;
      while ( 1 )
      {
        v14 = *(p_totalSkill - 2);
        v15 = p_totalSkill - 202;
        if ( !(_DWORD)v14 )
          break;
        if ( *p_totalSkill == v11 && p_totalSkill[1] == *p_count )
        {
          v15[v14] = v8;
          goto LABEL_11;
        }
        ++v13;
        p_totalSkill += 204;
        if ( v13 >= 200 )
          goto LABEL_12;
      }
      *p_totalSkill = v11;
      v15[203] = *p_count;
      *v15 = v8;
LABEL_11:
      ++v15[200];
LABEL_12:
      ++v8;
      p_count += 254;
      --v9;
    }
    while ( v9 );
    v7 = partyCount;
  }
  p_remaining = &virtualParties.remaining;
  v17 = 100i64;
  do
  {
    *p_remaining = *(p_remaining - 1);
    p_remaining[204] = p_remaining[203];
    p_remaining += 408;
    --v17;
  }
  while ( v17 );
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  while ( 1 )
  {
    v24 = set->count[0];
    v25 = set->count[1];
    if ( v18 < v24 )
      goto LABEL_28;
    if ( v19 >= v25 )
      return 1;
    if ( v18 < v24 )
    {
LABEL_28:
      v34 = set->team[0][v18];
      if ( v19 >= v25 )
      {
        v35 = SelectMaxSubparty(parties, v7, &virtualParties, v34);
        v36 = v35;
        if ( !v35 )
          goto LABEL_78;
        if ( members )
        {
          count = v35->count;
          v38 = 0;
          if ( count > 0 )
          {
            v39 = v36;
            v40 = (unsigned int)count;
            do
            {
              v41 = v39->members[0];
              v39 = (SubpartyInfo *)((char *)v39 + 4);
              v42 = members[v41].info.trueSkill / 40;
              if ( v38 >= v42 )
                v42 = v38;
              v38 = v42;
              --v40;
            }
            while ( v40 );
          }
LABEL_63:
          if ( v22 > v38 )
            v38 = v22;
          v22 = v38;
          goto LABEL_66;
        }
        goto LABEL_66;
      }
      v43 = set->team[1][v19];
      if ( v34 <= v43 )
      {
        if ( v34 < v43 )
        {
          v50 = SelectMaxSubparty(parties, v7, &virtualParties, v43);
          v27 = v50;
          if ( v50 )
          {
            if ( !members )
              goto LABEL_100;
            v51 = v50->count;
            v29 = 0;
            if ( v51 > 0 )
            {
              v52 = v27;
              v53 = (unsigned int)v51;
              do
              {
                v54 = v52->members[0];
                v52 = (SubpartyInfo *)((char *)v52 + 4);
                v55 = members[v54].info.trueSkill / 40;
                if ( v29 >= v55 )
                  v55 = v29;
                v29 = v55;
                --v53;
              }
              while ( v53 );
            }
            goto LABEL_97;
          }
          goto LABEL_78;
        }
        if ( v20 < v21 )
        {
          v56 = SelectMaxSubparty(parties, v7, &virtualParties, v34);
          v36 = v56;
          if ( !v56 )
            goto LABEL_78;
          if ( members )
          {
            v57 = v56->count;
            v38 = 0;
            if ( v57 > 0 )
            {
              v58 = v36;
              v59 = (unsigned int)v57;
              do
              {
                v60 = v58->members[0];
                v58 = (SubpartyInfo *)((char *)v58 + 4);
                v61 = members[v60].info.trueSkill / 40;
                if ( v38 >= v61 )
                  v61 = v38;
                v38 = v61;
                --v59;
              }
              while ( v59 );
            }
            goto LABEL_63;
          }
          goto LABEL_66;
        }
        if ( v20 > v21 )
        {
          v62 = SelectMaxSubparty(parties, v7, &virtualParties, v43);
          v27 = v62;
          if ( v62 )
          {
            if ( !members )
              goto LABEL_100;
            v63 = v62->count;
            v29 = 0;
            if ( v63 > 0 )
            {
              v64 = v27;
              v65 = (unsigned int)v63;
              do
              {
                v66 = v64->members[0];
                v64 = (SubpartyInfo *)((char *)v64 + 4);
                v67 = members[v66].info.trueSkill / 40;
                if ( v29 >= v67 )
                  v67 = v29;
                v29 = v67;
                --v65;
              }
              while ( v65 );
            }
            goto LABEL_97;
          }
          goto LABEL_78;
        }
        if ( v22 >= v23 )
        {
          v77 = SelectMaxSubparty(parties, v7, &virtualParties, v43);
          v27 = v77;
          if ( !v77 )
            goto LABEL_78;
          if ( !members )
            goto LABEL_100;
          v78 = v77->count;
          v29 = 0;
          if ( v78 > 0 )
          {
            v79 = v27;
            v80 = (unsigned int)v78;
            do
            {
              v81 = v79->members[0];
              v79 = (SubpartyInfo *)((char *)v79 + 4);
              v82 = members[v81].info.trueSkill / 40;
              if ( v29 >= v82 )
                v82 = v29;
              v29 = v82;
              --v80;
            }
            while ( v80 );
          }
LABEL_97:
          if ( v23 > v29 )
            v29 = v23;
          v23 = v29;
LABEL_100:
          v7 = partyCount;
          ++v19;
          v21 += v27->skill;
          v27->team = 1;
        }
        else
        {
          v68 = SelectMaxSubparty(parties, v7, &virtualParties, v34);
          v69 = v68;
          if ( !v68 )
            goto LABEL_78;
          if ( members )
          {
            v71 = v68->count;
            v72 = 0;
            if ( v71 > 0 )
            {
              v73 = v69;
              v74 = (unsigned int)v71;
              do
              {
                v75 = v73->members[0];
                v73 = (SubpartyInfo *)((char *)v73 + 4);
                v76 = members[v75].info.trueSkill / 40;
                if ( v72 >= v76 )
                  v76 = v72;
                v72 = v76;
                --v74;
              }
              while ( v74 );
            }
            if ( v22 > v72 )
              v72 = v22;
            v22 = v72;
          }
          v7 = partyCount;
          ++v18;
          v20 += v69->skill;
          v69->team = 2;
        }
      }
      else
      {
        v44 = SelectMaxSubparty(parties, v7, &virtualParties, v34);
        v36 = v44;
        if ( !v44 )
          goto LABEL_78;
        if ( members )
        {
          v45 = v44->count;
          v38 = 0;
          if ( v45 > 0 )
          {
            v46 = v36;
            v47 = (unsigned int)v45;
            do
            {
              v48 = v46->members[0];
              v46 = (SubpartyInfo *)((char *)v46 + 4);
              v49 = members[v48].info.trueSkill / 40;
              if ( v38 >= v49 )
                v49 = v38;
              v38 = v49;
              --v47;
            }
            while ( v47 );
          }
          goto LABEL_63;
        }
LABEL_66:
        v7 = partyCount;
        ++v18;
        v20 += v36->skill;
        v36->team = 2;
      }
    }
    else
    {
      v26 = SelectMaxSubparty(parties, v7, &virtualParties, set->team[1][v19]);
      v27 = v26;
      if ( v26 )
      {
        if ( !members )
          goto LABEL_100;
        v28 = v26->count;
        v29 = 0;
        if ( v28 > 0 )
        {
          v30 = v27;
          v31 = (unsigned int)v28;
          do
          {
            v32 = v30->members[0];
            v30 = (SubpartyInfo *)((char *)v30 + 4);
            v33 = members[v32].info.trueSkill / 40;
            if ( v29 >= v33 )
              v33 = v29;
            v29 = v33;
            --v31;
          }
          while ( v31 );
        }
        goto LABEL_97;
      }
LABEL_78:
      v70 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 370, ASSERT_TYPE_ASSERT, "(maxparty != 0)", (const char *)&queryFormat, "maxparty != NULL");
      v7 = partyCount;
      if ( v70 )
        __debugbreak();
    }
  }
}

/*
==============
RebuildSolution
==============
*/
void RebuildSolution(PartitionSet *set, const PartitionState *stack, int stackcount)
{
  __int64 v3; 
  int *v4; 
  PartitionSet *v5; 
  int *p_current; 
  int v7; 
  int i; 
  int v9; 

  v3 = stackcount;
  v4 = set->team[1];
  v5 = set;
  if ( stackcount > 0 )
  {
    p_current = &stack->current;
    do
    {
      v7 = *p_current;
      for ( i = 0; i < *p_current; v7 = *p_current )
      {
        ++i;
        v5->team[0][0] = *(p_current - 2);
        v5 = (PartitionSet *)((char *)v5 + 4);
      }
      v9 = 0;
      if ( *(p_current - 1) - v7 > 0 )
      {
        do
        {
          ++v9;
          *v4++ = *(p_current - 2);
        }
        while ( v9 < *(p_current - 1) - *p_current );
      }
      p_current += 3;
      --v3;
    }
    while ( v3 );
  }
  set->count[1] = ((char *)v4 - (char *)set - 400) >> 2;
  set->count[0] = ((char *)v5 - (char *)set) >> 2;
}

/*
==============
SelectMaxSubparty
==============
*/
SubpartyInfo *SelectMaxSubparty(SubpartyInfo *parties, const int partyCount, VirtualParty *virtualParties, int partySize)
{
  int v4; 
  VirtualParty *v7; 
  int *p_remaining; 
  __int64 v9; 
  int v10; 
  int count; 
  int v12; 
  VirtualParty *v13; 
  unsigned int v14; 
  __int64 v17; 

  v4 = 0;
  v7 = NULL;
  if ( partyCount <= 0 )
    goto LABEL_32;
  p_remaining = &virtualParties->remaining;
  v9 = (unsigned int)partyCount;
  do
  {
    if ( p_remaining[2] == partySize && *p_remaining && (!v7 || v7->totalSkill < p_remaining[1]) )
      v7 = virtualParties;
    ++virtualParties;
    p_remaining += 204;
    --v9;
  }
  while ( v9 );
  if ( v7 )
  {
    if ( (v7->count <= 0 || v7->remaining <= 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 312, ASSERT_TYPE_ASSERT, "(vp->count > 0 && vp->remaining > 0)", (const char *)&queryFormat, "vp->count > 0 && vp->remaining > 0") )
      __debugbreak();
    v10 = I_irand(0, v7->remaining);
    count = v7->count;
    v12 = v10;
    if ( count <= 0 )
    {
LABEL_19:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 334, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to find party in virtual party") )
        __debugbreak();
      v14 = -1;
    }
    else
    {
      v13 = v7;
      while ( 1 )
      {
        v14 = v13->partyIds[0];
        if ( v13->partyIds[0] >= 0 && !v12-- )
          break;
        ++v4;
        v13 = (VirtualParty *)((char *)v13 + 4);
        if ( v4 >= count )
          goto LABEL_19;
      }
      v7->partyIds[v4] = -1;
      --v7->remaining;
    }
    if ( v14 >= partyCount )
    {
      LODWORD(v17) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 357, ASSERT_TYPE_ASSERT, "(unsigned)( subpartyIdx ) < (unsigned)( partyCount )", "subpartyIdx doesn't index partyCount\n\t%i not in [0, %i)", v17, partyCount) )
        __debugbreak();
    }
    return &parties[v14];
  }
  else
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 352, ASSERT_TYPE_ASSERT, "(maxparty != 0)", (const char *)&queryFormat, "maxparty != NULL") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
TeamBalance_CanPartitionIntoTeams
==============
*/
__int64 TeamBalance_CanPartitionIntoTeams(const SubpartyInfo *parties, const int partyCount, const int maxCountDiff, const int teamCount, const int maxTeamSize)
{
  __int64 v5; 
  unsigned int v9; 
  PartitionSet *p_sets; 
  __int64 v11; 
  int *v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int *p_count; 
  int v18; 
  int _First[200]; 
  PartitionSet sets; 

  v5 = partyCount;
  if ( maxCountDiff > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 518, ASSERT_TYPE_ASSERT, "( maxCountDiff ) <= ( 1 )", "%s <= %s\n\t%i, %i", "maxCountDiff", "1", maxCountDiff, 1) )
    __debugbreak();
  if ( teamCount <= 2 )
  {
    v9 = 0;
    if ( (int)v5 > 0 )
    {
      v16 = 0i64;
      p_count = &parties->count;
      do
      {
        v18 = *p_count;
        p_count += 254;
        _First[v16++] = v18;
      }
      while ( v16 < v5 );
    }
    std::_Sort_unchecked<int *,bool (*)(int,int)>(_First, &_First[v5], v5, (bool (__fastcall *)(int, int))DescIntCompare);
    LOBYTE(v9) = Partition(_First, v5, &sets, 1, maxCountDiff) > 0;
  }
  else
  {
    v9 = 0;
    p_sets = &sets;
    v11 = 12i64;
    do
    {
      *(_QWORD *)&p_sets->team[0][0] = 0i64;
      *(_QWORD *)&p_sets->team[0][2] = 0i64;
      *(_QWORD *)&p_sets->team[0][4] = 0i64;
      p_sets = (PartitionSet *)((char *)p_sets + 64);
      *(_QWORD *)&p_sets[-1].team[1][92] = 0i64;
      *(_QWORD *)&p_sets[-1].team[1][94] = 0i64;
      *(_QWORD *)&p_sets[-1].team[1][96] = 0i64;
      *(_QWORD *)&p_sets[-1].team[1][98] = 0i64;
      *(_QWORD *)p_sets[-1].count = 0i64;
      --v11;
    }
    while ( v11 );
    *(_QWORD *)&p_sets->team[0][0] = 0i64;
    *(_QWORD *)&p_sets->team[0][2] = 0i64;
    *(_QWORD *)&p_sets->team[0][4] = 0i64;
    *(_QWORD *)&p_sets->team[0][6] = 0i64;
    *(_QWORD *)&p_sets->team[0][8] = 0i64;
    p_sets->team[0][10] = 0;
    if ( (int)v5 <= 0 )
    {
      return 1;
    }
    else
    {
      v12 = &parties->count;
      v13 = 0i64;
      while ( 1 )
      {
        v14 = 1i64;
        while ( 1 )
        {
          v15 = *v12 + sets.team[0][v14];
          if ( v15 <= maxTeamSize )
            break;
          if ( ++v14 >= 201 )
            return v9;
        }
        if ( v14 < 0 )
          break;
        ++v13;
        sets.team[0][v14] = v15;
        v12 += 254;
        if ( v13 >= v5 )
          return 1;
      }
    }
  }
  return v9;
}

/*
==============
TeamBalance_MakeSquads
==============
*/
char TeamBalance_MakeSquads(SubpartyInfo *parties, const int partyCount, const int maxSquadSize)
{
  __int64 v3; 
  int *p_squad; 
  char result; 
  char *v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int *p_team; 
  __int64 v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  int *v17; 
  int v18[2]; 
  char v19; 

  v3 = partyCount;
  if ( maxSquadSize > 1 )
  {
    v8 = &v19;
    v9 = 203i64;
    do
    {
      *((_QWORD *)v8 - 1) = 0i64;
      *(_QWORD *)v8 = 0i64;
      *((_QWORD *)v8 + 1) = 0i64;
      *((_QWORD *)v8 + 2) = 0i64;
      *((_QWORD *)v8 + 3) = 0i64;
      *((_QWORD *)v8 + 4) = 0i64;
      *((_QWORD *)v8 + 5) = 0i64;
      *((_QWORD *)v8 + 6) = 0i64;
      *((_QWORD *)v8 + 7) = 0i64;
      *((_QWORD *)v8 + 8) = 0i64;
      *((_QWORD *)v8 + 9) = 0i64;
      *((_QWORD *)v8 + 10) = 0i64;
      *((_QWORD *)v8 + 11) = 0i64;
      *((_QWORD *)v8 + 12) = 0i64;
      *((_QWORD *)v8 + 13) = 0i64;
      *((_QWORD *)v8 + 14) = 0i64;
      *((_QWORD *)v8 + 15) = 0i64;
      *((_QWORD *)v8 + 16) = 0i64;
      *((_QWORD *)v8 + 17) = 0i64;
      *((_QWORD *)v8 + 18) = 0i64;
      *((_QWORD *)v8 + 19) = 0i64;
      *((_QWORD *)v8 + 20) = 0i64;
      *((_QWORD *)v8 + 21) = 0i64;
      *((_QWORD *)v8 + 22) = 0i64;
      *((_QWORD *)v8 + 23) = 0i64;
      *((_QWORD *)v8 + 24) = 0i64;
      *((_QWORD *)v8 + 25) = 0i64;
      *((_QWORD *)v8 + 26) = 0i64;
      *((_QWORD *)v8 + 27) = 0i64;
      *((_QWORD *)v8 + 28) = 0i64;
      *((_QWORD *)v8 + 29) = 0i64;
      *((_QWORD *)v8 + 30) = 0i64;
      *((_QWORD *)v8 + 31) = 0i64;
      *((_QWORD *)v8 + 32) = 0i64;
      *((_QWORD *)v8 + 33) = 0i64;
      *((_QWORD *)v8 + 34) = 0i64;
      *((_QWORD *)v8 + 35) = 0i64;
      *((_QWORD *)v8 + 36) = 0i64;
      *((_QWORD *)v8 + 37) = 0i64;
      *((_QWORD *)v8 + 38) = 0i64;
      *((_QWORD *)v8 + 39) = 0i64;
      *((_QWORD *)v8 + 40) = 0i64;
      *((_QWORD *)v8 + 41) = 0i64;
      *((_QWORD *)v8 + 42) = 0i64;
      *((_QWORD *)v8 + 43) = 0i64;
      *((_QWORD *)v8 + 44) = 0i64;
      *((_QWORD *)v8 + 45) = 0i64;
      *((_QWORD *)v8 + 46) = 0i64;
      *((_QWORD *)v8 + 47) = 0i64;
      *((_QWORD *)v8 + 48) = 0i64;
      v8 += 400;
      --v9;
    }
    while ( v9 );
    v10 = 0;
    if ( partyCount > 0 )
    {
      v11 = 0i64;
      p_team = &parties->team;
      while ( 2 )
      {
        v13 = *p_team;
        v14 = 0;
        v15 = *(p_team - 2);
        v16 = 0i64;
        v17 = &v18[100 * v13];
        while ( v15 + *v17 > maxSquadSize )
        {
          ++v14;
          ++v16;
          ++v17;
          if ( v16 >= 100 )
            goto LABEL_13;
        }
        if ( v14 < 0 )
        {
LABEL_13:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 637, ASSERT_TYPE_ASSERT, "(availableSquad >= 0)", (const char *)&queryFormat, "availableSquad >= 0") )
            __debugbreak();
          Com_PrintError(25, "Unable to find a squad that can fit this party!\n");
          result = 0;
          parties[v10].squad = -1;
          return result;
        }
        p_team[1] = v14;
        ++v10;
        ++v11;
        p_team += 254;
        v18[100 * v13 + v16] += v15;
        if ( v11 < v3 )
          continue;
        break;
      }
    }
  }
  else if ( partyCount > 0 )
  {
    p_squad = &parties->squad;
    do
    {
      *p_squad = -1;
      p_squad += 254;
      --v3;
    }
    while ( v3 );
  }
  return 1;
}

/*
==============
TeamBalance_MakeTeams
==============
*/
int TeamBalance_MakeTeams(SubpartyInfo *parties, const int partyCount, PartyMember *members, const int memberCount, const int maxCountDiff, const int maxPlayers, const int teamCount, const int maxTeamSize, const int maxSquadSize)
{
  __int64 v9; 
  __int64 v13; 
  int *p_team; 
  int result; 
  __int64 v16; 
  int *p_count; 
  int v18; 
  int *v19; 
  __int64 v20; 
  int v21; 
  int *v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  int _First[200]; 
  int v30[204]; 
  PartitionSet sets[3]; 

  v9 = partyCount;
  if ( (unsigned int)partyCount > 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 823, ASSERT_TYPE_ASSERT, "( partyCount ) <= ( ( sizeof( *array_counter( partySizes ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "partyCount", "ARRAY_COUNT( partySizes )", partyCount, 200) )
    __debugbreak();
  v13 = v9;
  if ( teamCount < 2 )
  {
    if ( (int)v9 > 0 )
    {
      p_team = &parties->team;
      do
      {
        *p_team = 0;
        p_team += 254;
        --v13;
      }
      while ( v13 );
      return 1;
    }
    return 1;
  }
  if ( (int)v9 > 0 )
  {
    v16 = 0i64;
    p_count = &parties->count;
    do
    {
      v18 = *p_count;
      p_count += 254;
      _First[v16++] = v18;
    }
    while ( v16 < v9 );
  }
  std::_Sort_unchecked<int *,bool (*)(int,int)>(_First, &_First[v9], v9, (bool (__fastcall *)(int, int))DescIntCompare);
  if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() && BG_Bots_AreHumansOnAlliesOnly() )
    return TeamBalance_PutHumansOnDesignatedSide(parties, v9, members, memberCount, maxCountDiff, TEAM_TWO);
  if ( OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
    return TeamBalance_MakeTeamsFromDemonware(parties, v9, members, memberCount, maxSquadSize);
  if ( teamCount <= 2 )
  {
    v27 = Partition(_First, v9, sets, 3, maxCountDiff);
    if ( v27 <= 0 )
      return 0;
    v28 = I_irand(0, v27);
    if ( !MakeTeams(parties, v9, members, memberCount, &sets[v28]) )
      return 0;
    if ( !TeamBalance_MakeSquads(parties, v9, maxSquadSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 863, ASSERT_TYPE_ASSERT, "(TeamBalance_MakeSquads( parties, partyCount, maxSquadSize ))", (const char *)&queryFormat, "TeamBalance_MakeSquads( parties, partyCount, maxSquadSize )") )
      __debugbreak();
    return 1;
  }
  v19 = v30;
  v20 = 12i64;
  do
  {
    *(_QWORD *)v19 = 0i64;
    *((_QWORD *)v19 + 1) = 0i64;
    *((_QWORD *)v19 + 2) = 0i64;
    v19 += 16;
    *((_QWORD *)v19 - 5) = 0i64;
    *((_QWORD *)v19 - 4) = 0i64;
    *((_QWORD *)v19 - 3) = 0i64;
    *((_QWORD *)v19 - 2) = 0i64;
    *((_QWORD *)v19 - 1) = 0i64;
    --v20;
  }
  while ( v20 );
  *(_QWORD *)v19 = 0i64;
  v21 = 0;
  *((_QWORD *)v19 + 1) = 0i64;
  *((_QWORD *)v19 + 2) = 0i64;
  *((_QWORD *)v19 + 3) = 0i64;
  *((_QWORD *)v19 + 4) = 0i64;
  v19[10] = 0;
  if ( (int)v9 > 0 )
  {
    v22 = &parties->count;
    v23 = 0i64;
    while ( 2 )
    {
      v24 = 1;
      v25 = 1i64;
      while ( 1 )
      {
        v26 = *v22 + v30[v25];
        if ( v26 <= maxTeamSize )
          break;
        ++v24;
        if ( ++v25 >= 201 )
          goto LABEL_25;
      }
      if ( v24 < 0 )
      {
LABEL_25:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 682, ASSERT_TYPE_ASSERT, "(availableTeam >= 0)", (const char *)&queryFormat, "availableTeam >= 0") )
          __debugbreak();
        Com_PrintError(25, "Unable to find a team that can fit this party!\n");
        result = 0;
        parties[v21].team = 0;
        return result;
      }
      v22[2] = v24;
      ++v21;
      v22 += 254;
      v30[v25] = v26;
      if ( ++v23 < v9 )
        continue;
      break;
    }
  }
  return (unsigned __int8)TeamBalance_MakeSquads(parties, v9, maxSquadSize);
}

/*
==============
TeamBalance_MakeTeamsFromDemonware
==============
*/
__int64 TeamBalance_MakeTeamsFromDemonware(SubpartyInfo *parties, const int partyCount, PartyMember *members, const int memberCount, const int maxSquadSize)
{
  __int64 v5; 
  SubpartyInfo *v6; 
  unsigned __int8 v7; 
  __int64 v8; 
  int *v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  SubpartyInfo *v14; 
  int *p_count; 
  int v16; 
  int v17; 
  __int64 v18; 
  PartyMember *v19; 
  team_t v20; 
  int v21; 
  __int64 v22; 
  unsigned int v23; 
  __int64 v24; 
  int *v25; 
  __int64 v26; 
  int v27; 
  int *v28; 
  PartyMember *v29; 
  XUID *p_playerUID; 
  const char *v31; 
  const char *v32; 
  SubpartyInfo *v33; 
  SubpartyInfo *v34; 
  int squadId[2]; 
  SubpartyInfo *partiesa; 
  bdRandom v38; 
  team_t teamId; 
  int partyCounta; 
  PartyMember *v41; 
  __int64 v42; 
  __int64 v43; 
  int v44; 
  int v45; 

  v43 = -2i64;
  v41 = members;
  v5 = partyCount;
  partyCounta = partyCount;
  v6 = parties;
  partiesa = parties;
  v7 = 0;
  bdRandom::bdRandom(&v38);
  v8 = 0i64;
  v9 = &v44;
  v10 = 12i64;
  do
  {
    *(_QWORD *)v9 = 0i64;
    *((_QWORD *)v9 + 1) = 0i64;
    *((_QWORD *)v9 + 2) = 0i64;
    v9 += 16;
    *((_QWORD *)v9 - 5) = 0i64;
    *((_QWORD *)v9 - 4) = 0i64;
    *((_QWORD *)v9 - 3) = 0i64;
    *((_QWORD *)v9 - 2) = 0i64;
    *((_QWORD *)v9 - 1) = 0i64;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)v9 = 0i64;
  *((_QWORD *)v9 + 1) = 0i64;
  *((_QWORD *)v9 + 2) = 0i64;
  *((_QWORD *)v9 + 3) = 0i64;
  *((_QWORD *)v9 + 4) = 0i64;
  v9[10] = 0;
  v11 = v5;
  *(_QWORD *)squadId = v5;
  v12 = v45;
  if ( (int)v5 > 0 )
  {
    v13 = 0i64;
    v14 = partiesa;
    p_count = &partiesa->count;
    v42 = v5;
    v16 = v44;
    while ( 1 )
    {
      p_count[2] = 0;
      v17 = 0;
      v18 = 0i64;
      if ( *p_count <= 0 )
        goto LABEL_20;
      v19 = v41;
      do
      {
        if ( *((_BYTE *)p_count + v18 - 200) )
        {
          if ( v12 > v16 )
          {
            p_count[2] = 1;
            v44 = ++v16;
            goto LABEL_18;
          }
          if ( v12 < v16 )
          {
            p_count[2] = 2;
            v45 = ++v12;
            goto LABEL_18;
          }
          v22 = bdRandom::nextUInt(&v38) & 1;
          p_count[2] = v22 + 1;
          ++*(&v44 + v22);
          v12 = v45;
          v16 = v44;
        }
        else if ( OnlineMatchmakerOmniscient::GetTeamFor(&OnlineMatchmakerOmniscient::ms_instance, v19[v14[v13].members[v18]].playerUID, &teamId) )
        {
          v20 = teamId;
          p_count[2] = teamId;
          v21 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(v20);
          if ( v21 >= 0 )
          {
            ++*(&v44 + v21);
            v12 = v45;
            v16 = v44;
          }
          v7 = 1;
        }
        v14 = partiesa;
LABEL_18:
        ++v17;
        ++v18;
      }
      while ( v17 < *p_count );
      v8 = 0i64;
      v11 = v42;
LABEL_20:
      p_count += 254;
      ++v13;
      v42 = --v11;
      if ( !v11 )
      {
        v6 = partiesa;
        goto LABEL_23;
      }
    }
  }
  v16 = v44;
LABEL_23:
  v23 = abs32(v16 - v12);
  if ( v23 <= 1 )
    goto LABEL_31;
  Com_Printf(25, "TeamBalance_MakeTeamsFromDemonware - team delta = %d\n", v23);
  v24 = *(_QWORD *)squadId;
  if ( *(__int64 *)squadId > 0 )
  {
    v25 = &v6->count;
    v26 = *(_QWORD *)squadId;
    do
    {
      Com_Printf(25, "\tteam = %d\n", (unsigned int)v25[2]);
      v27 = 0;
      if ( *v25 > 0 )
      {
        v28 = v25 - 250;
        v29 = v41;
        do
        {
          p_playerUID = &v29[*v28].playerUID;
          v31 = XUID::ToDevString(p_playerUID);
          v32 = XUID::ToDevString(p_playerUID);
          Com_Printf(25, "\t\t%s (%s)\n", v32, v31);
          ++v27;
          ++v28;
        }
        while ( v27 < *v25 );
        v8 = 0i64;
      }
      v25 += 254;
      --v26;
    }
    while ( v26 );
LABEL_31:
    v24 = *(_QWORD *)squadId;
  }
  if ( v7 && v24 > 0 )
  {
    v33 = partiesa;
    v34 = partiesa;
    while ( OnlineMatchmakerOmniscient::GetSquadFor(&OnlineMatchmakerOmniscient::ms_instance, v41[v34->members[0]].playerUID, squadId) )
    {
      v34->squad = squadId[0];
      ++v8;
      ++v34;
      if ( v8 >= v24 )
        goto LABEL_39;
    }
    Com_Printf(25, "DemonWare did not provide squads, so assigning them locally\n");
    TeamBalance_MakeSquads(v33, partyCounta, maxSquadSize);
  }
LABEL_39:
  bdRandom::~bdRandom(&v38);
  return v7;
}

/*
==============
TeamBalance_PutHumansOnDesignatedSide
==============
*/
__int64 TeamBalance_PutHumansOnDesignatedSide(SubpartyInfo *parties, const int partyCount, PartyMember *members, const int memberCount, int maxCountDiff, team_t team)
{
  const dvar_t *v6; 
  __int64 v8; 
  unsigned int flags; 
  int v11; 
  int v12; 
  __int64 v13; 
  int *p_count; 
  int *v15; 
  __int64 v16; 
  __int64 v17; 
  int *v18; 
  int v19; 
  int *v20; 
  __int64 v22; 

  v6 = DVARINT_party_maxplayers;
  v8 = partyCount;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v6->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
      __debugbreak();
  }
  if ( memberCount != v6->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 539, ASSERT_TYPE_ASSERT, "(memberCount == Dvar_GetInt_Internal_DebugName( DVARINT_party_maxplayers, \"party_maxplayers\" ))", (const char *)&queryFormat, "memberCount == Dvar_GetInt( party_maxplayers )") )
    __debugbreak();
  v11 = 0;
  v12 = 0;
  if ( !BG_Bots_AreHumansOnAlliesOnly() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 547, ASSERT_TYPE_ASSERT, "(BG_Bots_AreHumansOnAlliesOnly())", (const char *)&queryFormat, "BG_Bots_AreHumansOnAlliesOnly()") )
    __debugbreak();
  v22 = v8;
  v13 = v8;
  if ( (int)v8 > 0 )
  {
    p_count = &parties->count;
    v15 = &parties->count;
    v16 = v13;
    do
    {
      v17 = (unsigned int)*v15;
      if ( (int)v17 > 0 )
      {
        v18 = v15 - 50;
        do
        {
          if ( !*(_BYTE *)v18 )
          {
            v15[2] = team;
            if ( team == TEAM_TWO )
            {
              ++v12;
            }
            else if ( team == TEAM_ONE )
            {
              ++v11;
            }
          }
          v18 = (int *)((char *)v18 + 1);
          --v17;
        }
        while ( v17 );
      }
      v15 += 254;
      --v16;
    }
    while ( v16 );
    do
    {
      v19 = 0;
      if ( *p_count > 0 )
      {
        v20 = p_count - 50;
        do
        {
          if ( *(_BYTE *)v20 )
          {
            if ( v12 >= memberCount / 2 )
            {
              if ( v11 >= memberCount / 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\teambalance\\teambalance.cpp", 587, ASSERT_TYPE_ASSERT, "(teamCounts[0] < (memberCount/2))", (const char *)&queryFormat, "teamCounts[0] < (memberCount/2)") )
                __debugbreak();
              p_count[2] = 1;
              ++v11;
            }
            else
            {
              p_count[2] = 2;
              ++v12;
            }
          }
          ++v19;
          v20 = (int *)((char *)v20 + 1);
        }
        while ( v19 < *p_count );
        v13 = v22;
      }
      p_count += 254;
      v22 = --v13;
    }
    while ( v13 );
  }
  return 1i64;
}

