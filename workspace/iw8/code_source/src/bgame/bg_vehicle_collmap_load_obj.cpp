/*
==============
BG_Vehicle_Collmap_ParseVehicleCollmapLookupFromEntityString
==============
*/

void __fastcall BG_Vehicle_Collmap_ParseVehicleCollmapLookupFromEntityString(MapEnts *mapEnts, const char *entityString, void *(__fastcall *Alloc)(unsigned __int64))
{
  ?BG_Vehicle_Collmap_ParseVehicleCollmapLookupFromEntityString@@YAXPEAUMapEnts@@PEBDP6APEAX_K@Z@Z(mapEnts, entityString, Alloc);
}

/*
==============
BG_Vehicle_Collmap_ParseVehicleCollmapLookupFromEntityString
==============
*/
void BG_Vehicle_Collmap_ParseVehicleCollmapLookupFromEntityString(MapEnts *mapEnts, const char *entityString, void *(*Alloc)(unsigned __int64))
{
  unsigned int v6; 
  const char *i; 
  const char *j; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  const char *v19; 
  const char *v20; 
  char v21; 
  const char *v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  CollMapLookupEntry *v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  int v36; 
  int v37; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  int v44; 
  __int64 v45; 
  char *v46; 
  char *v47; 
  char v48; 
  __int64 v49; 
  __int64 v50; 
  char *data_p[2]; 
  char v52[256]; 
  char v53[256]; 
  int v54; 
  char classname; 
  char v56[1023]; 
  char dest[1024]; 

  if ( !mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collmap_load_obj.cpp", 190, ASSERT_TYPE_ASSERT, "(mapEnts)", (const char *)&queryFormat, "mapEnts") )
    __debugbreak();
  if ( !entityString )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collmap_load_obj.cpp", 191, ASSERT_TYPE_ASSERT, "(entityString)", (const char *)&queryFormat, "entityString") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collmap_load_obj.cpp", 102, ASSERT_TYPE_ASSERT, "(entityString)", (const char *)&queryFormat, "entityString") )
      __debugbreak();
  }
  data_p[0] = (char *)entityString;
  v6 = 0;
  for ( i = Com_Parse((const char **)data_p); data_p[0]; i = Com_Parse((const char **)data_p) )
  {
    if ( *i != 123 )
      break;
    for ( j = Com_Parse((const char **)data_p); data_p[0]; j = Com_Parse((const char **)data_p) )
    {
      if ( *j == 125 )
        break;
      Core_strcpy(dest, 0x400ui64, j);
      v9 = Com_Parse((const char **)data_p);
      if ( !data_p[0] )
        break;
      Core_strcpy(&classname, 0x400ui64, v9);
      v10 = 0x7FFFFFFFi64;
      v11 = 0i64;
      do
      {
        v12 = (unsigned __int8)dest[v11];
        v13 = v10;
        v14 = (unsigned __int8)aClassname_1[v11++];
        --v10;
        if ( !v13 )
          break;
        if ( v12 != v14 )
        {
          v15 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v15 = v12;
          v12 = v15;
          v16 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v16 = v14;
          if ( v12 != v16 )
            goto LABEL_25;
        }
      }
      while ( v12 );
      if ( IsScriptVehicleCollmapClassname(&classname) )
        ++v6;
LABEL_25:
      ;
    }
  }
  mapEnts->numCollmaps = v6;
  if ( v6 )
  {
    mapEnts->collmapLookups = (CollMapLookupEntry *)Alloc(16i64 * v6);
    data_p[0] = (char *)entityString;
    v17 = 0;
    v18 = 0;
    memset_0(v52, 0, 0x200ui64);
    v54 = -1;
    v19 = Com_Parse((const char **)data_p);
    if ( data_p[0] )
    {
      do
      {
        if ( *v19 != 123 )
          break;
        v20 = Com_Parse((const char **)data_p);
        if ( data_p[0] )
        {
          v21 = 0;
          do
          {
            if ( *v20 == 125 )
              break;
            Core_strcpy(dest, 0x400ui64, v20);
            v22 = Com_Parse((const char **)data_p);
            if ( !data_p[0] )
              break;
            Core_strcpy(&classname, 0x400ui64, v22);
            v23 = 0x7FFFFFFFi64;
            v24 = 0i64;
            while ( 1 )
            {
              v25 = (unsigned __int8)dest[v24];
              v26 = v23;
              v27 = (unsigned __int8)aClassname_1[v24++];
              --v23;
              if ( !v26 )
              {
LABEL_43:
                if ( IsScriptVehicleCollmapClassname(&classname) )
                  v21 = 1;
                goto LABEL_45;
              }
              if ( v25 != v27 )
              {
                v28 = v25 + 32;
                if ( (unsigned int)(v25 - 65) > 0x19 )
                  v28 = v25;
                v25 = v28;
                v29 = v27 + 32;
                if ( (unsigned int)(v27 - 65) > 0x19 )
                  v29 = v27;
                if ( v25 != v29 )
                  break;
              }
              if ( !v25 )
                goto LABEL_43;
            }
            v31 = 0x7FFFFFFFi64;
            v32 = 0i64;
            while ( 1 )
            {
              v33 = (unsigned __int8)dest[v32];
              v34 = v31;
              v35 = (unsigned __int8)aTargetname[v32++];
              --v31;
              if ( !v34 )
              {
LABEL_64:
                Core_strcpy(v52, 0x100ui64, &classname);
                goto LABEL_45;
              }
              if ( v33 != v35 )
              {
                v36 = v33 + 32;
                if ( (unsigned int)(v33 - 65) > 0x19 )
                  v36 = v33;
                v33 = v36;
                v37 = v35 + 32;
                if ( (unsigned int)(v35 - 65) > 0x19 )
                  v37 = v35;
                if ( v33 != v37 )
                  break;
              }
              if ( !v33 )
                goto LABEL_64;
            }
            v38 = 0x7FFFFFFFi64;
            v39 = 0i64;
            do
            {
              v40 = (unsigned __int8)dest[v39];
              v41 = v38;
              v42 = (unsigned __int8)aModel_0[v39++];
              --v38;
              if ( !v41 )
                break;
              if ( v40 != v42 )
              {
                v43 = v40 + 32;
                if ( (unsigned int)(v40 - 65) > 0x19 )
                  v43 = v40;
                v40 = v43;
                v44 = v42 + 32;
                if ( (unsigned int)(v42 - 65) > 0x19 )
                  v44 = v42;
                if ( v40 != v44 )
                  goto LABEL_45;
              }
            }
            while ( v40 );
            Core_strcpy(v53, 0x100ui64, &classname);
            if ( classname == 42 )
              v54 = atoi(v56);
LABEL_45:
            v20 = Com_Parse((const char **)data_p);
          }
          while ( data_p[0] );
          if ( v21 )
          {
            if ( v17 >= mapEnts->numCollmaps )
            {
              LODWORD(v50) = mapEnts->numCollmaps;
              LODWORD(v49) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collmap_load_obj.cpp", 272, ASSERT_TYPE_ASSERT, "(unsigned)( collMapCount ) < (unsigned)( mapEnts->numCollmaps )", "collMapCount doesn't index mapEnts->numCollmaps\n\t%i not in [0, %i)", v49, v50) )
                __debugbreak();
            }
            v30 = &mapEnts->collmapLookups[v17];
            if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collmap_load_obj.cpp", 167, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
              __debugbreak();
            if ( v52[0] )
            {
              if ( v54 >= 0 )
              {
                v45 = -1i64;
                do
                  ++v45;
                while ( v52[v45] );
                v46 = (char *)Alloc(v45 + 1);
                v30->targetName = v46;
                v47 = v52;
                do
                {
                  v48 = *v47++;
                  *v46++ = v48;
                }
                while ( v48 );
                ++v17;
                v30->brushIndex = v54;
              }
              else
              {
                Com_PrintError(1, "Found vehicle collmap with targetname [%s] and invalid/empty model name [%s]. Model must be a brush name ('*i').\n", v52, v53);
                ++v18;
              }
            }
            else
            {
              Com_PrintError(1, "Found vehicle collmap with empty targetname.\n");
              ++v18;
            }
          }
        }
        memset_0(v52, 0, 0x200ui64);
        v54 = -1;
        v19 = Com_Parse((const char **)data_p);
      }
      while ( data_p[0] );
      if ( v18 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CD3F10, 6124i64, v18);
    }
    if ( v17 != mapEnts->numCollmaps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_collmap_load_obj.cpp", 289, ASSERT_TYPE_ASSERT, "( collMapCount ) == ( mapEnts->numCollmaps )", "%s == %s\n\t%u, %u", "collMapCount", "mapEnts->numCollmaps", v17, mapEnts->numCollmaps) )
      __debugbreak();
  }
}

