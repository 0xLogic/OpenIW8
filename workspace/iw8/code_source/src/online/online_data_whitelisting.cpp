/*
==============
OnlineDataWhitelisting::InitFromFastFile
==============
*/

bool __fastcall OnlineDataWhitelisting::InitFromFastFile(OnlineDataWhitelisting *this, const char *fileName)
{
  return ?InitFromFastFile@OnlineDataWhitelisting@@QEAA_NPEBD@Z(this, fileName);
}

/*
==============
OnlineDataWhitelisting::test
==============
*/

void OnlineDataWhitelisting::test(void)
{
  ?test@OnlineDataWhitelisting@@SAXXZ();
}

/*
==============
OnlineDataWhitelisting::IsWhitelisted
==============
*/

bool __fastcall OnlineDataWhitelisting::IsWhitelisted(OnlineDataWhitelisting *this, const char *check, char **outDataMember)
{
  return ?IsWhitelisted@OnlineDataWhitelisting@@QEAA_NPEBDPEAPEAD@Z(this, check, outDataMember);
}

/*
==============
OnlineDataWhitelisting::Init
==============
*/

bool __fastcall OnlineDataWhitelisting::Init(OnlineDataWhitelisting *this, const char *whitelist, const bool isWhitelistedEnabled)
{
  return ?Init@OnlineDataWhitelisting@@QEAA_NPEBD_N@Z(this, whitelist, isWhitelistedEnabled);
}

/*
==============
OnlineDataWhitelisting::Init
==============
*/
char OnlineDataWhitelisting::Init(OnlineDataWhitelisting *this, const char *whitelist, const bool isWhitelistedEnabled)
{
  char v5; 
  unsigned int m_count; 
  unsigned int v7; 
  OnlineDataWhitelisting *v8; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v11; 
  bdJSONDeserializer v12; 

  v5 = 0;
  if ( whitelist )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v12, whitelist);
    bdJSONDeserializer::bdJSONDeserializer(&value);
    bdJSONDeserializer::bdJSONDeserializer(&v11);
    memset_0(this, 0, 0x640ui64);
    if ( bdJSONDeserializer::getArray(&v12, "whitelist", &value) )
    {
      m_count = value.m_count;
      if ( value.m_count > 0x19 )
      {
        m_count = 25;
        Com_PrintError(25, "OnlineDataWhitelisting::Init - too many whitelist entries (%d)\n", value.m_count);
      }
      v7 = 0;
      if ( m_count )
      {
        v8 = this;
        do
        {
          if ( !bdJSONDeserializer::getString(&value, v7, (char *const)v8, 0x3Fu) && bdJSONDeserializer::getObject(&value, v7, &v11) )
          {
            bdJSONDeserializer::getString(&v11, "entry", (char *const)v8, 0x40u);
            bdJSONDeserializer::getString(&v11, "data_member", v8->m_whitelist[0].dataMember, 0x40u);
          }
          ++v7;
          v8 = (OnlineDataWhitelisting *)((char *)v8 + 128);
        }
        while ( v7 < m_count );
      }
      this->m_numWhitelistEntries = m_count;
      v5 = 1;
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v11);
    bdJSONDeserializer::~bdJSONDeserializer(&value);
    bdJSONDeserializer::~bdJSONDeserializer(&v12);
    this->m_isWhitelistedEnabled = isWhitelistedEnabled;
    return v5;
  }
  else
  {
    this->m_isWhitelistedEnabled = isWhitelistedEnabled;
    return 1;
  }
}

/*
==============
OnlineDataWhitelisting::InitFromFastFile
==============
*/
bool OnlineDataWhitelisting::InitFromFastFile(OnlineDataWhitelisting *this, const char *fileName)
{
  const RawFile *rawfile; 
  unsigned int RawFileLen; 
  char buf[2048]; 

  if ( !DB_XAssetExists(ASSET_TYPE_RAWFILE, fileName) )
  {
    Com_Printf(25, "OnlineDataWhitelisting::InitFromFastFile - %s not loaded.\n", fileName);
    return 0;
  }
  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, fileName, 1).rawfile;
  RawFileLen = DB_GetRawFileLen(rawfile);
  if ( RawFileLen > 0x800 )
  {
    Com_Printf(25, "OnlineDataWhitelisting::InitFromFastFile - len is %u but we only have %u bytes\n", RawFileLen, 2048i64);
    return 0;
  }
  if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, fileName) )
    return 0;
  DB_GetRawBuffer(rawfile, buf, 2048);
  return OnlineDataWhitelisting::Init(this, buf, 1);
}

/*
==============
OnlineDataWhitelisting::IsWhitelisted
==============
*/
char OnlineDataWhitelisting::IsWhitelisted(OnlineDataWhitelisting *this, const char *check, char **outDataMember)
{
  char v3; 
  unsigned __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  const char *v17; 
  char v18; 
  int v19; 
  __int64 v20; 
  char v21; 

  v3 = 0;
  if ( !this->m_isWhitelistedEnabled )
    return 0;
  if ( !check )
    return v3;
  if ( !this->m_numWhitelistEntries )
    return v3;
  v8 = -1i64;
  do
    ++v8;
  while ( check[v8] );
  v9 = 0;
  v10 = truncate_cast<unsigned int,unsigned __int64>(v8);
  if ( !this->m_numWhitelistEntries )
    return v3;
  do
  {
    v11 = -1i64;
    v12 = (unsigned __int64)v9 << 7;
    do
      ++v11;
    while ( this->m_whitelist[0].whitelistedEntry[v12 + v11] );
    v13 = truncate_cast<unsigned int,unsigned __int64>(v11);
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( v10 )
    {
      v17 = check;
      while ( v15 < v13 )
      {
        v18 = this->m_whitelist[0].whitelistedEntry[v12 + v15];
        v19 = v14 + 1;
        if ( v18 != 92 )
          v19 = v14;
        v14 = v19;
        v20 = v15 + 1;
        if ( v18 != 92 )
          v20 = v15;
        v15 = v20;
        v21 = this->m_whitelist[0].whitelistedEntry[v12 + v20];
        if ( *v17 != v21 )
        {
          if ( v18 != 92 && v21 == 42 )
          {
            v3 = 1;
            goto LABEL_24;
          }
          goto LABEL_26;
        }
        ++v16;
        ++v17;
        ++v15;
        v3 = 1;
        if ( v16 >= v10 )
          goto LABEL_24;
      }
    }
    if ( !v3 )
      goto LABEL_27;
LABEL_24:
    if ( v13 - v14 == v10 || this->m_whitelist[0].whitelistedEntry[v12 + v15] == 42 )
      break;
LABEL_26:
    v3 = 0;
LABEL_27:
    ++v9;
  }
  while ( v9 < this->m_numWhitelistEntries );
  if ( v3 )
  {
    if ( outDataMember )
      *outDataMember = this->m_whitelist[(unsigned __int64)v9].dataMember;
  }
  return v3;
}

/*
==============
OnlineDataWhitelisting::test
==============
*/
void OnlineDataWhitelisting::test(void)
{
  char v0; 
  unsigned __int64 v1; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  const char *v10; 
  int v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  char v15; 
  unsigned __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 
  const char *v25; 
  int v26; 
  char v27; 
  __int64 v28; 
  char v29; 
  char v30; 
  unsigned __int64 v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned __int64 v34; 
  unsigned __int64 v35; 
  unsigned int v36; 
  unsigned int v37; 
  int v38; 
  unsigned int v39; 
  const char *v40; 
  int v41; 
  char v42; 
  __int64 v43; 
  char v44; 
  char v45; 
  unsigned __int64 v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned __int64 v49; 
  unsigned __int64 v50; 
  unsigned int v51; 
  unsigned int v52; 
  int v53; 
  unsigned int v54; 
  const char *v55; 
  int v56; 
  char v57; 
  __int64 v58; 
  char v59; 
  char v60; 
  unsigned __int64 v61; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned __int64 v64; 
  unsigned __int64 v65; 
  unsigned int v66; 
  unsigned int v67; 
  int v68; 
  unsigned int v69; 
  const char *v70; 
  int v71; 
  char v72; 
  __int64 v73; 
  char v74; 
  char v75; 
  unsigned __int64 v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned __int64 v79; 
  unsigned __int64 v80; 
  unsigned int v81; 
  unsigned int v82; 
  int v83; 
  unsigned int v84; 
  const char *v85; 
  int v86; 
  char v87; 
  __int64 v88; 
  char v89; 
  char v90; 
  unsigned __int64 v91; 
  unsigned int v92; 
  unsigned int v93; 
  unsigned __int64 v94; 
  unsigned __int64 v95; 
  unsigned int v96; 
  unsigned int v97; 
  int v98; 
  unsigned int v99; 
  const char *v100; 
  int v101; 
  char v102; 
  __int64 v103; 
  char v104; 
  char v105; 
  unsigned __int64 v106; 
  unsigned int v107; 
  unsigned int v108; 
  unsigned __int64 v109; 
  unsigned __int64 v110; 
  unsigned int v111; 
  unsigned int v112; 
  int v113; 
  unsigned int v114; 
  const char *v115; 
  int v116; 
  char v117; 
  __int64 v118; 
  char v119; 
  char v120; 
  unsigned __int64 v121; 
  unsigned int v122; 
  unsigned int v123; 
  unsigned __int64 v124; 
  unsigned __int64 v125; 
  unsigned int v126; 
  unsigned int v127; 
  int v128; 
  unsigned int v129; 
  const char *v130; 
  int v131; 
  char v132; 
  __int64 v133; 
  char v134; 
  char v135; 
  unsigned __int64 v136; 
  unsigned int v137; 
  unsigned int v138; 
  unsigned __int64 v139; 
  unsigned __int64 v140; 
  unsigned int v141; 
  unsigned int v142; 
  int v143; 
  unsigned int v144; 
  const char *v145; 
  int v146; 
  char v147; 
  __int64 v148; 
  char v149; 
  char v150; 
  unsigned __int64 v151; 
  unsigned int v152; 
  unsigned int v153; 
  unsigned __int64 v154; 
  unsigned __int64 v155; 
  unsigned int v156; 
  unsigned int v157; 
  int v158; 
  unsigned int v159; 
  const char *v160; 
  int v161; 
  char v162; 
  __int64 v163; 
  char v164; 
  char v165; 
  unsigned __int64 v166; 
  unsigned int v167; 
  unsigned int v168; 
  unsigned __int64 v169; 
  unsigned __int64 v170; 
  unsigned int v171; 
  unsigned int v172; 
  int v173; 
  unsigned int v174; 
  const char *v175; 
  int v176; 
  char v177; 
  __int64 v178; 
  char v179; 
  char v180; 
  unsigned __int64 v181; 
  unsigned int v182; 
  unsigned int v183; 
  unsigned __int64 v184; 
  unsigned __int64 v185; 
  unsigned int v186; 
  unsigned int v187; 
  int v188; 
  unsigned int v189; 
  const char *v190; 
  int v191; 
  char v192; 
  __int64 v193; 
  char v194; 
  char v195; 
  unsigned __int64 v196; 
  unsigned int v197; 
  unsigned int v198; 
  unsigned __int64 v199; 
  unsigned __int64 v200; 
  unsigned int v201; 
  unsigned int v202; 
  int v203; 
  unsigned int v204; 
  const char *v205; 
  int v206; 
  char v207; 
  __int64 v208; 
  char v209; 
  char v210; 
  unsigned __int64 v211; 
  unsigned int v212; 
  unsigned int v213; 
  unsigned __int64 v214; 
  unsigned __int64 v215; 
  unsigned int v216; 
  unsigned int v217; 
  int v218; 
  unsigned int v219; 
  const char *v220; 
  int v221; 
  char v222; 
  __int64 v223; 
  char v224; 
  char v225; 
  unsigned __int64 v226; 
  unsigned int v227; 
  unsigned int v228; 
  unsigned __int64 v229; 
  unsigned __int64 v230; 
  unsigned int v231; 
  unsigned int v232; 
  int v233; 
  unsigned int v234; 
  const char *v235; 
  int v236; 
  char v237; 
  __int64 v238; 
  char v239; 
  OnlineDataWhitelisting v240; 

  v240.m_numWhitelistEntries = 0;
  v240.m_isWhitelistedEnabled = 0;
  if ( !OnlineDataWhitelisting::Init(&v240, "{ \"whitelist\" : [ \"test\" ]}", 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 234, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  v0 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_30;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_30;
  v1 = -1i64;
  do
    ++v1;
  while ( aTest[v1] );
  v2 = truncate_cast<unsigned int,unsigned __int64>(v1);
  v3 = 0;
  if ( !v240.m_numWhitelistEntries )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 238, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    goto LABEL_32;
  }
  do
  {
    v4 = -1i64;
    v5 = (unsigned __int64)v3 << 7;
    do
      ++v4;
    while ( v240.m_whitelist[0].whitelistedEntry[v5 + v4] );
    v6 = truncate_cast<unsigned int,unsigned __int64>(v4);
    v7 = 0;
    v8 = 0;
    v9 = 0;
    if ( v2 )
    {
      v10 = "test";
      while ( v7 < v6 )
      {
        v11 = v8 + 1;
        v12 = v240.m_whitelist[0].whitelistedEntry[v5 + v7];
        if ( v12 != 92 )
          v11 = v8;
        v8 = v11;
        v13 = v7 + 1;
        if ( v12 != 92 )
          v13 = v7;
        v7 = v13;
        v14 = v240.m_whitelist[0].whitelistedEntry[v5 + v13];
        if ( *v10 != v14 )
        {
          if ( v12 != 92 && v14 == 42 )
          {
            v0 = 1;
            goto LABEL_25;
          }
          goto LABEL_27;
        }
        ++v9;
        ++v10;
        ++v7;
        v0 = 1;
        if ( v9 >= v2 )
          goto LABEL_25;
      }
    }
    if ( !v0 )
      goto LABEL_28;
LABEL_25:
    if ( v6 - v8 == v2 || v240.m_whitelist[0].whitelistedEntry[v5 + v7] == 42 )
      break;
LABEL_27:
    v0 = 0;
LABEL_28:
    ++v3;
  }
  while ( v3 < v240.m_numWhitelistEntries );
  if ( !v0 )
    goto LABEL_30;
LABEL_32:
  v15 = 0;
  if ( v240.m_isWhitelistedEnabled )
  {
    if ( v240.m_numWhitelistEntries )
    {
      v16 = -1i64;
      do
        ++v16;
      while ( aNotest[v16] );
      v17 = truncate_cast<unsigned int,unsigned __int64>(v16);
      v18 = 0;
      if ( v240.m_numWhitelistEntries )
      {
        while ( 1 )
        {
          v19 = -1i64;
          v20 = (unsigned __int64)v18 << 7;
          do
            ++v19;
          while ( v240.m_whitelist[0].whitelistedEntry[v20 + v19] );
          v21 = truncate_cast<unsigned int,unsigned __int64>(v19);
          v22 = 0;
          v23 = 0;
          v24 = 0;
          if ( v17 )
          {
            v25 = "notest";
            while ( v22 < v21 )
            {
              v26 = v23 + 1;
              v27 = v240.m_whitelist[0].whitelistedEntry[v20 + v22];
              if ( v27 != 92 )
                v26 = v23;
              v23 = v26;
              v28 = v22 + 1;
              if ( v27 != 92 )
                v28 = v22;
              v22 = v28;
              v29 = v240.m_whitelist[0].whitelistedEntry[v20 + v28];
              if ( *v25 != v29 )
              {
                if ( v27 != 92 && v29 == 42 )
                {
                  v15 = 1;
                  goto LABEL_53;
                }
                goto LABEL_55;
              }
              ++v24;
              ++v25;
              ++v22;
              v15 = 1;
              if ( v24 >= v17 )
                goto LABEL_53;
            }
          }
          if ( v15 )
          {
LABEL_53:
            if ( v21 - v23 == v17 || v240.m_whitelist[0].whitelistedEntry[v20 + v22] == 42 )
            {
LABEL_57:
              if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 242, ASSERT_TYPE_ASSERT, "(!result)", (const char *)&queryFormat, "!result") )
                __debugbreak();
              break;
            }
LABEL_55:
            v15 = 0;
          }
          if ( ++v18 >= v240.m_numWhitelistEntries )
            goto LABEL_57;
        }
      }
    }
  }
  v240.m_numWhitelistEntries = 0;
  v240.m_isWhitelistedEnabled = 0;
  if ( !OnlineDataWhitelisting::Init(&v240, "{ \"whitelist\" : [ \"test*\" ]}", 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 252, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  v30 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_89;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_89;
  v31 = -1i64;
  do
    ++v31;
  while ( aTest[v31] );
  v32 = truncate_cast<unsigned int,unsigned __int64>(v31);
  v33 = 0;
  if ( !v240.m_numWhitelistEntries )
  {
LABEL_89:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 256, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    goto LABEL_91;
  }
  while ( 2 )
  {
    v34 = -1i64;
    v35 = (unsigned __int64)v33 << 7;
    do
      ++v34;
    while ( v240.m_whitelist[0].whitelistedEntry[v35 + v34] );
    v36 = truncate_cast<unsigned int,unsigned __int64>(v34);
    v37 = 0;
    v38 = 0;
    v39 = 0;
    if ( v32 )
    {
      v40 = "test";
      while ( v37 < v36 )
      {
        v41 = v38 + 1;
        v42 = v240.m_whitelist[0].whitelistedEntry[v35 + v37];
        if ( v42 != 92 )
          v41 = v38;
        v38 = v41;
        v43 = v37 + 1;
        if ( v42 != 92 )
          v43 = v37;
        v37 = v43;
        v44 = v240.m_whitelist[0].whitelistedEntry[v35 + v43];
        if ( *v40 != v44 )
        {
          if ( v42 != 92 && v44 == 42 )
          {
            v30 = 1;
            goto LABEL_84;
          }
          goto LABEL_86;
        }
        ++v39;
        ++v40;
        ++v37;
        v30 = 1;
        if ( v39 >= v32 )
          goto LABEL_84;
      }
    }
    if ( !v30 )
    {
LABEL_87:
      if ( ++v33 >= v240.m_numWhitelistEntries )
        goto LABEL_88;
      continue;
    }
    break;
  }
LABEL_84:
  if ( v36 - v38 != v32 && v240.m_whitelist[0].whitelistedEntry[v35 + v37] != 42 )
  {
LABEL_86:
    v30 = 0;
    goto LABEL_87;
  }
LABEL_88:
  if ( !v30 )
    goto LABEL_89;
LABEL_91:
  v45 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_117;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_117;
  v46 = -1i64;
  do
    ++v46;
  while ( aTest1[v46] );
  v47 = truncate_cast<unsigned int,unsigned __int64>(v46);
  v48 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_117;
  while ( 2 )
  {
    v49 = -1i64;
    v50 = (unsigned __int64)v48 << 7;
    do
      ++v49;
    while ( v240.m_whitelist[0].whitelistedEntry[v50 + v49] );
    v51 = truncate_cast<unsigned int,unsigned __int64>(v49);
    v52 = 0;
    v53 = 0;
    v54 = 0;
    if ( v47 )
    {
      v55 = "test1";
      while ( v52 < v51 )
      {
        v56 = v53 + 1;
        v57 = v240.m_whitelist[0].whitelistedEntry[v50 + v52];
        if ( v57 != 92 )
          v56 = v53;
        v53 = v56;
        v58 = v52 + 1;
        if ( v57 != 92 )
          v58 = v52;
        v52 = v58;
        v59 = v240.m_whitelist[0].whitelistedEntry[v50 + v58];
        if ( *v55 != v59 )
        {
          if ( v57 != 92 && v59 == 42 )
          {
            v45 = 1;
            goto LABEL_112;
          }
          goto LABEL_114;
        }
        ++v54;
        ++v55;
        ++v52;
        v45 = 1;
        if ( v54 >= v47 )
          goto LABEL_112;
      }
    }
    if ( !v45 )
    {
LABEL_115:
      if ( ++v48 >= v240.m_numWhitelistEntries )
        goto LABEL_116;
      continue;
    }
    break;
  }
LABEL_112:
  if ( v51 - v53 != v47 && v240.m_whitelist[0].whitelistedEntry[v50 + v52] != 42 )
  {
LABEL_114:
    v45 = 0;
    goto LABEL_115;
  }
LABEL_116:
  if ( !v45 )
  {
LABEL_117:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 260, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
  }
  v60 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_145;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_145;
  v61 = -1i64;
  do
    ++v61;
  while ( aTesta[v61] );
  v62 = truncate_cast<unsigned int,unsigned __int64>(v61);
  v63 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_145;
  while ( 2 )
  {
    v64 = -1i64;
    v65 = (unsigned __int64)v63 << 7;
    do
      ++v64;
    while ( v240.m_whitelist[0].whitelistedEntry[v65 + v64] );
    v66 = truncate_cast<unsigned int,unsigned __int64>(v64);
    v67 = 0;
    v68 = 0;
    v69 = 0;
    if ( v62 )
    {
      v70 = "testA";
      while ( v67 < v66 )
      {
        v71 = v68 + 1;
        v72 = v240.m_whitelist[0].whitelistedEntry[v65 + v67];
        if ( v72 != 92 )
          v71 = v68;
        v68 = v71;
        v73 = v67 + 1;
        if ( v72 != 92 )
          v73 = v67;
        v67 = v73;
        v74 = v240.m_whitelist[0].whitelistedEntry[v65 + v73];
        if ( *v70 != v74 )
        {
          if ( v72 != 92 && v74 == 42 )
          {
            v60 = 1;
            goto LABEL_140;
          }
          goto LABEL_142;
        }
        ++v69;
        ++v70;
        ++v67;
        v60 = 1;
        if ( v69 >= v62 )
          goto LABEL_140;
      }
    }
    if ( !v60 )
    {
LABEL_143:
      if ( ++v63 >= v240.m_numWhitelistEntries )
        goto LABEL_144;
      continue;
    }
    break;
  }
LABEL_140:
  if ( v66 - v68 != v62 && v240.m_whitelist[0].whitelistedEntry[v65 + v67] != 42 )
  {
LABEL_142:
    v60 = 0;
    goto LABEL_143;
  }
LABEL_144:
  if ( !v60 )
  {
LABEL_145:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 264, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
  }
  v75 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_173;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_173;
  v76 = -1i64;
  do
    ++v76;
  while ( aTestab[v76] );
  v77 = truncate_cast<unsigned int,unsigned __int64>(v76);
  v78 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_173;
  while ( 2 )
  {
    v79 = -1i64;
    v80 = (unsigned __int64)v78 << 7;
    do
      ++v79;
    while ( v240.m_whitelist[0].whitelistedEntry[v80 + v79] );
    v81 = truncate_cast<unsigned int,unsigned __int64>(v79);
    v82 = 0;
    v83 = 0;
    v84 = 0;
    if ( v77 )
    {
      v85 = "testAB";
      while ( v82 < v81 )
      {
        v86 = v83 + 1;
        v87 = v240.m_whitelist[0].whitelistedEntry[v80 + v82];
        if ( v87 != 92 )
          v86 = v83;
        v83 = v86;
        v88 = v82 + 1;
        if ( v87 != 92 )
          v88 = v82;
        v82 = v88;
        v89 = v240.m_whitelist[0].whitelistedEntry[v80 + v88];
        if ( *v85 != v89 )
        {
          if ( v87 != 92 && v89 == 42 )
          {
            v75 = 1;
            goto LABEL_168;
          }
          goto LABEL_170;
        }
        ++v84;
        ++v85;
        ++v82;
        v75 = 1;
        if ( v84 >= v77 )
          goto LABEL_168;
      }
    }
    if ( !v75 )
    {
LABEL_171:
      if ( ++v78 >= v240.m_numWhitelistEntries )
        goto LABEL_172;
      continue;
    }
    break;
  }
LABEL_168:
  if ( v81 - v83 != v77 && v240.m_whitelist[0].whitelistedEntry[v80 + v82] != 42 )
  {
LABEL_170:
    v75 = 0;
    goto LABEL_171;
  }
LABEL_172:
  if ( !v75 )
  {
LABEL_173:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 268, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
  }
  v90 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_201;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_201;
  v91 = -1i64;
  do
    ++v91;
  while ( aTest_1[v91] );
  v92 = truncate_cast<unsigned int,unsigned __int64>(v91);
  v93 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_201;
  while ( 2 )
  {
    v94 = -1i64;
    v95 = (unsigned __int64)v93 << 7;
    do
      ++v94;
    while ( v240.m_whitelist[0].whitelistedEntry[v95 + v94] );
    v96 = truncate_cast<unsigned int,unsigned __int64>(v94);
    v97 = 0;
    v98 = 0;
    v99 = 0;
    if ( v92 )
    {
      v100 = "test.";
      while ( v97 < v96 )
      {
        v101 = v98 + 1;
        v102 = v240.m_whitelist[0].whitelistedEntry[v95 + v97];
        if ( v102 != 92 )
          v101 = v98;
        v98 = v101;
        v103 = v97 + 1;
        if ( v102 != 92 )
          v103 = v97;
        v97 = v103;
        v104 = v240.m_whitelist[0].whitelistedEntry[v95 + v103];
        if ( *v100 != v104 )
        {
          if ( v102 != 92 && v104 == 42 )
          {
            v90 = 1;
            goto LABEL_196;
          }
          goto LABEL_198;
        }
        ++v99;
        ++v100;
        ++v97;
        v90 = 1;
        if ( v99 >= v92 )
          goto LABEL_196;
      }
    }
    if ( !v90 )
    {
LABEL_199:
      if ( ++v93 >= v240.m_numWhitelistEntries )
        goto LABEL_200;
      continue;
    }
    break;
  }
LABEL_196:
  if ( v96 - v98 != v92 && v240.m_whitelist[0].whitelistedEntry[v95 + v97] != 42 )
  {
LABEL_198:
    v90 = 0;
    goto LABEL_199;
  }
LABEL_200:
  if ( !v90 )
  {
LABEL_201:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 272, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
  }
  v240.m_numWhitelistEntries = 0;
  v240.m_isWhitelistedEnabled = 0;
  if ( !OnlineDataWhitelisting::Init(&v240, "{ \"whitelist\" : [ \"test.\", \"this.is.a.test\", \"another.test.*\", \"escape.test.\\\\*\" ]}", 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 282, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  v105 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_232;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_232;
  v106 = -1i64;
  do
    ++v106;
  while ( aTest_1[v106] );
  v107 = truncate_cast<unsigned int,unsigned __int64>(v106);
  v108 = 0;
  if ( !v240.m_numWhitelistEntries )
  {
LABEL_232:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 286, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    goto LABEL_234;
  }
  while ( 2 )
  {
    v109 = -1i64;
    v110 = (unsigned __int64)v108 << 7;
    do
      ++v109;
    while ( v240.m_whitelist[0].whitelistedEntry[v110 + v109] );
    v111 = truncate_cast<unsigned int,unsigned __int64>(v109);
    v112 = 0;
    v113 = 0;
    v114 = 0;
    if ( v107 )
    {
      v115 = "test.";
      while ( v112 < v111 )
      {
        v116 = v113 + 1;
        v117 = v240.m_whitelist[0].whitelistedEntry[v110 + v112];
        if ( v117 != 92 )
          v116 = v113;
        v113 = v116;
        v118 = v112 + 1;
        if ( v117 != 92 )
          v118 = v112;
        v112 = v118;
        v119 = v240.m_whitelist[0].whitelistedEntry[v110 + v118];
        if ( *v115 != v119 )
        {
          if ( v117 != 92 && v119 == 42 )
          {
            v105 = 1;
            goto LABEL_227;
          }
          goto LABEL_229;
        }
        ++v114;
        ++v115;
        ++v112;
        v105 = 1;
        if ( v114 >= v107 )
          goto LABEL_227;
      }
    }
    if ( !v105 )
    {
LABEL_230:
      if ( ++v108 >= v240.m_numWhitelistEntries )
        goto LABEL_231;
      continue;
    }
    break;
  }
LABEL_227:
  if ( v111 - v113 != v107 && v240.m_whitelist[0].whitelistedEntry[v110 + v112] != 42 )
  {
LABEL_229:
    v105 = 0;
    goto LABEL_230;
  }
LABEL_231:
  if ( !v105 )
    goto LABEL_232;
LABEL_234:
  v120 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_260;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_260;
  v121 = -1i64;
  do
    ++v121;
  while ( aThisIsATest[v121] );
  v122 = truncate_cast<unsigned int,unsigned __int64>(v121);
  v123 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_260;
  while ( 2 )
  {
    v124 = -1i64;
    v125 = (unsigned __int64)v123 << 7;
    do
      ++v124;
    while ( v240.m_whitelist[0].whitelistedEntry[v125 + v124] );
    v126 = truncate_cast<unsigned int,unsigned __int64>(v124);
    v127 = 0;
    v128 = 0;
    v129 = 0;
    if ( v122 )
    {
      v130 = "this.is.a.test";
      while ( v127 < v126 )
      {
        v131 = v128 + 1;
        v132 = v240.m_whitelist[0].whitelistedEntry[v125 + v127];
        if ( v132 != 92 )
          v131 = v128;
        v128 = v131;
        v133 = v127 + 1;
        if ( v132 != 92 )
          v133 = v127;
        v127 = v133;
        v134 = v240.m_whitelist[0].whitelistedEntry[v125 + v133];
        if ( *v130 != v134 )
        {
          if ( v132 != 92 && v134 == 42 )
          {
            v120 = 1;
            goto LABEL_255;
          }
          goto LABEL_257;
        }
        ++v129;
        ++v130;
        ++v127;
        v120 = 1;
        if ( v129 >= v122 )
          goto LABEL_255;
      }
    }
    if ( !v120 )
    {
LABEL_258:
      if ( ++v123 >= v240.m_numWhitelistEntries )
        goto LABEL_259;
      continue;
    }
    break;
  }
LABEL_255:
  if ( v126 - v128 != v122 && v240.m_whitelist[0].whitelistedEntry[v125 + v127] != 42 )
  {
LABEL_257:
    v120 = 0;
    goto LABEL_258;
  }
LABEL_259:
  if ( !v120 )
  {
LABEL_260:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 290, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
  }
  v135 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_344;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_290;
  v136 = -1i64;
  do
    ++v136;
  while ( aThisIsA[v136] );
  v137 = truncate_cast<unsigned int,unsigned __int64>(v136);
  v138 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_290;
  while ( 2 )
  {
    v139 = -1i64;
    v140 = (unsigned __int64)v138 << 7;
    do
      ++v139;
    while ( v240.m_whitelist[0].whitelistedEntry[v140 + v139] );
    v141 = truncate_cast<unsigned int,unsigned __int64>(v139);
    v142 = 0;
    v143 = 0;
    v144 = 0;
    if ( v137 )
    {
      v145 = "this.is.a";
      while ( v142 < v141 )
      {
        v146 = v143 + 1;
        v147 = v240.m_whitelist[0].whitelistedEntry[v140 + v142];
        if ( v147 != 92 )
          v146 = v143;
        v143 = v146;
        v148 = v142 + 1;
        if ( v147 != 92 )
          v148 = v142;
        v142 = v148;
        v149 = v240.m_whitelist[0].whitelistedEntry[v140 + v148];
        if ( *v145 != v149 )
        {
          if ( v147 != 92 && v149 == 42 )
          {
            v135 = 1;
            goto LABEL_283;
          }
          goto LABEL_285;
        }
        ++v144;
        ++v145;
        ++v142;
        v135 = 1;
        if ( v144 >= v137 )
          goto LABEL_283;
      }
    }
    if ( !v135 )
    {
LABEL_286:
      if ( ++v138 >= v240.m_numWhitelistEntries )
        goto LABEL_287;
      continue;
    }
    break;
  }
LABEL_283:
  if ( v141 - v143 != v137 && v240.m_whitelist[0].whitelistedEntry[v140 + v142] != 42 )
  {
LABEL_285:
    v135 = 0;
    goto LABEL_286;
  }
LABEL_287:
  if ( v135 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 294, ASSERT_TYPE_ASSERT, "(!result)", (const char *)&queryFormat, "!result") )
    __debugbreak();
LABEL_290:
  v150 = 0;
  if ( !v240.m_isWhitelistedEnabled )
  {
LABEL_344:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 302, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    goto LABEL_346;
  }
  if ( v240.m_numWhitelistEntries )
  {
    v151 = -1i64;
    do
      ++v151;
    while ( aAnotherTest[v151] );
    v152 = truncate_cast<unsigned int,unsigned __int64>(v151);
    v153 = 0;
    if ( v240.m_numWhitelistEntries )
    {
      while ( 1 )
      {
        v154 = -1i64;
        v155 = (unsigned __int64)v153 << 7;
        do
          ++v154;
        while ( v240.m_whitelist[0].whitelistedEntry[v155 + v154] );
        v156 = truncate_cast<unsigned int,unsigned __int64>(v154);
        v157 = 0;
        v158 = 0;
        v159 = 0;
        if ( v152 )
        {
          v160 = "another.test";
          while ( v157 < v156 )
          {
            v161 = v158 + 1;
            v162 = v240.m_whitelist[0].whitelistedEntry[v155 + v157];
            if ( v162 != 92 )
              v161 = v158;
            v158 = v161;
            v163 = v157 + 1;
            if ( v162 != 92 )
              v163 = v157;
            v157 = v163;
            v164 = v240.m_whitelist[0].whitelistedEntry[v155 + v163];
            if ( *v160 != v164 )
            {
              if ( v162 != 92 && v164 == 42 )
              {
                v150 = 1;
                goto LABEL_311;
              }
              goto LABEL_313;
            }
            ++v159;
            ++v160;
            ++v157;
            v150 = 1;
            if ( v159 >= v152 )
              goto LABEL_311;
          }
        }
        if ( v150 )
        {
LABEL_311:
          if ( v156 - v158 == v152 || v240.m_whitelist[0].whitelistedEntry[v155 + v157] == 42 )
          {
LABEL_315:
            if ( v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 298, ASSERT_TYPE_ASSERT, "(!result)", (const char *)&queryFormat, "!result") )
              __debugbreak();
            break;
          }
LABEL_313:
          v150 = 0;
        }
        if ( ++v153 >= v240.m_numWhitelistEntries )
          goto LABEL_315;
      }
    }
  }
  v165 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_344;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_344;
  v166 = -1i64;
  do
    ++v166;
  while ( aAnotherTest_0[v166] );
  v167 = truncate_cast<unsigned int,unsigned __int64>(v166);
  v168 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_344;
  while ( 2 )
  {
    v169 = -1i64;
    v170 = (unsigned __int64)v168 << 7;
    do
      ++v169;
    while ( v240.m_whitelist[0].whitelistedEntry[v170 + v169] );
    v171 = truncate_cast<unsigned int,unsigned __int64>(v169);
    v172 = 0;
    v173 = 0;
    v174 = 0;
    if ( v167 )
    {
      v175 = "another.test.";
      while ( v172 < v171 )
      {
        v176 = v173 + 1;
        v177 = v240.m_whitelist[0].whitelistedEntry[v170 + v172];
        if ( v177 != 92 )
          v176 = v173;
        v173 = v176;
        v178 = v172 + 1;
        if ( v177 != 92 )
          v178 = v172;
        v172 = v178;
        v179 = v240.m_whitelist[0].whitelistedEntry[v170 + v178];
        if ( *v175 != v179 )
        {
          if ( v177 != 92 && v179 == 42 )
          {
            v165 = 1;
            goto LABEL_339;
          }
          goto LABEL_341;
        }
        ++v174;
        ++v175;
        ++v172;
        v165 = 1;
        if ( v174 >= v167 )
          goto LABEL_339;
      }
    }
    if ( !v165 )
    {
LABEL_342:
      if ( ++v168 >= v240.m_numWhitelistEntries )
        goto LABEL_343;
      continue;
    }
    break;
  }
LABEL_339:
  if ( v171 - v173 != v167 && v240.m_whitelist[0].whitelistedEntry[v170 + v172] != 42 )
  {
LABEL_341:
    v165 = 0;
    goto LABEL_342;
  }
LABEL_343:
  if ( !v165 )
    goto LABEL_344;
LABEL_346:
  v180 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_372;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_372;
  v181 = -1i64;
  do
    ++v181;
  while ( aAnotherTestChe[v181] );
  v182 = truncate_cast<unsigned int,unsigned __int64>(v181);
  v183 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_372;
  while ( 2 )
  {
    v184 = -1i64;
    v185 = (unsigned __int64)v183 << 7;
    do
      ++v184;
    while ( v240.m_whitelist[0].whitelistedEntry[v185 + v184] );
    v186 = truncate_cast<unsigned int,unsigned __int64>(v184);
    v187 = 0;
    v188 = 0;
    v189 = 0;
    if ( v182 )
    {
      v190 = "another.test.check.me";
      while ( v187 < v186 )
      {
        v191 = v188 + 1;
        v192 = v240.m_whitelist[0].whitelistedEntry[v185 + v187];
        if ( v192 != 92 )
          v191 = v188;
        v188 = v191;
        v193 = v187 + 1;
        if ( v192 != 92 )
          v193 = v187;
        v187 = v193;
        v194 = v240.m_whitelist[0].whitelistedEntry[v185 + v193];
        if ( *v190 != v194 )
        {
          if ( v192 != 92 && v194 == 42 )
          {
            v180 = 1;
            goto LABEL_367;
          }
          goto LABEL_369;
        }
        ++v189;
        ++v190;
        ++v187;
        v180 = 1;
        if ( v189 >= v182 )
          goto LABEL_367;
      }
    }
    if ( !v180 )
    {
LABEL_370:
      if ( ++v183 >= v240.m_numWhitelistEntries )
        goto LABEL_371;
      continue;
    }
    break;
  }
LABEL_367:
  if ( v186 - v188 != v182 && v240.m_whitelist[0].whitelistedEntry[v185 + v187] != 42 )
  {
LABEL_369:
    v180 = 0;
    goto LABEL_370;
  }
LABEL_371:
  if ( !v180 )
  {
LABEL_372:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 306, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
  }
  v195 = 0;
  if ( !v240.m_isWhitelistedEnabled )
  {
LABEL_428:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 314, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    goto LABEL_430;
  }
  if ( v240.m_numWhitelistEntries )
  {
    v196 = -1i64;
    do
      ++v196;
    while ( aWontMatch[v196] );
    v197 = truncate_cast<unsigned int,unsigned __int64>(v196);
    v198 = 0;
    if ( v240.m_numWhitelistEntries )
    {
      while ( 1 )
      {
        v199 = -1i64;
        v200 = (unsigned __int64)v198 << 7;
        do
          ++v199;
        while ( v240.m_whitelist[0].whitelistedEntry[v200 + v199] );
        v201 = truncate_cast<unsigned int,unsigned __int64>(v199);
        v202 = 0;
        v203 = 0;
        v204 = 0;
        if ( v197 )
        {
          v205 = "wont.match";
          while ( v202 < v201 )
          {
            v206 = v203 + 1;
            v207 = v240.m_whitelist[0].whitelistedEntry[v200 + v202];
            if ( v207 != 92 )
              v206 = v203;
            v203 = v206;
            v208 = v202 + 1;
            if ( v207 != 92 )
              v208 = v202;
            v202 = v208;
            v209 = v240.m_whitelist[0].whitelistedEntry[v200 + v208];
            if ( *v205 != v209 )
            {
              if ( v207 != 92 && v209 == 42 )
              {
                v195 = 1;
                goto LABEL_395;
              }
              goto LABEL_397;
            }
            ++v204;
            ++v205;
            ++v202;
            v195 = 1;
            if ( v204 >= v197 )
              goto LABEL_395;
          }
        }
        if ( v195 )
        {
LABEL_395:
          if ( v201 - v203 == v197 || v240.m_whitelist[0].whitelistedEntry[v200 + v202] == 42 )
          {
LABEL_399:
            if ( v195 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 310, ASSERT_TYPE_ASSERT, "(!result)", (const char *)&queryFormat, "!result") )
              __debugbreak();
            break;
          }
LABEL_397:
          v195 = 0;
        }
        if ( ++v198 >= v240.m_numWhitelistEntries )
          goto LABEL_399;
      }
    }
  }
  v210 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    goto LABEL_428;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_428;
  v211 = -1i64;
  do
    ++v211;
  while ( aEscapeTest[v211] );
  v212 = truncate_cast<unsigned int,unsigned __int64>(v211);
  v213 = 0;
  if ( !v240.m_numWhitelistEntries )
    goto LABEL_428;
  while ( 2 )
  {
    v214 = -1i64;
    v215 = (unsigned __int64)v213 << 7;
    do
      ++v214;
    while ( v240.m_whitelist[0].whitelistedEntry[v215 + v214] );
    v216 = truncate_cast<unsigned int,unsigned __int64>(v214);
    v217 = 0;
    v218 = 0;
    v219 = 0;
    if ( v212 )
    {
      v220 = "escape.test.*";
      while ( v217 < v216 )
      {
        v221 = v218 + 1;
        v222 = v240.m_whitelist[0].whitelistedEntry[v215 + v217];
        if ( v222 != 92 )
          v221 = v218;
        v218 = v221;
        v223 = v217 + 1;
        if ( v222 != 92 )
          v223 = v217;
        v217 = v223;
        v224 = v240.m_whitelist[0].whitelistedEntry[v215 + v223];
        if ( *v220 != v224 )
        {
          if ( v222 != 92 && v224 == 42 )
          {
            v210 = 1;
            goto LABEL_423;
          }
          goto LABEL_425;
        }
        ++v219;
        ++v220;
        ++v217;
        v210 = 1;
        if ( v219 >= v212 )
          goto LABEL_423;
      }
    }
    if ( !v210 )
    {
LABEL_426:
      if ( ++v213 >= v240.m_numWhitelistEntries )
        goto LABEL_427;
      continue;
    }
    break;
  }
LABEL_423:
  if ( v216 - v218 != v212 && v240.m_whitelist[0].whitelistedEntry[v215 + v217] != 42 )
  {
LABEL_425:
    v210 = 0;
    goto LABEL_426;
  }
LABEL_427:
  if ( !v210 )
    goto LABEL_428;
LABEL_430:
  v225 = 0;
  if ( !v240.m_isWhitelistedEnabled )
    return;
  if ( !v240.m_numWhitelistEntries )
    return;
  v226 = -1i64;
  do
    ++v226;
  while ( aEscapeTestFoo[v226] );
  v227 = truncate_cast<unsigned int,unsigned __int64>(v226);
  v228 = 0;
  if ( !v240.m_numWhitelistEntries )
    return;
  while ( 2 )
  {
    v229 = -1i64;
    v230 = (unsigned __int64)v228 << 7;
    do
      ++v229;
    while ( v240.m_whitelist[0].whitelistedEntry[v230 + v229] );
    v231 = truncate_cast<unsigned int,unsigned __int64>(v229);
    v232 = 0;
    v233 = 0;
    v234 = 0;
    if ( v227 )
    {
      v235 = "escape.test.*foo";
      while ( v232 < v231 )
      {
        v236 = v233 + 1;
        v237 = v240.m_whitelist[0].whitelistedEntry[v230 + v232];
        if ( v237 != 92 )
          v236 = v233;
        v233 = v236;
        v238 = v232 + 1;
        if ( v237 != 92 )
          v238 = v232;
        v232 = v238;
        v239 = v240.m_whitelist[0].whitelistedEntry[v230 + v238];
        if ( *v235 != v239 )
        {
          if ( v237 != 92 && v239 == 42 )
          {
            v225 = 1;
            goto LABEL_451;
          }
          goto LABEL_453;
        }
        ++v234;
        ++v235;
        ++v232;
        v225 = 1;
        if ( v234 >= v227 )
          goto LABEL_451;
      }
    }
    if ( !v225 )
    {
LABEL_454:
      if ( ++v228 >= v240.m_numWhitelistEntries )
        goto LABEL_455;
      continue;
    }
    break;
  }
LABEL_451:
  if ( v231 - v233 != v227 && v240.m_whitelist[0].whitelistedEntry[v230 + v232] != 42 )
  {
LABEL_453:
    v225 = 0;
    goto LABEL_454;
  }
LABEL_455:
  if ( v225 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_data_whitelisting.cpp", 318, ASSERT_TYPE_ASSERT, "(!result)", (const char *)&queryFormat, "!result") )
      __debugbreak();
  }
}

