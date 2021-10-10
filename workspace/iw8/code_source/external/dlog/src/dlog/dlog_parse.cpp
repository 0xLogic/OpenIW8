/*
==============
DLog_Parse
==============
*/

DLogSchema *__fastcall DLog_Parse(char *text)
{
  return ?DLog_Parse@@YAPEAUDLogSchema@@PEAD@Z(text);
}

/*
==============
DLog_PostLoad
==============
*/

void __fastcall DLog_PostLoad(DLogSchema *dlogSchema)
{
  ?DLog_PostLoad@@YAXPEAUDLogSchema@@@Z(dlogSchema);
}

/*
==============
DLog_AllocString
==============
*/
const char *DLog_AllocString(const char *string)
{
  __int64 v2; 
  unsigned __int64 v3; 
  void *v4; 

  v2 = -1i64;
  do
    ++v2;
  while ( string[v2] );
  v3 = v2 + 1;
  v4 = DLog_Alloc(v3);
  memset_0(v4, 0, v3);
  DLog_strcpy((char *)v4, v3, string);
  return (const char *)v4;
}

/*
==============
DLog_CalculateProtoGuid
==============
*/
unsigned __int64 DLog_CalculateProtoGuid(const Json *schema, const Json *event, unsigned __int64 seed)
{
  Json *v3; 
  Json *v4; 
  const char *v5; 
  Json *v6; 
  const char *v7; 
  unsigned __int64 v8; 
  int v9; 
  int v10; 
  char *v11; 
  Json *v12; 
  Json *v13; 
  const Json *v14; 
  int v15; 
  __int64 v16; 
  Json *v17; 
  Json *v18; 
  const char *v19; 
  Json *v20; 
  Json *v21; 
  const Json *v22; 
  Json *v23; 
  Json *v24; 
  const char *v25; 
  Json *v26; 
  Json *v27; 
  Json *v28; 
  const char *v29; 
  char v30; 
  char *v31; 
  __int64 v32; 
  char *v33; 
  signed __int64 v34; 
  int v35; 
  int v36; 
  const Json *v37; 
  const Json *v38; 
  Json *v39; 
  Json *v40; 
  const Json *v41; 
  __int64 v42; 
  Json *v43; 
  Json *v44; 
  const char *v45; 
  Json *v46; 
  Json *v47; 
  const char *v48; 
  char v49; 
  char *v50; 
  __int64 v51; 
  char *v52; 
  signed __int64 v53; 
  int v54; 
  int v55; 
  const Json *v56; 
  Json *v57; 
  Json *v58; 
  const Json *v59; 
  __int64 v60; 
  __int64 v61; 
  Json *v62; 
  const char *v63; 
  __int64 v64; 
  char *v65; 
  signed __int64 v66; 
  int v67; 
  int v68; 
  Json *v69; 
  const Json *v70; 
  const char *v71; 
  Json *v72; 
  Json *v73; 
  char *v74; 
  const Json *v75; 
  const char *v76; 
  const char *v77; 
  const Json *v78; 
  const char *v79; 
  Json *m_key; 
  const char *v81; 
  const char *v82; 
  char *v83; 
  Json *v84; 
  Json *v85; 
  Json *v86; 
  const Json *v87; 
  int v88; 
  Json *v89; 
  Json *v90; 
  const char *v91; 
  DLogType v92; 
  const char *v93; 
  Json *v94; 
  char *v95; 
  Json *v96; 
  const char *v97; 
  Json *v98; 
  Json *v99; 
  Json *v100; 
  Json *v101; 
  Json *v102; 
  Json *v103; 
  Json *v104; 
  const char *v105; 
  const Json *v106; 
  Json *v107; 
  const char *v108; 
  char *v109; 
  Json *v110; 
  Json *v111; 
  const Json *v112; 
  Json *v113; 
  const char *v114; 
  Json *v115; 
  const char *v116; 
  Json *v117; 
  const char *v118; 
  const Json *v119; 
  Json *v120; 
  Json *v121; 
  const Json *v122; 
  int v123; 
  Json *v124; 
  const char *v125; 
  DLogType v126; 
  const char *v127; 
  const char *v128; 
  Json *v129; 
  const char *v130; 
  const char *v131; 
  Json *v132; 
  const char *v133; 
  Json *v134; 
  Json *v135; 
  Json *v136; 
  Json *v137; 
  Json *v138; 
  Json *v139; 
  Json *v140; 
  unsigned __int64 v141; 
  Json *v142; 
  const char *v143; 
  const Json *v144; 
  unsigned __int64 v145; 
  __int64 v147; 
  Json v148; 
  Json v149; 
  Json v150; 
  Json v151; 
  Json *v152; 
  Json v153; 
  Json v154; 
  Json v155; 
  Json v156; 
  Json v157; 
  Json v158; 
  Json v159; 
  Json v160; 
  unsigned __int64 seeda; 
  Json v162; 
  Json v163; 
  Json v164; 
  Json v165; 
  Json v166; 
  Json v167; 
  Json v168; 
  Json v169; 
  Json v170; 
  Json result; 
  Json v172; 
  __int64 v173[18]; 
  char *name[256]; 
  char v175[256]; 
  char dest[65536]; 
  __int64 v177[8]; 

  v158.m_key = (const char *)schema;
  seeda = seed;
  v173[4] = (__int64)"bool";
  v3 = (Json *)schema;
  v152 = (Json *)event;
  v173[5] = (__int64)"float";
  v173[0] = (__int64)&queryFormat.fmt + 3;
  v173[6] = (__int64)"double";
  v4 = (Json *)event;
  v173[1] = (__int64)&queryFormat.fmt + 3;
  v173[7] = (__int64)"int32";
  v173[8] = (__int64)"int32";
  v173[9] = (__int64)"int32";
  v173[10] = (__int64)"int64";
  v173[11] = (__int64)"uint32";
  v173[12] = (__int64)"uint32";
  v173[13] = (__int64)"uint64";
  v173[14] = (__int64)"uint64";
  v173[15] = (__int64)"string";
  v173[16] = (__int64)"bytes";
  v173[2] = (__int64)&queryFormat.fmt + 3;
  v173[3] = (__int64)&queryFormat.fmt + 3;
  v5 = Json::Name((Json *)event);
  v6 = (Json *)Json::operator[](v3, &result, "project");
  v7 = Json::ToString(v6, (const char *)&queryFormat.fmt + 3);
  v8 = DLog_sprintf(dest, 0x10000ui64, "
  v9 = 0;
  v10 = 0;
  v11 = &dest[v8 + DLog_sprintf(&dest[v8], 68176 - (v8 + 2640), "syntax=\"proto2\"; ")];
  v12 = (Json *)Json::operator[](v4, &v156, "rows");
  v13 = Json::ToArray(v12, &v154);
  Json::begin(v13, &v151);
  v14 = Json::end(&v154);
  v15 = 1;
  if ( Json::operator!=(&v151, v14) )
  {
    v16 = 0i64;
    do
    {
      v17 = (Json *)Json::operator[](v3, &v156, "rows");
      v18 = (Json *)Json::operator[](&v151, &v164, "type");
      v19 = Json::ToString(v18, (const char *)&queryFormat.fmt + 3);
      Json::operator[](v17, &v150, v19);
      v20 = (Json *)Json::operator[](&v150, &v165, "columns");
      v21 = Json::ToArray(v20, &v166);
      Json::begin(v21, &v148);
      v22 = Json::end(&v155);
      if ( Json::operator!=(&v148, v22) )
      {
        do
        {
          v23 = (Json *)Json::operator[](v3, &v167, "types");
          v24 = (Json *)Json::operator[](&v148, &v168, "type");
          v25 = Json::ToString(v24, (const char *)&queryFormat.fmt + 3);
          v26 = (Json *)Json::operator[](v23, &v162, v25);
          v27 = (Json *)Json::operator[](v26, &v163, "values");
          Json::ToObject(v27, &v149);
          if ( !Json::IsUndefined(&v149) )
          {
            v28 = (Json *)Json::operator[](&v148, &v159, "type");
            v29 = Json::ToString(v28, (const char *)&queryFormat.fmt + 3);
            v30 = 0;
            v31 = (char *)v29;
            v32 = 0i64;
            if ( v16 <= 0 )
              goto LABEL_13;
            do
            {
              v33 = name[v32];
              v34 = v31 - v33;
              do
              {
                v35 = (unsigned __int8)v33[v34];
                v36 = (unsigned __int8)*v33 - v35;
                if ( v36 )
                  break;
                ++v33;
              }
              while ( v35 );
              if ( !v36 )
                v30 = 1;
              ++v32;
            }
            while ( v32 < v16 );
            if ( !v30 )
            {
LABEL_13:
              ++v10;
              name[v16++] = v31;
            }
          }
          Json::operator++(&v148, &v157);
          v37 = Json::end(&v155);
        }
        while ( Json::operator!=(&v148, v37) );
      }
      Json::operator++(&v151, &v153);
      v38 = Json::end(&v154);
    }
    while ( Json::operator!=(&v151, v38) );
    v4 = v152;
  }
  v39 = (Json *)Json::operator[](v4, &v153, "columns");
  v40 = Json::ToArray(v39, &v157);
  Json::begin(v40, &v148);
  v41 = Json::end(&v155);
  if ( Json::operator!=(&v148, v41) )
  {
    v42 = v10;
    do
    {
      v43 = (Json *)Json::operator[](v3, &v153, "types");
      v44 = (Json *)Json::operator[](&v148, &v157, "type");
      v45 = Json::ToString(v44, (const char *)&queryFormat.fmt + 3);
      v46 = (Json *)Json::operator[](v43, &v159, v45);
      Json::operator[](v46, &v154, "values");
      if ( !Json::IsUndefined(&v154) )
      {
        v47 = (Json *)Json::operator[](&v148, &v163, "type");
        v48 = Json::ToString(v47, (const char *)&queryFormat.fmt + 3);
        v49 = 0;
        v50 = (char *)v48;
        v51 = 0i64;
        if ( v42 <= 0 )
          goto LABEL_28;
        do
        {
          v52 = name[v51];
          v53 = v50 - v52;
          do
          {
            v54 = (unsigned __int8)v52[v53];
            v55 = (unsigned __int8)*v52 - v54;
            if ( v55 )
              break;
            ++v52;
          }
          while ( v54 );
          if ( !v55 )
            v49 = 1;
          ++v51;
        }
        while ( v51 < v42 );
        if ( !v49 )
        {
LABEL_28:
          ++v10;
          name[v42++] = v50;
        }
      }
      Json::operator++(&v148, &v162);
      v56 = Json::end(&v155);
    }
    while ( Json::operator!=(&v148, v56) );
    v4 = v152;
  }
  v57 = (Json *)Json::operator[](v4, &v153, "rows");
  v58 = Json::ToArray(v57, &v157);
  Json::begin(v58, &v148);
  v59 = Json::end(&v154);
  v60 = 0i64;
  if ( Json::operator!=(&v148, v59) )
  {
    v61 = 0i64;
    do
    {
      v62 = (Json *)Json::operator[](&v148, &v153, "type");
      v63 = Json::ToString(v62, (const char *)&queryFormat.fmt + 3);
      v64 = 0i64;
      if ( v61 <= 0 )
      {
LABEL_39:
        DLog_Assert((unsigned int)v9 < 0x80, "rowTypeCount < ARRAY_COUNT( rowTypes )", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_CalculateProtoGuid", 144);
        v69 = (Json *)Json::operator[](&v148, &v157, "type");
        ++v9;
        name[v61++ + 128] = (char *)Json::ToString(v69, (const char *)&queryFormat.fmt + 3);
      }
      else
      {
        while ( 1 )
        {
          v65 = name[v64 + 128];
          v66 = v63 - v65;
          do
          {
            v67 = (unsigned __int8)v65[v66];
            v68 = (unsigned __int8)*v65 - v67;
            if ( v68 )
              break;
            ++v65;
          }
          while ( v67 );
          if ( !v68 )
            break;
          if ( ++v64 >= v61 )
            goto LABEL_39;
        }
      }
      Json::operator++(&v148, &v159);
      v70 = Json::end(&v154);
    }
    while ( Json::operator!=(&v148, v70) );
  }
  if ( v10 > 0 )
  {
    do
    {
      v71 = name[v60];
      v72 = (Json *)Json::operator[](v3, &v153, "types");
      v73 = (Json *)Json::operator[](v72, &v157, v71);
      Json::operator[](v73, &v154, "values");
      v74 = &v11[DLog_sprintf(v11, (char *)v177 - v11, "message %s { enum %s_enum { ", v71, v71)];
      Json::begin(&v154, &v151);
      v75 = Json::end(&v155);
      if ( Json::operator!=(&v151, v75) )
      {
        do
        {
          v76 = Json::Name(&v151);
          v77 = Json::ToString(&v151, (const char *)&queryFormat.fmt + 3);
          v74 += DLog_sprintf(v74, (char *)v177 - v74, "%s = %s; ", v77, v76);
          Json::operator++(&v151, &v159);
          v78 = Json::end(&v155);
        }
        while ( Json::operator!=(&v151, v78) );
      }
      v11 = &v74[DLog_sprintf(v74, (char *)v177 - v74, "} } ")];
      ++v60;
    }
    while ( v60 < v10 );
  }
  v79 = "optional";
  v150.m_key = (const char *)v9;
  if ( v9 > 0 )
  {
    m_key = (Json *)v158.m_key;
    v81 = NULL;
    v149.m_key = NULL;
    do
    {
      v82 = name[(_QWORD)v81 + 128];
      v83 = &v11[DLog_sprintf(v11, (char *)v177 - v11, "message %s { ", v82)];
      v84 = (Json *)Json::operator[](m_key, &v153, "rows");
      Json::operator[](v84, &v155, v82);
      v85 = (Json *)Json::operator[](&v155, &v157, "columns");
      v86 = Json::ToArray(v85, &v159);
      Json::begin(v86, &v148);
      v87 = Json::end(&v156);
      if ( Json::operator!=(&v148, v87) )
      {
        v88 = 1;
        v89 = (Json *)v158.m_key;
        do
        {
          v90 = (Json *)Json::operator[](&v148, &v163, "type");
          v91 = Json::ToString(v90, (const char *)&queryFormat.fmt + 3);
          v92 = DLog_TypeFromString(v91);
          v93 = (char *)&queryFormat.fmt + 3;
          v94 = (Json *)Json::operator[](&v148, &v162, "count");
          if ( Json::ToUInt64(v94, 0i64) )
          {
            v93 = " [packed=true]";
            v79 = "repeated";
            if ( (unsigned __int8)(v92 - 5) > 9u )
              v93 = (char *)&queryFormat.fmt + 3;
          }
          v95 = (char *)v173[(unsigned __int8)v92];
          if ( !*v95 )
          {
            v96 = (Json *)Json::operator[](&v148, &v168, "type");
            v97 = Json::ToString(v96, (const char *)&queryFormat.fmt + 3);
            v98 = (Json *)Json::operator[](v89, &v167, "types");
            v99 = (Json *)Json::operator[](v98, &v166, v97);
            v100 = (Json *)Json::operator[](v99, &v165, "values");
            if ( Json::IsUndefined(v100) )
            {
              v101 = (Json *)Json::operator[](v89, &v164, "types");
              v102 = (Json *)Json::operator[](v101, &v170, v97);
              v103 = (Json *)Json::operator[](v102, &v169, "type");
              v95 = (char *)Json::ToString(v103, (const char *)&queryFormat.fmt + 3);
            }
            else
            {
              DLog_sprintf<256>((char (*)[256])v175, "%s.%s_enum", v97, v97);
              v95 = v175;
            }
          }
          v104 = (Json *)Json::operator[](&v148, &v172, (const char *)&stru_143C9A1A4);
          v105 = Json::ToString(v104, (const char *)&queryFormat.fmt + 3);
          LODWORD(v147) = v88;
          v83 += DLog_sprintf(v83, (char *)v177 - v83, "%s %s %s = %d%s; ", v79, v95, v105, v147, v93);
          ++v88;
          Json::operator++(&v148, &v160);
          v106 = Json::end(&v156);
          v79 = "optional";
        }
        while ( Json::operator!=(&v148, v106) );
        v81 = v149.m_key;
        v79 = "optional";
        m_key = (Json *)v158.m_key;
        v15 = 1;
      }
      ++v81;
      v11 = &v83[DLog_sprintf(v83, (char *)v177 - v83, "} ")];
      v149.m_key = v81;
    }
    while ( (__int64)v81 < (__int64)v150.m_key );
    v3 = (Json *)v158.m_key;
  }
  v107 = v152;
  v108 = Json::Name(v152);
  v109 = &v11[DLog_sprintf(v11, (char *)v177 - v11, "message %s { ", v108)];
  v110 = (Json *)Json::operator[](v107, &v160, "rows");
  v111 = Json::ToArray(v110, &v169);
  Json::begin(v111, &v149);
  v112 = Json::end(&v156);
  if ( Json::operator!=(&v149, v112) )
  {
    do
    {
      v113 = (Json *)Json::operator[](&v149, &v160, "count");
      v114 = "repeated";
      if ( !Json::ToUInt64(v113, 0i64) )
        v114 = "optional";
      v115 = (Json *)Json::operator[](&v149, &v169, (const char *)&stru_143C9A1A4);
      v116 = Json::ToString(v115, (const char *)&queryFormat.fmt + 3);
      v117 = (Json *)Json::operator[](&v149, &v170, "type");
      v118 = Json::ToString(v117, (const char *)&queryFormat.fmt + 3);
      LODWORD(v147) = v15;
      v109 += DLog_sprintf(v109, (char *)v177 - v109, "%s %s %s = %d; ", v114, v118, v116, v147);
      ++v15;
      Json::operator++(&v149, &v153);
      v119 = Json::end(&v156);
    }
    while ( Json::operator!=(&v149, v119) );
    v3 = (Json *)v158.m_key;
  }
  v120 = (Json *)Json::operator[](v107, &v160, "columns");
  v121 = Json::ToArray(v120, &v153);
  Json::begin(v121, &v150);
  v122 = Json::end(&v156);
  if ( Json::operator!=(&v150, v122) )
  {
    v123 = 0;
    do
    {
      v124 = (Json *)Json::operator[](&v150, &v160, "type");
      v125 = Json::ToString(v124, (const char *)&queryFormat.fmt + 3);
      v126 = DLog_TypeFromString(v125);
      v127 = "optional";
      v128 = (char *)&queryFormat.fmt + 3;
      v129 = (Json *)Json::operator[](&v150, &v153, "count");
      if ( Json::ToUInt64(v129, 0i64) )
      {
        v130 = " [packed=true]";
        v127 = "repeated";
        if ( (unsigned __int8)(v126 - 5) > 9u )
          v130 = (char *)&queryFormat.fmt + 3;
        v128 = v130;
      }
      v131 = (const char *)v173[(unsigned __int8)v126];
      if ( !*v131 )
      {
        v132 = (Json *)Json::operator[](&v150, &v157, "type");
        v133 = Json::ToString(v132, (const char *)&queryFormat.fmt + 3);
        v134 = (Json *)Json::operator[](v3, &v159, "types");
        v135 = (Json *)Json::operator[](v134, &v163, v133);
        v136 = (Json *)Json::operator[](v135, &v162, "values");
        if ( Json::IsUndefined(v136) )
        {
          v137 = (Json *)Json::operator[](v3, &v168, "types");
          v138 = (Json *)Json::operator[](v137, &v167, v133);
          v139 = (Json *)Json::operator[](v138, &v166, "type");
          v131 = Json::ToString(v139, (const char *)&queryFormat.fmt + 3);
        }
        else
        {
          DLog_sprintf<256>((char (*)[256])name, "%s.%s_enum", v133, v133);
          v131 = (const char *)name;
        }
      }
      v140 = (Json *)Json::operator[](v152, &v165, "rows");
      v141 = Json::Size(v140) + v123 + 1;
      v142 = (Json *)Json::operator[](&v150, &v164, (const char *)&stru_143C9A1A4);
      v143 = Json::ToString(v142, (const char *)&queryFormat.fmt + 3);
      v109 += DLog_sprintf(v109, (char *)v177 - v109, "%s %s %s = %zu%s; ", v127, v131, v143, v141, v128);
      ++v123;
      Json::operator++(&v150, &v158);
      v144 = Json::end(&v156);
    }
    while ( Json::operator!=(&v150, v144) );
  }
  v145 = DLog_sprintf(v109, (char *)v177 - v109, "}");
  return XXHash_Hash64(dest, &v109[v145] - dest, seeda);
}

/*
==============
DLog_FinalizeSchema
==============
*/
void DLog_FinalizeSchema(DLogSchema *schema)
{
  __int64 eventCount; 
  DLogHash *v2; 
  int v4; 
  __int64 v5; 
  DLogEvent *events; 
  __int64 rowCount; 
  DLogHash *v8; 
  int v9; 
  __int64 v10; 
  __int64 columnCount; 
  DLogHash *v12; 
  int v13; 
  __int64 v14; 

  eventCount = schema->eventCount;
  v2 = NULL;
  if ( (int)eventCount > 0 )
  {
    v2 = (DLogHash *)DLog_Alloc(8 * eventCount);
    LODWORD(eventCount) = schema->eventCount;
  }
  DLog_HashTableCreate(&schema->eventHashTable, v2, eventCount);
  v4 = 0;
  if ( schema->eventCount > 0 )
  {
    v5 = 0i64;
    do
    {
      events = schema->events;
      DLog_HashTableAdd(&schema->eventHashTable, events[v5].name, v4);
      rowCount = events[v5].rowCount;
      v8 = NULL;
      if ( (int)rowCount > 0 )
      {
        v8 = (DLogHash *)DLog_Alloc(8 * rowCount);
        LODWORD(rowCount) = events[v5].rowCount;
      }
      DLog_HashTableCreate(&events[v5].rowHashTable, v8, rowCount);
      v9 = 0;
      if ( events[v5].rowCount > 0 )
      {
        v10 = 0i64;
        do
          DLog_HashTableAdd(&events[v5].rowHashTable, events[v5].rows[v10++].name, v9++);
        while ( v9 < events[v5].rowCount );
      }
      DLog_HashTableSort(&events[v5].rowHashTable);
      columnCount = events[v5].columnCount;
      v12 = NULL;
      if ( (int)columnCount > 0 )
      {
        v12 = (DLogHash *)DLog_Alloc(8 * columnCount);
        LODWORD(columnCount) = events[v5].columnCount;
      }
      DLog_HashTableCreate(&events[v5].columnHashTable, v12, columnCount);
      v13 = 0;
      if ( events[v5].columnCount > 0 )
      {
        v14 = 0i64;
        do
          DLog_HashTableAdd(&events[v5].columnHashTable, events[v5].columns[v14++].name, v13++);
        while ( v13 < events[v5].columnCount );
      }
      DLog_HashTableSort(&events[v5].columnHashTable);
      ++v4;
      ++v5;
    }
    while ( v4 < schema->eventCount );
  }
  DLog_HashTableSort(&schema->eventHashTable);
}

/*
==============
DLog_Parse
==============
*/
DLogSchema *DLog_Parse(char *text)
{
  DLogSchema *v3; 
  Json *v4; 
  const char *v5; 
  Json *v6; 
  unsigned __int64 v7; 
  Json *v8; 
  const Json *v9; 
  const char *v10; 
  const char *v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  void *v14; 
  const char *v15; 
  const char *v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  void *v19; 
  const Json *v20; 
  Json *v21; 
  Json *v22; 
  Json *v23; 
  Json *v24; 
  int v25; 
  Json *v26; 
  __int64 v27; 
  Json *v28; 
  Json *v29; 
  const char *v30; 
  const char *v31; 
  __int64 v32; 
  unsigned __int64 v33; 
  void *v34; 
  DLogEnum *v35; 
  __int64 v36; 
  DLogHashTable *p_values; 
  Json *v38; 
  int v39; 
  DLogHash *v40; 
  Json *v41; 
  const char *v42; 
  int v43; 
  const char *v44; 
  Json *v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  size_t v48; 
  DLogChannel *v49; 
  const Json *v50; 
  __int64 channelCount; 
  DLogChannel *channels; 
  DLogChannel *v53; 
  const Json *v54; 
  Json *v55; 
  unsigned __int64 v56; 
  const Json *v57; 
  DLogRow *v58; 
  const Json *v59; 
  int rowCount; 
  DLogHash *v61; 
  int v62; 
  __int64 v63; 
  DLogRow *v64; 
  __int64 columnCount; 
  DLogHash *v66; 
  int v67; 
  __int64 v68; 
  Json *v69; 
  const char *v70; 
  const char *m_key; 
  DLogEvent *v72; 
  const Json *v73; 
  __int64 eventCount; 
  Json v75; 
  DLogEvent *v76; 
  int v77; 
  __int64 v78; 
  DLogRow *rows; 
  int v80; 
  __int64 v81; 
  DLogColumn *v82; 
  int i; 
  int j; 
  int channelRefCount; 
  char requireSchema; 
  __int64 v87; 
  DLogChannelRef *channelRefs; 
  const DLogChannel *channel; 
  const Json *v90; 
  bool v91; 
  const char *v92; 
  char *v93; 
  int v94; 
  __int64 *v95; 
  __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102; 
  Json *v103; 
  const char **v104; 
  Json *v105; 
  Json *v106; 
  const char *v107; 
  unsigned __int64 v108; 
  Json *v109; 
  unsigned __int64 v110; 
  Json rhs; 
  Json v112; 
  Json result; 
  Json v114; 
  int v115; 
  Json v116; 
  Json v117; 
  const char **v118; 
  Json v119; 
  Json v120; 
  Json v121; 
  char *value; 
  Json v123; 
  Json v124; 
  Json v125; 
  Json v126; 
  Json v127; 
  DLogEvent v128; 
  Json v129; 
  Json v130; 
  Json v131; 
  Json v132; 
  Json v133; 
  char error[256]; 

  Json::Json(&v114);
  if ( Json::Parse(&v114, text, error, 256) )
  {
    v118 = (const char **)DLog_Alloc(0x58ui64);
    v3 = (DLogSchema *)v118;
    memset_0(v118, 0, 0x58ui64);
    v4 = (Json *)Json::operator[](&v114, &result, "project");
    v5 = Json::ToString(v4, (const char *)&queryFormat.fmt + 3);
    v3->project = DLog_AllocString(v5);
    v6 = (Json *)Json::operator[](&v114, &result, "vars");
    v7 = Json::Size(v6);
    v3->vars = (DLogVar *)DLog_Alloc(16 * v7);
    v8 = (Json *)Json::operator[](&v114, &result, "vars");
    Json::begin(v8, &v112);
    v9 = Json::end(&v116);
    if ( Json::operator!=(&v112, v9) )
    {
      do
      {
        v10 = Json::Name(&v112);
        v11 = v10;
        v12 = -1i64;
        do
          ++v12;
        while ( v10[v12] );
        v13 = v12 + 1;
        v14 = DLog_Alloc(v13);
        memset_0(v14, 0, v13);
        DLog_strcpy((char *)v14, v13, v11);
        v3->vars[v3->varCount].name = (const char *)v14;
        v15 = Json::ToString(&v112, (const char *)&queryFormat.fmt + 3);
        v16 = v15;
        v17 = -1i64;
        do
          ++v17;
        while ( v15[v17] );
        v18 = v17 + 1;
        v19 = DLog_Alloc(v18);
        memset_0(v19, 0, v18);
        DLog_strcpy((char *)v19, v18, v16);
        v3->vars[v3->varCount++].value = (const char *)v19;
        Json::operator++(&v112, &result);
        v20 = Json::end(&v116);
      }
      while ( Json::operator!=(&v112, v20) );
    }
    v21 = (Json *)Json::operator[](&v114, &result, "guid_seed");
    if ( Json::GetString(v21, (const char **)&value) )
      v3->guidSeed = strtoull(value, (char **)&v112, 16);
    Json::operator[](&v114, &v127, "types");
    s_enumCount = 0;
    v22 = (Json *)Json::operator[](&v114, &result, "types");
    Json::ToObject(v22, &v116);
    Json::begin(&v116, &v112);
    Json::end(&rhs);
    while ( Json::operator!=(&v112, &rhs) )
    {
      v121 = *Json::operator*(&v112);
      v23 = (Json *)Json::operator[](&v121, &result, "values");
      v24 = Json::ToObject(v23, &v117);
      if ( !Json::IsUndefined(v24) )
        ++s_enumCount;
      Json::operator++(&v112, &v126);
    }
    s_enums = (DLogEnum *)DLog_Alloc(24i64 * s_enumCount);
    memset_0(s_enums, 0, 24i64 * s_enumCount);
    v25 = 0;
    v26 = (Json *)Json::operator[](&v114, &result, "types");
    Json::ToObject(v26, &v117);
    Json::begin(&v117, &rhs);
    Json::end(&v116);
    if ( Json::operator!=(&rhs, &v116) )
    {
      v27 = 0i64;
      do
      {
        v112 = *Json::operator*(&rhs);
        v28 = (Json *)Json::operator[](&v112, &v133, "values");
        v29 = Json::ToObject(v28, &v129);
        if ( !Json::IsUndefined(v29) )
        {
          DLog_Assert(v25 < s_enumCount, "enumIndex < s_enumCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_Parse", 1065);
          if ( v25 < s_enumCount )
          {
            v30 = Json::Name(&v112);
            v31 = v30;
            v32 = -1i64;
            do
              ++v32;
            while ( v30[v32] );
            v33 = v32 + 1;
            v34 = DLog_Alloc(v33);
            memset_0(v34, 0, v33);
            DLog_strcpy((char *)v34, v33, v31);
            v35 = s_enums;
            v36 = v25++;
            s_enums[v27++].name = (const char *)v34;
            p_values = &v35[v36].values;
            v38 = (Json *)Json::operator[](&v112, &v130, "values");
            v39 = Json::Size(v38);
            v40 = (DLogHash *)DLog_Alloc(8i64 * v39);
            memset_0(v40, 0, 8i64 * v39);
            DLog_HashTableCreate(p_values, v40, v39);
            v41 = (Json *)Json::operator[](&v112, &v131, "values");
            Json::ToObject(v41, &result);
            Json::begin(&result, &v120);
            Json::end(&v121);
            while ( Json::operator!=(&v120, &v121) )
            {
              v126 = *Json::operator*(&v120);
              v42 = Json::Name(&v126);
              v43 = atoi(v42);
              v44 = Json::ToString(&v126, (const char *)&queryFormat.fmt + 3);
              DLog_HashTableAdd(p_values, v44, v43);
              Json::operator++(&v120, &v132);
            }
            DLog_HashTableSort(p_values);
          }
        }
        Json::operator++(&rhs, &v119);
      }
      while ( Json::operator!=(&rhs, &v116) );
    }
    Json::Json(&v123);
    v45 = (Json *)Json::operator[](&v114, &v119, "channels");
    if ( !Json::GetObject(v45, &v123) )
      DLog_PrintError("Schema required field 'channels' not found\n");
    v46 = Json::Size(&v123);
    v47 = v46;
    if ( v46 )
    {
      v48 = 72 * v46;
      v49 = (DLogChannel *)DLog_Alloc(72 * v46);
      v3->channels = v49;
      memset_0(v49, 0, v48);
      Json::begin(&v123, &rhs);
      v50 = Json::end(&v117);
      if ( Json::operator!=(&rhs, v50) )
      {
        do
        {
          DLog_Assert(v3->channelCount < v47, "schemaRoot->channelCount < jsonChannelCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_Parse", 1102);
          channelCount = v3->channelCount;
          channels = v3->channels;
          result = rhs;
          v53 = &channels[channelCount];
          v3->channelCount = channelCount + 1;
          if ( !DLog_ParseChannel(&result, v53) )
          {
            DLog_Free((void *)v53->name);
            DLog_Free(v53->serializers);
            DLog_Free(v53->postSerializers);
            v53->name = NULL;
            v53->serializers = NULL;
            *(_QWORD *)&v53->serializerCount = 0i64;
            v53->postSerializers = NULL;
            *(_QWORD *)&v53->postSerializerCount = 0i64;
            v53->endpoint = NULL;
            *(_QWORD *)&v53->bufferSize = 0i64;
            *(_QWORD *)&v53->bufferFlushSize = 0i64;
            *(_QWORD *)&v53->platforms = 0i64;
            --v3->channelCount;
          }
          Json::operator++(&rhs, &v119);
          v54 = Json::end(&v117);
        }
        while ( Json::operator!=(&rhs, v54) );
      }
    }
    Json::Json(&v124);
    v55 = (Json *)Json::operator[](&v114, &v119, "rows");
    if ( !Json::GetObject(v55, &v124) )
      DLog_PrintError("Schema required field 'rows' not found\n");
    v56 = Json::Size(&v124);
    memset_0(&v128, 0, sizeof(v128));
    if ( v56 )
    {
      v128.rows = (DLogRow *)DLog_Alloc(88 * v56);
      memset_0(v128.rows, 0, 88 * v56);
      Json::begin(&v124, &rhs);
      v57 = Json::end(&v116);
      if ( Json::operator!=(&rhs, v57) )
      {
        do
        {
          DLog_Assert(v128.rowCount < v56, "dlogRows.rowCount < jsonRowCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_Parse", 1131);
          v58 = &v128.rows[v128.rowCount++];
          result = v127;
          v117 = rhs;
          if ( !DLog_ParseRow(&v117, &result, v58) )
          {
            DLog_Free(v58);
            --v128.rowCount;
          }
          Json::operator++(&rhs, &v119);
          v59 = Json::end(&v116);
        }
        while ( Json::operator!=(&rhs, v59) );
      }
    }
    rowCount = v128.rowCount;
    v61 = NULL;
    if ( v128.rowCount > 0 )
    {
      v61 = (DLogHash *)DLog_Alloc(8i64 * v128.rowCount);
      rowCount = v128.rowCount;
    }
    DLog_HashTableCreate(&v128.rowHashTable, v61, rowCount);
    v62 = 0;
    if ( v128.rowCount > 0 )
    {
      v63 = 0i64;
      do
      {
        v64 = &v128.rows[v63];
        DLog_HashTableAdd(&v128.rowHashTable, v128.rows[v63].type, v62);
        columnCount = v64->columnCount;
        v66 = NULL;
        if ( (int)columnCount > 0 )
        {
          v66 = (DLogHash *)DLog_Alloc(8 * columnCount);
          LODWORD(columnCount) = v64->columnCount;
        }
        DLog_HashTableCreate(&v64->columnHashTable, v66, columnCount);
        v67 = 0;
        if ( v64->columnCount > 0 )
        {
          v68 = 0i64;
          do
            DLog_HashTableAdd(&v64->columnHashTable, v64->columns[v68++].name, v67++);
          while ( v67 < v64->columnCount );
        }
        DLog_HashTableSort(&v64->columnHashTable);
        ++v62;
        ++v63;
      }
      while ( v62 < v128.rowCount );
    }
    DLog_HashTableSort(&v128.rowHashTable);
    Json::Json(&v125);
    v69 = (Json *)Json::operator[](&v114, &v119, "events");
    if ( !Json::GetObject(v69, &v125) )
      DLog_PrintError("Schema required field 'events' not found\n");
    v70 = (const char *)Json::Size(&v125);
    v112.m_key = v70;
    m_key = v70;
    if ( v70 )
    {
      v72 = (DLogEvent *)DLog_Alloc(112i64 * (_QWORD)v70);
      v3->events = v72;
      memset_0(v72, 0, 112i64 * (_QWORD)m_key);
      Json::begin(&v125, &rhs);
      v73 = Json::end(&v116);
      if ( Json::operator!=(&rhs, v73) )
      {
        do
        {
          DLog_Assert(v3->eventCount < (unsigned __int64)m_key, "schemaRoot->eventCount < jsonEventCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_Parse", 1159);
          eventCount = v3->eventCount;
          v75 = rhs;
          v76 = &v3->events[eventCount];
          v3->eventCount = eventCount + 1;
          result = v127;
          v117 = v75;
          if ( DLog_ParseEvent(&v117, v3, &v128, &result, v76) )
          {
            channelRefCount = v76->channelRefCount;
            if ( channelRefCount > 0 )
            {
              requireSchema = v76->requireSchema;
              v87 = (unsigned int)channelRefCount;
              channelRefs = v76->channelRefs;
              do
              {
                channel = channelRefs->channel;
                ++channelRefs;
                requireSchema |= channel->requireSchema;
                v76->requireSchema = requireSchema;
                --v87;
              }
              while ( v87 );
            }
          }
          else
          {
            DLog_Free((void *)v76->name);
            v77 = 0;
            if ( v76->rowCount > 0 )
            {
              v78 = 0i64;
              do
              {
                rows = v76->rows;
                DLog_Free((void *)rows[v78].name);
                DLog_Free((void *)rows[v78].type);
                v80 = 0;
                if ( rows[v78].columnCount > 0 )
                {
                  v81 = 0i64;
                  do
                  {
                    v82 = &rows[v78].columns[v81];
                    DLog_Free((void *)v82->name);
                    ++v80;
                    v82->name = NULL;
                    ++v81;
                    *(_QWORD *)&v82->type = 0i64;
                    *(_QWORD *)&v82->arrayCount = 0i64;
                    v82->enumRef = NULL;
                  }
                  while ( v80 < rows[v78].columnCount );
                }
                DLog_Free(rows[v78].columns);
                ++v77;
                rows[v78].name = NULL;
                rows[v78].type = NULL;
                rows[v78].columns = NULL;
                *(_QWORD *)&rows[v78].columnCount = 0i64;
                rows[v78].columnHashTable.list = NULL;
                *(_QWORD *)&rows[v78].columnHashTable.count = 0i64;
                rows[v78++].autoFill = NULL;
              }
              while ( v77 < v76->rowCount );
              m_key = v112.m_key;
            }
            for ( i = 0; i < v76->columnCount; ++i )
              DLog_Free(&v76->columns[i]);
            for ( j = 0; j < v76->channelRefCount; ++j )
              DLog_Free(&v76->channelRefs[j]);
            DLog_Free(v76->rows);
            DLog_Free(v76->columns);
            DLog_Free(v76->channelRefs);
            memset_0(v76, 0, sizeof(DLogEvent));
            v3 = (DLogSchema *)v118;
            --*((_DWORD *)v118 + 16);
          }
          Json::operator++(&rhs, &v119);
          v90 = Json::end(&v116);
        }
        while ( Json::operator!=(&rhs, v90) );
      }
    }
    DLog_FinalizeSchema(v3);
    DLog_Free(v128.rows);
    v91 = v3->eventCount <= 0;
    v115 = 0;
    if ( !v91 )
    {
      v92 = NULL;
      v112.m_key = NULL;
      do
      {
        v93 = (char *)&v92[(unsigned __int64)v3->events];
        v94 = 0;
        v118 = (const char **)v93;
        if ( *((int *)v93 + 20) > 0 )
        {
          v95 = (__int64 *)*((_QWORD *)v93 + 9);
          while ( 1 )
          {
            v96 = *v95;
            v97 = 0i64;
            if ( *(int *)(*v95 + 16) > 0 )
              break;
LABEL_78:
            v100 = 0i64;
            if ( *(int *)(v96 + 32) > 0 )
            {
              v101 = *(_QWORD *)(v96 + 24);
              v102 = *(int *)(v96 + 32);
              while ( strcmp_0(*(const char **)(*(_QWORD *)v101 + 8i64), "protobuf") )
              {
                ++v100;
                v101 += 8i64;
                if ( v100 >= v102 )
                  goto LABEL_82;
              }
              goto LABEL_84;
            }
LABEL_82:
            ++v94;
            v95 += 3;
            if ( v94 >= *((_DWORD *)v118 + 20) )
              goto LABEL_86;
          }
          v98 = *(_QWORD *)(v96 + 8);
          v99 = *(int *)(*v95 + 16);
          while ( strcmp_0(*(const char **)(*(_QWORD *)v98 + 8i64), "protobuf") )
          {
            ++v97;
            v98 += 8i64;
            if ( v97 >= v99 )
              goto LABEL_78;
          }
LABEL_84:
          v103 = (Json *)Json::operator[](&v114, &v119, "events");
          v104 = v118;
          v105 = (Json *)Json::operator[](v103, &v132, *v118);
          v106 = (Json *)Json::operator[](v105, &v131, "guid");
          v107 = Json::ToString(v106, (const char *)&queryFormat.fmt + 3);
          v108 = strtoull(v107, NULL, 16);
          v109 = (Json *)Json::operator[](&v114, &v130, "events");
          result = *Json::operator[](v109, &v129, *v104);
          v117 = v114;
          v110 = DLog_CalculateProtoGuid(&v117, &result, 0i64);
          v104[13] = (const char *)v110;
          if ( v110 != v108 )
            DLog_PrintWarning("Event %s calculated guid %016zx != generated guid %016zx!  Guid calculation logic may have changed, please run game/bin/dlog_generate.bat to regenerate DLog schema!\n", *v104, v110, v108);
        }
LABEL_86:
        v92 = v112.m_key + 112;
        ++v115;
        v112.m_key += 112;
      }
      while ( v115 < v3->eventCount );
    }
    return v3;
  }
  else
  {
    DLog_PrintError("DLog_ParseSchema failed: %s\n", error);
    return 0i64;
  }
}

/*
==============
DLog_ParseChannel
==============
*/
char DLog_ParseChannel(Json *jsonChannel, DLogChannel *channel)
{
  const char *v4; 
  Json *v5; 
  __int64 bufferSize; 
  Json *v8; 
  Json *v9; 
  Json *v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  size_t v13; 
  const DLogSerializer **v14; 
  const Json *v15; 
  const DLogSerializer *v16; 
  const char *v17; 
  const Json *v18; 
  Json *v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  size_t v22; 
  const DLogSerializer **v23; 
  const Json *v24; 
  const DLogSerializer *v25; 
  const char *v26; 
  const Json *v27; 
  Json *v28; 
  const DLogEndpoint *v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  void *v32; 
  Json *v33; 
  const Json *v34; 
  const char *m_key; 
  unsigned int v36; 
  const char **v37; 
  const Json *v38; 
  Json *v39; 
  const Json *v40; 
  const char *v41; 
  unsigned int v42; 
  const char **v43; 
  const Json *v44; 
  Json v45; 
  Json v46; 
  Json result; 
  Json value; 
  Json v49; 
  Json v50; 
  Json v51; 
  Json v52; 
  char src[128]; 

  channel->name = NULL;
  channel->serializers = NULL;
  *(_QWORD *)&channel->serializerCount = 0i64;
  channel->postSerializers = NULL;
  *(_QWORD *)&channel->postSerializerCount = 0i64;
  channel->endpoint = NULL;
  *(_QWORD *)&channel->bufferSize = 0i64;
  *(_QWORD *)&channel->bufferFlushSize = 0i64;
  *(_QWORD *)&channel->platforms = 0i64;
  v4 = Json::Name(jsonChannel);
  channel->name = DLog_AllocString(v4);
  channel->requireSchema = 0;
  v5 = (Json *)Json::operator[](jsonChannel, &result, "buffer_size");
  if ( Json::GetInt32(v5, &channel->bufferSize) )
  {
    bufferSize = (unsigned int)channel->bufferSize;
    if ( (int)bufferSize <= 0x40000 )
    {
      v8 = (Json *)Json::operator[](jsonChannel, &result, "buffer_flush_size");
      if ( !Json::GetInt32(v8, &channel->bufferFlushSize) )
        channel->bufferFlushSize = channel->bufferSize;
      channel->bufferTimeMilliseconds = 0;
      v9 = (Json *)Json::operator[](jsonChannel, &result, "buffer_time");
      Json::GetInt32(v9, &channel->bufferTimeMilliseconds);
      Json::Json(&value);
      v10 = (Json *)Json::operator[](jsonChannel, &result, "serializer");
      if ( Json::GetArray(v10, &value) )
      {
        v11 = Json::Size(&value);
        v12 = v11;
        if ( v11 )
        {
          v13 = 8 * v11;
          v14 = (const DLogSerializer **)DLog_Alloc(8 * v11);
          channel->serializers = v14;
          memset_0(v14, 0, v13);
          Json::begin(&value, &v45);
          v15 = Json::end(&v46);
          if ( Json::operator!=(&v45, v15) )
          {
            do
            {
              v16 = (const DLogSerializer *)DLog_Alloc(0x18ui64);
              *(_QWORD *)&v16->requireSchema = 0i64;
              v16->name = NULL;
              v16->serialize = NULL;
              v17 = Json::ToString(&v45, (const char *)&queryFormat.fmt + 3);
              v16->name = DLog_AllocString(v17);
              DLog_Assert(channel->serializerCount < v12, "channel->serializerCount < jsonSerializerCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseChannel", 585);
              channel->serializers[channel->serializerCount++] = v16;
              Json::operator++(&v45, &result);
              v18 = Json::end(&v46);
            }
            while ( Json::operator!=(&v45, v18) );
          }
        }
      }
      Json::Json(&v49);
      v19 = (Json *)Json::operator[](jsonChannel, &result, "post_serializer");
      if ( Json::GetArray(v19, &v49) )
      {
        v20 = Json::Size(&v49);
        v21 = v20;
        if ( v20 )
        {
          v22 = 8 * v20;
          v23 = (const DLogSerializer **)DLog_Alloc(8 * v20);
          channel->postSerializers = v23;
          memset_0(v23, 0, v22);
          Json::begin(&v49, &v45);
          v24 = Json::end(&v46);
          if ( Json::operator!=(&v45, v24) )
          {
            do
            {
              v25 = (const DLogSerializer *)DLog_Alloc(0x18ui64);
              *(_QWORD *)&v25->requireSchema = 0i64;
              v25->name = NULL;
              v25->serialize = NULL;
              v26 = Json::ToString(&v45, (const char *)&queryFormat.fmt + 3);
              v25->name = DLog_AllocString(v26);
              DLog_Assert(channel->postSerializerCount < v21, "channel->postSerializerCount < jsonPostSerializerCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseChannel", 605);
              channel->postSerializers[channel->postSerializerCount++] = v25;
              Json::operator++(&v45, &result);
              v27 = Json::end(&v46);
            }
            while ( Json::operator!=(&v45, v27) );
          }
        }
      }
      v28 = (Json *)Json::operator[](jsonChannel, &result, "endpoint");
      if ( Json::GetString(v28, src, 0x80ui64) )
      {
        v29 = (const DLogEndpoint *)DLog_Alloc(0x18ui64);
        v30 = -1i64;
        *(_QWORD *)&v29->requireSchema = 0i64;
        v29->name = NULL;
        v29->endpoint = NULL;
        do
          ++v30;
        while ( src[v30] );
        v31 = v30 + 1;
        v32 = DLog_Alloc(v31);
        memset_0(v32, 0, v31);
        DLog_strcpy((char *)v32, v31, src);
        v29->name = (const char *)v32;
        channel->endpoint = v29;
        Json::Json(&v50);
        channel->platforms = -1;
        v33 = (Json *)Json::operator[](jsonChannel, &result, "platforms");
        if ( Json::GetArray(v33, &v50) )
        {
          channel->platforms = 0;
          Json::begin(&v50, &v46);
          v34 = Json::end(&result);
          if ( Json::operator!=(&v46, v34) )
          {
            do
            {
              if ( Json::GetString(&v46, &v45.m_key) )
              {
                m_key = v45.m_key;
                DLog_Assert(v45.m_key != NULL, (const char *)&stru_143C9A1A4, "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_PlatformFromString", 438);
                DLog_Assert(1, "platform", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_PlatformFromString", 439);
                if ( m_key )
                {
                  v36 = 0;
                  v37 = (const char **)off_148741170;
                  while ( strcmp(m_key, *v37) )
                  {
                    ++v36;
                    ++v37;
                    if ( v36 >= 3 )
                      goto LABEL_27;
                  }
                  channel->platforms |= 1 << v36;
                }
                else
                {
LABEL_27:
                  DLog_PrintError("Channel '%s' field 'platform' value '%s' is invalid\n", channel->name, v45.m_key);
                }
              }
              else
              {
                DLog_PrintError("Channel '%s' field 'platform' value is not a string\n", channel->name);
              }
              Json::operator++(&v46, &v52);
              v38 = Json::end(&result);
            }
            while ( Json::operator!=(&v46, v38) );
          }
        }
        Json::Json(&v51);
        channel->envs = -1;
        v39 = (Json *)Json::operator[](jsonChannel, &v52, "envs");
        if ( Json::GetArray(v39, &v51) )
        {
          channel->envs = 0;
          Json::begin(&v51, &v46);
          v40 = Json::end(&result);
          if ( Json::operator!=(&v46, v40) )
          {
            do
            {
              if ( Json::GetString(&v46, &v45.m_key) )
              {
                v41 = v45.m_key;
                DLog_Assert(v45.m_key != NULL, (const char *)&stru_143C9A1A4, "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_EnvFromString", 467);
                DLog_Assert(1, "env", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_EnvFromString", 468);
                if ( v41 )
                {
                  v42 = 0;
                  v43 = (const char **)off_148741190;
                  while ( strcmp(v41, *v43) )
                  {
                    ++v42;
                    ++v43;
                    if ( v42 >= 3 )
                      goto LABEL_38;
                  }
                  channel->envs |= 1 << v42;
                }
                else
                {
LABEL_38:
                  DLog_PrintError("Channel '%s' field 'envs' value '%s' is invalid\n", channel->name, v45.m_key);
                }
              }
              else
              {
                DLog_PrintError("Channel '%s' field 'envs' value is not a string\n", channel->name);
              }
              Json::operator++(&v46, &v52);
              v44 = Json::end(&result);
            }
            while ( Json::operator!=(&v46, v44) );
          }
        }
        return 1;
      }
      else
      {
        DLog_PrintError("Channel '%s' required field 'endpoint' not found\n", channel->name);
        return 0;
      }
    }
    else
    {
      DLog_PrintError("Channel '%s' field 'buffer_size' value '%d' larger than DLOG_MAX_BUFFER_SIZE %d\n", channel->name, bufferSize, 0x40000i64);
      return 0;
    }
  }
  else
  {
    DLog_PrintError("Channel '%s' required field 'buffer_size' not found\n", channel->name);
    return 0;
  }
}

/*
==============
DLog_ParseChannelRef
==============
*/
char DLog_ParseChannelRef(Json *jsonChannel, const DLogSchema *schemaRoot, DLogChannelRef *channelRef)
{
  int v3; 
  __int64 v7; 
  DLogChannel *channels; 
  const char *v9; 
  signed __int64 v10; 
  int v11; 
  int v12; 
  const char *v13; 
  DLogSample *sample; 
  Json *v16; 
  const char **v17; 
  unsigned int v18; 
  const char *v19; 
  Json *v20; 
  const char *m_key; 
  int v22; 
  Json *v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  void *v26; 
  Json result; 
  Json value; 
  Json v29; 
  __int64 v30[4]; 
  char src[128]; 

  v3 = 0;
  channelRef->channel = NULL;
  channelRef->categoryName = NULL;
  *(_QWORD *)channelRef->sample = 0i64;
  if ( schemaRoot->channelCount <= 0 )
  {
LABEL_8:
    v13 = Json::Name(jsonChannel);
    DLog_PrintError("ChannelRef channel '%s' not found\n", v13);
    return 0;
  }
  else
  {
    v7 = 0i64;
    while ( 1 )
    {
      channels = schemaRoot->channels;
      v9 = Json::Name(jsonChannel);
      v10 = channels[v7].name - v9;
      do
      {
        v11 = (unsigned __int8)v9[v10];
        v12 = *(unsigned __int8 *)v9 - v11;
        if ( v12 )
          break;
        ++v9;
      }
      while ( v11 );
      if ( !v12 )
        break;
      ++v3;
      ++v7;
      if ( v3 >= schemaRoot->channelCount )
        goto LABEL_8;
    }
    sample = channelRef->sample;
    channelRef->channel = &schemaRoot->channels[v3];
    channelRef->sample[0] = DLOG_SAMPLE_ALL;
    *(_WORD *)&channelRef->sample[1] = 514;
    Json::Json(&value);
    v16 = (Json *)Json::operator[](jsonChannel, &result, "sample");
    if ( Json::GetObject(v16, &value) )
    {
      v30[0] = (__int64)"dev";
      v17 = (const char **)v30;
      v18 = 0;
      v30[1] = (__int64)"cert";
      v30[2] = (__int64)"prod";
      do
      {
        v19 = *v17;
        *sample = DLOG_SAMPLE_NONE;
        v20 = (Json *)Json::operator[](&value, &v29, v19);
        if ( Json::GetString(v20, &result.m_key) )
        {
          m_key = result.m_key;
          DLog_Assert(result.m_key != NULL, (const char *)&stru_143C9A1A4, "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_SampleFromString", 409);
          DLog_Assert(sample != NULL, "sample", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_SampleFromString", 410);
          if ( m_key && sample )
          {
            v22 = 0;
            while ( strcmp(m_key, off_148741150[v22]) )
            {
              if ( (unsigned int)++v22 >= 3 )
                goto LABEL_17;
            }
            *sample = v22;
          }
          else
          {
LABEL_17:
            DLog_PrintError("ChannelRef '%s' field 'sample' value '%s' is invalid\n", channelRef->channel->name, result.m_key);
          }
        }
        ++v18;
        ++v17;
        ++sample;
      }
      while ( v18 < 3 );
    }
    v23 = (Json *)Json::operator[](jsonChannel, &v29, "category");
    if ( Json::GetString(v23, src, 0x80ui64) )
    {
      v24 = -1i64;
      do
        ++v24;
      while ( src[v24] );
      v25 = v24 + 1;
      v26 = DLog_Alloc(v25);
      memset_0(v26, 0, v25);
      DLog_strcpy((char *)v26, v25, src);
      channelRef->categoryName = (const char *)v26;
    }
    return 1;
  }
}

/*
==============
DLog_ParseColumn
==============
*/
char DLog_ParseColumn(Json *jsonColumn, Json *jsonTypes, DLogColumn *column)
{
  Json *v6; 
  __int64 v8; 
  unsigned __int64 v9; 
  void *v10; 
  Json *v11; 
  Json *v12; 
  int v13; 
  const char *v14; 
  Json *v15; 
  Json *v16; 
  Json *v17; 
  Json *v18; 
  int v19; 
  __int64 v20; 
  Json *v21; 
  const char *v22; 
  const char *name; 
  signed __int64 v24; 
  int v25; 
  int v26; 
  Json result; 
  Json v28; 
  char type[128]; 
  char value[128]; 

  column->name = NULL;
  *(_QWORD *)&column->type = 0i64;
  *(_QWORD *)&column->arrayCount = 0i64;
  column->enumRef = NULL;
  v6 = (Json *)Json::operator[](jsonColumn, &result, (const char *)&stru_143C9A1A4);
  if ( !Json::GetString(v6, value, 0x80ui64) )
  {
    DLog_PrintError("Column required field 'name' not found\n");
    return 0;
  }
  v8 = -1i64;
  do
    ++v8;
  while ( value[v8] );
  v9 = v8 + 1;
  v10 = DLog_Alloc(v9);
  memset_0(v10, 0, v9);
  DLog_strcpy((char *)v10, v9, value);
  column->name = (const char *)v10;
  v11 = (Json *)Json::operator[](jsonColumn, &result, "type");
  if ( !Json::GetString(v11, type, 0x80ui64) )
  {
    DLog_PrintError("Column '%s' required field 'type' not found\n", column->name);
    return 0;
  }
  column->type = (unsigned __int8)DLog_TypeFromString(type);
  v12 = (Json *)Json::operator[](jsonColumn, &result, "size");
  if ( Json::GetInt32(v12, &column->stringSize) )
  {
    v13 = column->type;
    if ( (unsigned int)(v13 - 15) > 1 )
    {
      v14 = DLog_TypeToString((DLogType)v13);
      DLog_PrintError("Column '%s' of type '%s' has a 'size' which is only valid 'string' or 'bytes'\n", column->name, v14);
      return 0;
    }
  }
  v15 = (Json *)Json::operator[](jsonColumn, &result, "count");
  Json::GetInt32(v15, &column->arrayCount);
  if ( !column->type )
  {
    Json::Json(&result);
    v16 = (Json *)Json::operator[](jsonTypes, &v28, type);
    if ( !Json::GetObject(v16, &result) )
    {
      DLog_PrintError("Column '%s' field 'type' value '%s' is not a builtin, user or dim type\n", column->name, type);
      return 0;
    }
    v17 = (Json *)Json::operator[](&result, &v28, "type");
    Json::GetString(v17, type, 0x80ui64);
    column->type = (unsigned __int8)DLog_TypeFromString(type);
    v18 = (Json *)Json::operator[](&result, &v28, "size");
    Json::GetInt32(v18, &column->stringSize);
    v19 = 0;
    if ( s_enumCount > 0 )
    {
      v20 = 0i64;
      do
      {
        v21 = (Json *)Json::operator[](jsonColumn, &v28, "type");
        v22 = Json::ToString(v21, (const char *)&queryFormat.fmt + 3);
        name = s_enums[v20].name;
        v24 = v22 - name;
        do
        {
          v25 = (unsigned __int8)name[v24];
          v26 = *(unsigned __int8 *)name - v25;
          if ( v26 )
            break;
          ++name;
        }
        while ( v25 );
        if ( !v26 )
          column->enumRef = &s_enums[v19];
        ++v19;
        ++v20;
      }
      while ( v19 < s_enumCount );
    }
  }
  return 1;
}

/*
==============
DLog_ParseEvent
==============
*/
char DLog_ParseEvent(Json *jsonEvent, const DLogSchema *schemaRoot, const DLogEvent *dlogRows, Json *jsonTypes, DLogEvent *event)
{
  const DLogSchema *v5; 
  Json *v6; 
  Json *m_key; 
  const char *v9; 
  Json *v10; 
  int v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  DLogRow *v14; 
  const Json *v15; 
  __int64 rowCount; 
  DLogRow *v17; 
  Json *v18; 
  Json *v19; 
  Json *v20; 
  int v21; 
  __int64 v22; 
  DLogRow *rows; 
  const char **p_type; 
  const char *v25; 
  int v26; 
  int v27; 
  const Json *v28; 
  Json *v29; 
  unsigned __int64 v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  DLogColumn *v33; 
  const Json *v34; 
  Json v35; 
  Json v36; 
  DLogColumn *v37; 
  const Json *v38; 
  DLogSampleGroup *p_sampleGroup; 
  Json *v40; 
  Json *v41; 
  Json *v42; 
  DLogRow *v43; 
  __int64 v44; 
  unsigned __int64 v45; 
  void *v46; 
  const char *v47; 
  Json *v48; 
  Json *v50; 
  Json *v51; 
  unsigned __int64 v54; 
  unsigned __int64 v55; 
  size_t v56; 
  DLogChannelRef *v57; 
  const Json *v58; 
  __int64 channelRefCount; 
  DLogChannelRef *channelRefs; 
  DLogChannelRef *v61; 
  const char *v62; 
  const Json *v63; 
  Json v64; 
  int v65[2]; 
  Json *v66; 
  Json v67; 
  Json result; 
  Json v69; 
  Json v70; 
  Json v71; 
  Json value; 
  Json v73; 
  Json v74; 
  Json v75; 
  Json v76; 
  Json v77; 
  char src[128]; 
  char v79[128]; 

  v5 = schemaRoot;
  v6 = jsonEvent;
  v70.m_key = (const char *)schemaRoot;
  m_key = jsonTypes;
  v66 = jsonEvent;
  v67.m_key = (const char *)jsonTypes;
  memset_0(event, 0, sizeof(DLogEvent));
  v9 = Json::Name(v6);
  event->name = DLog_AllocString(v9);
  Json::Json(&value);
  v10 = (Json *)Json::operator[](v6, &v69, "rows");
  v11 = 0;
  if ( Json::GetArray(v10, &value) )
  {
    v12 = Json::Size(&value);
    v13 = v12;
    if ( v12 )
    {
      v14 = (DLogRow *)DLog_Alloc(56 * v12);
      event->rows = v14;
      memset_0(v14, 0, 56 * v13);
      Json::begin(&value, &v64);
      v15 = Json::end(&v69);
      if ( Json::operator!=(&v64, v15) )
      {
        while ( 1 )
        {
          DLog_Assert(event->rowCount < v13, "event->rowCount < jsonEventRowCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseEvent", 851);
          rowCount = event->rowCount;
          v17 = &event->rows[rowCount];
          event->rowCount = rowCount + 1;
          v17->name = NULL;
          v17->type = NULL;
          v17->columns = NULL;
          *(_QWORD *)&v17->columnCount = 0i64;
          v17->columnHashTable.list = NULL;
          *(_QWORD *)&v17->columnHashTable.count = 0i64;
          v17->autoFill = NULL;
          v18 = (Json *)Json::operator[](&v64, &v75, (const char *)&stru_143C9A1A4);
          if ( Json::GetString(v18, src, 0x80ui64) )
          {
            v19 = (Json *)Json::operator[](&v64, &v76, "type");
            if ( Json::GetString(v19, v79, 0x80ui64) )
            {
              v65[0] = 0;
              v20 = (Json *)Json::operator[](&v64, &v77, "count");
              Json::GetInt32(v20, v65);
              v21 = 0;
              v22 = 0i64;
              if ( dlogRows->rowCount > 0 )
              {
                rows = dlogRows->rows;
                p_type = &rows->type;
                while ( 1 )
                {
                  v25 = *p_type;
                  do
                  {
                    v26 = (unsigned __int8)v25[v79 - *p_type];
                    v27 = *(unsigned __int8 *)v25 - v26;
                    if ( v27 )
                      break;
                    ++v25;
                  }
                  while ( v26 );
                  if ( !v27 )
                    break;
                  ++v21;
                  ++v22;
                  p_type += 7;
                  if ( v22 >= dlogRows->rowCount )
                    goto LABEL_15;
                }
                v43 = &rows[v21];
                if ( v43 )
                {
                  *(__m256i *)&v17->name = *(__m256i *)&v43->name;
                  v17->columnHashTable = v43->columnHashTable;
                  v17->autoFill = v43->autoFill;
                  v44 = -1i64;
                  v17->arrayCount = v65[0];
                  do
                    ++v44;
                  while ( src[v44] );
                  v45 = v44 + 1;
                  v46 = DLog_Alloc(v45);
                  memset_0(v46, 0, v45);
                  DLog_strcpy((char *)v46, v45, src);
                  v17->name = (const char *)v46;
                  goto LABEL_17;
                }
              }
LABEL_15:
              DLog_PrintError("Event '%s' rowRef '%s' not found '%s'\n", event->name, v17->name, v79);
            }
            else
            {
              DLog_PrintError("Event '%s' rowRef '%s' required field 'type' not found\n", event->name, v17->name);
            }
          }
          else
          {
            DLog_PrintError("Event '%s' rowRef required field 'name' not found\n", event->name);
          }
          --event->rowCount;
LABEL_17:
          Json::operator++(&v64, &result);
          v28 = Json::end(&v69);
          if ( !Json::operator!=(&v64, v28) )
          {
            m_key = (Json *)v67.m_key;
            v6 = v66;
            break;
          }
        }
      }
    }
    v5 = (const DLogSchema *)v70.m_key;
  }
  Json::Json(&v73);
  v29 = (Json *)Json::operator[](v6, &result, "columns");
  if ( Json::GetArray(v29, &v73) )
  {
    v30 = Json::Size(&v73);
    v31 = v30;
    if ( v30 )
    {
      v32 = 32 * (v30 + 1);
      v33 = (DLogColumn *)DLog_Alloc(v32);
      event->columns = v33;
      memset_0(v33, 0, v32);
      Json::begin(&v73, &v64);
      v34 = Json::end(&v70);
      if ( Json::operator!=(&v64, v34) )
      {
        do
        {
          DLog_Assert(event->columnCount < v31, "event->columnCount < jsonEventColumnCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseEvent", 910);
          v35 = *m_key;
          v36 = v64;
          v37 = &event->columns[event->columnCount++];
          v69 = v35;
          v67 = v36;
          if ( !DLog_ParseColumn(&v67, &v69, v37) )
          {
            DLog_PrintError("Event '%s' column '%s' failed to parse\n", event->name, v37->name);
            DLog_Free((void *)v37->name);
            v37->name = NULL;
            *(_QWORD *)&v37->type = 0i64;
            *(_QWORD *)&v37->arrayCount = 0i64;
            v37->enumRef = NULL;
            --event->columnCount;
          }
          Json::operator++(&v64, &result);
          v38 = Json::end(&v70);
        }
        while ( Json::operator!=(&v64, v38) );
      }
    }
  }
  p_sampleGroup = &event->sampleGroup;
  event->sampleGroup.rate = 1.0;
  event->sampleGroup.type = DLOG_SAMPLE_TYPE_NONE;
  Json::Json(&v71);
  v40 = v66;
  v41 = (Json *)Json::operator[](v66, &result, "group");
  if ( Json::GetObject(v41, &v71) )
  {
    v42 = (Json *)Json::operator[](&v71, &result, "type");
    if ( Json::GetString(v42, (const char **)&v66) )
    {
      v47 = (const char *)v66;
      DLog_Assert(v66 != NULL, (const char *)&stru_143C9A1A4, "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_SampleTypeFromString", 380);
      DLog_Assert(p_sampleGroup != NULL, "sampleType", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_SampleTypeFromString", 381);
      if ( !v47 || event == (DLogEvent *)-88i64 )
      {
LABEL_37:
        DLog_PrintError("Event '%s' field 'group' field 'type' value '%s' is invalid\n", event->name, (const char *)v66);
      }
      else
      {
        while ( strcmp(v47, off_148741120[v11]) )
        {
          if ( (unsigned int)++v11 >= 5 )
            goto LABEL_37;
        }
        p_sampleGroup->type = v11;
        if ( (_BYTE)v11 == 4 )
        {
          v50 = (Json *)Json::operator[](&v71, &result, (const char *)&stru_143C9A1A4);
          if ( Json::GetString(v50, &v67.m_key) )
            event->sampleGroup.name = DLog_AllocString(v67.m_key);
          else
            DLog_PrintError("Event '%s' field 'group' required field 'name' not found\n", event->name);
        }
        else
        {
          v51 = (Json *)Json::operator[](&v71, &result, "rate");
          if ( Json::GetFloat64(v51, (long double *)&v67) )
          {
            _XMM1 = COERCE_UNSIGNED_INT64(*(double *)&v67.m_key * 0.01);
            __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
            event->sampleGroup.rate = *(float *)&_XMM2;
          }
          else
          {
            DLog_PrintError("Event '%s' field 'group' required field 'rate' not found\n", event->name);
          }
        }
      }
    }
    else
    {
      DLog_PrintError("Event '%s' field 'group' required field 'type' not found\n", event->name);
    }
  }
  Json::Json(&v74);
  v48 = (Json *)Json::operator[](v40, &result, "channels");
  if ( Json::GetObject(v48, &v74) )
  {
    v54 = Json::Size(&v74);
    v55 = v54;
    if ( v54 )
    {
      v56 = 24 * v54;
      v57 = (DLogChannelRef *)DLog_Alloc(24 * v54);
      event->channelRefs = v57;
      memset_0(v57, 0, v56);
      Json::begin(&v74, &v64);
      v58 = Json::end(&v67);
      if ( Json::operator!=(&v64, v58) )
      {
        do
        {
          DLog_Assert(event->channelRefCount < v55, "event->channelRefCount < jsonEventChannelCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseEvent", 987);
          channelRefCount = event->channelRefCount;
          channelRefs = event->channelRefs;
          v69 = v64;
          v61 = &channelRefs[channelRefCount];
          event->channelRefCount = channelRefCount + 1;
          if ( !DLog_ParseChannelRef(&v69, v5, v61) )
          {
            v62 = Json::Name(&v64);
            DLog_PrintError("Event '%s' channelRef '%s' failed to parse\n", event->name, v62);
            DLog_Free((void *)v61->categoryName);
            v61->channel = NULL;
            v61->categoryName = NULL;
            *(_QWORD *)v61->sample = 0i64;
            --event->channelRefCount;
          }
          Json::operator++(&v64, &result);
          v63 = Json::end(&v67);
        }
        while ( Json::operator!=(&v64, v63) );
      }
    }
    return 1;
  }
  else
  {
    DLog_PrintError("Event '%s' required field 'channels' not found\n", event->name);
    return 0;
  }
}

/*
==============
DLog_ParseRow
==============
*/
char DLog_ParseRow(Json *jsonRow, Json *jsonTypes, DLogRow *row)
{
  const char *v6; 
  Json *v7; 
  const char *v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  DLogColumn *v12; 
  const Json *v13; 
  Json v14; 
  Json v15; 
  DLogColumn *v16; 
  const char *name; 
  const char *v18; 
  const Json *v19; 
  Json v21; 
  Json value; 
  Json v23; 
  Json v24; 
  Json result; 
  Json v26; 

  row->name = NULL;
  row->type = NULL;
  row->columns = NULL;
  *(_QWORD *)&row->columnCount = 0i64;
  row->columnHashTable.list = NULL;
  *(_QWORD *)&row->columnHashTable.count = 0i64;
  row->autoFill = NULL;
  v6 = Json::Name(jsonRow);
  row->type = DLog_AllocString(v6);
  Json::Json(&value);
  v7 = (Json *)Json::operator[](jsonRow, &result, "columns");
  if ( !Json::GetArray(v7, &value) )
  {
    v8 = Json::Name(jsonRow);
    DLog_PrintError("Row '%s' required field 'columns' not found\n", v8);
  }
  v9 = Json::Size(&value);
  v10 = v9;
  if ( !v9 )
    return 1;
  v11 = 32 * (v9 + 1);
  v12 = (DLogColumn *)DLog_Alloc(v11);
  row->columns = v12;
  memset_0(v12, 0, v11);
  Json::begin(&value, &v21);
  v13 = Json::end(&result);
  if ( !Json::operator!=(&v21, v13) )
    return 1;
  do
  {
    DLog_Assert(row->columnCount < v10, "row->columnCount < jsonRowColumnCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseRow", 758);
    v14 = *jsonTypes;
    v15 = v21;
    v16 = &row->columns[row->columnCount++];
    v23 = v14;
    v24 = v15;
    if ( !DLog_ParseColumn(&v24, &v23, v16) )
    {
      name = v16->name;
      v18 = Json::Name(jsonRow);
      DLog_PrintError("Row '%s' column '%s' failed to parse\n", v18, name);
      DLog_Free((void *)v16->name);
      v16->name = NULL;
      *(_QWORD *)&v16->type = 0i64;
      *(_QWORD *)&v16->arrayCount = 0i64;
      v16->enumRef = NULL;
      --row->columnCount;
    }
    Json::operator++(&v21, &v26);
    v19 = Json::end(&result);
  }
  while ( Json::operator!=(&v21, v19) );
  return 1;
}

/*
==============
DLog_PostLoad
==============
*/
void DLog_PostLoad(DLogSchema *dlogSchema)
{
  int v1; 
  DLogSchema *v2; 
  __int64 v3; 
  const char **p_name; 
  int v5; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  const char **v10; 
  unsigned __int8 *v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  const char **v18; 
  unsigned __int8 *v19; 
  int v20; 
  int v21; 
  int v22; 
  const char *v23; 
  unsigned __int64 v24; 
  unsigned __int64 v25; 
  const char **v26; 
  unsigned __int8 *v27; 
  int v28; 
  int v29; 
  int v30; 
  DLogEndpoint *v31; 
  bool *v32; 
  int v33; 
  unsigned __int64 AutoFills; 
  DLogSerializer *v35; 
  __int64 v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  DLogSerializer *v40; 
  unsigned __int8 *v41; 
  int v42; 
  int v43; 
  int v44; 
  char v45; 
  __int64 v46; 
  __int64 *v47; 
  __int64 v48; 
  DLogSerializer *serializers; 
  DLogEndpoint *endpoints; 

  v1 = 0;
  v2 = dlogSchema;
  if ( dlogSchema->channelCount > 0 )
  {
    v3 = 0i64;
    do
    {
      p_name = &v2->channels[v3].name;
      v5 = 0;
      v6 = DLog_GetSerializers((const DLogSerializer **)&serializers);
      if ( *((int *)p_name + 4) > 0 )
      {
        v7 = 0i64;
        do
        {
          v8 = 0i64;
          v9 = *(_QWORD *)&p_name[1][v7];
          if ( v6 )
          {
            v10 = &serializers->name;
            while ( 1 )
            {
              v11 = *(unsigned __int8 **)(v9 + 8);
              do
              {
                v12 = (unsigned __int8)(*v10)[(_QWORD)v11 - *(_QWORD *)(v9 + 8)];
                v13 = *v11 - v12;
                if ( v13 )
                  break;
                ++v11;
              }
              while ( v12 );
              if ( !v13 )
                break;
              ++v8;
              v10 += 3;
              if ( v8 >= v6 )
                goto LABEL_12;
            }
            *(_QWORD *)(v9 + 16) = serializers[v8].serialize;
            *((_BYTE *)p_name + 68) |= serializers[v8].requireSchema;
          }
          else
          {
LABEL_12:
            DLog_PrintError("Channel '%s' serializer '%s' unresolved\n", *p_name, *(const char **)(v9 + 8));
            *(_QWORD *)(v9 + 16) = 0i64;
          }
          ++v5;
          v7 += 8i64;
        }
        while ( v5 < *((_DWORD *)p_name + 4) );
      }
      v14 = 0;
      if ( *((int *)p_name + 8) > 0 )
      {
        v15 = 0i64;
        do
        {
          v16 = 0i64;
          v17 = *(_QWORD *)&p_name[3][v15];
          if ( v6 )
          {
            v18 = &serializers->name;
            while ( 1 )
            {
              v19 = *(unsigned __int8 **)(v17 + 8);
              do
              {
                v20 = (unsigned __int8)(*v18)[(_QWORD)v19 - *(_QWORD *)(v17 + 8)];
                v21 = *v19 - v20;
                if ( v21 )
                  break;
                ++v19;
              }
              while ( v20 );
              if ( !v21 )
                break;
              ++v16;
              v18 += 3;
              if ( v16 >= v6 )
                goto LABEL_23;
            }
            *(_QWORD *)(v17 + 16) = serializers[v16].serialize;
            *((_BYTE *)p_name + 68) |= serializers[v16].requireSchema;
          }
          else
          {
LABEL_23:
            DLog_PrintError("Channel '%s' post serializer '%s' unresolved\n", *p_name, *(const char **)(v17 + 8));
            *(_QWORD *)(v17 + 16) = 0i64;
          }
          ++v14;
          v15 += 8i64;
        }
        while ( v14 < *((_DWORD *)p_name + 8) );
      }
      v22 = DLog_GetEndpoints((const DLogEndpoint **)&endpoints);
      v23 = p_name[5];
      v24 = 0i64;
      v25 = v22;
      if ( v22 )
      {
        v26 = &endpoints->name;
        while ( 1 )
        {
          v27 = (unsigned __int8 *)*((_QWORD *)v23 + 1);
          do
          {
            v28 = (unsigned __int8)(*v26)[(_QWORD)v27 - *((_QWORD *)v23 + 1)];
            v29 = *v27 - v28;
            if ( v29 )
              break;
            ++v27;
          }
          while ( v28 );
          if ( !v29 )
            break;
          ++v24;
          v26 += 3;
          if ( v24 >= v25 )
            goto LABEL_32;
        }
        *((_QWORD *)v23 + 2) = endpoints[v24].endpoint;
        *((_BYTE *)p_name + 68) |= endpoints[v24].requireSchema;
      }
      else
      {
LABEL_32:
        DLog_PrintError("Channel '%s' endpoint '%s' unresolved\n", *p_name, *((const char **)v23 + 1));
        *((_QWORD *)v23 + 2) = 0i64;
      }
      v2 = dlogSchema;
      ++v1;
      ++v3;
    }
    while ( v1 < dlogSchema->channelCount );
  }
  v30 = 0;
  if ( v2->eventCount > 0 )
  {
    v31 = NULL;
    endpoints = NULL;
    do
    {
      v32 = &v31->requireSchema + (unsigned __int64)v2->events;
      v33 = 0;
      AutoFills = DLog_GetAutoFills((const DLogAutoFill **)&serializers);
      if ( *((int *)v32 + 4) > 0 )
      {
        v35 = serializers;
        v36 = 0i64;
        do
        {
          v37 = *((_QWORD *)v32 + 1);
          v38 = 0;
          v39 = 0i64;
          if ( AutoFills )
          {
            v40 = v35;
            while ( 1 )
            {
              v41 = *(unsigned __int8 **)(v37 + v36 + 8);
              do
              {
                v42 = v41[*(_QWORD *)&v40->requireSchema - *(_QWORD *)(v37 + v36 + 8)];
                v43 = *v41 - v42;
                if ( v43 )
                  break;
                ++v41;
              }
              while ( v42 );
              if ( !v43 )
                break;
              ++v38;
              ++v39;
              v40 = (DLogSerializer *)((char *)v40 + 16);
              if ( v38 >= AutoFills )
                goto LABEL_50;
            }
            *(_QWORD *)(v37 + v36 + 48) = *((_QWORD *)&v35->name + 2 * v39);
            v35 = serializers;
          }
LABEL_50:
          ++v33;
          v36 += 56i64;
        }
        while ( v33 < *((_DWORD *)v32 + 4) );
        v31 = endpoints;
        v2 = dlogSchema;
      }
      v44 = *((_DWORD *)v32 + 20);
      if ( v44 > 0 )
      {
        v45 = v32[84];
        v46 = (unsigned int)v44;
        v47 = (__int64 *)*((_QWORD *)v32 + 9);
        do
        {
          v48 = *v47;
          v47 += 3;
          v45 |= *(_BYTE *)(v48 + 68);
          v32[84] = v45;
          --v46;
        }
        while ( v46 );
      }
      v31 = (DLogEndpoint *)((char *)v31 + 112);
      ++v30;
      endpoints = v31;
    }
    while ( v30 < v2->eventCount );
  }
}

