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
  Json *v25; 
  Json *v26; 
  int v27; 
  Json *v28; 
  __int64 v29; 
  Json *v32; 
  Json *v33; 
  const char *v34; 
  const char *v35; 
  __int64 v36; 
  unsigned __int64 v37; 
  void *v38; 
  DLogEnum *v39; 
  __int64 v40; 
  DLogHashTable *p_values; 
  Json *v42; 
  int v43; 
  DLogHash *v44; 
  Json *v45; 
  const char *v48; 
  int v49; 
  const char *v50; 
  Json *v51; 
  unsigned __int64 v52; 
  unsigned __int64 v53; 
  size_t v54; 
  DLogChannel *v55; 
  const Json *v56; 
  __int64 channelCount; 
  DLogChannel *channels; 
  DLogChannel *v60; 
  const Json *v61; 
  Json *v62; 
  unsigned __int64 v63; 
  const Json *v64; 
  DLogRow *v67; 
  const Json *v68; 
  int rowCount; 
  DLogHash *v70; 
  int v71; 
  __int64 v72; 
  DLogRow *v73; 
  __int64 columnCount; 
  DLogHash *v75; 
  int v76; 
  __int64 v77; 
  Json *v78; 
  const char *v79; 
  const char *m_key; 
  DLogEvent *v81; 
  const Json *v82; 
  __int64 eventCount; 
  DLogEvent *v85; 
  int v87; 
  __int64 v88; 
  DLogRow *rows; 
  int v90; 
  __int64 v91; 
  DLogColumn *v92; 
  int i; 
  int j; 
  int channelRefCount; 
  char requireSchema; 
  __int64 v97; 
  DLogChannelRef *channelRefs; 
  const DLogChannel *channel; 
  const Json *v100; 
  bool v101; 
  const char *v102; 
  char *v103; 
  int v104; 
  __int64 *v105; 
  __int64 v106; 
  __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  __int64 v110; 
  __int64 v111; 
  __int64 v112; 
  Json *v113; 
  const char **v114; 
  Json *v115; 
  Json *v116; 
  const char *v117; 
  unsigned __int64 v118; 
  Json *v119; 
  unsigned __int64 v123; 
  Json rhs; 
  Json v125; 
  Json result; 
  Json v127; 
  int v128; 
  Json v129; 
  Json v130; 
  const char **v131; 
  Json v132; 
  Json v133; 
  Json v134; 
  char *value; 
  Json v136; 
  Json v137; 
  Json v138; 
  Json v139; 
  Json v140; 
  DLogEvent v141; 
  Json v142; 
  Json v143; 
  Json v144; 
  Json v145; 
  Json v146; 
  char error[256]; 

  Json::Json(&v127);
  if ( Json::Parse(&v127, text, error, 256) )
  {
    v131 = (const char **)DLog_Alloc(0x58ui64);
    v3 = (DLogSchema *)v131;
    memset_0(v131, 0, 0x58ui64);
    v4 = (Json *)Json::operator[](&v127, &result, "project");
    v5 = Json::ToString(v4, (const char *)&queryFormat.fmt + 3);
    v3->project = DLog_AllocString(v5);
    v6 = (Json *)Json::operator[](&v127, &result, "vars");
    v7 = Json::Size(v6);
    v3->vars = (DLogVar *)DLog_Alloc(16 * v7);
    v8 = (Json *)Json::operator[](&v127, &result, "vars");
    Json::begin(v8, &v125);
    v9 = Json::end(&v129);
    if ( Json::operator!=(&v125, v9) )
    {
      do
      {
        v10 = Json::Name(&v125);
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
        v15 = Json::ToString(&v125, (const char *)&queryFormat.fmt + 3);
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
        Json::operator++(&v125, &result);
        v20 = Json::end(&v129);
      }
      while ( Json::operator!=(&v125, v20) );
    }
    v21 = (Json *)Json::operator[](&v127, &result, "guid_seed");
    if ( Json::GetString(v21, (const char **)&value) )
      v3->guidSeed = strtoull(value, (char **)&v125, 16);
    Json::operator[](&v127, &v140, "types");
    s_enumCount = 0;
    v22 = (Json *)Json::operator[](&v127, &result, "types");
    Json::ToObject(v22, &v129);
    Json::begin(&v129, &v125);
    Json::end(&rhs);
    while ( Json::operator!=(&v125, &rhs) )
    {
      _RAX = Json::operator*(&v125);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rbp+220h+var_258.m_key], xmm0
      }
      v25 = (Json *)Json::operator[](&v134, &result, "values");
      v26 = Json::ToObject(v25, &v130);
      if ( !Json::IsUndefined(v26) )
        ++s_enumCount;
      Json::operator++(&v125, &v139);
    }
    s_enums = (DLogEnum *)DLog_Alloc(24i64 * s_enumCount);
    memset_0(s_enums, 0, 24i64 * s_enumCount);
    v27 = 0;
    v28 = (Json *)Json::operator[](&v127, &result, "types");
    Json::ToObject(v28, &v130);
    Json::begin(&v130, &rhs);
    Json::end(&v129);
    if ( Json::operator!=(&rhs, &v129) )
    {
      v29 = 0i64;
      do
      {
        _RAX = Json::operator*(&rhs);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rsp+320h+var_2E0.m_key], xmm0
        }
        v32 = (Json *)Json::operator[](&v125, &v146, "values");
        v33 = Json::ToObject(v32, &v142);
        if ( !Json::IsUndefined(v33) )
        {
          DLog_Assert(v27 < s_enumCount, "enumIndex < s_enumCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_Parse", 1065);
          if ( v27 < s_enumCount )
          {
            v34 = Json::Name(&v125);
            v35 = v34;
            v36 = -1i64;
            do
              ++v36;
            while ( v34[v36] );
            v37 = v36 + 1;
            v38 = DLog_Alloc(v37);
            memset_0(v38, 0, v37);
            DLog_strcpy((char *)v38, v37, v35);
            v39 = s_enums;
            v40 = v27++;
            s_enums[v29++].name = (const char *)v38;
            p_values = &v39[v40].values;
            v42 = (Json *)Json::operator[](&v125, &v143, "values");
            v43 = Json::Size(v42);
            v44 = (DLogHash *)DLog_Alloc(8i64 * v43);
            memset_0(v44, 0, 8i64 * v43);
            DLog_HashTableCreate(p_values, v44, v43);
            v45 = (Json *)Json::operator[](&v125, &v144, "values");
            Json::ToObject(v45, &result);
            Json::begin(&result, &v133);
            Json::end(&v134);
            while ( Json::operator!=(&v133, &v134) )
            {
              _RAX = Json::operator*(&v133);
              __asm
              {
                vmovups xmm0, xmmword ptr [rax]
                vmovups xmmword ptr [rbp+220h+var_210.m_key], xmm0
              }
              v48 = Json::Name(&v139);
              v49 = atoi(v48);
              v50 = Json::ToString(&v139, (const char *)&queryFormat.fmt + 3);
              DLog_HashTableAdd(p_values, v50, v49);
              Json::operator++(&v133, &v145);
            }
            DLog_HashTableSort(p_values);
          }
        }
        Json::operator++(&rhs, &v132);
      }
      while ( Json::operator!=(&rhs, &v129) );
    }
    Json::Json(&v136);
    v51 = (Json *)Json::operator[](&v127, &v132, "channels");
    if ( !Json::GetObject(v51, &v136) )
      DLog_PrintError("Schema required field 'channels' not found\n");
    v52 = Json::Size(&v136);
    v53 = v52;
    if ( v52 )
    {
      v54 = 72 * v52;
      v55 = (DLogChannel *)DLog_Alloc(72 * v52);
      v3->channels = v55;
      memset_0(v55, 0, v54);
      Json::begin(&v136, &rhs);
      v56 = Json::end(&v130);
      if ( Json::operator!=(&rhs, v56) )
      {
        do
        {
          DLog_Assert(v3->channelCount < v53, "schemaRoot->channelCount < jsonChannelCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_Parse", 1102);
          channelCount = v3->channelCount;
          channels = v3->channels;
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+320h+rhs.m_key]
            vmovdqa xmmword ptr [rsp+320h+result.m_key], xmm0
          }
          v60 = &channels[channelCount];
          v3->channelCount = channelCount + 1;
          if ( !DLog_ParseChannel(&result, v60) )
          {
            DLog_Free((void *)v60->name);
            DLog_Free(v60->serializers);
            DLog_Free(v60->postSerializers);
            v60->name = NULL;
            v60->serializers = NULL;
            *(_QWORD *)&v60->serializerCount = 0i64;
            v60->postSerializers = NULL;
            *(_QWORD *)&v60->postSerializerCount = 0i64;
            v60->endpoint = NULL;
            *(_QWORD *)&v60->bufferSize = 0i64;
            *(_QWORD *)&v60->bufferFlushSize = 0i64;
            *(_QWORD *)&v60->platforms = 0i64;
            --v3->channelCount;
          }
          Json::operator++(&rhs, &v132);
          v61 = Json::end(&v130);
        }
        while ( Json::operator!=(&rhs, v61) );
      }
    }
    Json::Json(&v137);
    v62 = (Json *)Json::operator[](&v127, &v132, "rows");
    if ( !Json::GetObject(v62, &v137) )
      DLog_PrintError("Schema required field 'rows' not found\n");
    v63 = Json::Size(&v137);
    memset_0(&v141, 0, sizeof(v141));
    if ( v63 )
    {
      v141.rows = (DLogRow *)DLog_Alloc(88 * v63);
      memset_0(v141.rows, 0, 88 * v63);
      Json::begin(&v137, &rhs);
      v64 = Json::end(&v129);
      if ( Json::operator!=(&rhs, v64) )
      {
        do
        {
          DLog_Assert(v141.rowCount < v63, "dlogRows.rowCount < jsonRowCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_Parse", 1131);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+220h+var_200.m_key]
            vmovups xmm1, xmmword ptr [rsp+320h+rhs.m_key]
          }
          v67 = &v141.rows[v141.rowCount++];
          __asm
          {
            vmovdqa xmmword ptr [rsp+320h+result.m_key], xmm0
            vmovdqa xmmword ptr [rbp+220h+var_290.m_key], xmm1
          }
          if ( !DLog_ParseRow(&v130, &result, v67) )
          {
            DLog_Free(v67);
            --v141.rowCount;
          }
          Json::operator++(&rhs, &v132);
          v68 = Json::end(&v129);
        }
        while ( Json::operator!=(&rhs, v68) );
      }
    }
    rowCount = v141.rowCount;
    v70 = NULL;
    if ( v141.rowCount > 0 )
    {
      v70 = (DLogHash *)DLog_Alloc(8i64 * v141.rowCount);
      rowCount = v141.rowCount;
    }
    DLog_HashTableCreate(&v141.rowHashTable, v70, rowCount);
    v71 = 0;
    if ( v141.rowCount > 0 )
    {
      v72 = 0i64;
      do
      {
        v73 = &v141.rows[v72];
        DLog_HashTableAdd(&v141.rowHashTable, v141.rows[v72].type, v71);
        columnCount = v73->columnCount;
        v75 = NULL;
        if ( (int)columnCount > 0 )
        {
          v75 = (DLogHash *)DLog_Alloc(8 * columnCount);
          LODWORD(columnCount) = v73->columnCount;
        }
        DLog_HashTableCreate(&v73->columnHashTable, v75, columnCount);
        v76 = 0;
        if ( v73->columnCount > 0 )
        {
          v77 = 0i64;
          do
            DLog_HashTableAdd(&v73->columnHashTable, v73->columns[v77++].name, v76++);
          while ( v76 < v73->columnCount );
        }
        DLog_HashTableSort(&v73->columnHashTable);
        ++v71;
        ++v72;
      }
      while ( v71 < v141.rowCount );
    }
    DLog_HashTableSort(&v141.rowHashTable);
    Json::Json(&v138);
    v78 = (Json *)Json::operator[](&v127, &v132, "events");
    if ( !Json::GetObject(v78, &v138) )
      DLog_PrintError("Schema required field 'events' not found\n");
    v79 = (const char *)Json::Size(&v138);
    v125.m_key = v79;
    m_key = v79;
    if ( v79 )
    {
      v81 = (DLogEvent *)DLog_Alloc(112i64 * (_QWORD)v79);
      v3->events = v81;
      memset_0(v81, 0, 112i64 * (_QWORD)m_key);
      Json::begin(&v138, &rhs);
      v82 = Json::end(&v129);
      if ( Json::operator!=(&rhs, v82) )
      {
        do
        {
          DLog_Assert(v3->eventCount < (unsigned __int64)m_key, "schemaRoot->eventCount < jsonEventCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_Parse", 1159);
          eventCount = v3->eventCount;
          __asm { vmovups xmm1, xmmword ptr [rsp+320h+rhs.m_key] }
          v85 = &v3->events[eventCount];
          v3->eventCount = eventCount + 1;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+220h+var_200.m_key]
            vmovdqa xmmword ptr [rsp+320h+result.m_key], xmm0
            vmovdqa xmmword ptr [rbp+220h+var_290.m_key], xmm1
          }
          if ( DLog_ParseEvent(&v130, v3, &v141, &result, v85) )
          {
            channelRefCount = v85->channelRefCount;
            if ( channelRefCount > 0 )
            {
              requireSchema = v85->requireSchema;
              v97 = (unsigned int)channelRefCount;
              channelRefs = v85->channelRefs;
              do
              {
                channel = channelRefs->channel;
                ++channelRefs;
                requireSchema |= channel->requireSchema;
                v85->requireSchema = requireSchema;
                --v97;
              }
              while ( v97 );
            }
          }
          else
          {
            DLog_Free((void *)v85->name);
            v87 = 0;
            if ( v85->rowCount > 0 )
            {
              v88 = 0i64;
              do
              {
                rows = v85->rows;
                DLog_Free((void *)rows[v88].name);
                DLog_Free((void *)rows[v88].type);
                v90 = 0;
                if ( rows[v88].columnCount > 0 )
                {
                  v91 = 0i64;
                  do
                  {
                    v92 = &rows[v88].columns[v91];
                    DLog_Free((void *)v92->name);
                    ++v90;
                    v92->name = NULL;
                    ++v91;
                    *(_QWORD *)&v92->type = 0i64;
                    *(_QWORD *)&v92->arrayCount = 0i64;
                    v92->enumRef = NULL;
                  }
                  while ( v90 < rows[v88].columnCount );
                }
                DLog_Free(rows[v88].columns);
                ++v87;
                rows[v88].name = NULL;
                rows[v88].type = NULL;
                rows[v88].columns = NULL;
                *(_QWORD *)&rows[v88].columnCount = 0i64;
                rows[v88].columnHashTable.list = NULL;
                *(_QWORD *)&rows[v88].columnHashTable.count = 0i64;
                rows[v88++].autoFill = NULL;
              }
              while ( v87 < v85->rowCount );
              m_key = v125.m_key;
            }
            for ( i = 0; i < v85->columnCount; ++i )
              DLog_Free(&v85->columns[i]);
            for ( j = 0; j < v85->channelRefCount; ++j )
              DLog_Free(&v85->channelRefs[j]);
            DLog_Free(v85->rows);
            DLog_Free(v85->columns);
            DLog_Free(v85->channelRefs);
            memset_0(v85, 0, sizeof(DLogEvent));
            v3 = (DLogSchema *)v131;
            --*((_DWORD *)v131 + 16);
          }
          Json::operator++(&rhs, &v132);
          v100 = Json::end(&v129);
        }
        while ( Json::operator!=(&rhs, v100) );
      }
    }
    DLog_FinalizeSchema(v3);
    DLog_Free(v141.rows);
    v101 = v3->eventCount <= 0;
    v128 = 0;
    if ( !v101 )
    {
      v102 = NULL;
      v125.m_key = NULL;
      do
      {
        v103 = (char *)&v102[(unsigned __int64)v3->events];
        v104 = 0;
        v131 = (const char **)v103;
        if ( *((int *)v103 + 20) > 0 )
        {
          v105 = (__int64 *)*((_QWORD *)v103 + 9);
          while ( 1 )
          {
            v106 = *v105;
            v107 = 0i64;
            if ( *(int *)(*v105 + 16) > 0 )
              break;
LABEL_78:
            v110 = 0i64;
            if ( *(int *)(v106 + 32) > 0 )
            {
              v111 = *(_QWORD *)(v106 + 24);
              v112 = *(int *)(v106 + 32);
              while ( strcmp_0(*(const char **)(*(_QWORD *)v111 + 8i64), "protobuf") )
              {
                ++v110;
                v111 += 8i64;
                if ( v110 >= v112 )
                  goto LABEL_82;
              }
              goto LABEL_84;
            }
LABEL_82:
            ++v104;
            v105 += 3;
            if ( v104 >= *((_DWORD *)v131 + 20) )
              goto LABEL_86;
          }
          v108 = *(_QWORD *)(v106 + 8);
          v109 = *(int *)(*v105 + 16);
          while ( strcmp_0(*(const char **)(*(_QWORD *)v108 + 8i64), "protobuf") )
          {
            ++v107;
            v108 += 8i64;
            if ( v107 >= v109 )
              goto LABEL_78;
          }
LABEL_84:
          v113 = (Json *)Json::operator[](&v127, &v132, "events");
          v114 = v131;
          v115 = (Json *)Json::operator[](v113, &v145, *v131);
          v116 = (Json *)Json::operator[](v115, &v144, "guid");
          v117 = Json::ToString(v116, (const char *)&queryFormat.fmt + 3);
          v118 = strtoull(v117, NULL, 16);
          v119 = (Json *)Json::operator[](&v127, &v143, "events");
          _RAX = Json::operator[](v119, &v142, *v114);
          __asm
          {
            vmovups xmm1, xmmword ptr [rsp+320h+var_2C0.m_key]
            vmovups xmm0, xmmword ptr [rax]
            vmovups xmmword ptr [rsp+320h+result.m_key], xmm0
            vmovdqa xmmword ptr [rbp+220h+var_290.m_key], xmm1
          }
          v123 = DLog_CalculateProtoGuid(&v130, &result, 0i64);
          v114[13] = (const char *)v123;
          if ( v123 != v118 )
            DLog_PrintWarning("Event %s calculated guid %016zx != generated guid %016zx!  Guid calculation logic may have changed, please run game/bin/dlog_generate.bat to regenerate DLog schema!\n", *v114, v123, v118);
        }
LABEL_86:
        v102 = v125.m_key + 112;
        ++v128;
        v125.m_key += 112;
      }
      while ( v128 < v3->eventCount );
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
  const DLogSchema *m_key; 
  Json *v7; 
  const char *v10; 
  Json *v11; 
  int v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  DLogRow *v15; 
  const Json *v16; 
  __int64 rowCount; 
  Json *v19; 
  Json *v20; 
  Json *v21; 
  int v22; 
  __int64 v23; 
  DLogRow *rows; 
  const char **p_type; 
  const char *v26; 
  int v27; 
  int v28; 
  const Json *v29; 
  Json *v30; 
  unsigned __int64 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v33; 
  DLogColumn *v34; 
  const Json *v35; 
  DLogColumn *v38; 
  const Json *v39; 
  DLogSampleGroup *p_sampleGroup; 
  Json *v41; 
  Json *v42; 
  Json *v43; 
  __int64 v48; 
  unsigned __int64 v49; 
  void *v50; 
  const char *v51; 
  Json *v52; 
  Json *v54; 
  Json *v55; 
  unsigned __int64 v59; 
  unsigned __int64 v60; 
  size_t v61; 
  DLogChannelRef *v62; 
  const Json *v63; 
  __int64 channelRefCount; 
  DLogChannelRef *channelRefs; 
  DLogChannelRef *v67; 
  const char *v68; 
  const Json *v69; 
  Json v70; 
  int v71[2]; 
  Json *v72; 
  Json v73; 
  Json result; 
  Json v75; 
  Json v76; 
  Json v77; 
  Json value; 
  Json v79; 
  Json v80; 
  Json v81; 
  Json v82; 
  Json v83; 
  char src[128]; 
  char v85[128]; 

  _RDI = event;
  m_key = schemaRoot;
  v7 = jsonEvent;
  v76.m_key = (const char *)schemaRoot;
  _R14 = jsonTypes;
  v72 = jsonEvent;
  v73.m_key = (const char *)jsonTypes;
  memset_0(event, 0, sizeof(DLogEvent));
  v10 = Json::Name(v7);
  event->name = DLog_AllocString(v10);
  Json::Json(&value);
  v11 = (Json *)Json::operator[](v7, &v75, "rows");
  v12 = 0;
  if ( Json::GetArray(v11, &value) )
  {
    v13 = Json::Size(&value);
    v14 = v13;
    if ( v13 )
    {
      v15 = (DLogRow *)DLog_Alloc(56 * v13);
      event->rows = v15;
      memset_0(v15, 0, 56 * v14);
      Json::begin(&value, &v70);
      v16 = Json::end(&v75);
      if ( Json::operator!=(&v70, v16) )
      {
        while ( 1 )
        {
          DLog_Assert(event->rowCount < v14, "event->rowCount < jsonEventRowCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseEvent", 851);
          rowCount = event->rowCount;
          _R14 = &event->rows[rowCount];
          event->rowCount = rowCount + 1;
          _R14->name = NULL;
          _R14->type = NULL;
          _R14->columns = NULL;
          *(_QWORD *)&_R14->columnCount = 0i64;
          _R14->columnHashTable.list = NULL;
          *(_QWORD *)&_R14->columnHashTable.count = 0i64;
          _R14->autoFill = NULL;
          v19 = (Json *)Json::operator[](&v70, &v81, (const char *)&stru_143C9A1A4);
          if ( Json::GetString(v19, src, 0x80ui64) )
          {
            v20 = (Json *)Json::operator[](&v70, &v82, "type");
            if ( Json::GetString(v20, v85, 0x80ui64) )
            {
              v71[0] = 0;
              v21 = (Json *)Json::operator[](&v70, &v83, "count");
              Json::GetInt32(v21, v71);
              v22 = 0;
              v23 = 0i64;
              if ( dlogRows->rowCount > 0 )
              {
                rows = dlogRows->rows;
                p_type = &rows->type;
                while ( 1 )
                {
                  v26 = *p_type;
                  do
                  {
                    v27 = (unsigned __int8)v26[v85 - *p_type];
                    v28 = *(unsigned __int8 *)v26 - v27;
                    if ( v28 )
                      break;
                    ++v26;
                  }
                  while ( v27 );
                  if ( !v28 )
                    break;
                  ++v22;
                  ++v23;
                  p_type += 7;
                  if ( v23 >= dlogRows->rowCount )
                    goto LABEL_15;
                }
                if ( &rows[v22] )
                {
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rcx]
                    vmovups ymmword ptr [r14], ymm0
                    vmovups xmm1, xmmword ptr [rcx+20h]
                    vmovups xmmword ptr [r14+20h], xmm1
                    vmovsd  xmm0, qword ptr [rcx+30h]
                    vmovsd  qword ptr [r14+30h], xmm0
                  }
                  v48 = -1i64;
                  _R14->arrayCount = v71[0];
                  do
                    ++v48;
                  while ( src[v48] );
                  v49 = v48 + 1;
                  v50 = DLog_Alloc(v49);
                  memset_0(v50, 0, v49);
                  DLog_strcpy((char *)v50, v49, src);
                  _R14->name = (const char *)v50;
                  goto LABEL_17;
                }
              }
LABEL_15:
              DLog_PrintError("Event '%s' rowRef '%s' not found '%s'\n", event->name, _R14->name, v85);
            }
            else
            {
              DLog_PrintError("Event '%s' rowRef '%s' required field 'type' not found\n", event->name, _R14->name);
            }
          }
          else
          {
            DLog_PrintError("Event '%s' rowRef required field 'name' not found\n", event->name);
          }
          --event->rowCount;
LABEL_17:
          Json::operator++(&v70, &result);
          v29 = Json::end(&v75);
          if ( !Json::operator!=(&v70, v29) )
          {
            _R14 = (void *)v73.m_key;
            v7 = v72;
            break;
          }
        }
      }
    }
    m_key = (const DLogSchema *)v76.m_key;
  }
  Json::Json(&v79);
  v30 = (Json *)Json::operator[](v7, &result, "columns");
  if ( Json::GetArray(v30, &v79) )
  {
    v31 = Json::Size(&v79);
    v32 = v31;
    if ( v31 )
    {
      v33 = 32 * (v31 + 1);
      v34 = (DLogColumn *)DLog_Alloc(v33);
      event->columns = v34;
      memset_0(v34, 0, v33);
      Json::begin(&v79, &v70);
      v35 = Json::end(&v76);
      if ( Json::operator!=(&v70, v35) )
      {
        do
        {
          DLog_Assert(event->columnCount < v32, "event->columnCount < jsonEventColumnCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseEvent", 910);
          __asm
          {
            vmovups xmm0, xmmword ptr [r14]
            vmovups xmm1, xmmword ptr [rsp+240h+var_218.m_value]
          }
          v38 = &event->columns[event->columnCount++];
          __asm
          {
            vmovups xmmword ptr [rsp+240h+var_1D0.m_key], xmm0
            vmovdqa xmmword ptr [rsp+240h+var_1F8.m_value], xmm1
          }
          if ( !DLog_ParseColumn(&v73, &v75, v38) )
          {
            DLog_PrintError("Event '%s' column '%s' failed to parse\n", event->name, v38->name);
            DLog_Free((void *)v38->name);
            v38->name = NULL;
            *(_QWORD *)&v38->type = 0i64;
            *(_QWORD *)&v38->arrayCount = 0i64;
            v38->enumRef = NULL;
            --event->columnCount;
          }
          Json::operator++(&v70, &result);
          v39 = Json::end(&v76);
        }
        while ( Json::operator!=(&v70, v39) );
      }
    }
  }
  p_sampleGroup = &event->sampleGroup;
  event->sampleGroup.rate = 1.0;
  event->sampleGroup.type = DLOG_SAMPLE_TYPE_NONE;
  Json::Json(&v77);
  v41 = v72;
  v42 = (Json *)Json::operator[](v72, &result, "group");
  if ( Json::GetObject(v42, &v77) )
  {
    v43 = (Json *)Json::operator[](&v77, &result, "type");
    if ( Json::GetString(v43, (const char **)&v72) )
    {
      v51 = (const char *)v72;
      DLog_Assert(v72 != NULL, (const char *)&stru_143C9A1A4, "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_SampleTypeFromString", 380);
      DLog_Assert(p_sampleGroup != NULL, "sampleType", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_SampleTypeFromString", 381);
      if ( !v51 || event == (DLogEvent *)-88i64 )
      {
LABEL_37:
        DLog_PrintError("Event '%s' field 'group' field 'type' value '%s' is invalid\n", event->name, (const char *)v72);
      }
      else
      {
        while ( strcmp(v51, off_148741120[v12]) )
        {
          if ( (unsigned int)++v12 >= 5 )
            goto LABEL_37;
        }
        p_sampleGroup->type = v12;
        if ( (_BYTE)v12 == 4 )
        {
          v54 = (Json *)Json::operator[](&v77, &result, (const char *)&stru_143C9A1A4);
          if ( Json::GetString(v54, &v73.m_key) )
            event->sampleGroup.name = DLog_AllocString(v73.m_key);
          else
            DLog_PrintError("Event '%s' field 'group' required field 'name' not found\n", event->name);
        }
        else
        {
          v55 = (Json *)Json::operator[](&v77, &result, "rate");
          if ( Json::GetFloat64(v55, (long double *)&v73) )
          {
            __asm
            {
              vmovsd  xmm0, [rsp+240h+var_1F8.m_value]
              vmulsd  xmm1, xmm0, cs:__real@3f847ae147ae147b
              vcvtsd2ss xmm2, xmm1, xmm1
              vmovss  dword ptr [rdi+5Ch], xmm2
            }
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
  Json::Json(&v80);
  v52 = (Json *)Json::operator[](v41, &result, "channels");
  if ( Json::GetObject(v52, &v80) )
  {
    v59 = Json::Size(&v80);
    v60 = v59;
    if ( v59 )
    {
      v61 = 24 * v59;
      v62 = (DLogChannelRef *)DLog_Alloc(24 * v59);
      event->channelRefs = v62;
      memset_0(v62, 0, v61);
      Json::begin(&v80, &v70);
      v63 = Json::end(&v73);
      if ( Json::operator!=(&v70, v63) )
      {
        do
        {
          DLog_Assert(event->channelRefCount < v60, "event->channelRefCount < jsonEventChannelCount", "c:\\workspace\\iw8\\code_source\\external\\dlog\\src\\dlog\\dlog_parse.cpp", "DLog_ParseEvent", 987);
          channelRefCount = event->channelRefCount;
          channelRefs = event->channelRefs;
          __asm
          {
            vmovups xmm0, xmmword ptr [rsp+240h+var_218.m_value]
            vmovdqa xmmword ptr [rsp+240h+var_1D0.m_key], xmm0
          }
          v67 = &channelRefs[channelRefCount];
          event->channelRefCount = channelRefCount + 1;
          if ( !DLog_ParseChannelRef(&v75, m_key, v67) )
          {
            v68 = Json::Name(&v70);
            DLog_PrintError("Event '%s' channelRef '%s' failed to parse\n", event->name, v68);
            DLog_Free((void *)v67->categoryName);
            v67->channel = NULL;
            v67->categoryName = NULL;
            *(_QWORD *)v67->sample = 0i64;
            --event->channelRefCount;
          }
          Json::operator++(&v70, &result);
          v69 = Json::end(&v73);
        }
        while ( Json::operator!=(&v70, v69) );
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
  _R15 = jsonTypes;
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
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups xmm1, xmmword ptr [rsp+0A8h+var_78.m_key]
    }
    v16 = &row->columns[row->columnCount++];
    __asm
    {
      vmovups [rsp+0A8h+var_58], xmm0
      vmovdqa [rsp+0A8h+var_48], xmm1
    }
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

