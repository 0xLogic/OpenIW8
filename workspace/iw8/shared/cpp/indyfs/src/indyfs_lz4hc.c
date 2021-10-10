/*
==============
indyfs_LZ4HC_compress_generic_dictCtx
==============
*/
int indyfs_LZ4HC_compress_generic_dictCtx(indyfs_LZ4HC_CCtx_internal *const ctx, const char *const src, char *const dst, int *const srcSizePtr, const int dstCapacity, int cLevel, limitedOutput_directive limit)
{
  int *v7; 
  unsigned __int64 v8; 
  unsigned __int8 *v10; 
  int v13; 
  __int64 v14; 
  int v15; 
  indyfs_LZ4HC_CCtx_internal *v16; 
  unsigned __int64 v17; 
  BOOL favorDecSpeed; 
  __int64 v19; 
  void *v20; 
  __int64 v21; 
  char *v22; 
  char *v23; 
  unsigned int *v24; 
  __int64 base; 
  unsigned int lowLimit; 
  unsigned int v27; 
  int v28; 
  __int64 dictLimit; 
  unsigned __int64 v30; 
  unsigned int v31; 
  int v32; 
  __int64 nextToUpdate; 
  unsigned int v34; 
  bool v35; 
  _QWORD *v36; 
  unsigned int v37; 
  __int64 dictBase; 
  unsigned int v39; 
  _DWORD *v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  unsigned __int64 v43; 
  _DWORD *v44; 
  unsigned int v45; 
  _DWORD *v46; 
  unsigned __int8 *v47; 
  unsigned __int8 *v48; 
  unsigned __int8 *v49; 
  unsigned __int8 *v50; 
  _QWORD *v51; 
  unsigned int v52; 
  unsigned __int64 v53; 
  unsigned __int64 v54; 
  unsigned __int8 *v55; 
  unsigned __int8 *v56; 
  _QWORD *v57; 
  unsigned __int8 *v58; 
  unsigned __int8 *v59; 
  unsigned int v60; 
  int v61; 
  unsigned __int8 *v62; 
  _DWORD *v63; 
  unsigned __int8 *v64; 
  unsigned __int8 *v65; 
  unsigned int v66; 
  int v67; 
  unsigned __int64 v68; 
  unsigned __int64 v69; 
  unsigned __int64 v70; 
  unsigned __int64 v71; 
  unsigned __int64 v72; 
  unsigned int v73; 
  unsigned __int64 v74; 
  char *v75; 
  unsigned __int64 v76; 
  unsigned __int64 v77; 
  unsigned __int64 v78; 
  char *v79; 
  unsigned __int64 v80; 
  __int64 v81; 
  unsigned int v82; 
  __int64 v83; 
  unsigned int v84; 
  unsigned int v85; 
  int v86; 
  _DWORD *v88; 
  unsigned __int8 *v89; 
  unsigned __int8 *v90; 
  _QWORD *v91; 
  unsigned __int8 *v92; 
  unsigned __int8 *v93; 
  unsigned int v94; 
  int v95; 
  int v96; 
  unsigned __int64 v97; 
  unsigned __int64 v98; 
  __int64 v99; 
  unsigned __int64 v100; 
  int v101; 
  const unsigned __int8 *v102; 
  unsigned int v103; 
  unsigned int v104; 
  __int64 v105; 
  const unsigned __int8 *v106; 
  unsigned int v107; 
  __int64 v108; 
  const unsigned __int8 *v109; 
  __int64 v110; 
  int v111; 
  unsigned int v112; 
  int v113; 
  unsigned __int64 v114; 
  _DWORD *v115; 
  unsigned __int64 v116; 
  unsigned __int64 v117; 
  unsigned __int64 v118; 
  _DWORD *v119; 
  __int64 v120; 
  unsigned int v121; 
  _DWORD *v122; 
  unsigned int v123; 
  unsigned __int8 *v124; 
  _DWORD *v125; 
  unsigned __int8 *v126; 
  unsigned __int8 *v127; 
  unsigned __int64 v128; 
  unsigned int v129; 
  int v130; 
  unsigned int v131; 
  int v132; 
  unsigned __int64 v133; 
  unsigned __int64 v134; 
  _BYTE *v135; 
  int v136; 
  int v137; 
  unsigned int v138; 
  const unsigned __int8 *v139; 
  unsigned __int8 *v140; 
  int v141; 
  _QWORD *v142; 
  unsigned __int64 v143; 
  const unsigned __int8 *v144; 
  unsigned __int8 *v145; 
  unsigned __int8 *v146; 
  unsigned __int8 *v147; 
  unsigned int v148; 
  signed int v149; 
  unsigned __int8 *v150; 
  const unsigned __int8 *v151; 
  unsigned __int8 *v152; 
  unsigned __int8 *v153; 
  unsigned int v154; 
  int v155; 
  int v156; 
  unsigned __int64 v157; 
  unsigned __int64 v158; 
  unsigned __int64 v159; 
  unsigned __int64 v160; 
  signed __int64 v161; 
  const unsigned __int8 *v162; 
  int v163; 
  __int64 v164; 
  unsigned int v165; 
  unsigned __int64 v166; 
  const unsigned __int8 *v167; 
  unsigned __int64 v168; 
  unsigned __int64 v169; 
  unsigned __int64 v170; 
  char *v171; 
  unsigned __int64 v172; 
  __int64 v173; 
  signed __int64 v174; 
  unsigned int v175; 
  unsigned int v176; 
  int v177; 
  const unsigned __int8 *v179; 
  __int64 v180; 
  unsigned __int8 *v181; 
  unsigned __int8 *v182; 
  _QWORD *v183; 
  unsigned __int8 *v184; 
  unsigned __int8 *v185; 
  unsigned int v186; 
  int v187; 
  unsigned int v188; 
  const unsigned __int8 *v189; 
  int v190; 
  unsigned __int64 v191; 
  unsigned __int64 v192; 
  __int64 v193; 
  __int64 v194; 
  int v195; 
  __int64 v196; 
  int v197; 
  int v198; 
  unsigned __int64 v199; 
  unsigned __int64 v200; 
  __int64 v201; 
  int v202; 
  int v203; 
  int v204; 
  unsigned __int64 v205; 
  unsigned __int64 v206; 
  int v207; 
  int v208; 
  int v209; 
  const unsigned __int8 *v210; 
  unsigned int v211; 
  unsigned int v212; 
  __int64 v213; 
  const unsigned __int8 *v214; 
  const unsigned __int8 *v215; 
  int v216; 
  unsigned int v217; 
  int v218; 
  unsigned __int64 v219; 
  __int64 v220; 
  const unsigned __int8 *v221; 
  unsigned __int64 v222; 
  unsigned __int64 v223; 
  unsigned __int64 v224; 
  indyfs_LZ4HC_CCtx_internal *v225; 
  unsigned __int64 v226; 
  __int64 v227; 
  unsigned int v228; 
  const unsigned __int8 *v229; 
  unsigned int v230; 
  _QWORD *v231; 
  _DWORD *v232; 
  unsigned __int8 *v233; 
  unsigned __int8 *v234; 
  unsigned __int64 v235; 
  unsigned int v236; 
  int v237; 
  unsigned int v238; 
  int v239; 
  unsigned __int64 v240; 
  unsigned __int64 v241; 
  _BYTE *v242; 
  int v243; 
  int v244; 
  unsigned __int8 *v245; 
  unsigned int v246; 
  const unsigned __int8 *v247; 
  unsigned __int8 *v248; 
  const unsigned __int8 *v249; 
  int v250; 
  unsigned __int8 *v251; 
  _QWORD *v252; 
  unsigned __int64 v253; 
  unsigned __int8 *v254; 
  unsigned __int8 *v255; 
  unsigned int v256; 
  signed int v257; 
  unsigned __int8 *v258; 
  unsigned __int8 *v259; 
  const unsigned __int8 *v260; 
  unsigned __int8 *v261; 
  unsigned int v262; 
  int v263; 
  int v264; 
  unsigned __int64 v265; 
  unsigned __int64 v266; 
  unsigned __int64 v267; 
  unsigned __int64 v268; 
  const unsigned __int8 *v269; 
  _BYTE *v270; 
  int v271; 
  const unsigned __int8 *v272; 
  unsigned int v273; 
  unsigned __int64 v274; 
  const unsigned __int8 *v275; 
  unsigned __int64 v276; 
  unsigned __int64 v277; 
  unsigned __int64 v278; 
  char *v279; 
  unsigned __int64 v280; 
  __int64 v281; 
  signed __int64 v282; 
  unsigned int v283; 
  int v284; 
  int v285; 
  const unsigned __int8 *v287; 
  const unsigned __int8 *v288; 
  unsigned __int8 *v289; 
  unsigned __int8 *v290; 
  _DWORD *v291; 
  unsigned __int8 *v292; 
  unsigned __int8 *v293; 
  unsigned int v294; 
  int v295; 
  int v296; 
  unsigned __int64 v297; 
  unsigned __int64 v298; 
  char *v299; 
  _BYTE *v300; 
  int v301; 
  int v302; 
  unsigned __int64 v303; 
  unsigned __int64 v304; 
  int v305; 
  __int64 v306; 
  int v307; 
  char *v308; 
  _BYTE *v309; 
  limitedOutput_directive v310; 
  unsigned __int64 v311; 
  unsigned __int64 v312; 
  _QWORD *v313; 
  unsigned __int64 v314; 
  void *v315; 
  _WORD *v316; 
  signed __int64 v317; 
  _WORD *v318; 
  unsigned __int64 v319; 
  char v320; 
  unsigned __int64 v321; 
  unsigned __int64 v322; 
  __int64 v323; 
  __int64 v324; 
  int v325; 
  _BYTE *v326; 
  unsigned __int64 v327; 
  _QWORD *v328; 
  unsigned __int64 v329; 
  void *v330; 
  _WORD *v331; 
  signed __int64 v332; 
  _WORD *v333; 
  unsigned __int64 v334; 
  char v335; 
  unsigned __int64 v336; 
  unsigned __int64 v337; 
  __int64 v338; 
  _BYTE *v339; 
  unsigned __int64 v340; 
  _QWORD *v341; 
  unsigned __int64 v342; 
  void *v343; 
  _WORD *v344; 
  signed __int64 v345; 
  _BYTE *v346; 
  unsigned __int64 v347; 
  char v348; 
  unsigned __int64 v349; 
  unsigned __int64 v350; 
  void *v351; 
  _BYTE *v352; 
  char *v353; 
  unsigned __int64 v354; 
  _QWORD *v355; 
  unsigned __int64 v356; 
  void *v357; 
  _WORD *v358; 
  signed __int64 v359; 
  unsigned __int64 v360; 
  char v361; 
  unsigned __int64 v362; 
  unsigned __int64 v363; 
  _BYTE *v364; 
  unsigned __int64 v365; 
  _QWORD *v366; 
  unsigned __int64 v367; 
  void *v368; 
  _WORD *v369; 
  signed __int64 v370; 
  unsigned __int64 v371; 
  char v372; 
  unsigned __int64 v373; 
  unsigned __int64 v374; 
  size_t v375; 
  unsigned __int64 v376; 
  int v377; 
  size_t v378; 
  char *v379; 
  void *v380; 
  int v381; 
  unsigned int pattern32; 
  int v383; 
  unsigned int v384; 
  int v385; 
  unsigned __int64 v386; 
  int v387; 
  int v388; 
  unsigned __int8 *iEnd; 
  unsigned __int64 v390; 
  unsigned __int64 v391; 
  int v392; 
  const unsigned __int8 *v393; 
  const unsigned __int8 *v394; 
  void *Src; 
  int v396; 
  unsigned __int64 v397; 
  char *v398; 
  _QWORD *v399; 
  __int64 v400; 
  const unsigned __int8 *v401; 
  BOOL v402; 
  _QWORD *v403; 
  const unsigned __int8 *v404; 
  unsigned __int64 v405; 
  unsigned __int8 *v406; 
  unsigned __int64 hashTable; 
  int nbSearches[2]; 
  unsigned __int16 *chainTable; 
  const indyfs_LZ4HC_CCtx_internal *dictCtx; 
  int v412; 
  int v413; 

  v413 = (int)dst;
  v412 = (int)src;
  v7 = srcSizePtr;
  v8 = &ctx->end[-ctx->lowLimit] - ctx->base;
  v10 = (unsigned __int8 *)src;
  if ( v8 >= 0x10000 )
  {
    ctx->dictCtx = NULL;
    return indyfs_LZ4HC_compress_generic_noDictCtx(ctx, src, dst, srcSizePtr, dstCapacity, cLevel, limit);
  }
  if ( !v8 && *srcSizePtr > 4096 )
  {
    memcpy_0(ctx, ctx->dictCtx, sizeof(indyfs_LZ4HC_CCtx_internal));
    indyfs_LZ4HC_setExternalDict(ctx, v10);
    ctx->compressionLevel = cLevel;
    return indyfs_LZ4HC_compress_generic_noDictCtx(ctx, (const char *const)v10, dst, v7, dstCapacity, cLevel, limit);
  }
  if ( limit == 2 && dstCapacity < 1 )
    return 0;
  v14 = *srcSizePtr;
  if ( (unsigned int)v14 > 0x7E000000 )
    return 0;
  v15 = 9;
  ctx->end += v14;
  if ( cLevel >= 1 )
    v15 = cLevel;
  v16 = ctx;
  if ( v15 > 12 )
    v15 = 12;
  v13 = 0;
  v17 = *((unsigned int *)&unk_1447549F0 + 3 * v15 + 2);
  favorDecSpeed = ctx->favorDecSpeed != 0;
  *(_QWORD *)nbSearches = *(_QWORD *)((char *)&unk_1447549F0 + 12 * v15);
  if ( nbSearches[0] )
    return indyfs_LZ4HC_compress_optimal(ctx, (const char *const)v10, dst, v7, dstCapacity, nbSearches[1], v17, limit, v15 == 12, usingDictCtx, (const HCfavor_e)favorDecSpeed);
  v19 = *v7;
  v20 = v10;
  v398 = dst;
  v21 = (__int64)&v10[v19];
  v386 = (unsigned __int64)v10;
  v22 = dst;
  v402 = nbSearches[1] > 0x40u;
  Src = v10;
  v406 = &v10[v19];
  v399 = NULL;
  v23 = &dst[dstCapacity - 5];
  iEnd = &v10[v19 - 5];
  if ( limit != 2 )
    v23 = &dst[dstCapacity];
  v397 = 0i64;
  v391 = (unsigned __int64)v23;
  v393 = NULL;
  v405 = 0i64;
  v401 = NULL;
  *v7 = 0;
  if ( (int)v19 < 13 || (unsigned __int64)v10 > v21 - 12 )
  {
    v310 = limit;
    goto LABEL_626;
  }
  v24 = (unsigned int *)v10;
  chainTable = ctx->chainTable;
  while ( 2 )
  {
    base = (__int64)v16->base;
    lowLimit = v16->lowLimit;
    v27 = (_DWORD)v24 - base;
    v28 = 0;
    dictLimit = v16->dictLimit;
    v30 = 0i64;
    v31 = *v24;
    v32 = (int)v24;
    nextToUpdate = v16->nextToUpdate;
    v34 = nbSearches[1];
    v35 = lowLimit + 0x10000 <= v27;
    hashTable = (unsigned __int64)v16->dictCtx->hashTable;
    v36 = (_QWORD *)(base + dictLimit);
    v37 = v27 - 0xFFFF;
    v392 = v27;
    dictBase = (__int64)v16->dictBase;
    if ( v35 )
      lowLimit = v37;
    v39 = v32 - base;
    v385 = 3;
    v390 = base;
    v403 = (_QWORD *)(base + dictLimit);
    pattern32 = lowLimit;
    v400 = dictBase;
    v384 = nbSearches[1];
    if ( (unsigned int)nextToUpdate < v39 )
    {
      v40 = (_DWORD *)(base + nextToUpdate);
      do
      {
        v41 = (unsigned int)(-1640531535 * *v40);
        v40 = (_DWORD *)((char *)v40 + 1);
        v42 = v41 >> 17;
        v43 = (unsigned int)(nextToUpdate - v16->hashTable[v42]);
        if ( v43 > 0xFFFF )
          LOWORD(v43) = -1;
        v16->chainTable[(unsigned __int16)nextToUpdate] = v43;
        v16->hashTable[v42] = nextToUpdate;
        LODWORD(nextToUpdate) = nextToUpdate + 1;
      }
      while ( (unsigned int)nextToUpdate < v39 );
      v36 = v403;
      dictBase = v400;
      v34 = v384;
    }
    v44 = (_DWORD *)v386;
    v16->nextToUpdate = v39;
    v45 = v16->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *v44) >> 17];
    if ( v45 >= lowLimit )
    {
      while ( 1 )
      {
        if ( !v34 )
          goto LABEL_150;
        v384 = v34 - 1;
        if ( v45 < (unsigned int)dictLimit )
        {
          if ( *(_DWORD *)(v45 + dictBase) == v31 )
          {
            v55 = iEnd;
            v56 = (unsigned __int8 *)(v44 + 1);
            v57 = (_QWORD *)(v45 + dictBase + 4);
            if ( (unsigned __int8 *)((char *)v44 + (unsigned int)dictLimit - v45) <= iEnd )
              v55 = (unsigned __int8 *)v44 + (unsigned int)dictLimit - v45;
            v58 = (unsigned __int8 *)(v44 + 1);
            v59 = v55 - 7;
            if ( v56 >= v55 - 7 )
              goto LABEL_59;
            if ( *v57 != *(_QWORD *)v56 )
            {
              _BitScanForward64(&v68, *v57 ^ *(_QWORD *)v56);
              HIWORD(v381) = 0;
              v60 = (unsigned int)v68 >> 3;
            }
            else
            {
              v58 = v56 + 8;
              ++v57;
LABEL_59:
              if ( v58 >= v59 )
              {
LABEL_62:
                if ( v58 < v55 - 3 && *(_DWORD *)v57 == *(_DWORD *)v58 )
                {
                  v58 += 4;
                  v57 = (_QWORD *)((char *)v57 + 4);
                }
                if ( v58 < v55 - 1 && *(_WORD *)v57 == *(_WORD *)v58 )
                {
                  v58 += 2;
                  v57 = (_QWORD *)((char *)v57 + 2);
                }
                if ( v58 < v55 && *(_BYTE *)v57 == *v58 )
                  LODWORD(v58) = (_DWORD)v58 + 1;
                v60 = (_DWORD)v58 - (_DWORD)v56;
              }
              else
              {
                while ( *v57 == *(_QWORD *)v58 )
                {
                  v58 += 8;
                  ++v57;
                  if ( v58 >= v59 )
                    goto LABEL_62;
                }
                _BitScanForward64(&v69, *v57 ^ *(_QWORD *)v58);
                HIWORD(v381) = 0;
                v60 = ((unsigned int)v69 >> 3) - (_DWORD)v56 + (_DWORD)v58;
              }
            }
            v44 = (_DWORD *)v386;
            v61 = v60 + 4;
            v62 = (unsigned __int8 *)(v386 + (int)(v60 + 4));
            if ( v62 == v55 && v55 < iEnd )
            {
              v63 = v36;
              v64 = (unsigned __int8 *)(v386 + v61);
              v65 = iEnd - 7;
              if ( v62 >= iEnd - 7 )
              {
LABEL_77:
                if ( v64 >= v65 )
                {
LABEL_80:
                  if ( v64 < iEnd - 3 && *v63 == *(_DWORD *)v64 )
                  {
                    v64 += 4;
                    ++v63;
                  }
                  if ( v64 < iEnd - 1 && *(_WORD *)v63 == *(_WORD *)v64 )
                  {
                    v64 += 2;
                    v63 = (_DWORD *)((char *)v63 + 2);
                  }
                  if ( v64 < iEnd && *(_BYTE *)v63 == *v64 )
                    LODWORD(v64) = (_DWORD)v64 + 1;
                  v66 = (_DWORD)v64 - (_DWORD)v62;
                }
                else
                {
                  while ( *(_QWORD *)v64 == *(_QWORD *)v63 )
                  {
                    v64 += 8;
                    v63 += 2;
                    if ( v64 >= v65 )
                      goto LABEL_80;
                  }
                  _BitScanForward64(&v71, *(_QWORD *)v64 ^ *(_QWORD *)v63);
                  HIWORD(v381) = 0;
                  v66 = ((unsigned int)v71 >> 3) - (_DWORD)v62 + (_DWORD)v64;
                }
              }
              else
              {
                if ( *(_QWORD *)v62 == *v36 )
                {
                  v64 = v62 + 8;
                  v63 = v36 + 1;
                  goto LABEL_77;
                }
                _BitScanForward64(&v70, *(_QWORD *)v62 ^ *v36);
                HIWORD(v381) = 0;
                v66 = (unsigned int)v70 >> 3;
              }
              v44 = (_DWORD *)v386;
              v61 += v66;
            }
            if ( v61 > v385 )
            {
              v385 = v61;
              v399 = (_QWORD *)(v45 + v390);
            }
            lowLimit = pattern32;
          }
LABEL_94:
          v47 = iEnd;
          goto LABEL_95;
        }
        v46 = (_DWORD *)(v45 + v390);
        if ( *(_WORD *)((char *)v44 + v385 - 1) != *(_WORD *)((char *)v46 + v385 - 1) )
          goto LABEL_94;
        v47 = iEnd;
        if ( *v46 == v31 )
          break;
LABEL_95:
        v67 = chainTable[(unsigned __int16)v45];
        v45 -= v67;
        if ( v402 && v67 == 1 )
        {
          if ( v28 )
          {
            if ( v28 == 2 )
              goto LABEL_106;
          }
          else
          {
            if ( (_BYTE)v31 == HIBYTE(v31) && (unsigned __int16)v31 == HIWORD(v31) )
            {
              v44 = (_DWORD *)v386;
              v28 = 2;
              v30 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v386 + 4), v47, v31) + 4;
LABEL_106:
              if ( v45 >= (unsigned int)dictLimit )
              {
                v72 = v390 + v45;
                if ( *(_DWORD *)v72 == v31 )
                {
                  v73 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v72 + 4), iEnd, v31);
                  v75 = (char *)v36;
                  v76 = v73 + 4i64;
                  if ( (_DWORD *)((char *)v36 + 0xFFFF) < v44 )
                    v75 = (char *)v44 - 0xFFFF;
                  v396 = v31;
                  v77 = v74;
                  if ( v74 >= (unsigned __int64)(v75 + 4) )
                  {
                    do
                    {
                      v78 = v77 - 4;
                      if ( *(_DWORD *)(v77 - 4) != v31 )
                        break;
                      v77 -= 4i64;
                    }
                    while ( v78 >= (unsigned __int64)(v75 + 4) );
                  }
                  if ( v77 > (unsigned __int64)v75 )
                  {
                    v79 = (char *)&v396 - v77 + 3;
                    do
                    {
                      v80 = v77 - 1;
                      if ( *(_BYTE *)(v77 - 1) != v79[v77] )
                        break;
                      --v77;
                    }
                    while ( v80 > (unsigned __int64)v75 );
                  }
                  v81 = (unsigned int)(v74 - v77);
                  if ( v81 + v76 < v30 || v76 > v30 )
                    v45 -= v81;
                  else
                    v45 += v76 - v30;
                }
              }
              lowLimit = pattern32;
              goto LABEL_122;
            }
            v28 = 1;
          }
        }
LABEL_122:
        dictBase = v400;
        v34 = v384;
        v44 = (_DWORD *)v386;
        if ( v45 < lowLimit )
          goto LABEL_123;
      }
      v48 = (unsigned __int8 *)(v44 + 1);
      v49 = iEnd - 7;
      v50 = v48;
      v51 = v46 + 1;
      if ( v48 < iEnd - 7 )
      {
        if ( *v51 != *(_QWORD *)v48 )
        {
          _BitScanForward64(&v53, *v51 ^ *(_QWORD *)v48);
          HIWORD(v381) = 0;
          v52 = (unsigned int)v53 >> 3;
LABEL_49:
          v44 = (_DWORD *)v386;
          if ( (int)(v52 + 4) > v385 )
          {
            v385 = v52 + 4;
            v399 = (_QWORD *)(v45 + v390);
          }
          goto LABEL_95;
        }
        v50 = v48 + 8;
        v51 = v46 + 3;
      }
      if ( v50 >= v49 )
      {
LABEL_39:
        if ( v50 < iEnd - 3 && *(_DWORD *)v51 == *(_DWORD *)v50 )
        {
          v50 += 4;
          v51 = (_QWORD *)((char *)v51 + 4);
        }
        if ( v50 < iEnd - 1 && *(_WORD *)v51 == *(_WORD *)v50 )
        {
          v50 += 2;
          v51 = (_QWORD *)((char *)v51 + 2);
        }
        if ( v50 < iEnd && *(_BYTE *)v51 == *v50 )
          LODWORD(v50) = (_DWORD)v50 + 1;
        v52 = (_DWORD)v50 - (_DWORD)v48;
      }
      else
      {
        while ( *v51 == *(_QWORD *)v50 )
        {
          v50 += 8;
          ++v51;
          if ( v50 >= v49 )
            goto LABEL_39;
        }
        _BitScanForward64(&v54, *v51 ^ *(_QWORD *)v50);
        HIWORD(v381) = 0;
        v52 = ((unsigned int)v54 >> 3) - (_DWORD)v48 + (_DWORD)v50;
      }
      goto LABEL_49;
    }
LABEL_123:
    v82 = v384;
    if ( v384 )
    {
      if ( v392 - pattern32 < 0xFFFF )
      {
        v83 = *(_QWORD *)(hashTable + 0x40000) - *(_QWORD *)(hashTable + 262152);
        v84 = *(_DWORD *)(hashTable + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v44) >> 17));
        v85 = v84 + pattern32 - v83;
        if ( v392 - v85 <= 0xFFFF )
        {
          v86 = v385;
          while ( 1 )
          {
            if ( !v82-- )
              goto LABEL_150;
            v88 = (_DWORD *)(v84 + *(_QWORD *)(hashTable + 262152));
            if ( *v88 == v31 )
              break;
LABEL_149:
            v95 = *(unsigned __int16 *)(hashTable + 2i64 * (unsigned __int16)v84 + 0x20000);
            v85 -= v95;
            v84 -= v95;
            if ( v392 - v85 > 0xFFFF )
              goto LABEL_150;
          }
          v89 = iEnd;
          v90 = (unsigned __int8 *)(v44 + 1);
          if ( (unsigned __int8 *)((char *)v44 + v83 - v84) <= iEnd )
            v89 = (unsigned __int8 *)v44 + v83 - v84;
          v91 = v88 + 1;
          v92 = (unsigned __int8 *)(v44 + 1);
          v93 = v89 - 7;
          if ( v90 < v89 - 7 )
          {
            if ( *v91 != *(_QWORD *)v90 )
            {
              _BitScanForward64(&v97, *v91 ^ *(_QWORD *)v90);
              HIWORD(v381) = 0;
              v94 = (unsigned int)v97 >> 3;
LABEL_147:
              v44 = (_DWORD *)v386;
              if ( (int)(v94 + 4) > v86 )
              {
                v385 = v94 + 4;
                v86 = v94 + 4;
                v399 = (_QWORD *)(v390 + v85);
              }
              goto LABEL_149;
            }
            v92 = v90 + 8;
            ++v91;
          }
          if ( v92 >= v93 )
          {
LABEL_137:
            if ( v92 < v89 - 3 && *(_DWORD *)v91 == *(_DWORD *)v92 )
            {
              v92 += 4;
              v91 = (_QWORD *)((char *)v91 + 4);
            }
            if ( v92 < v89 - 1 && *(_WORD *)v91 == *(_WORD *)v92 )
            {
              v92 += 2;
              v91 = (_QWORD *)((char *)v91 + 2);
            }
            if ( v92 < v89 && *(_BYTE *)v91 == *v92 )
              LODWORD(v92) = (_DWORD)v92 + 1;
            v94 = (_DWORD)v92 - (_DWORD)v90;
          }
          else
          {
            while ( *v91 == *(_QWORD *)v92 )
            {
              v92 += 8;
              ++v91;
              if ( v92 >= v93 )
                goto LABEL_137;
            }
            _BitScanForward64(&v98, *v91 ^ *(_QWORD *)v92);
            HIWORD(v381) = 0;
            v94 = ((unsigned int)v98 >> 3) - (_DWORD)v90 + (_DWORD)v92;
          }
          goto LABEL_147;
        }
      }
    }
LABEL_150:
    v96 = v385;
    if ( v385 < 4 )
    {
      v22 = v398;
      v24 = (_DWORD *)((char *)v44 + 1);
      v20 = Src;
      goto LABEL_617;
    }
    LOWORD(v99) = (_WORD)v399;
    v403 = v399;
    hashTable = (unsigned __int64)v44;
    v396 = v385;
    while ( 1 )
    {
LABEL_155:
      v100 = (unsigned __int64)v44 + v96;
      if ( v100 > (unsigned __int64)(v406 - 12) )
        goto LABEL_596;
      v394 = (const unsigned __int8 *)(v100 - 2);
      v388 = v96;
      v101 = nbSearches[1];
      v102 = ctx->base;
      v103 = v100 - 2 - (_DWORD)v102;
      v104 = ctx->lowLimit;
      v105 = ctx->dictLimit;
      v106 = ctx->dictBase;
      dictCtx = ctx->dictCtx;
      v107 = v103 - 0xFFFF;
      v390 = (unsigned __int64)v102;
      v35 = v104 + 0x10000 <= v103;
      v392 = v103;
      v108 = ctx->nextToUpdate;
      v109 = &v102[v105];
      if ( v35 )
        v104 = v107;
      v383 = v105;
      v110 = v390;
      v111 = v100 - 2 - v386;
      v112 = v100 - 2 - v390;
      pattern32 = *(_DWORD *)(v100 - 2);
      v384 = v104;
      v113 = 0;
      v404 = v106;
      v114 = 0i64;
      v387 = nbSearches[1];
      if ( (unsigned int)v108 < v112 )
      {
        v115 = (_DWORD *)(v390 + v108);
        do
        {
          v116 = (unsigned int)(-1640531535 * *v115);
          v115 = (_DWORD *)((char *)v115 + 1);
          v117 = v116 >> 17;
          v118 = (unsigned int)(v108 - ctx->hashTable[v117]);
          if ( v118 > 0xFFFF )
            LOWORD(v118) = -1;
          ctx->chainTable[(unsigned __int16)v108] = v118;
          ctx->hashTable[v117] = v108;
          LODWORD(v108) = v108 + 1;
        }
        while ( (unsigned int)v108 < v112 );
        LODWORD(v105) = v383;
        v104 = v384;
        v106 = v404;
      }
      v119 = v394;
      ctx->nextToUpdate = v112;
      v120 = v111;
      v400 = v111;
      v121 = ctx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *v119) >> 17];
      if ( v121 >= v104 )
      {
        while ( 1 )
        {
          if ( !v101 )
            goto LABEL_318;
          v387 = v101 - 1;
          if ( v121 >= (unsigned int)v105 )
          {
            v122 = (_DWORD *)(v121 + v110);
            v123 = pattern32;
            if ( *(_WORD *)(v388 + v386 - 1) == *(_WORD *)((char *)v122 + v388 - v120 - 1) && *v122 == pattern32 )
            {
              v124 = (unsigned __int8 *)(v119 + 1);
              v125 = v122 + 1;
              v126 = v124;
              v127 = iEnd - 7;
              if ( v124 >= iEnd - 7 )
              {
LABEL_174:
                if ( v126 >= v127 )
                {
LABEL_177:
                  if ( v126 < iEnd - 3 && *v125 == *(_DWORD *)v126 )
                  {
                    v126 += 4;
                    ++v125;
                  }
                  if ( v126 < iEnd - 1 && *(_WORD *)v125 == *(_WORD *)v126 )
                  {
                    v126 += 2;
                    v125 = (_DWORD *)((char *)v125 + 2);
                  }
                  if ( v126 < iEnd && *(_BYTE *)v125 == *v126 )
                    LODWORD(v126) = (_DWORD)v126 + 1;
                  v129 = (_DWORD)v126 - (_DWORD)v124;
                  v130 = 0;
                }
                else
                {
                  while ( *(_QWORD *)v125 == *(_QWORD *)v126 )
                  {
                    v126 += 8;
                    v125 += 2;
                    if ( v126 >= v127 )
                      goto LABEL_177;
                  }
                  _BitScanForward64(&v134, *(_QWORD *)v125 ^ *(_QWORD *)v126);
                  v130 = 0;
                  HIWORD(v381) = 0;
                  v129 = ((unsigned int)v134 >> 3) - (_DWORD)v124 + (_DWORD)v126;
                }
              }
              else
              {
                v128 = *(_QWORD *)v125 ^ *(_QWORD *)v124;
                if ( !v128 )
                {
                  v126 = v124 + 8;
                  v125 = v122 + 3;
                  goto LABEL_174;
                }
                v130 = 0;
                _BitScanForward64(&v133, v128);
                HIWORD(v381) = 0;
                v129 = (unsigned int)v133 >> 3;
              }
              v131 = v129 + 4;
              if ( v120 )
              {
                v132 = (__int64)(v386 - (_QWORD)v394) <= v109 - (const unsigned __int8 *)v122 ? (int)v109 - (int)v122 : v386 - (_DWORD)v394;
                if ( v132 < 0 )
                {
                  v135 = (char *)v122 - 1;
                  do
                  {
                    if ( v135[v394 - (const unsigned __int8 *)v122] != *v135 )
                      break;
                    --v135;
                    --v130;
                  }
                  while ( (__int64)&v135[1i64 - (_QWORD)v122] > v132 );
                }
              }
              v119 = v394;
              v136 = v131 - v130;
              if ( v136 > v388 )
              {
                v388 = v136;
                v397 = (unsigned __int64)&v394[v130];
                v393 = (const unsigned __int8 *)v122 + v130;
              }
              LODWORD(v105) = v383;
            }
            v110 = v390;
            goto LABEL_201;
          }
          v139 = &v106[v121];
          if ( *(_DWORD *)v139 != pattern32 )
          {
            v104 = v384;
            v123 = pattern32;
            goto LABEL_201;
          }
          v140 = (unsigned __int8 *)(v119 + 1);
          v141 = v105;
          v142 = v139 + 4;
          v143 = (unsigned __int64)v119 + v141 - v121;
          v144 = &v106[ctx->lowLimit];
          v145 = iEnd;
          if ( v143 <= (unsigned __int64)iEnd )
            v145 = (unsigned __int8 *)v143;
          v146 = (unsigned __int8 *)(v119 + 1);
          v147 = v145 - 7;
          if ( v140 < v145 - 7 )
          {
            if ( *v142 != *(_QWORD *)v140 )
            {
              _BitScanForward64(&v157, *v142 ^ *(_QWORD *)v140);
              HIWORD(v381) = 0;
              v148 = (unsigned int)v157 >> 3;
              goto LABEL_225;
            }
            v146 = v140 + 8;
            v142 = v139 + 12;
          }
          if ( v146 >= v147 )
          {
LABEL_215:
            if ( v146 < v145 - 3 && *(_DWORD *)v142 == *(_DWORD *)v146 )
            {
              v146 += 4;
              v142 = (_QWORD *)((char *)v142 + 4);
            }
            if ( v146 < v145 - 1 && *(_WORD *)v142 == *(_WORD *)v146 )
            {
              v146 += 2;
              v142 = (_QWORD *)((char *)v142 + 2);
            }
            if ( v146 < v145 && *(_BYTE *)v142 == *v146 )
              LODWORD(v146) = (_DWORD)v146 + 1;
            v148 = (_DWORD)v146 - (_DWORD)v140;
          }
          else
          {
            while ( *v142 == *(_QWORD *)v146 )
            {
              v146 += 8;
              ++v142;
              if ( v146 >= v147 )
                goto LABEL_215;
            }
            _BitScanForward64(&v158, *v142 ^ *(_QWORD *)v146);
            HIWORD(v381) = 0;
            v148 = ((unsigned int)v158 >> 3) + (_DWORD)v146 - (_DWORD)v140;
          }
LABEL_225:
          v119 = v394;
          v149 = v148 + 4;
          v150 = (unsigned __int8 *)&v394[v148 + 4];
          if ( v150 == v145 && v145 < iEnd )
          {
            v151 = v109;
            v152 = (unsigned __int8 *)&v394[v149];
            v153 = iEnd - 7;
            if ( v150 >= iEnd - 7 )
            {
LABEL_230:
              if ( v152 >= v153 )
              {
LABEL_233:
                if ( v152 < iEnd - 3 && *(_DWORD *)v151 == *(_DWORD *)v152 )
                {
                  v152 += 4;
                  v151 += 4;
                }
                if ( v152 < iEnd - 1 && *(_WORD *)v151 == *(_WORD *)v152 )
                {
                  v152 += 2;
                  v151 += 2;
                }
                if ( v152 < iEnd && *v151 == *v152 )
                  LODWORD(v152) = (_DWORD)v152 + 1;
                v154 = (_DWORD)v152 - (_DWORD)v150;
              }
              else
              {
                while ( *(_QWORD *)v151 == *(_QWORD *)v152 )
                {
                  v152 += 8;
                  v151 += 8;
                  if ( v152 >= v153 )
                    goto LABEL_233;
                }
                _BitScanForward64(&v160, *(_QWORD *)v151 ^ *(_QWORD *)v152);
                HIWORD(v381) = 0;
                v154 = ((unsigned int)v160 >> 3) - (_DWORD)v150 + (_DWORD)v152;
              }
            }
            else
            {
              if ( *(_QWORD *)v109 == *(_QWORD *)v150 )
              {
                v152 = v150 + 8;
                v151 = v109 + 8;
                goto LABEL_230;
              }
              _BitScanForward64(&v159, *(_QWORD *)v109 ^ *(_QWORD *)v150);
              HIWORD(v381) = 0;
              v154 = (unsigned int)v159 >> 3;
            }
            v119 = v394;
            v149 += v154;
          }
          v155 = 0;
          if ( v400 )
          {
            v156 = (__int64)(v386 - (_QWORD)v119) <= v144 - v139 ? (int)v144 - (int)v139 : v386 - (_DWORD)v119;
            if ( v156 < 0 )
            {
              v161 = (char *)v119 - (char *)v139;
              v162 = v139 - 1;
              do
              {
                if ( v162[v161] != *v162 )
                  break;
                --v162;
                --v155;
              }
              while ( (__int64)&v162[1i64 - (_QWORD)v139] > v156 );
              v119 = v394;
            }
          }
          v110 = v390;
          v163 = v149 - v155;
          v104 = v384;
          if ( v163 > v388 )
          {
            v388 = v163;
            v393 = (const unsigned __int8 *)(v390 + v121 + (__int64)v155);
            v397 = (unsigned __int64)v119 + v155;
          }
          LODWORD(v105) = v383;
          v123 = pattern32;
LABEL_201:
          v137 = chainTable[(unsigned __int16)v121];
          v121 -= v137;
          if ( v402 && v137 == 1 )
          {
            if ( v113 )
            {
              if ( v113 != 2 )
                goto LABEL_279;
            }
            else
            {
              if ( (_BYTE)v123 != HIBYTE(v123) || (unsigned __int16)v123 != HIWORD(v123) )
              {
                v113 = 1;
LABEL_278:
                LODWORD(v105) = v383;
                goto LABEL_279;
              }
              v119 = v394;
              v113 = 2;
              v138 = indyfs_LZ4HC_countPattern(v394 + 4, iEnd, v123);
              LODWORD(v105) = v383;
              v114 = v138 + 4;
            }
            if ( v121 >= (unsigned int)v105 )
            {
              v164 = v121 + v110;
              if ( *(_DWORD *)v164 == v123 )
              {
                v165 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v164 + 4), iEnd, v123);
                v167 = v109;
                v168 = v165 + 4i64;
                if ( v109 + 0xFFFF < (const unsigned __int8 *)v119 )
                  v167 = (const unsigned __int8 *)v119 - 0xFFFF;
                HIWORD(v381) = HIWORD(v123);
                v169 = v166;
                if ( v166 >= (unsigned __int64)(v167 + 4) )
                {
                  do
                  {
                    v170 = v169 - 4;
                    if ( *(_DWORD *)(v169 - 4) != v123 )
                      break;
                    v169 -= 4i64;
                  }
                  while ( v170 >= (unsigned __int64)(v167 + 4) );
                }
                if ( v169 > (unsigned __int64)v167 )
                {
                  v171 = (char *)&v381 - v169 + 3;
                  do
                  {
                    v172 = v169 - 1;
                    if ( *(_BYTE *)(v169 - 1) != v171[v169] )
                      break;
                    --v169;
                  }
                  while ( v172 > (unsigned __int64)v167 );
                }
                v173 = (unsigned int)(v166 - v169);
                if ( v173 + v168 < v114 || v168 > v114 )
                  v121 -= v173;
                else
                  v121 += v168 - v114;
                goto LABEL_278;
              }
            }
          }
LABEL_279:
          v119 = v394;
          v106 = v404;
          v101 = v387;
          v110 = v390;
          if ( v121 < v104 )
            break;
          v120 = v400;
        }
      }
      if ( v101 )
      {
        if ( v392 - v104 < 0xFFFF )
        {
          v174 = dictCtx->end - dictCtx->base;
          v175 = dictCtx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *v119) >> 17];
          v176 = v384 + v175 - v174;
          if ( v392 - v176 <= 0xFFFF )
          {
            v177 = v387;
            while ( 1 )
            {
              if ( !v177-- )
                goto LABEL_318;
              v179 = dictCtx->base;
              v180 = (__int64)&v179[v175];
              if ( *(_DWORD *)v180 == pattern32 )
                break;
LABEL_317:
              v197 = dictCtx->chainTable[(unsigned __int16)v175];
              v176 -= v197;
              v175 -= v197;
              if ( v392 - v176 > 0xFFFF )
                goto LABEL_318;
            }
            v181 = iEnd;
            v182 = (unsigned __int8 *)(v119 + 1);
            v183 = (_QWORD *)(v180 + 4);
            if ( (unsigned __int8 *)((char *)v119 + v174 - v175) <= iEnd )
              v181 = (unsigned __int8 *)v119 + v174 - v175;
            v184 = (unsigned __int8 *)(v119 + 1);
            v185 = v181 - 7;
            if ( v182 < v181 - 7 )
            {
              if ( *v183 != *(_QWORD *)v182 )
              {
                v187 = 0;
                _BitScanForward64(&v191, *v183 ^ *(_QWORD *)v182);
                HIWORD(v381) = 0;
                v186 = (unsigned int)v191 >> 3;
LABEL_304:
                v188 = v186 + 4;
                if ( v400 )
                {
                  v189 = &v179[dictCtx->dictLimit];
                  v190 = (__int64)(v386 - (_QWORD)v394) <= (__int64)&v189[-v180] ? (_DWORD)v189 - v180 : (int)v386 - (int)v394;
                  if ( v190 < 0 )
                  {
                    v193 = v180 - 1;
                    v194 = -v180;
                    do
                    {
                      if ( v394[v194 + v193] != *(_BYTE *)v193 )
                        break;
                      --v193;
                      --v187;
                    }
                    while ( v194 + v193 + 1 > v190 );
                  }
                }
                v195 = v188 - v187;
                if ( v195 <= v388 )
                {
                  v119 = v394;
                }
                else
                {
                  v196 = v187;
                  v119 = v394;
                  v388 = v195;
                  v393 = (const unsigned __int8 *)(v390 + v196 + v176);
                  v397 = (unsigned __int64)&v394[v196];
                }
                goto LABEL_317;
              }
              v184 = v182 + 8;
              v183 = (_QWORD *)(v180 + 12);
            }
            if ( v184 >= v185 )
            {
LABEL_294:
              if ( v184 < v181 - 3 && *(_DWORD *)v183 == *(_DWORD *)v184 )
              {
                v184 += 4;
                v183 = (_QWORD *)((char *)v183 + 4);
              }
              if ( v184 < v181 - 1 && *(_WORD *)v183 == *(_WORD *)v184 )
              {
                v184 += 2;
                v183 = (_QWORD *)((char *)v183 + 2);
              }
              if ( v184 < v181 && *(_BYTE *)v183 == *v184 )
                LODWORD(v184) = (_DWORD)v184 + 1;
              v186 = (_DWORD)v184 - (_DWORD)v182;
              v187 = 0;
            }
            else
            {
              while ( *v183 == *(_QWORD *)v184 )
              {
                v184 += 8;
                ++v183;
                if ( v184 >= v185 )
                  goto LABEL_294;
              }
              _BitScanForward64(&v192, *v183 ^ *(_QWORD *)v184);
              v187 = 0;
              HIWORD(v381) = 0;
              v186 = ((unsigned int)v192 >> 3) - (_DWORD)v182 + (_DWORD)v184;
            }
            goto LABEL_304;
          }
        }
      }
LABEL_318:
      v198 = v388;
      v96 = v385;
      if ( v388 == v385 )
      {
        v44 = (_DWORD *)v386;
        LOWORD(v99) = (_WORD)v399;
LABEL_596:
        v308 = v398;
        v364 = Src;
        v310 = limit;
        v365 = (char *)v44 - (_BYTE *)Src;
        v23 = (char *)v391;
        v366 = v398 + 1;
        if ( limit && (unsigned __int64)v366 + v365 + (v365 >> 8) + 8 > v391 )
          goto LABEL_621;
        if ( v365 < 0xF )
        {
          *v398 = 16 * v365;
        }
        else
        {
          v367 = v365 - 15;
          *v398 = -16;
          if ( v365 - 15 >= 0xFF )
          {
            v368 = v366;
            v366 = (_QWORD *)((char *)v366 + v367 / 0xFF);
            memset(v368, 255, v367 / 0xFF);
            v44 = (_DWORD *)v386;
            v364 = Src;
            v310 = limit;
            v367 %= 0xFFui64;
          }
          *(_BYTE *)v366 = v367;
          v366 = (_QWORD *)((char *)v366 + 1);
        }
        v369 = (_WORD *)((char *)v366 + v365);
        v370 = v364 - (_BYTE *)v366;
        do
        {
          *v366 = *(_QWORD *)((char *)v366 + v370);
          ++v366;
        }
        while ( v366 < (_QWORD *)v369 );
        *v369 = (_WORD)v44 - v99;
        v22 = (char *)(v369 + 1);
        v398 = v22;
        v371 = v96 - 4;
        if ( v310 )
        {
          if ( &v22[((unsigned __int64)(v96 - 4) >> 8) + 6] > v23 )
            goto LABEL_621;
        }
        v372 = *v308;
        if ( v371 < 0xF )
        {
          *v308 = v372 + v96 - 4;
        }
        else
        {
          v373 = v371 - 15;
          *v308 = v372 + 15;
          if ( v373 >= 0x1FE )
          {
            v374 = v373 / 0x1FE;
            v373 %= 0x1FEui64;
            do
            {
              *(_WORD *)v22 = -1;
              v22 += 2;
              --v374;
            }
            while ( v374 );
          }
          if ( v373 >= 0xFF )
          {
            LOBYTE(v373) = v373 + 1;
            *v22++ = -1;
          }
          *v22++ = v373;
          v398 = v22;
        }
        v24 = (_DWORD *)((char *)v44 + v96);
        goto LABEL_616;
      }
      v199 = v386;
      v200 = v397;
      if ( hashTable < v386 && v397 < v386 + v396 )
      {
        v199 = hashTable;
        v399 = v403;
        v96 = v396;
        v386 = hashTable;
        v385 = v396;
      }
      if ( (__int64)(v397 - v199) >= 3 )
        break;
      LOWORD(v99) = (_WORD)v393;
      v96 = v388;
      v399 = v393;
      v44 = (_DWORD *)v397;
      v385 = v388;
      v386 = v397;
    }
    v201 = (__int64)v393;
    while ( 1 )
    {
      if ( (__int64)(v200 - v199) < 18 )
      {
        v202 = v96;
        if ( v96 > 18 )
          v202 = 18;
        v203 = v200;
        if ( v199 + v202 > v198 + v200 - 4 )
        {
          v202 = v200 - v199 + v198 - 4;
          v203 = v200;
        }
        v204 = v202 + v199 - v203;
        if ( v204 > 0 )
        {
          v200 += v204;
          v198 -= v204;
          v397 = v200;
          v388 = v198;
          v393 = (const unsigned __int8 *)(v204 + v201);
        }
      }
      v205 = v200 + v198;
      v383 = v198;
      v403 = (_QWORD *)v205;
      if ( v205 > (unsigned __int64)(v406 - 12) )
      {
        v302 = v198;
      }
      else
      {
        v206 = v205 - 3;
        v207 = nbSearches[1];
        v208 = v205 - 3;
        v392 = nbSearches[1];
        v209 = v205 - 3;
        v210 = ctx->base;
        v211 = v205 - 3 - (_DWORD)v210;
        v212 = ctx->lowLimit;
        v213 = ctx->dictLimit;
        v214 = ctx->dictBase;
        dictCtx = ctx->dictCtx;
        v396 = v211;
        v394 = v210;
        v387 = v213;
        v215 = &v210[v213];
        if ( v212 + 0x10000 <= v211 )
          v212 = v211 - 0xFFFF;
        v404 = v214;
        v216 = v208 - v200;
        v384 = *(_DWORD *)v206;
        v217 = v209 - (_DWORD)v210;
        pattern32 = v212;
        v218 = 0;
        v390 = 0i64;
        v219 = 0i64;
        v220 = ctx->nextToUpdate;
        if ( (unsigned int)v220 < v217 )
        {
          v221 = &v210[v220];
          do
          {
            v222 = (unsigned int)(-1640531535 * *(_DWORD *)v221++);
            v223 = v222 >> 17;
            v224 = (unsigned int)(v220 - ctx->hashTable[v223]);
            if ( v224 > 0xFFFF )
              LOWORD(v224) = -1;
            ctx->chainTable[(unsigned __int16)v220] = v224;
            ctx->hashTable[v223] = v220;
            LODWORD(v220) = v220 + 1;
          }
          while ( (unsigned int)v220 < v217 );
          v219 = v390;
          LODWORD(v213) = v387;
          v214 = v404;
        }
        v225 = ctx;
        ctx->nextToUpdate = v217;
        v226 = (unsigned int)(-1640531535 * *(_DWORD *)v206);
        v227 = v216;
        v400 = v216;
        v228 = ctx->hashTable[v226 >> 17];
        if ( v228 >= v212 )
        {
          while ( 1 )
          {
            if ( !v207 )
              goto LABEL_495;
            v392 = v207 - 1;
            if ( v228 >= (unsigned int)v213 )
            {
              v229 = &v394[v228];
              v230 = v384;
              if ( *(_WORD *)(v383 + v397 - 1) == *(_WORD *)&v229[v383 - v227 - 1] && *(_DWORD *)v229 == v384 )
              {
                v231 = (_QWORD *)(v206 + 4);
                v232 = v229 + 4;
                v233 = (unsigned __int8 *)(v206 + 4);
                v234 = iEnd - 7;
                if ( v206 + 4 >= (unsigned __int64)(iEnd - 7) )
                {
LABEL_351:
                  if ( v233 >= v234 )
                  {
LABEL_354:
                    if ( v233 < iEnd - 3 && *v232 == *(_DWORD *)v233 )
                    {
                      v233 += 4;
                      ++v232;
                    }
                    if ( v233 < iEnd - 1 && *(_WORD *)v232 == *(_WORD *)v233 )
                    {
                      v233 += 2;
                      v232 = (_DWORD *)((char *)v232 + 2);
                    }
                    if ( v233 < iEnd && *(_BYTE *)v232 == *v233 )
                      LODWORD(v233) = (_DWORD)v233 + 1;
                    v236 = (_DWORD)v233 - (_DWORD)v231;
                    v237 = 0;
                  }
                  else
                  {
                    while ( *(_QWORD *)v232 == *(_QWORD *)v233 )
                    {
                      v233 += 8;
                      v232 += 2;
                      if ( v233 >= v234 )
                        goto LABEL_354;
                    }
                    _BitScanForward64(&v241, *(_QWORD *)v232 ^ *(_QWORD *)v233);
                    v237 = 0;
                    HIWORD(v381) = 0;
                    v236 = ((unsigned int)v241 >> 3) - (_DWORD)v231 + (_DWORD)v233;
                  }
                }
                else
                {
                  v235 = *(_QWORD *)v232 ^ *v231;
                  if ( !v235 )
                  {
                    v233 = (unsigned __int8 *)(v206 + 12);
                    v232 = v229 + 12;
                    goto LABEL_351;
                  }
                  v237 = 0;
                  _BitScanForward64(&v240, v235);
                  HIWORD(v381) = 0;
                  v236 = (unsigned int)v240 >> 3;
                }
                v238 = v236 + 4;
                if ( v227 )
                {
                  v239 = (__int64)(v397 - v206) <= v215 - v229 ? (int)v215 - (int)v229 : v397 - v206;
                  if ( v239 < 0 )
                  {
                    v242 = (_BYTE *)(v206 - 1);
                    do
                    {
                      if ( *v242 != v229[(_QWORD)v242 - v206] )
                        break;
                      --v242;
                      --v237;
                    }
                    while ( (__int64)&v242[1 - v206] > v239 );
                  }
                }
                v243 = v238 - v237;
                if ( v243 > v383 )
                {
                  v383 = v243;
                  v401 = &v229[v237];
                  v405 = v237 + v206;
                }
                LODWORD(v213) = v387;
              }
              v212 = pattern32;
              goto LABEL_378;
            }
            v247 = &v214[v228];
            if ( *(_DWORD *)v247 != v384 )
            {
              v219 = v390;
              v230 = v384;
              goto LABEL_378;
            }
            v248 = (unsigned __int8 *)(v206 + 4);
            v249 = &v214[v225->lowLimit];
            v250 = v213;
            v251 = iEnd;
            v252 = v247 + 4;
            v253 = v206 + v250 - v228;
            if ( v253 <= (unsigned __int64)iEnd )
              v251 = (unsigned __int8 *)v253;
            v254 = (unsigned __int8 *)(v206 + 4);
            v255 = v251 - 7;
            if ( v248 < v251 - 7 )
            {
              if ( *v252 != *(_QWORD *)v248 )
              {
                _BitScanForward64(&v265, *v252 ^ *(_QWORD *)v248);
                HIWORD(v381) = 0;
                v256 = (unsigned int)v265 >> 3;
                goto LABEL_402;
              }
              v254 = (unsigned __int8 *)(v206 + 12);
              v252 = v247 + 12;
            }
            if ( v254 >= v255 )
            {
LABEL_392:
              if ( v254 < v251 - 3 && *(_DWORD *)v252 == *(_DWORD *)v254 )
              {
                v254 += 4;
                v252 = (_QWORD *)((char *)v252 + 4);
              }
              if ( v254 < v251 - 1 && *(_WORD *)v252 == *(_WORD *)v254 )
              {
                v254 += 2;
                v252 = (_QWORD *)((char *)v252 + 2);
              }
              if ( v254 < v251 && *(_BYTE *)v252 == *v254 )
                LODWORD(v254) = (_DWORD)v254 + 1;
              v256 = (_DWORD)v254 - (_DWORD)v248;
            }
            else
            {
              while ( *v252 == *(_QWORD *)v254 )
              {
                v254 += 8;
                ++v252;
                if ( v254 >= v255 )
                  goto LABEL_392;
              }
              _BitScanForward64(&v266, *v252 ^ *(_QWORD *)v254);
              HIWORD(v381) = 0;
              v256 = ((unsigned int)v266 >> 3) - (_DWORD)v248 + (_DWORD)v254;
            }
LABEL_402:
            v257 = v256 + 4;
            v258 = (unsigned __int8 *)(v206 + (int)(v256 + 4));
            if ( v258 == v251 && v251 < iEnd )
            {
              v259 = iEnd - 7;
              v260 = v215;
              v261 = (unsigned __int8 *)(v206 + v257);
              if ( v258 >= iEnd - 7 )
              {
LABEL_407:
                if ( v261 >= v259 )
                {
LABEL_410:
                  if ( v261 < iEnd - 3 && *(_DWORD *)v260 == *(_DWORD *)v261 )
                  {
                    v261 += 4;
                    v260 += 4;
                  }
                  if ( v261 < iEnd - 1 && *(_WORD *)v260 == *(_WORD *)v261 )
                  {
                    v261 += 2;
                    v260 += 2;
                  }
                  if ( v261 < iEnd && *v260 == *v261 )
                    LODWORD(v261) = (_DWORD)v261 + 1;
                  v262 = (_DWORD)v261 - (_DWORD)v258;
                }
                else
                {
                  while ( *(_QWORD *)v260 == *(_QWORD *)v261 )
                  {
                    v261 += 8;
                    v260 += 8;
                    if ( v261 >= v259 )
                      goto LABEL_410;
                  }
                  _BitScanForward64(&v268, *(_QWORD *)v260 ^ *(_QWORD *)v261);
                  HIWORD(v381) = 0;
                  v262 = ((unsigned int)v268 >> 3) - (_DWORD)v258 + (_DWORD)v261;
                }
              }
              else
              {
                if ( *(_QWORD *)v215 == *(_QWORD *)v258 )
                {
                  v261 = v258 + 8;
                  v260 = v215 + 8;
                  goto LABEL_407;
                }
                _BitScanForward64(&v267, *(_QWORD *)v215 ^ *(_QWORD *)v258);
                HIWORD(v381) = 0;
                v262 = (unsigned int)v267 >> 3;
              }
              v257 += v262;
            }
            v263 = 0;
            if ( v400 )
            {
              v264 = (__int64)(v397 - v206) <= v249 - v247 ? (int)v249 - (int)v247 : v397 - v206;
              if ( v264 < 0 )
              {
                v269 = &v247[-v206];
                v270 = (_BYTE *)(v206 - 1);
                do
                {
                  if ( *v270 != v270[(_QWORD)v269] )
                    break;
                  --v270;
                  --v263;
                }
                while ( (__int64)&v270[1 - v206] > v264 );
              }
            }
            v219 = v390;
            v271 = v257 - v263;
            v212 = pattern32;
            if ( v271 > v383 )
            {
              v383 = v271;
              v401 = &v394[v263 + (unsigned __int64)v228];
              v405 = v206 + v263;
            }
            LODWORD(v213) = v387;
            v230 = v384;
LABEL_378:
            v244 = chainTable[(unsigned __int16)v228];
            v228 -= v244;
            if ( v402 && v244 == 1 )
            {
              if ( v218 )
              {
                if ( v218 != 2 )
                  goto LABEL_457;
                v245 = iEnd;
              }
              else
              {
                if ( (_BYTE)v230 != HIBYTE(v230) || (unsigned __int16)v230 != HIWORD(v230) )
                {
                  LODWORD(v213) = v387;
                  v218 = 1;
                  goto LABEL_457;
                }
                v245 = iEnd;
                v218 = 2;
                v246 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v206 + 4), iEnd, v230);
                LODWORD(v213) = v387;
                v219 = v246 + 4;
                v390 = v219;
              }
              if ( v228 >= (unsigned int)v213 )
              {
                v272 = &v394[v228];
                if ( *(_DWORD *)v272 == v230 )
                {
                  v273 = indyfs_LZ4HC_countPattern(v272 + 4, v245, v230);
                  v275 = v215;
                  v276 = v273 + 4i64;
                  if ( (unsigned __int64)(v215 + 0xFFFF) < v206 )
                    v275 = (const unsigned __int8 *)(v206 - 0xFFFF);
                  HIWORD(v381) = HIWORD(v230);
                  v277 = v274;
                  if ( v274 >= (unsigned __int64)(v275 + 4) )
                  {
                    do
                    {
                      v278 = v277 - 4;
                      if ( *(_DWORD *)(v277 - 4) != v230 )
                        break;
                      v277 -= 4i64;
                    }
                    while ( v278 >= (unsigned __int64)(v275 + 4) );
                  }
                  if ( v277 > (unsigned __int64)v275 )
                  {
                    v279 = (char *)&v381 - v277 + 3;
                    do
                    {
                      v280 = v277 - 1;
                      if ( *(_BYTE *)(v277 - 1) != v279[v277] )
                        break;
                      --v277;
                    }
                    while ( v280 > (unsigned __int64)v275 );
                  }
                  v281 = (unsigned int)(v274 - v277);
                  if ( v281 + v276 < v219 || v276 > v219 )
                    v228 -= v281;
                  else
                    v228 += v276 - v219;
                  LODWORD(v213) = v387;
                }
                v212 = pattern32;
              }
            }
LABEL_457:
            v214 = v404;
            v207 = v392;
            v225 = ctx;
            if ( v228 < v212 )
              break;
            v227 = v400;
          }
        }
        if ( v207 )
        {
          if ( v396 - v212 < 0xFFFF )
          {
            v282 = dictCtx->end - dictCtx->base;
            v283 = dictCtx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v206) >> 17];
            v284 = v212 + v283 - v282;
            if ( (unsigned int)(v396 - v284) <= 0xFFFF )
            {
              v285 = v392;
              while ( 1 )
              {
                if ( !v285-- )
                  goto LABEL_495;
                v287 = dictCtx->base;
                v288 = &v287[v283];
                if ( *(_DWORD *)v288 == v384 )
                  break;
LABEL_494:
                v301 = dictCtx->chainTable[(unsigned __int16)v283];
                v284 -= v301;
                v283 -= v301;
                if ( (unsigned int)(v396 - v284) > 0xFFFF )
                  goto LABEL_495;
              }
              v289 = iEnd;
              v290 = (unsigned __int8 *)(v206 + 4);
              v291 = v288 + 4;
              v292 = (unsigned __int8 *)(v206 + 4);
              if ( v282 - v283 + v206 <= (unsigned __int64)iEnd )
                v289 = (unsigned __int8 *)(v282 - v283 + v206);
              v293 = v289 - 7;
              if ( v290 >= v289 - 7 )
              {
LABEL_469:
                if ( v292 >= v293 )
                {
LABEL_472:
                  if ( v292 < v289 - 3 && *v291 == *(_DWORD *)v292 )
                  {
                    v292 += 4;
                    ++v291;
                  }
                  if ( v292 < v289 - 1 && *(_WORD *)v291 == *(_WORD *)v292 )
                  {
                    v292 += 2;
                    v291 = (_DWORD *)((char *)v291 + 2);
                  }
                  if ( v292 < v289 && *(_BYTE *)v291 == *v292 )
                    LODWORD(v292) = (_DWORD)v292 + 1;
                  v294 = (_DWORD)v292 - (_DWORD)v290;
                  v295 = 0;
                }
                else
                {
                  while ( *(_QWORD *)v292 == *(_QWORD *)v291 )
                  {
                    v292 += 8;
                    v291 += 2;
                    if ( v292 >= v293 )
                      goto LABEL_472;
                  }
                  _BitScanForward64(&v298, *(_QWORD *)v292 ^ *(_QWORD *)v291);
                  v295 = 0;
                  HIWORD(v381) = 0;
                  v294 = ((unsigned int)v298 >> 3) - (_DWORD)v290 + (_DWORD)v292;
                }
              }
              else
              {
                if ( *(_QWORD *)v290 == *(_QWORD *)v291 )
                {
                  v292 = (unsigned __int8 *)(v206 + 12);
                  v291 = v288 + 12;
                  goto LABEL_469;
                }
                v295 = 0;
                _BitScanForward64(&v297, *(_QWORD *)v290 ^ *(_QWORD *)v291);
                HIWORD(v381) = 0;
                v294 = (unsigned int)v297 >> 3;
              }
              if ( v400 )
              {
                v296 = (__int64)(v397 - v206) <= (__int64)(dictCtx->dictLimit - (unsigned __int64)v283) ? (int)v287 + dictCtx->dictLimit - (int)v288 : v397 - v206;
                if ( v296 < 0 )
                {
                  v299 = (char *)&v288[-v206];
                  v300 = (_BYTE *)(v206 - 1);
                  do
                  {
                    if ( *v300 != v300[(_QWORD)v299] )
                      break;
                    --v300;
                    --v295;
                  }
                  while ( (__int64)&v300[1 - v206] > v296 );
                }
              }
              if ( (int)(v294 + 4 - v295) > v383 )
              {
                v383 = v294 + 4 - v295;
                v401 = &v394[v284 + v295];
                v405 = v206 + v295;
              }
              goto LABEL_494;
            }
          }
        }
LABEL_495:
        v302 = v383;
        v205 = (unsigned __int64)v403;
        v200 = v397;
        v198 = v388;
        v199 = v386;
        v96 = v385;
      }
      if ( v302 == v198 )
        break;
      v303 = v405;
      v304 = v199 + v96;
      if ( v405 >= v304 + 3 )
      {
        if ( v200 < v304 )
        {
          if ( (__int64)(v200 - v199) < 18 )
          {
            if ( v96 > 18 )
              v96 = 18;
            v305 = v200;
            if ( v199 + v96 > v205 - 4 )
            {
              v96 = v200 - v199 + v198 - 4;
              v305 = v200;
            }
            v306 = (__int64)v393;
            v307 = v96 + v199 - v305;
            if ( v307 > 0 )
            {
              v200 += v307;
              v306 = (__int64)&v393[v307];
              v198 -= v307;
            }
            goto LABEL_511;
          }
          v96 = v200 - v199;
        }
        v306 = (__int64)v393;
LABEL_511:
        v308 = v398;
        v309 = Src;
        v310 = limit;
        v311 = v199 - (_QWORD)Src;
        v312 = v391;
        v313 = v398 + 1;
        if ( limit && (unsigned __int64)v313 + (v311 >> 8) + v311 + 8 > v391 )
          goto LABEL_620;
        if ( v311 < 0xF )
        {
          *v398 = 16 * v311;
        }
        else
        {
          v314 = v311 - 15;
          *v398 = -16;
          if ( v311 - 15 >= 0xFF )
          {
            v315 = v313;
            v313 = (_QWORD *)((char *)v313 + v314 / 0xFF);
            memset(v315, 255, v314 / 0xFF);
            v302 = v383;
            v309 = Src;
            v310 = limit;
            v314 %= 0xFFui64;
          }
          *(_BYTE *)v313 = v314;
          v313 = (_QWORD *)((char *)v313 + 1);
          v199 = v386;
        }
        v316 = (_WORD *)((char *)v313 + v311);
        v317 = v309 - (_BYTE *)v313;
        do
        {
          *v313 = *(_QWORD *)((char *)v313 + v317);
          ++v313;
        }
        while ( v313 < (_QWORD *)v316 );
        *v316 = v199 - (_WORD)v399;
        v318 = v316 + 1;
        v398 = (char *)v318;
        v319 = v96 - 4;
        if ( v310 && (unsigned __int64)v318 + ((unsigned __int64)(v96 - 4) >> 8) + 6 > v312 )
        {
LABEL_619:
          v23 = (char *)v391;
LABEL_621:
          v13 = 0;
          if ( v310 != 2 )
            return v13;
          v21 = (__int64)v406;
          v22 = v308;
          v20 = Src;
          goto LABEL_623;
        }
        v320 = *v308;
        if ( v319 < 0xF )
        {
          *v308 = v320 + v96 - 4;
        }
        else
        {
          v321 = v319 - 15;
          *v308 = v320 + 15;
          if ( v321 >= 0x1FE )
          {
            v322 = v321 / 0x1FE;
            v321 %= 0x1FEui64;
            do
            {
              *v318++ = -1;
              --v322;
            }
            while ( v322 );
          }
          if ( v321 >= 0xFF )
          {
            LOBYTE(v321) = v321 + 1;
            *(_BYTE *)v318 = -1;
            v318 = (_WORD *)((char *)v318 + 1);
          }
          *(_BYTE *)v318 = v321;
          v398 = (char *)v318 + 1;
        }
        v323 = v96;
        v96 = v198;
        v386 = v200;
        Src = (void *)(v199 + v323);
        v199 = v200;
        v399 = (_QWORD *)v306;
        v385 = v198;
        goto LABEL_500;
      }
      if ( v405 >= v304 )
      {
        v324 = (__int64)v393;
        v99 = (__int64)v401;
        if ( v200 < v304 )
        {
          v325 = v96 + v199 - v200;
          v198 -= v325;
          v200 += v325;
          v324 = (__int64)&v393[v325];
          v397 = v200;
          v393 = (const unsigned __int8 *)v324;
          if ( v198 < 4 )
          {
            v200 = v405;
            v397 = v405;
            v324 = (__int64)v401;
            v393 = v401;
            v198 = v302;
          }
        }
        v308 = v398;
        v326 = Src;
        v310 = limit;
        v327 = v199 - (_QWORD)Src;
        v328 = v398 + 1;
        if ( limit && (unsigned __int64)v328 + (v327 >> 8) + v327 + 8 > v391 )
          goto LABEL_619;
        if ( v327 < 0xF )
        {
          *v398 = 16 * v327;
        }
        else
        {
          v329 = v327 - 15;
          *v398 = -16;
          if ( v327 - 15 >= 0xFF )
          {
            v330 = v328;
            v328 = (_QWORD *)((char *)v328 + v329 / 0xFF);
            memset(v330, 255, v329 / 0xFF);
            v302 = v383;
            v326 = Src;
            v310 = limit;
            v329 %= 0xFFui64;
          }
          *(_BYTE *)v328 = v329;
          v328 = (_QWORD *)((char *)v328 + 1);
          v199 = v386;
        }
        v331 = (_WORD *)((char *)v328 + v327);
        v332 = v326 - (_BYTE *)v328;
        do
        {
          *v328 = *(_QWORD *)((char *)v328 + v332);
          ++v328;
        }
        while ( v328 < (_QWORD *)v331 );
        *v331 = v199 - (_WORD)v399;
        v333 = v331 + 1;
        v398 = (char *)v333;
        v334 = v96 - 4;
        if ( v310 )
        {
          if ( (unsigned __int64)v333 + ((unsigned __int64)(v96 - 4) >> 8) + 6 > v391 )
            goto LABEL_619;
        }
        v335 = *v308;
        if ( v334 < 0xF )
        {
          *v308 = v335 + v96 - 4;
        }
        else
        {
          v336 = v334 - 15;
          *v308 = v335 + 15;
          if ( v336 >= 0x1FE )
          {
            v337 = v336 / 0x1FE;
            v336 %= 0x1FEui64;
            do
            {
              *v333++ = -1;
              --v337;
            }
            while ( v337 );
          }
          if ( v336 >= 0xFF )
          {
            LOBYTE(v336) = v336 + 1;
            *(_BYTE *)v333 = -1;
            v333 = (_WORD *)((char *)v333 + 1);
          }
          *(_BYTE *)v333 = v336;
          v398 = (char *)v333 + 1;
        }
        v338 = v96;
        v96 = v302;
        v385 = v302;
        Src = (void *)(v199 + v338);
        v44 = (_DWORD *)v303;
        v386 = v303;
        v399 = (_QWORD *)v99;
        hashTable = v200;
        v403 = (_QWORD *)v324;
        v396 = v198;
        goto LABEL_155;
      }
LABEL_500:
      v201 = (__int64)v401;
      v200 = v303;
      v393 = v401;
      v198 = v302;
      v397 = v303;
      v388 = v302;
    }
    if ( v200 < v199 + v96 )
      v96 = v200 - v199;
    v308 = v398;
    v339 = Src;
    v310 = limit;
    v340 = v199 - (_QWORD)Src;
    v312 = v391;
    v341 = v398 + 1;
    if ( limit && (unsigned __int64)v341 + v340 + (v340 >> 8) + 8 > v391 )
    {
LABEL_620:
      v23 = (char *)v312;
      goto LABEL_621;
    }
    if ( v340 < 0xF )
    {
      *v398 = 16 * v340;
    }
    else
    {
      v342 = v340 - 15;
      *v398 = -16;
      if ( v340 - 15 >= 0xFF )
      {
        v343 = v341;
        v341 = (_QWORD *)((char *)v341 + v342 / 0xFF);
        memset(v343, 255, v342 / 0xFF);
        v339 = Src;
        v310 = limit;
        v342 %= 0xFFui64;
      }
      *(_BYTE *)v341 = v342;
      v341 = (_QWORD *)((char *)v341 + 1);
      v199 = v386;
    }
    v344 = (_WORD *)((char *)v341 + v340);
    v345 = v339 - (_BYTE *)v341;
    do
    {
      *v341 = *(_QWORD *)((char *)v341 + v345);
      ++v341;
    }
    while ( v341 < (_QWORD *)v344 );
    *v344 = v199 - (_WORD)v399;
    v346 = v344 + 1;
    v347 = v96 - 4;
    if ( v310 && (unsigned __int64)&v346[((unsigned __int64)(v96 - 4) >> 8) + 6] > v312 )
      goto LABEL_619;
    v348 = *v308;
    if ( v347 < 0xF )
    {
      *v308 = v348 + v96 - 4;
    }
    else
    {
      v349 = v347 - 15;
      *v308 = v348 + 15;
      if ( v349 >= 0x1FE )
      {
        v350 = v349 / 0x1FE;
        v349 %= 0x1FEui64;
        do
        {
          *(_WORD *)v346 = -1;
          v346 += 2;
          --v350;
        }
        while ( v350 );
        v310 = limit;
      }
      if ( v349 >= 0xFF )
      {
        LOBYTE(v349) = v349 + 1;
        *v346++ = -1;
      }
      *v346++ = v349;
    }
    v351 = (void *)(v199 + v96);
    v308 = v346;
    v352 = v346;
    Src = v351;
    v353 = v346;
    v354 = v200 - (_QWORD)v351;
    v355 = v346 + 1;
    if ( v310 )
    {
      if ( (unsigned __int64)v355 + v354 + (v354 >> 8) + 8 > v312 )
        goto LABEL_619;
    }
    if ( v354 < 0xF )
    {
      *v352 = 16 * v354;
    }
    else
    {
      v356 = v354 - 15;
      *v352 = -16;
      if ( v354 - 15 >= 0xFF )
      {
        v357 = v355;
        v355 = (_QWORD *)((char *)v355 + v356 / 0xFF);
        memset(v357, 255, v356 / 0xFF);
        v351 = Src;
        v310 = limit;
        v356 %= 0xFFui64;
      }
      *(_BYTE *)v355 = v356;
      v355 = (_QWORD *)((char *)v355 + 1);
    }
    v358 = (_WORD *)((char *)v355 + v354);
    v359 = (_BYTE *)v351 - (_BYTE *)v355;
    do
    {
      *v355 = *(_QWORD *)((char *)v355 + v359);
      ++v355;
    }
    while ( v355 < (_QWORD *)v358 );
    *v358 = v200 - (_WORD)v393;
    v22 = (char *)(v358 + 1);
    v398 = v22;
    v360 = v198 - 4;
    if ( v310 )
    {
      if ( (unsigned __int64)&v22[((unsigned __int64)(v198 - 4) >> 8) + 6] > v391 )
        goto LABEL_619;
    }
    v361 = *v353;
    if ( v360 < 0xF )
    {
      *v352 = v361 + v198 - 4;
      v24 = (unsigned int *)(v200 + v198);
    }
    else
    {
      v362 = v360 - 15;
      *v352 = v361 + 15;
      if ( v362 >= 0x1FE )
      {
        v363 = v362 / 0x1FE;
        v362 %= 0x1FEui64;
        do
        {
          *(_WORD *)v22 = -1;
          v22 += 2;
          --v363;
        }
        while ( v363 );
      }
      if ( v362 >= 0xFF )
      {
        LOBYTE(v362) = v362 + 1;
        *v22++ = -1;
      }
      *v22++ = v362;
      v398 = v22;
      v24 = (unsigned int *)(v200 + v198);
    }
LABEL_616:
    Src = v24;
    v20 = v24;
LABEL_617:
    v21 = (__int64)v406;
    v13 = 0;
    v386 = (unsigned __int64)v24;
    if ( v24 <= (unsigned int *)v406 - 3 )
    {
      v16 = ctx;
      continue;
    }
    break;
  }
  v310 = limit;
  v23 = (char *)v391;
LABEL_623:
  LODWORD(v10) = v412;
  v7 = srcSizePtr;
LABEL_626:
  v375 = v21 - (_QWORD)v20;
  v376 = (unsigned __int64)(v23 + 5);
  if ( v310 != 2 )
    v376 = (unsigned __int64)v23;
  if ( v310 == notLimited || (unsigned __int64)&v22[v375 + 1 + (v375 + 240) / 0xFF] <= v376 )
    goto LABEL_632;
  if ( limit != limitedOutput )
  {
    v375 = v376 - (_QWORD)v22 - 1 - (v376 - (unsigned __int64)v22 - 1 + 240) / 0xFF;
LABEL_632:
    v377 = v375 + (_DWORD)v20;
    if ( v375 < 0xF )
    {
      *v22 = 16 * v375;
    }
    else
    {
      *v22 = -16;
      v378 = v375 - 15;
      ++v22;
      if ( v375 - 15 >= 0xFF )
      {
        v379 = v22;
        v22 += v378 / 0xFF;
        memset(v379, 255, v378 / 0xFF);
        v378 %= 0xFFui64;
      }
      *v22 = v378;
    }
    v380 = v22 + 1;
    memcpy_0(v380, v20, v375);
    *v7 = v377 - (_DWORD)v10;
    return (_DWORD)v380 + v375 - v413;
  }
  return v13;
}

/*
==============
indyfs_LZ4HC_compress_generic_noDictCtx
==============
*/
int indyfs_LZ4HC_compress_generic_noDictCtx(indyfs_LZ4HC_CCtx_internal *const ctx, const char *const src, char *const dst, int *const srcSizePtr, const int dstCapacity, int cLevel, limitedOutput_directive limit)
{
  int *v7; 
  char *v9; 
  indyfs_LZ4HC_CCtx_internal *v10; 
  __int64 v12; 
  int v13; 
  int v14; 
  BOOL favorDecSpeed; 
  unsigned __int64 sufficient_len; 
  int fullUpdate; 
  __int64 v18; 
  void *v19; 
  char *v20; 
  __int64 v21; 
  char *v22; 
  unsigned __int64 v23; 
  __int64 chainTable; 
  unsigned int *v25; 
  const unsigned __int8 *base; 
  unsigned int lowLimit; 
  unsigned int v28; 
  unsigned int v29; 
  int v30; 
  unsigned int v31; 
  unsigned __int64 v32; 
  int v33; 
  __int64 nextToUpdate; 
  unsigned int v35; 
  bool v36; 
  const unsigned __int8 *v37; 
  int v38; 
  unsigned int v39; 
  const unsigned __int8 *v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  unsigned __int64 v43; 
  _DWORD *v44; 
  indyfs_LZ4HC_CCtx_internal *v45; 
  unsigned int v46; 
  const unsigned __int8 *v47; 
  unsigned __int8 *v48; 
  unsigned __int8 *v49; 
  unsigned __int8 *v50; 
  unsigned __int8 *v51; 
  _QWORD *v52; 
  unsigned int v53; 
  unsigned __int64 v54; 
  unsigned __int64 v55; 
  unsigned int v56; 
  unsigned __int8 *v57; 
  unsigned __int8 *v58; 
  const unsigned __int8 *v59; 
  unsigned __int64 v60; 
  unsigned __int8 *v61; 
  unsigned __int8 *v62; 
  unsigned int v63; 
  signed int v64; 
  unsigned __int8 *v65; 
  const unsigned __int8 *v66; 
  unsigned __int8 *v67; 
  unsigned __int8 *v68; 
  unsigned int v69; 
  int v70; 
  unsigned int v71; 
  unsigned __int64 v72; 
  unsigned __int64 v73; 
  unsigned __int64 v74; 
  unsigned __int64 v75; 
  const unsigned __int8 *v76; 
  unsigned int v77; 
  unsigned __int64 v78; 
  char *v79; 
  unsigned __int64 v80; 
  unsigned __int64 v81; 
  unsigned __int64 v82; 
  char *v83; 
  unsigned __int64 v84; 
  __int64 v85; 
  int v86; 
  __int16 v87; 
  __int64 v88; 
  unsigned __int64 v89; 
  unsigned int v90; 
  unsigned __int64 v91; 
  __int64 v92; 
  __int64 v93; 
  unsigned int v94; 
  int v95; 
  unsigned int v96; 
  unsigned int v97; 
  int v98; 
  _QWORD *v99; 
  int v100; 
  __int64 v101; 
  unsigned int v102; 
  int v103; 
  unsigned __int64 v104; 
  _DWORD *v105; 
  unsigned __int64 v106; 
  unsigned __int64 v107; 
  unsigned __int64 v108; 
  unsigned int v109; 
  __int64 v110; 
  _DWORD *v111; 
  _QWORD *v112; 
  _DWORD *v113; 
  unsigned __int8 *v114; 
  unsigned __int8 *v115; 
  unsigned __int64 v116; 
  unsigned int v117; 
  int v118; 
  unsigned int v119; 
  int v120; 
  unsigned __int64 v121; 
  unsigned __int64 v122; 
  _BYTE *v123; 
  __int64 v124; 
  int v125; 
  _DWORD *v126; 
  unsigned __int8 *v127; 
  _QWORD *v128; 
  int v129; 
  unsigned __int8 *v130; 
  unsigned __int64 v131; 
  __int64 v132; 
  unsigned __int8 *v133; 
  unsigned __int8 *v134; 
  unsigned int v135; 
  signed int v136; 
  unsigned __int8 *v137; 
  unsigned __int8 *v138; 
  _DWORD *v139; 
  unsigned __int8 *v140; 
  unsigned int v141; 
  int v142; 
  int v143; 
  unsigned __int64 v144; 
  unsigned __int64 v145; 
  unsigned __int64 v146; 
  unsigned __int64 v147; 
  _BYTE *v148; 
  int v149; 
  int v150; 
  unsigned int v151; 
  unsigned __int8 *v152; 
  __int64 v153; 
  unsigned int v154; 
  unsigned __int64 v155; 
  _QWORD *v156; 
  unsigned __int64 v157; 
  unsigned __int64 v158; 
  unsigned __int64 v159; 
  char *v160; 
  unsigned __int64 v161; 
  __int64 v162; 
  unsigned __int64 v163; 
  int v164; 
  unsigned __int64 v165; 
  unsigned __int64 v166; 
  __int64 v167; 
  int v168; 
  int v169; 
  int v170; 
  unsigned __int64 v171; 
  unsigned __int64 v172; 
  unsigned int v173; 
  __int64 v174; 
  int v175; 
  unsigned int v176; 
  unsigned int v177; 
  _QWORD *v178; 
  unsigned int v179; 
  int v180; 
  __int64 v181; 
  int v182; 
  unsigned int v183; 
  int v184; 
  unsigned int v185; 
  unsigned __int64 v186; 
  _DWORD *v187; 
  unsigned __int64 v188; 
  unsigned __int64 v189; 
  unsigned __int64 v190; 
  unsigned int v191; 
  __int64 v192; 
  _DWORD *v193; 
  _QWORD *v194; 
  _DWORD *v195; 
  unsigned __int8 *v196; 
  unsigned __int8 *v197; 
  unsigned __int64 v198; 
  unsigned int v199; 
  int v200; 
  unsigned int v201; 
  int v202; 
  unsigned __int64 v203; 
  unsigned __int64 v204; 
  _BYTE *v205; 
  int v206; 
  _DWORD *v207; 
  unsigned __int8 *v208; 
  unsigned __int8 *v209; 
  _QWORD *v210; 
  __int64 v211; 
  unsigned __int8 *v212; 
  unsigned __int8 *v213; 
  unsigned int v214; 
  signed int v215; 
  unsigned __int8 *v216; 
  unsigned __int8 *v217; 
  _DWORD *v218; 
  unsigned __int8 *v219; 
  unsigned int v220; 
  int v221; 
  int v222; 
  unsigned __int64 v223; 
  unsigned __int64 v224; 
  unsigned __int64 v225; 
  unsigned __int64 v226; 
  char *v227; 
  _BYTE *v228; 
  int v229; 
  int v230; 
  unsigned __int8 *v231; 
  __int64 v232; 
  unsigned int v233; 
  unsigned __int64 v234; 
  _QWORD *v235; 
  unsigned __int64 v236; 
  unsigned __int64 v237; 
  unsigned __int64 v238; 
  char *v239; 
  unsigned __int64 v240; 
  __int64 v241; 
  unsigned __int64 v242; 
  int v243; 
  char *v244; 
  _BYTE *v245; 
  limitedOutput_directive v246; 
  unsigned __int64 v247; 
  _QWORD *v248; 
  unsigned __int64 v249; 
  void *v250; 
  _WORD *v251; 
  signed __int64 v252; 
  _WORD *v253; 
  unsigned __int64 v254; 
  char v255; 
  unsigned __int64 v256; 
  unsigned __int64 v257; 
  __int64 v258; 
  void *v259; 
  int v260; 
  __int64 v261; 
  _BYTE *v262; 
  unsigned __int64 v263; 
  _QWORD *v264; 
  unsigned __int64 v265; 
  void *v266; 
  _WORD *v267; 
  signed __int64 v268; 
  _WORD *v269; 
  unsigned __int64 v270; 
  char v271; 
  unsigned __int64 v272; 
  unsigned __int64 v273; 
  __int64 v274; 
  _BYTE *v275; 
  unsigned __int64 v276; 
  _QWORD *v277; 
  unsigned __int64 v278; 
  void *v279; 
  _WORD *v280; 
  signed __int64 v281; 
  _BYTE *v282; 
  unsigned __int64 v283; 
  char v284; 
  unsigned __int64 v285; 
  unsigned __int64 v286; 
  __int64 v287; 
  unsigned __int64 v288; 
  void *v289; 
  _BYTE *v290; 
  char *v291; 
  _QWORD *v292; 
  unsigned __int64 v293; 
  unsigned __int64 v294; 
  void *v295; 
  _WORD *v296; 
  signed __int64 v297; 
  unsigned __int64 v298; 
  char v299; 
  unsigned __int64 v300; 
  unsigned __int64 v301; 
  _BYTE *v302; 
  unsigned __int64 v303; 
  _QWORD *v304; 
  unsigned __int64 v305; 
  void *v306; 
  _WORD *v307; 
  signed __int64 v308; 
  unsigned __int64 v309; 
  char v310; 
  unsigned __int64 v311; 
  unsigned __int64 v312; 
  size_t v313; 
  unsigned __int64 v314; 
  int v315; 
  size_t v316; 
  char *v317; 
  void *v318; 
  int v319; 
  int v320; 
  int v321; 
  int v322; 
  unsigned int v323; 
  int v324; 
  int v325; 
  int v326; 
  int dictLimit; 
  unsigned __int8 *iEnd; 
  unsigned __int64 v329; 
  __int64 v330; 
  unsigned __int64 v331; 
  void *Src; 
  int v333; 
  unsigned int v334; 
  const unsigned __int8 *v335; 
  char *v336; 
  unsigned __int64 v337; 
  unsigned int v338; 
  const unsigned __int8 *v339; 
  unsigned __int64 v340; 
  int v341; 
  const unsigned __int8 *v342; 
  const unsigned __int8 *dictBase; 
  _DWORD *v344; 
  unsigned __int64 v345; 
  __int64 v346; 
  unsigned __int16 *v347; 
  char *v348; 
  int nbSearches[2]; 
  __int64 v350; 
  unsigned __int64 v351; 
  int v353; 
  int v354; 
  int cLevela; 

  v354 = (int)dst;
  v353 = (int)src;
  v7 = srcSizePtr;
  v9 = (char *)src;
  v10 = ctx;
  if ( limit == 2 && dstCapacity < 1 )
    return 0;
  v12 = *srcSizePtr;
  if ( (unsigned int)v12 > 0x7E000000 )
    return 0;
  ctx->end += v12;
  v13 = 9;
  if ( cLevel >= 1 )
    v13 = cLevel;
  if ( v13 > 12 )
    v13 = 12;
  v14 = 0;
  favorDecSpeed = ctx->favorDecSpeed != 0;
  sufficient_len = *((unsigned int *)&unk_1447549F0 + 3 * v13 + 2);
  fullUpdate = 0;
  *(_QWORD *)nbSearches = *(_QWORD *)((char *)&unk_1447549F0 + 12 * v13);
  if ( nbSearches[0] )
  {
    LOBYTE(fullUpdate) = v13 == 12;
    return indyfs_LZ4HC_compress_optimal(v10, v9, dst, v7, dstCapacity, nbSearches[1], sufficient_len, limit, fullUpdate, noDictCtx, (const HCfavor_e)favorDecSpeed);
  }
  v18 = *v7;
  v19 = v9;
  v20 = dst;
  v336 = dst;
  LOBYTE(fullUpdate) = nbSearches[1] > 0x40u;
  v21 = (__int64)&v9[v18];
  v341 = fullUpdate;
  v22 = &dst[dstCapacity];
  v329 = (unsigned __int64)v9;
  Src = v9;
  v348 = &v9[v18];
  v23 = (unsigned __int64)(v22 - 5);
  iEnd = (unsigned __int8 *)&v9[v18 - 5];
  if ( limit != 2 )
    v23 = (unsigned __int64)v22;
  v339 = NULL;
  v331 = v23;
  v337 = 0i64;
  v335 = NULL;
  v345 = 0i64;
  v342 = NULL;
  *v7 = 0;
  if ( (int)v18 < 13 || (unsigned __int64)v9 > v21 - 12 )
  {
    v246 = limit;
    goto LABEL_518;
  }
  chainTable = (__int64)v10->chainTable;
  v25 = (unsigned int *)v9;
  v347 = v10->chainTable;
  while ( 2 )
  {
    base = v10->base;
    lowLimit = v10->lowLimit;
    v28 = (_DWORD)v25 - (_DWORD)base;
    v30 = 0;
    v31 = *v25;
    v32 = 0i64;
    v33 = (int)v25;
    cLevela = 3;
    nextToUpdate = v10->nextToUpdate;
    v35 = v28 - 0xFFFF;
    dictLimit = v10->dictLimit;
    v29 = dictLimit;
    v36 = lowLimit + 0x10000 <= v28;
    v37 = &base[dictLimit];
    v38 = nbSearches[1];
    if ( v36 )
      lowLimit = v35;
    v319 = nbSearches[1];
    v39 = v33 - (_DWORD)base;
    v323 = lowLimit;
    dictBase = v10->dictBase;
    if ( (unsigned int)nextToUpdate < v39 )
    {
      v40 = &base[nextToUpdate];
      do
      {
        v41 = (unsigned int)(-1640531535 * *(_DWORD *)v40++);
        v42 = v41 >> 17;
        v43 = (unsigned int)(nextToUpdate - v10->hashTable[v42]);
        if ( v43 > 0xFFFF )
          LOWORD(v43) = -1;
        *(_WORD *)(chainTable + 2i64 * (unsigned __int16)nextToUpdate) = v43;
        v10->hashTable[v42] = nextToUpdate;
        LODWORD(nextToUpdate) = nextToUpdate + 1;
      }
      while ( (unsigned int)nextToUpdate < v39 );
      v29 = dictLimit;
      v38 = v319;
    }
    v44 = (_DWORD *)v329;
    v10->nextToUpdate = v39;
    v45 = ctx;
    v46 = ctx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *v44) >> 17];
    if ( v46 >= lowLimit )
    {
      while ( 1 )
      {
        if ( !v38 )
        {
LABEL_119:
          v45 = ctx;
          goto LABEL_120;
        }
        v320 = v38 - 1;
        if ( v46 < v29 )
        {
          if ( *(_DWORD *)&dictBase[v46] == v31 )
          {
            v56 = v29;
            v57 = (unsigned __int8 *)(v44 + 1);
            v58 = iEnd;
            v59 = &dictBase[v46 + 4];
            v60 = (unsigned __int64)v44 + v56 - v46;
            if ( v60 <= (unsigned __int64)iEnd )
              v58 = (unsigned __int8 *)v60;
            v61 = (unsigned __int8 *)(v44 + 1);
            v62 = v58 - 7;
            if ( v57 >= v58 - 7 )
              goto LABEL_54;
            if ( *(_QWORD *)v57 != *(_QWORD *)v59 )
            {
              _BitScanForward64(&v72, *(_QWORD *)v57 ^ *(_QWORD *)v59);
              HIWORD(v326) = 0;
              v63 = (unsigned int)v72 >> 3;
            }
            else
            {
              v61 = v57 + 8;
              v59 = &dictBase[v46 + 12];
LABEL_54:
              if ( v61 >= v62 )
              {
LABEL_57:
                if ( v61 < v58 - 3 && *(_DWORD *)v59 == *(_DWORD *)v61 )
                {
                  v61 += 4;
                  v59 += 4;
                }
                if ( v61 < v58 - 1 && *(_WORD *)v59 == *(_WORD *)v61 )
                {
                  v61 += 2;
                  v59 += 2;
                }
                if ( v61 < v58 && *v59 == *v61 )
                  LODWORD(v61) = (_DWORD)v61 + 1;
                v63 = (_DWORD)v61 - (_DWORD)v57;
              }
              else
              {
                while ( *(_QWORD *)v61 == *(_QWORD *)v59 )
                {
                  v61 += 8;
                  v59 += 8;
                  if ( v61 >= v62 )
                    goto LABEL_57;
                }
                _BitScanForward64(&v73, *(_QWORD *)v61 ^ *(_QWORD *)v59);
                HIWORD(v326) = 0;
                v63 = ((unsigned int)v73 >> 3) - (_DWORD)v57 + (_DWORD)v61;
              }
            }
            v44 = (_DWORD *)v329;
            v64 = v63 + 4;
            v65 = (unsigned __int8 *)(v329 + (int)(v63 + 4));
            if ( v65 == v58 && v58 < iEnd )
            {
              v66 = v37;
              v67 = (unsigned __int8 *)(v329 + v64);
              v68 = iEnd - 7;
              if ( v65 >= iEnd - 7 )
              {
LABEL_72:
                if ( v67 >= v68 )
                {
LABEL_75:
                  if ( v67 < iEnd - 3 && *(_DWORD *)v66 == *(_DWORD *)v67 )
                  {
                    v67 += 4;
                    v66 += 4;
                  }
                  if ( v67 < iEnd - 1 && *(_WORD *)v66 == *(_WORD *)v67 )
                  {
                    v67 += 2;
                    v66 += 2;
                  }
                  if ( v67 < iEnd && *v66 == *v67 )
                    LODWORD(v67) = (_DWORD)v67 + 1;
                  v69 = (_DWORD)v67 - (_DWORD)v65;
                }
                else
                {
                  while ( *(_QWORD *)v66 == *(_QWORD *)v67 )
                  {
                    v67 += 8;
                    v66 += 8;
                    if ( v67 >= v68 )
                      goto LABEL_75;
                  }
                  _BitScanForward64(&v75, *(_QWORD *)v66 ^ *(_QWORD *)v67);
                  HIWORD(v326) = 0;
                  v69 = ((unsigned int)v75 >> 3) - (_DWORD)v65 + (_DWORD)v67;
                }
              }
              else
              {
                if ( *(_QWORD *)v37 == *(_QWORD *)v65 )
                {
                  v67 = v65 + 8;
                  v66 = v37 + 8;
                  goto LABEL_72;
                }
                _BitScanForward64(&v74, *(_QWORD *)v37 ^ *(_QWORD *)v65);
                HIWORD(v326) = 0;
                v69 = (unsigned int)v74 >> 3;
              }
              v44 = (_DWORD *)v329;
              v64 += v69;
            }
            v29 = dictLimit;
            if ( v64 > cLevela )
            {
              cLevela = v64;
              v339 = &base[v46];
            }
            lowLimit = v323;
          }
LABEL_89:
          v48 = iEnd;
          goto LABEL_90;
        }
        v47 = &base[v46];
        if ( *(_WORD *)((char *)v44 + cLevela - 1) != *(_WORD *)&v47[cLevela - 1] )
          goto LABEL_89;
        v48 = iEnd;
        if ( *(_DWORD *)v47 == v31 )
          break;
LABEL_90:
        v70 = v347[(unsigned __int16)v46];
        v46 -= v70;
        if ( v341 && v70 == 1 )
        {
          if ( v30 )
          {
            if ( v30 == 2 )
              goto LABEL_101;
          }
          else
          {
            if ( (_BYTE)v31 == HIBYTE(v31) && (unsigned __int16)v31 == HIWORD(v31) )
            {
              v44 = (_DWORD *)v329;
              v30 = 2;
              v71 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v329 + 4), v48, v31);
              v29 = dictLimit;
              v32 = v71 + 4;
LABEL_101:
              if ( v46 >= v29 )
              {
                v76 = &base[v46];
                if ( *(_DWORD *)v76 == v31 )
                {
                  v77 = indyfs_LZ4HC_countPattern(v76 + 4, iEnd, v31);
                  v79 = (char *)v37;
                  v80 = v77 + 4i64;
                  if ( v37 + 0xFFFF < (const unsigned __int8 *)v44 )
                    v79 = (char *)v44 - 0xFFFF;
                  v334 = v31;
                  v81 = v78;
                  if ( v78 >= (unsigned __int64)(v79 + 4) )
                  {
                    do
                    {
                      v82 = v81 - 4;
                      if ( *(_DWORD *)(v81 - 4) != v31 )
                        break;
                      v81 -= 4i64;
                    }
                    while ( v82 >= (unsigned __int64)(v79 + 4) );
                  }
                  if ( v81 > (unsigned __int64)v79 )
                  {
                    v83 = (char *)&v334 - v81 + 3;
                    do
                    {
                      v84 = v81 - 1;
                      if ( *(_BYTE *)(v81 - 1) != v83[v81] )
                        break;
                      --v81;
                    }
                    while ( v84 > (unsigned __int64)v79 );
                  }
                  v85 = (unsigned int)(v78 - v81);
                  if ( v85 + v80 < v32 || v80 > v32 )
                    v46 -= v85;
                  else
                    v46 += v80 - v32;
                  v29 = dictLimit;
                }
              }
              lowLimit = v323;
              goto LABEL_118;
            }
            v30 = 1;
          }
        }
LABEL_118:
        v38 = v320;
        v44 = (_DWORD *)v329;
        if ( v46 < lowLimit )
          goto LABEL_119;
      }
      v49 = (unsigned __int8 *)(v44 + 1);
      v50 = iEnd - 7;
      v51 = v49;
      v52 = v47 + 4;
      if ( v49 < iEnd - 7 )
      {
        if ( *v52 != *(_QWORD *)v49 )
        {
          _BitScanForward64(&v54, *v52 ^ *(_QWORD *)v49);
          HIWORD(v326) = 0;
          v53 = (unsigned int)v54 >> 3;
LABEL_44:
          v29 = dictLimit;
          v44 = (_DWORD *)v329;
          if ( (int)(v53 + 4) > cLevela )
          {
            cLevela = v53 + 4;
            v339 = &base[v46];
          }
          goto LABEL_90;
        }
        v51 = v49 + 8;
        v52 = v47 + 12;
      }
      if ( v51 >= v50 )
      {
LABEL_34:
        if ( v51 < iEnd - 3 && *(_DWORD *)v52 == *(_DWORD *)v51 )
        {
          v51 += 4;
          v52 = (_QWORD *)((char *)v52 + 4);
        }
        if ( v51 < iEnd - 1 && *(_WORD *)v52 == *(_WORD *)v51 )
        {
          v51 += 2;
          v52 = (_QWORD *)((char *)v52 + 2);
        }
        if ( v51 < iEnd && *(_BYTE *)v52 == *v51 )
          LODWORD(v51) = (_DWORD)v51 + 1;
        v53 = (_DWORD)v51 - (_DWORD)v49;
      }
      else
      {
        while ( *v52 == *(_QWORD *)v51 )
        {
          v51 += 8;
          ++v52;
          if ( v51 >= v50 )
            goto LABEL_34;
        }
        _BitScanForward64(&v55, *v52 ^ *(_QWORD *)v51);
        HIWORD(v326) = 0;
        v53 = ((unsigned int)v55 >> 3) - (_DWORD)v49 + (_DWORD)v51;
      }
      goto LABEL_44;
    }
LABEL_120:
    v86 = cLevela;
    if ( cLevela < 4 )
    {
      v20 = v336;
      v25 = (_DWORD *)((char *)v44 + 1);
      v19 = Src;
      goto LABEL_509;
    }
    v87 = (__int16)v339;
    v351 = (unsigned __int64)v44;
    v88 = (__int64)v44;
    dictBase = v339;
    v344 = v44;
    v334 = cLevela;
    while ( 1 )
    {
LABEL_123:
      v89 = v88 + v86;
      if ( v89 > (unsigned __int64)(v348 - 12) )
        goto LABEL_488;
      v90 = v45->lowLimit;
      v91 = v89 - 2;
      v92 = (__int64)v45->base;
      v93 = v45->dictLimit;
      v94 = v89 - 2 - v92;
      v95 = v89 - 2;
      dictLimit = v86;
      v96 = *(_DWORD *)(v89 - 2);
      v36 = v90 + 0x10000 <= v94;
      v97 = v94 - 0xFFFF;
      v330 = v92;
      v98 = nbSearches[1];
      v99 = (_QWORD *)(v92 + v93);
      if ( v36 )
        v90 = v97;
      v324 = v93;
      v100 = v95 - v88;
      v350 = (__int64)v45->dictBase;
      v338 = v90;
      v101 = ctx->nextToUpdate;
      v102 = v91 - v92;
      v333 = nbSearches[1];
      v103 = 0;
      v321 = 0;
      v104 = 0i64;
      v340 = 0i64;
      if ( (unsigned int)v101 < (int)v91 - (int)v92 )
      {
        v105 = (_DWORD *)(v92 + v101);
        do
        {
          v106 = (unsigned int)(-1640531535 * *v105);
          v105 = (_DWORD *)((char *)v105 + 1);
          v107 = v106 >> 17;
          v108 = (unsigned int)(v101 - ctx->hashTable[v107]);
          if ( v108 > 0xFFFF )
            LOWORD(v108) = -1;
          ctx->chainTable[(unsigned __int16)v101] = v108;
          ctx->hashTable[v107] = v101;
          LODWORD(v101) = v101 + 1;
        }
        while ( (unsigned int)v101 < v102 );
        v104 = v340;
        v98 = v333;
        LODWORD(v93) = v324;
      }
      ctx->nextToUpdate = v102;
      v45 = ctx;
      v109 = ctx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v91) >> 17];
      if ( v109 >= v338 )
      {
        v110 = v100;
        v346 = v100;
        while ( 1 )
        {
          if ( !v98 )
          {
LABEL_248:
            v45 = ctx;
            break;
          }
          v333 = v98 - 1;
          if ( v109 >= (unsigned int)v93 )
          {
            v111 = (_DWORD *)(v109 + v330);
            if ( *(_WORD *)(dictLimit + v329 - 1) != *(_WORD *)((char *)v111 + dictLimit - v110 - 1) || *v111 != v96 )
            {
              v103 = v321;
LABEL_221:
              v124 = v330;
              goto LABEL_222;
            }
            v112 = (_QWORD *)(v91 + 4);
            v113 = v111 + 1;
            v114 = (unsigned __int8 *)(v91 + 4);
            v115 = iEnd - 7;
            if ( v91 + 4 >= (unsigned __int64)(iEnd - 7) )
            {
LABEL_141:
              if ( v114 >= v115 )
              {
LABEL_144:
                if ( v114 < iEnd - 3 && *v113 == *(_DWORD *)v114 )
                {
                  v114 += 4;
                  ++v113;
                }
                if ( v114 < iEnd - 1 && *(_WORD *)v113 == *(_WORD *)v114 )
                {
                  v114 += 2;
                  v113 = (_DWORD *)((char *)v113 + 2);
                }
                if ( v114 < iEnd && *(_BYTE *)v113 == *v114 )
                  LODWORD(v114) = (_DWORD)v114 + 1;
                v117 = (_DWORD)v114 - (_DWORD)v112;
                v118 = 0;
              }
              else
              {
                while ( *(_QWORD *)v113 == *(_QWORD *)v114 )
                {
                  v114 += 8;
                  v113 += 2;
                  if ( v114 >= v115 )
                    goto LABEL_144;
                }
                _BitScanForward64(&v122, *(_QWORD *)v113 ^ *(_QWORD *)v114);
                v118 = 0;
                HIWORD(v326) = 0;
                v117 = ((unsigned int)v122 >> 3) - (_DWORD)v112 + (_DWORD)v114;
              }
            }
            else
            {
              v116 = *(_QWORD *)v113 ^ *v112;
              if ( !v116 )
              {
                v114 = (unsigned __int8 *)(v91 + 12);
                v113 = v111 + 3;
                goto LABEL_141;
              }
              v118 = 0;
              _BitScanForward64(&v121, v116);
              HIWORD(v326) = 0;
              v117 = (unsigned int)v121 >> 3;
            }
            v119 = v117 + 4;
            if ( v110 )
            {
              v120 = (__int64)(v329 - v91) <= (char *)v99 - (char *)v111 ? (int)v99 - (int)v111 : (_DWORD)v344 - v91;
              if ( v120 < 0 )
              {
                v123 = (char *)v111 - 1;
                do
                {
                  if ( v123[v91 - (_QWORD)v111] != *v123 )
                    break;
                  --v123;
                  --v118;
                }
                while ( (__int64)&v123[1i64 - (_QWORD)v111] > v120 );
              }
            }
            v124 = v330;
            v125 = v119 - v118;
            LODWORD(v93) = v324;
            if ( v125 > dictLimit )
            {
              dictLimit = v125;
              v337 = v91 + v118;
              v335 = (const unsigned __int8 *)v111 + v118;
            }
            v103 = v321;
            goto LABEL_222;
          }
          v126 = (_DWORD *)(v350 + v109);
          if ( *v126 != v96 )
          {
            v104 = v340;
            goto LABEL_221;
          }
          v127 = (unsigned __int8 *)(v91 + 4);
          v128 = v126 + 1;
          v129 = v93;
          v130 = iEnd;
          v131 = v91 + v129 - v109;
          v132 = v350 + ctx->lowLimit;
          if ( v131 <= (unsigned __int64)iEnd )
            v130 = (unsigned __int8 *)v131;
          v133 = (unsigned __int8 *)(v91 + 4);
          v134 = v130 - 7;
          if ( v127 < v130 - 7 )
          {
            if ( *v128 != *(_QWORD *)v127 )
            {
              _BitScanForward64(&v144, *v128 ^ *(_QWORD *)v127);
              HIWORD(v326) = 0;
              v135 = (unsigned int)v144 >> 3;
              goto LABEL_186;
            }
            v133 = (unsigned __int8 *)(v91 + 12);
            v128 = v126 + 3;
          }
          if ( v133 >= v134 )
          {
LABEL_176:
            if ( v133 < v130 - 3 && *(_DWORD *)v128 == *(_DWORD *)v133 )
            {
              v133 += 4;
              v128 = (_QWORD *)((char *)v128 + 4);
            }
            if ( v133 < v130 - 1 && *(_WORD *)v128 == *(_WORD *)v133 )
            {
              v133 += 2;
              v128 = (_QWORD *)((char *)v128 + 2);
            }
            if ( v133 < v130 && *(_BYTE *)v128 == *v133 )
              LODWORD(v133) = (_DWORD)v133 + 1;
            v135 = (_DWORD)v133 - (_DWORD)v127;
          }
          else
          {
            while ( *v128 == *(_QWORD *)v133 )
            {
              v133 += 8;
              ++v128;
              if ( v133 >= v134 )
                goto LABEL_176;
            }
            _BitScanForward64(&v145, *v128 ^ *(_QWORD *)v133);
            HIWORD(v326) = 0;
            v135 = ((unsigned int)v145 >> 3) + (_DWORD)v133 - (_DWORD)v127;
          }
LABEL_186:
          v136 = v135 + 4;
          v137 = (unsigned __int8 *)(v91 + (int)(v135 + 4));
          if ( v137 == v130 && v130 < iEnd )
          {
            v138 = iEnd - 7;
            v139 = v99;
            v140 = (unsigned __int8 *)(v91 + v136);
            if ( v137 >= iEnd - 7 )
            {
LABEL_191:
              if ( v140 >= v138 )
              {
LABEL_194:
                if ( v140 < iEnd - 3 && *v139 == *(_DWORD *)v140 )
                {
                  v140 += 4;
                  ++v139;
                }
                if ( v140 < iEnd - 1 && *(_WORD *)v139 == *(_WORD *)v140 )
                {
                  v140 += 2;
                  v139 = (_DWORD *)((char *)v139 + 2);
                }
                if ( v140 < iEnd && *(_BYTE *)v139 == *v140 )
                  LODWORD(v140) = (_DWORD)v140 + 1;
                v141 = (_DWORD)v140 - (_DWORD)v137;
              }
              else
              {
                while ( *(_QWORD *)v139 == *(_QWORD *)v140 )
                {
                  v140 += 8;
                  v139 += 2;
                  if ( v140 >= v138 )
                    goto LABEL_194;
                }
                _BitScanForward64(&v147, *(_QWORD *)v139 ^ *(_QWORD *)v140);
                HIWORD(v326) = 0;
                v141 = ((unsigned int)v147 >> 3) - (_DWORD)v137 + (_DWORD)v140;
              }
            }
            else
            {
              if ( *(_QWORD *)v137 == *v99 )
              {
                v140 = v137 + 8;
                v139 = v99 + 1;
                goto LABEL_191;
              }
              _BitScanForward64(&v146, *(_QWORD *)v137 ^ *v99);
              HIWORD(v326) = 0;
              v141 = (unsigned int)v146 >> 3;
            }
            v136 += v141;
          }
          v142 = 0;
          if ( v346 )
          {
            v143 = (__int64)(v329 - v91) <= v132 - (__int64)v126 ? v132 - (_DWORD)v126 : (int)v344 - (int)v91;
            if ( v143 < 0 )
            {
              v148 = (char *)v126 - 1;
              do
              {
                if ( v148[v91 - (_QWORD)v126] != *v148 )
                  break;
                --v148;
                --v142;
              }
              while ( (__int64)&v148[1i64 - (_QWORD)v126] > v143 );
            }
          }
          v103 = v321;
          v149 = v136 - v142;
          v104 = v340;
          LODWORD(v93) = v324;
          if ( v149 <= dictLimit )
            goto LABEL_221;
          dictLimit = v149;
          v124 = v330;
          v335 = (const unsigned __int8 *)(v330 + v142 + (unsigned __int64)v109);
          v337 = v91 + v142;
LABEL_222:
          v150 = v347[(unsigned __int16)v109];
          v109 -= v150;
          if ( v341 && v150 == 1 )
          {
            if ( v103 )
            {
              if ( v103 == 2 )
              {
                v152 = iEnd;
LABEL_230:
                if ( v109 >= (unsigned int)v93 )
                {
                  v153 = v124 + v109;
                  if ( *(_DWORD *)v153 == v96 )
                  {
                    v154 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v153 + 4), v152, v96);
                    v156 = v99;
                    v157 = v154 + 4i64;
                    if ( (unsigned __int64)v99 + 0xFFFF < v91 )
                      v156 = (_QWORD *)(v91 - 0xFFFF);
                    HIWORD(v326) = HIWORD(v96);
                    v158 = v155;
                    if ( v155 >= (unsigned __int64)v156 + 4 )
                    {
                      do
                      {
                        v159 = v158 - 4;
                        if ( *(_DWORD *)(v158 - 4) != v96 )
                          break;
                        v158 -= 4i64;
                      }
                      while ( v159 >= (unsigned __int64)v156 + 4 );
                    }
                    if ( v158 > (unsigned __int64)v156 )
                    {
                      v160 = (char *)&v326 - v158 + 3;
                      do
                      {
                        v161 = v158 - 1;
                        if ( *(_BYTE *)(v158 - 1) != v160[v158] )
                          break;
                        --v158;
                      }
                      while ( v161 > (unsigned __int64)v156 );
                    }
                    v162 = (unsigned int)(v155 - v158);
                    if ( v162 + v157 < v104 || v157 > v104 )
                      v109 -= v162;
                    else
                      v109 += v157 - v104;
                    LODWORD(v93) = v324;
                  }
                  v103 = v321;
                }
              }
            }
            else
            {
              if ( (_BYTE)v96 == HIBYTE(v96) && (unsigned __int16)v96 == HIWORD(v96) )
              {
                v321 = 2;
                v151 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v91 + 4), iEnd, v96);
                LODWORD(v93) = v324;
                v104 = v151 + 4;
                v340 = v104;
                goto LABEL_230;
              }
              v103 = 1;
              v321 = 1;
            }
          }
          v110 = v346;
          v98 = v333;
          if ( v109 < v338 )
            goto LABEL_248;
        }
      }
      v163 = v337;
      v164 = dictLimit;
      v88 = v337;
      v86 = cLevela;
      v344 = (_DWORD *)v337;
      if ( dictLimit == cLevela )
      {
        v44 = (_DWORD *)v329;
        v87 = (__int16)v339;
LABEL_488:
        v244 = v336;
        v302 = Src;
        v246 = limit;
        v303 = (char *)v44 - (_BYTE *)Src;
        v23 = v331;
        v304 = v336 + 1;
        if ( limit && (unsigned __int64)v304 + v303 + (v303 >> 8) + 8 > v331 )
          goto LABEL_513;
        if ( v303 < 0xF )
        {
          *v336 = 16 * v303;
        }
        else
        {
          v305 = v303 - 15;
          *v336 = -16;
          if ( v303 - 15 >= 0xFF )
          {
            v306 = v304;
            v304 = (_QWORD *)((char *)v304 + v305 / 0xFF);
            memset(v306, 255, v305 / 0xFF);
            v44 = (_DWORD *)v329;
            v302 = Src;
            v246 = limit;
            v305 %= 0xFFui64;
          }
          *(_BYTE *)v304 = v305;
          v304 = (_QWORD *)((char *)v304 + 1);
        }
        v307 = (_WORD *)((char *)v304 + v303);
        v308 = v302 - (_BYTE *)v304;
        do
        {
          *v304 = *(_QWORD *)((char *)v304 + v308);
          ++v304;
        }
        while ( v304 < (_QWORD *)v307 );
        *v307 = (_WORD)v44 - v87;
        v20 = (char *)(v307 + 1);
        v336 = v20;
        v309 = v86 - 4;
        if ( v246 )
        {
          if ( (unsigned __int64)&v20[((unsigned __int64)(v86 - 4) >> 8) + 6] > v23 )
            goto LABEL_513;
        }
        v310 = *v244;
        if ( v309 < 0xF )
        {
          *v244 = v86 - 4 + v310;
        }
        else
        {
          v311 = v309 - 15;
          *v244 = v310 + 15;
          if ( v311 >= 0x1FE )
          {
            v312 = v311 / 0x1FE;
            v311 %= 0x1FEui64;
            do
            {
              *(_WORD *)v20 = -1;
              v20 += 2;
              --v312;
            }
            while ( v312 );
          }
          if ( v311 >= 0xFF )
          {
            LOBYTE(v311) = v311 + 1;
            *v20++ = -1;
          }
          *v20++ = v311;
          v336 = v20;
        }
        v25 = (_DWORD *)((char *)v44 + v86);
        goto LABEL_508;
      }
      v165 = v329;
      if ( v351 < v329 && v337 < v329 + (int)v334 )
      {
        v165 = v351;
        v339 = dictBase;
        v86 = v334;
        v329 = v351;
        cLevela = v334;
      }
      if ( (__int64)(v337 - v165) >= 3 )
        break;
      v87 = (__int16)v335;
      v86 = dictLimit;
      v339 = v335;
      v44 = (_DWORD *)v337;
      cLevela = dictLimit;
      v329 = v337;
    }
    v166 = v345;
    v167 = (__int64)v335;
    while ( 1 )
    {
      if ( (__int64)(v163 - v165) < 18 )
      {
        v168 = v86;
        if ( v86 > 18 )
          v168 = 18;
        if ( v165 + v168 > v164 + v163 - 4 )
          v168 = v163 - v165 + v164 - 4;
        v169 = v168 + v165 - v163;
        if ( v169 > 0 )
        {
          v163 += v169;
          v164 -= v169;
          v337 = v163;
          dictLimit = v164;
          v335 = (const unsigned __int8 *)(v169 + v167);
        }
      }
      v170 = v164;
      v171 = v163 + v164;
      dictBase = (const unsigned __int8 *)v171;
      if ( v171 <= (unsigned __int64)(v348 - 12) )
      {
        v172 = v171 - 3;
        v173 = v45->lowLimit;
        v174 = (__int64)v45->base;
        v175 = v171 - 3;
        v176 = *(_DWORD *)(v171 - 3);
        v177 = v171 - 3 - v174;
        v338 = v45->dictLimit;
        v325 = v164;
        v178 = (_QWORD *)(v174 + v338);
        v330 = v174;
        v36 = v173 + 0x10000 <= v177;
        v179 = v177 - 0xFFFF;
        v180 = nbSearches[1];
        if ( v36 )
          v173 = v179;
        v333 = nbSearches[1];
        v181 = (__int64)v45->dictBase;
        v182 = v175 - v163;
        v334 = v173;
        v183 = v172 - v174;
        v350 = v181;
        v184 = 0;
        v322 = 0;
        v185 = ctx->nextToUpdate;
        v186 = 0i64;
        v340 = 0i64;
        if ( v185 < (int)v172 - (int)v174 )
        {
          v187 = (_DWORD *)(v330 + v185);
          do
          {
            v188 = (unsigned int)(-1640531535 * *v187);
            v187 = (_DWORD *)((char *)v187 + 1);
            v189 = v188 >> 17;
            v190 = v185 - ctx->hashTable[v189];
            if ( v190 > 0xFFFF )
              LOWORD(v190) = -1;
            ctx->chainTable[(unsigned __int16)v185] = v190;
            ctx->hashTable[v189] = v185++;
          }
          while ( v185 < v183 );
          v186 = v340;
          v174 = v330;
          v180 = v333;
        }
        ctx->nextToUpdate = v183;
        v191 = ctx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v172) >> 17];
        if ( v191 >= v334 )
        {
          v192 = v182;
          v346 = v182;
          do
          {
            if ( !v180 )
              break;
            v333 = v180 - 1;
            if ( v191 >= v338 )
            {
              v193 = (_DWORD *)(v174 + v191);
              v170 = v325;
              if ( *(_WORD *)(v337 + v325 - 1) == *(_WORD *)((char *)v193 + v325 - v192 - 1) && *v193 == v176 )
              {
                v194 = (_QWORD *)(v172 + 4);
                v195 = v193 + 1;
                v196 = (unsigned __int8 *)(v172 + 4);
                v197 = iEnd - 7;
                if ( v172 + 4 >= (unsigned __int64)(iEnd - 7) )
                {
LABEL_281:
                  if ( v196 >= v197 )
                  {
LABEL_284:
                    if ( v196 < iEnd - 3 && *v195 == *(_DWORD *)v196 )
                    {
                      v196 += 4;
                      ++v195;
                    }
                    if ( v196 < iEnd - 1 && *(_WORD *)v195 == *(_WORD *)v196 )
                    {
                      v196 += 2;
                      v195 = (_DWORD *)((char *)v195 + 2);
                    }
                    if ( v196 < iEnd && *(_BYTE *)v195 == *v196 )
                      LODWORD(v196) = (_DWORD)v196 + 1;
                    v199 = (_DWORD)v196 - (_DWORD)v194;
                    v200 = 0;
                  }
                  else
                  {
                    while ( *(_QWORD *)v195 == *(_QWORD *)v196 )
                    {
                      v196 += 8;
                      v195 += 2;
                      if ( v196 >= v197 )
                        goto LABEL_284;
                    }
                    _BitScanForward64(&v204, *(_QWORD *)v195 ^ *(_QWORD *)v196);
                    v200 = 0;
                    HIWORD(v326) = 0;
                    v199 = ((unsigned int)v204 >> 3) - (_DWORD)v194 + (_DWORD)v196;
                  }
                }
                else
                {
                  v198 = *(_QWORD *)v195 ^ *v194;
                  if ( !v198 )
                  {
                    v196 = (unsigned __int8 *)(v172 + 12);
                    v195 = v193 + 3;
                    goto LABEL_281;
                  }
                  v200 = 0;
                  _BitScanForward64(&v203, v198);
                  HIWORD(v326) = 0;
                  v199 = (unsigned int)v203 >> 3;
                }
                v201 = v199 + 4;
                if ( v192 )
                {
                  v202 = (__int64)(v337 - v172) <= (char *)v178 - (char *)v193 ? (int)v178 - (int)v193 : v337 - v172;
                  if ( v202 < 0 )
                  {
                    v205 = (_BYTE *)(v172 - 1);
                    do
                    {
                      if ( *v205 != v205[(_QWORD)v193 - v172] )
                        break;
                      --v205;
                      --v200;
                    }
                    while ( (__int64)&v205[1 - v172] > v202 );
                  }
                }
                v206 = v201 - v200;
                if ( v206 > v325 )
                {
                  v170 = v206;
                  v325 = v206;
                  v342 = (const unsigned __int8 *)v193 + v200;
                  v345 = v172 + v200;
                }
              }
              v184 = v322;
              goto LABEL_361;
            }
            v207 = (_DWORD *)(v350 + v191);
            if ( *v207 != v176 )
            {
              v186 = v340;
LABEL_360:
              v170 = v325;
              goto LABEL_361;
            }
            v208 = (unsigned __int8 *)(v172 + 4);
            v209 = iEnd;
            v210 = v207 + 1;
            v211 = v350 + ctx->lowLimit;
            if ( v172 + v338 - v191 <= (unsigned __int64)iEnd )
              v209 = (unsigned __int8 *)(v172 + v338 - v191);
            v212 = (unsigned __int8 *)(v172 + 4);
            v213 = v209 - 7;
            if ( v208 < v209 - 7 )
            {
              if ( *v210 != *(_QWORD *)v208 )
              {
                _BitScanForward64(&v223, *v210 ^ *(_QWORD *)v208);
                HIWORD(v326) = 0;
                v214 = (unsigned int)v223 >> 3;
                goto LABEL_326;
              }
              v212 = (unsigned __int8 *)(v172 + 12);
              v210 = v207 + 3;
            }
            if ( v212 >= v213 )
            {
LABEL_316:
              if ( v212 < v209 - 3 && *(_DWORD *)v210 == *(_DWORD *)v212 )
              {
                v212 += 4;
                v210 = (_QWORD *)((char *)v210 + 4);
              }
              if ( v212 < v209 - 1 && *(_WORD *)v210 == *(_WORD *)v212 )
              {
                v212 += 2;
                v210 = (_QWORD *)((char *)v210 + 2);
              }
              if ( v212 < v209 && *(_BYTE *)v210 == *v212 )
                LODWORD(v212) = (_DWORD)v212 + 1;
              v214 = (_DWORD)v212 - (_DWORD)v208;
            }
            else
            {
              while ( *v210 == *(_QWORD *)v212 )
              {
                v212 += 8;
                ++v210;
                if ( v212 >= v213 )
                  goto LABEL_316;
              }
              _BitScanForward64(&v224, *v210 ^ *(_QWORD *)v212);
              HIWORD(v326) = 0;
              v214 = ((unsigned int)v224 >> 3) - (_DWORD)v208 + (_DWORD)v212;
            }
LABEL_326:
            v215 = v214 + 4;
            v216 = (unsigned __int8 *)(v172 + (int)(v214 + 4));
            if ( v216 == v209 && v209 < iEnd )
            {
              v217 = iEnd - 7;
              v218 = v178;
              v219 = (unsigned __int8 *)(v172 + v215);
              if ( v216 >= iEnd - 7 )
              {
LABEL_331:
                if ( v219 >= v217 )
                {
LABEL_334:
                  if ( v219 < iEnd - 3 && *v218 == *(_DWORD *)v219 )
                  {
                    v219 += 4;
                    ++v218;
                  }
                  if ( v219 < iEnd - 1 && *(_WORD *)v218 == *(_WORD *)v219 )
                  {
                    v219 += 2;
                    v218 = (_DWORD *)((char *)v218 + 2);
                  }
                  if ( v219 < iEnd && *(_BYTE *)v218 == *v219 )
                    LODWORD(v219) = (_DWORD)v219 + 1;
                  v220 = (_DWORD)v219 - (_DWORD)v216;
                }
                else
                {
                  while ( *(_QWORD *)v219 == *(_QWORD *)v218 )
                  {
                    v219 += 8;
                    v218 += 2;
                    if ( v219 >= v217 )
                      goto LABEL_334;
                  }
                  _BitScanForward64(&v226, *(_QWORD *)v219 ^ *(_QWORD *)v218);
                  HIWORD(v326) = 0;
                  v220 = ((unsigned int)v226 >> 3) - (_DWORD)v216 + (_DWORD)v219;
                }
              }
              else
              {
                if ( *(_QWORD *)v216 == *v178 )
                {
                  v219 = v216 + 8;
                  v218 = v178 + 1;
                  goto LABEL_331;
                }
                _BitScanForward64(&v225, *(_QWORD *)v216 ^ *v178);
                HIWORD(v326) = 0;
                v220 = (unsigned int)v225 >> 3;
              }
              v215 += v220;
            }
            v221 = 0;
            if ( v346 )
            {
              v222 = (__int64)(v337 - v172) <= v211 - (__int64)v207 ? v211 - (_DWORD)v207 : (int)v337 - (int)v172;
              if ( v222 < 0 )
              {
                v227 = (char *)v207 - v172;
                v228 = (_BYTE *)(v172 - 1);
                do
                {
                  if ( *v228 != v228[(_QWORD)v227] )
                    break;
                  --v228;
                  --v221;
                }
                while ( (__int64)&v228[1 - v172] > v222 );
              }
            }
            v184 = v322;
            v229 = v215 - v221;
            v186 = v340;
            if ( v229 <= v325 )
              goto LABEL_360;
            v325 = v229;
            v170 = v229;
            v342 = (const unsigned __int8 *)(v221 + v191 + v330);
            v345 = v172 + v221;
LABEL_361:
            v230 = v347[(unsigned __int16)v191];
            v191 -= v230;
            if ( !v341 || v230 != 1 )
              goto LABEL_384;
            if ( v184 )
            {
              if ( v184 != 2 )
                goto LABEL_384;
              v231 = iEnd;
            }
            else
            {
              if ( (_BYTE)v176 != HIBYTE(v176) || (unsigned __int16)v176 != HIWORD(v176) )
              {
                v184 = 1;
                v322 = 1;
LABEL_384:
                v174 = v330;
                goto LABEL_385;
              }
              v322 = 2;
              v186 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v172 + 4), iEnd, v176) + 4;
              v340 = v186;
            }
            v174 = v330;
            if ( v191 >= v338 )
            {
              v232 = v330 + v191;
              if ( *(_DWORD *)v232 != v176 )
              {
                v184 = v322;
                goto LABEL_385;
              }
              v233 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v232 + 4), v231, v176);
              v235 = v178;
              v236 = v233 + 4i64;
              if ( (unsigned __int64)v178 + 0xFFFF < v172 )
                v235 = (_QWORD *)(v172 - 0xFFFF);
              HIWORD(v326) = HIWORD(v176);
              v237 = v234;
              if ( v234 >= (unsigned __int64)v235 + 4 )
              {
                do
                {
                  v238 = v237 - 4;
                  if ( *(_DWORD *)(v237 - 4) != v176 )
                    break;
                  v237 -= 4i64;
                }
                while ( v238 >= (unsigned __int64)v235 + 4 );
              }
              if ( v237 > (unsigned __int64)v235 )
              {
                v239 = (char *)&v326 - v237 + 3;
                do
                {
                  v240 = v237 - 1;
                  if ( *(_BYTE *)(v237 - 1) != v239[v237] )
                    break;
                  --v237;
                }
                while ( v240 > (unsigned __int64)v235 );
              }
              v241 = (unsigned int)(v234 - v237);
              if ( v241 + v236 < v186 || v236 > v186 )
                v191 -= v241;
              else
                v191 += v236 - v186;
              v184 = v322;
              goto LABEL_384;
            }
LABEL_385:
            v192 = v346;
            v180 = v333;
          }
          while ( v191 >= v334 );
        }
        v171 = (unsigned __int64)dictBase;
        v163 = v337;
        v164 = dictLimit;
        v165 = v329;
        v86 = cLevela;
        v166 = v345;
      }
      v344 = (_DWORD *)v166;
      v88 = v166;
      if ( v170 == v164 )
        break;
      v242 = v86 + v165;
      if ( v166 >= v242 + 3 )
      {
        if ( v163 < v242 )
        {
          if ( (__int64)(v163 - v165) >= 18 )
          {
            v86 = v163 - v165;
          }
          else
          {
            if ( v86 > 18 )
              v86 = 18;
            if ( v165 + v86 > v171 - 4 )
              v86 = v163 - v165 + v164 - 4;
            v243 = v86 + v165 - v163;
            if ( v243 > 0 )
            {
              v335 += v243;
              v163 += v243;
              v164 -= v243;
            }
          }
        }
        v244 = v336;
        v245 = Src;
        v246 = limit;
        v247 = v165 - (_QWORD)Src;
        v248 = v336 + 1;
        if ( limit && (unsigned __int64)v248 + (v247 >> 8) + v247 + 8 > v331 )
          goto LABEL_512;
        if ( v247 < 0xF )
        {
          *v336 = 16 * v247;
        }
        else
        {
          v249 = v247 - 15;
          *v336 = -16;
          if ( v247 - 15 >= 0xFF )
          {
            v250 = v248;
            v248 = (_QWORD *)((char *)v248 + v249 / 0xFF);
            memset(v250, 255, v249 / 0xFF);
            v245 = Src;
            v246 = limit;
            v249 %= 0xFFui64;
          }
          *(_BYTE *)v248 = v249;
          v248 = (_QWORD *)((char *)v248 + 1);
        }
        v251 = (_WORD *)((char *)v248 + v247);
        v252 = v245 - (_BYTE *)v248;
        do
        {
          *v248 = *(_QWORD *)((char *)v248 + v252);
          ++v248;
        }
        while ( v248 < (_QWORD *)v251 );
        *v251 = v165 - (_WORD)v339;
        v253 = v251 + 1;
        v336 = (char *)v253;
        v254 = v86 - 4;
        if ( v246 )
        {
          if ( (unsigned __int64)v253 + ((unsigned __int64)(v86 - 4) >> 8) + 6 > v331 )
            goto LABEL_512;
        }
        v255 = *v244;
        if ( v254 < 0xF )
        {
          *v244 = v86 - 4 + v255;
        }
        else
        {
          v256 = v254 - 15;
          *v244 = v255 + 15;
          if ( v256 >= 0x1FE )
          {
            v257 = v256 / 0x1FE;
            v256 %= 0x1FEui64;
            do
            {
              *v253++ = -1;
              --v257;
            }
            while ( v257 );
          }
          if ( v256 >= 0xFF )
          {
            LOBYTE(v256) = v256 + 1;
            *(_BYTE *)v253 = -1;
            v253 = (_WORD *)((char *)v253 + 1);
          }
          *(_BYTE *)v253 = v256;
          v336 = (char *)v253 + 1;
        }
        v258 = v86;
        v86 = v164;
        v259 = (void *)(v165 + v258);
        v339 = v335;
        v165 = v163;
        Src = v259;
        v329 = v163;
        cLevela = v164;
      }
      else if ( v166 >= v242 )
      {
        if ( v163 >= v242 || (v260 = v86 + v165 - v163, v164 -= v260, v335 += v260, v163 += v260, v337 = v163, v164 >= 4) )
        {
          v261 = (__int64)v342;
        }
        else
        {
          v163 = v166;
          v337 = v166;
          v261 = (__int64)v342;
          v164 = v170;
          v335 = v342;
        }
        v244 = v336;
        v262 = Src;
        v246 = limit;
        v263 = v165 - (_QWORD)Src;
        v264 = v336 + 1;
        if ( limit && (unsigned __int64)v264 + (v263 >> 8) + v263 + 8 > v331 )
          goto LABEL_512;
        if ( v263 < 0xF )
        {
          *v336 = 16 * v263;
        }
        else
        {
          v265 = v263 - 15;
          *v336 = -16;
          if ( v263 - 15 >= 0xFF )
          {
            v266 = v264;
            v264 = (_QWORD *)((char *)v264 + v265 / 0xFF);
            memset(v266, 255, v265 / 0xFF);
            v262 = Src;
            v246 = limit;
            v265 %= 0xFFui64;
          }
          *(_BYTE *)v264 = v265;
          v264 = (_QWORD *)((char *)v264 + 1);
          v88 = (__int64)v344;
        }
        v267 = (_WORD *)((char *)v264 + v263);
        v268 = v262 - (_BYTE *)v264;
        do
        {
          *v264 = *(_QWORD *)((char *)v264 + v268);
          ++v264;
        }
        while ( v264 < (_QWORD *)v267 );
        *v267 = v165 - (_WORD)v339;
        v269 = v267 + 1;
        v336 = (char *)v269;
        v270 = v86 - 4;
        if ( v246 )
        {
          if ( (unsigned __int64)v269 + ((unsigned __int64)(v86 - 4) >> 8) + 6 > v331 )
            goto LABEL_512;
        }
        v271 = *v244;
        if ( v270 < 0xF )
        {
          *v244 = v86 - 4 + v271;
        }
        else
        {
          v272 = v270 - 15;
          *v244 = v271 + 15;
          if ( v272 >= 0x1FE )
          {
            v273 = v272 / 0x1FE;
            v272 %= 0x1FEui64;
            do
            {
              *v269++ = -1;
              --v273;
            }
            while ( v273 );
          }
          if ( v272 >= 0xFF )
          {
            LOBYTE(v272) = v272 + 1;
            *(_BYTE *)v269 = -1;
            v269 = (_WORD *)((char *)v269 + 1);
          }
          *(_BYTE *)v269 = v272;
          v336 = (char *)v269 + 1;
        }
        v44 = (_DWORD *)v345;
        v45 = ctx;
        v274 = v86;
        v86 = v170;
        v329 = v345;
        Src = (void *)(v165 + v274);
        v87 = v261;
        dictBase = v335;
        v339 = (const unsigned __int8 *)v261;
        cLevela = v170;
        v351 = v163;
        v334 = v164;
        goto LABEL_123;
      }
      v167 = (__int64)v342;
      v163 = v166;
      v45 = ctx;
      v164 = v170;
      v335 = v342;
      v337 = v166;
      dictLimit = v170;
    }
    if ( v163 < v165 + v86 )
      v86 = v163 - v165;
    v244 = v336;
    v275 = Src;
    v246 = limit;
    v276 = v165 - (_QWORD)Src;
    v23 = v331;
    v277 = v336 + 1;
    if ( limit && (unsigned __int64)v277 + v276 + (v276 >> 8) + 8 > v331 )
      goto LABEL_513;
    if ( v276 < 0xF )
    {
      *v336 = 16 * v276;
    }
    else
    {
      v278 = v276 - 15;
      *v336 = -16;
      if ( v276 - 15 >= 0xFF )
      {
        v279 = v277;
        v277 = (_QWORD *)((char *)v277 + v278 / 0xFF);
        memset(v279, 255, v278 / 0xFF);
        v275 = Src;
        v246 = limit;
        v278 %= 0xFFui64;
      }
      *(_BYTE *)v277 = v278;
      v277 = (_QWORD *)((char *)v277 + 1);
    }
    v280 = (_WORD *)((char *)v277 + v276);
    v281 = v275 - (_BYTE *)v277;
    do
    {
      *v277 = *(_QWORD *)((char *)v277 + v281);
      ++v277;
    }
    while ( v277 < (_QWORD *)v280 );
    *v280 = v165 - (_WORD)v339;
    v282 = v280 + 1;
    v283 = v86 - 4;
    if ( v246 )
    {
      if ( (unsigned __int64)&v282[((unsigned __int64)(v86 - 4) >> 8) + 6] > v23 )
        goto LABEL_513;
    }
    v284 = *v244;
    if ( v283 < 0xF )
    {
      *v244 = v86 - 4 + v284;
    }
    else
    {
      v285 = v283 - 15;
      *v244 = v284 + 15;
      if ( v285 >= 0x1FE )
      {
        v286 = v285 / 0x1FE;
        v285 %= 0x1FEui64;
        do
        {
          *(_WORD *)v282 = -1;
          v282 += 2;
          --v286;
        }
        while ( v286 );
        v246 = limit;
      }
      if ( v285 >= 0xFF )
      {
        LOBYTE(v285) = v285 + 1;
        *v282++ = -1;
      }
      *v282++ = v285;
    }
    v287 = v86;
    v288 = v331;
    v289 = (void *)(v165 + v287);
    v290 = v282;
    Src = v289;
    v244 = v282;
    v291 = v282;
    v292 = v282 + 1;
    v293 = v163 - (_QWORD)v289;
    if ( v246 && (unsigned __int64)v292 + v293 + (v293 >> 8) + 8 > v331 )
    {
      v23 = v331;
      goto LABEL_513;
    }
    if ( v293 < 0xF )
    {
      *v290 = 16 * v293;
    }
    else
    {
      v294 = v293 - 15;
      *v290 = -16;
      if ( v293 - 15 >= 0xFF )
      {
        v295 = v292;
        v292 = (_QWORD *)((char *)v292 + v294 / 0xFF);
        memset(v295, 255, v294 / 0xFF);
        v289 = Src;
        v246 = limit;
        v294 %= 0xFFui64;
      }
      *(_BYTE *)v292 = v294;
      v292 = (_QWORD *)((char *)v292 + 1);
    }
    v296 = (_WORD *)((char *)v292 + v293);
    v297 = (_BYTE *)v289 - (_BYTE *)v292;
    do
    {
      *v292 = *(_QWORD *)((char *)v292 + v297);
      ++v292;
    }
    while ( v292 < (_QWORD *)v296 );
    *v296 = v163 - (_WORD)v335;
    v20 = (char *)(v296 + 1);
    v336 = v20;
    v298 = v164 - 4;
    if ( v246 && (unsigned __int64)&v20[((unsigned __int64)(v164 - 4) >> 8) + 6] > v288 )
    {
LABEL_512:
      v23 = v331;
LABEL_513:
      v14 = 0;
      if ( v246 == 2 )
      {
        v21 = (__int64)v348;
        v20 = v244;
        v19 = Src;
        goto LABEL_515;
      }
      return v14;
    }
    v299 = *v291;
    if ( v298 < 0xF )
    {
      *v290 = v164 - 4 + v299;
      v25 = (unsigned int *)(v163 + v164);
    }
    else
    {
      v300 = v298 - 15;
      *v290 = v299 + 15;
      if ( v300 >= 0x1FE )
      {
        v301 = v300 / 0x1FE;
        v300 %= 0x1FEui64;
        do
        {
          *(_WORD *)v20 = -1;
          v20 += 2;
          --v301;
        }
        while ( v301 );
      }
      if ( v300 >= 0xFF )
      {
        LOBYTE(v300) = v300 + 1;
        *v20++ = -1;
      }
      *v20++ = v300;
      v336 = v20;
      v25 = (unsigned int *)(v163 + v164);
    }
LABEL_508:
    Src = v25;
    v19 = v25;
LABEL_509:
    v21 = (__int64)v348;
    v14 = 0;
    v329 = (unsigned __int64)v25;
    if ( v25 <= (unsigned int *)v348 - 3 )
    {
      v10 = ctx;
      chainTable = (__int64)v347;
      continue;
    }
    break;
  }
  v246 = limit;
  v23 = v331;
LABEL_515:
  LODWORD(v9) = v353;
  v7 = srcSizePtr;
LABEL_518:
  v313 = v21 - (_QWORD)v19;
  v314 = v23 + 5;
  if ( v246 != 2 )
    v314 = v23;
  if ( v246 && (unsigned __int64)&v20[v313 + 1 + (v313 + 240) / 0xFF] > v314 )
  {
    if ( limit == limitedOutput )
      return v14;
    v313 = v314 - (_QWORD)v20 - 1 - (v314 - (unsigned __int64)v20 - 1 + 240) / 0xFF;
  }
  v315 = v313 + (_DWORD)v19;
  if ( v313 < 0xF )
  {
    *v20 = 16 * v313;
  }
  else
  {
    *v20 = -16;
    v316 = v313 - 15;
    ++v20;
    if ( v313 - 15 >= 0xFF )
    {
      v317 = v20;
      v20 += v316 / 0xFF;
      memset(v317, 255, v316 / 0xFF);
      v316 %= 0xFFui64;
    }
    *v20 = v316;
  }
  v318 = v20 + 1;
  memcpy_0(v318, v19, v313);
  *v7 = v315 - (_DWORD)v9;
  return v313 + (_DWORD)v318 - v354;
}

/*
==============
indyfs_LZ4HC_compress_optimal
==============
*/
__int64 indyfs_LZ4HC_compress_optimal(indyfs_LZ4HC_CCtx_internal *ctx, const char *const source, char *dst, int *srcSizePtr, int dstCapacity, const int nbSearches, unsigned __int64 sufficient_len, const limitedOutput_directive limit, const int fullUpdate, const dictCtx_directive dict, const HCfavor_e favorDecSpeed)
{
  indyfs_LZ4HC_CCtx_internal *v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  const char *v16; 
  const char *v17; 
  limitedOutput_directive v18; 
  int v19; 
  char *v20; 
  char *v21; 
  unsigned __int64 v22; 
  __int64 base; 
  unsigned int lowLimit; 
  __int64 dictLimit; 
  unsigned int v26; 
  int v27; 
  _QWORD *v28; 
  __int64 dictBase; 
  int v30; 
  unsigned __int64 v31; 
  unsigned int v32; 
  __int64 nextToUpdate; 
  _DWORD *v34; 
  indyfs_LZ4HC_CCtx_internal *v35; 
  unsigned __int64 v36; 
  __int64 v37; 
  unsigned __int64 v38; 
  const char *v39; 
  char *v40; 
  unsigned __int64 v41; 
  unsigned int v42; 
  _DWORD *v43; 
  _QWORD *v44; 
  _DWORD *v45; 
  unsigned __int8 *v46; 
  unsigned __int8 *v47; 
  unsigned int v48; 
  unsigned __int64 v49; 
  unsigned __int64 v50; 
  __int64 v51; 
  const char *v52; 
  _DWORD *v53; 
  unsigned __int8 *v54; 
  int v55; 
  _QWORD *v56; 
  unsigned __int64 v57; 
  unsigned __int8 *v58; 
  unsigned __int8 *v59; 
  unsigned __int8 *v60; 
  unsigned int v61; 
  signed int v62; 
  unsigned __int8 *v63; 
  unsigned __int8 *v64; 
  _DWORD *v65; 
  unsigned __int8 *v66; 
  unsigned int v67; 
  unsigned __int64 v68; 
  unsigned __int64 v69; 
  unsigned __int64 v70; 
  unsigned __int64 v71; 
  int v72; 
  unsigned __int64 v73; 
  unsigned __int64 v74; 
  unsigned __int8 *v75; 
  _DWORD *v76; 
  int v77; 
  unsigned __int64 v78; 
  unsigned __int8 *v79; 
  unsigned int v80; 
  const char *v81; 
  unsigned __int64 v82; 
  const char *v83; 
  unsigned __int64 v84; 
  char *v85; 
  const char *v86; 
  __int64 v87; 
  int v88; 
  int v89; 
  __int64 v90; 
  unsigned int v91; 
  unsigned int v92; 
  int v93; 
  _DWORD *v94; 
  unsigned __int8 *v95; 
  unsigned __int8 *v96; 
  _QWORD *v97; 
  unsigned __int8 *v98; 
  unsigned __int8 *v99; 
  unsigned int v100; 
  unsigned __int64 v101; 
  unsigned __int64 v102; 
  int v103; 
  int v104; 
  int v105; 
  unsigned __int64 v106; 
  const char *v107; 
  char *v108; 
  __int16 v109; 
  char *v110; 
  char *v111; 
  __int16 v112; 
  unsigned __int64 v113; 
  _QWORD *v114; 
  unsigned __int64 v115; 
  void *v116; 
  _WORD *v117; 
  signed __int64 v118; 
  unsigned __int64 v119; 
  char v120; 
  unsigned __int64 v121; 
  unsigned __int64 v122; 
  int v123; 
  unsigned int v124; 
  __int64 v125; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int v128; 
  int v129; 
  __int64 v130; 
  char *v131; 
  unsigned int v132; 
  unsigned int v133; 
  int v134; 
  __int64 v135; 
  int v136; 
  int v137; 
  int v138; 
  __int64 v139; 
  int v140; 
  const char *v141; 
  unsigned __int64 v142; 
  int v143; 
  int v144; 
  __int64 v145; 
  unsigned int v146; 
  __int64 v147; 
  unsigned int v148; 
  int v149; 
  unsigned int v150; 
  _QWORD *v151; 
  int v152; 
  int v153; 
  __int64 v154; 
  unsigned __int64 v155; 
  unsigned int v156; 
  unsigned int v157; 
  __int64 v158; 
  _DWORD *v159; 
  indyfs_LZ4HC_CCtx_internal *v160; 
  unsigned __int64 v161; 
  __int64 v162; 
  unsigned __int64 v163; 
  const char *v164; 
  __int64 v165; 
  int v166; 
  unsigned __int64 v167; 
  unsigned int v168; 
  _DWORD *v169; 
  _DWORD *v170; 
  _QWORD *v171; 
  unsigned __int8 *v172; 
  unsigned __int8 *v173; 
  unsigned int v174; 
  unsigned __int64 v175; 
  unsigned __int64 v176; 
  _DWORD *v177; 
  unsigned __int8 *v178; 
  _QWORD *v179; 
  unsigned __int8 *v180; 
  unsigned __int8 *v181; 
  unsigned __int8 *v182; 
  unsigned int v183; 
  signed int v184; 
  unsigned __int8 *v185; 
  unsigned __int8 *v186; 
  _DWORD *v187; 
  unsigned __int8 *v188; 
  unsigned int v189; 
  unsigned __int64 v190; 
  unsigned __int64 v191; 
  unsigned __int64 v192; 
  unsigned __int64 v193; 
  __int64 v194; 
  int v195; 
  unsigned __int64 v196; 
  unsigned __int8 *v197; 
  unsigned __int64 v198; 
  unsigned __int8 *v199; 
  _DWORD *v200; 
  int v201; 
  unsigned __int64 v202; 
  unsigned __int8 *v203; 
  unsigned int v204; 
  const char *v205; 
  unsigned __int64 v206; 
  char *v207; 
  unsigned __int64 v208; 
  signed __int64 v209; 
  const char *v210; 
  __int64 v211; 
  int v212; 
  __int64 v213; 
  signed __int64 v214; 
  unsigned int v215; 
  unsigned int v216; 
  unsigned int v217; 
  _DWORD *v218; 
  unsigned __int8 *v219; 
  _QWORD *v220; 
  unsigned __int8 *v221; 
  unsigned __int8 *v222; 
  unsigned __int8 *v223; 
  unsigned int v224; 
  unsigned __int64 v225; 
  unsigned __int64 v226; 
  int v227; 
  unsigned __int64 v228; 
  int v229; 
  _QWORD *v230; 
  unsigned int v231; 
  int v232; 
  __int64 v233; 
  int v234; 
  int v235; 
  unsigned __int64 v236; 
  __int64 v237; 
  unsigned int v238; 
  _DWORD *v239; 
  indyfs_LZ4HC_CCtx_internal *v240; 
  unsigned __int64 v241; 
  __int64 v242; 
  unsigned __int64 v243; 
  const char *v244; 
  __int64 v245; 
  int v246; 
  unsigned int v247; 
  unsigned int v248; 
  _DWORD *v249; 
  const char *v250; 
  _DWORD *v251; 
  _QWORD *v252; 
  unsigned __int8 *v253; 
  unsigned __int8 *v254; 
  unsigned int v255; 
  unsigned int v256; 
  int v257; 
  int v258; 
  unsigned __int64 v259; 
  unsigned __int64 v260; 
  int v261; 
  _DWORD *v262; 
  unsigned __int8 *v263; 
  __int64 v264; 
  _QWORD *v265; 
  unsigned __int8 *v266; 
  unsigned __int8 *v267; 
  unsigned __int8 *v268; 
  unsigned int v269; 
  signed int v270; 
  unsigned __int8 *v271; 
  unsigned __int8 *v272; 
  _DWORD *v273; 
  unsigned __int8 *v274; 
  unsigned int v275; 
  int v276; 
  int v277; 
  unsigned __int64 v278; 
  unsigned __int64 v279; 
  unsigned __int64 v280; 
  unsigned __int64 v281; 
  signed __int64 v282; 
  const char *v283; 
  __int64 v284; 
  int v285; 
  int v286; 
  unsigned __int8 *v287; 
  __int64 v288; 
  unsigned int v289; 
  unsigned __int64 v290; 
  const char *v291; 
  unsigned __int64 v292; 
  unsigned __int64 v293; 
  unsigned __int64 v294; 
  char *v295; 
  unsigned __int64 v296; 
  __int64 v297; 
  signed __int64 v298; 
  unsigned int v299; 
  unsigned int v300; 
  int v301; 
  const unsigned __int8 *v302; 
  const unsigned __int8 *v303; 
  unsigned __int8 *v304; 
  _QWORD *v305; 
  unsigned __int8 *v306; 
  unsigned __int8 *v307; 
  unsigned __int8 *v308; 
  unsigned int v309; 
  int v310; 
  unsigned int v311; 
  const unsigned __int8 *v312; 
  int v313; 
  unsigned __int64 v314; 
  unsigned __int64 v315; 
  __int64 v316; 
  signed __int64 v317; 
  const char *v318; 
  int v319; 
  int v320; 
  int v321; 
  unsigned __int64 v322; 
  __int64 v323; 
  int v324; 
  unsigned int v325; 
  unsigned int v326; 
  unsigned int v327; 
  __int64 v328; 
  int v329; 
  __int64 v330; 
  unsigned int v331; 
  unsigned int v332; 
  int v333; 
  int v334; 
  unsigned int v335; 
  unsigned int v336; 
  int v337; 
  __int64 v338; 
  __int64 v339; 
  int v340; 
  int v341; 
  char *v342; 
  int v343; 
  int v344; 
  int v345; 
  unsigned int v346; 
  unsigned int v347; 
  int v348; 
  __int32 v349; 
  unsigned int v350; 
  __int64 v351; 
  int v352; 
  int v353; 
  __int64 v354; 
  int v355; 
  int v356; 
  int v357; 
  __int64 v358; 
  int v359; 
  int v360; 
  const char *v361; 
  __int64 v362; 
  char *v363; 
  char *v364; 
  int v365; 
  _QWORD *v366; 
  unsigned __int64 v367; 
  unsigned __int64 v368; 
  void *v369; 
  _WORD *v370; 
  signed __int64 v371; 
  unsigned __int64 v372; 
  char v373; 
  unsigned __int64 v374; 
  unsigned __int64 v375; 
  size_t v376; 
  unsigned __int64 v377; 
  _BYTE *v379; 
  size_t v380; 
  int v381; 
  unsigned int v382; 
  int v383; 
  unsigned int v384; 
  int v385; 
  int v386; 
  int v387; 
  unsigned int v388; 
  unsigned int v389; 
  unsigned int pattern32; 
  int v391; 
  const char *v392; 
  unsigned int v393; 
  __int64 v394; 
  const char *v395; 
  int v396; 
  int v397; 
  unsigned __int8 *iEnd; 
  unsigned int v399; 
  indyfs_LZ4HC_CCtx_internal *v400; 
  char *v401; 
  __int64 v402; 
  const char *v403; 
  char *v404; 
  __int64 dictCtx; 
  unsigned __int64 v406; 
  const char *v407; 
  __int64 v408; 
  unsigned __int64 v409; 
  unsigned __int64 v410; 
  unsigned __int64 v411; 
  unsigned __int64 v412; 
  const indyfs_LZ4HC_CCtx_internal *v413; 
  unsigned __int64 v414; 
  unsigned __int64 v415; 
  const char *v416; 
  const char *v417; 
  char *v418; 
  unsigned __int16 *chainTable; 
  __int64 v420; 
  int *v421; 
  unsigned int v422; 
  int v423; 
  int v424; 
  int v425; 
  unsigned int v426; 
  int v427; 
  int v428; 
  int v429; 
  unsigned int v430; 
  int v431; 
  int v432; 
  int v433[6]; 
  char v434[65516]; 

  v12 = ctx;
  v400 = ctx;
  v13 = source;
  v421 = srcSizePtr;
  v14 = (int)source;
  v417 = source;
  v15 = *srcSizePtr;
  v16 = source;
  v17 = &source[v15];
  *srcSizePtr = 0;
  v18 = limit;
  v19 = (int)dst;
  v395 = source;
  v407 = source;
  v20 = dst;
  v418 = dst;
  iEnd = (unsigned __int8 *)(v17 - 5);
  v416 = v17;
  v21 = &dst[dstCapacity - 5];
  v415 = (unsigned __int64)(v17 - 12);
  if ( limit != 2 )
    v21 = &dst[dstCapacity];
  v404 = dst;
  v22 = 4095i64;
  v409 = (unsigned __int64)v21;
  if ( sufficient_len < 0x1000 )
    v22 = sufficient_len;
  v414 = v22;
  if ( source <= v17 - 12 )
  {
    chainTable = v12->chainTable;
    while ( 1 )
    {
      base = (__int64)v12->base;
      lowLimit = v12->lowLimit;
      dictLimit = v12->dictLimit;
      v26 = *(_DWORD *)v16;
      v391 = (_DWORD)v16 - (_DWORD)v13;
      v27 = 3;
      v399 = (_DWORD)v16 - base;
      LODWORD(v403) = 0;
      v410 = 0i64;
      v28 = (_QWORD *)(base + dictLimit);
      v397 = 0;
      v402 = 0i64;
      dictCtx = (__int64)v12->dictCtx;
      dictBase = (__int64)v12->dictBase;
      if ( lowLimit + 0x10000 <= (int)v16 - (int)base )
        lowLimit = (_DWORD)v16 - base - 0xFFFF;
      v396 = nbSearches;
      v30 = 0;
      v392 = v16;
      v31 = 0i64;
      v32 = (_DWORD)v16 - base;
      v381 = 3;
      v394 = base;
      nextToUpdate = v400->nextToUpdate;
      v393 = dictLimit;
      v388 = lowLimit;
      v408 = dictBase;
      v384 = v26;
      if ( (unsigned int)nextToUpdate >= v32 )
      {
        v35 = v400;
      }
      else
      {
        v34 = (_DWORD *)(base + nextToUpdate);
        v35 = v400;
        do
        {
          v36 = (unsigned int)(-1640531535 * *v34);
          v34 = (_DWORD *)((char *)v34 + 1);
          v37 = v36 >> 17;
          v38 = (unsigned int)(nextToUpdate - v35->hashTable[v37]);
          if ( v38 > 0xFFFF )
            LOWORD(v38) = -1;
          v35->chainTable[(unsigned __int16)nextToUpdate] = v38;
          v35->hashTable[v37] = nextToUpdate;
          LODWORD(nextToUpdate) = nextToUpdate + 1;
        }
        while ( (unsigned int)nextToUpdate < v32 );
        LODWORD(dictLimit) = v393;
        dictBase = v408;
      }
      v39 = v395;
      v35->nextToUpdate = v32;
      v40 = NULL;
      v401 = NULL;
      v41 = 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v39) >> 17);
      v42 = *(unsigned int *)((char *)v35->hashTable + v41);
      v406 = v41;
      if ( v42 >= lowLimit )
      {
        while ( 1 )
        {
          if ( !v396 )
          {
LABEL_134:
            v41 = v406;
            break;
          }
          --v396;
          if ( favorDecSpeed && v399 - v42 < 8 )
            goto LABEL_95;
          if ( v42 >= (unsigned int)dictLimit )
          {
            v43 = (_DWORD *)(v42 + v394);
            if ( *(_WORD *)&v395[v27 - 1] == *(_WORD *)((char *)v43 - v40 + v27 - 1) && *v43 == v384 )
            {
              v44 = v395 + 4;
              v45 = v43 + 1;
              v46 = (unsigned __int8 *)(v395 + 4);
              v47 = iEnd - 7;
              if ( v395 + 4 >= (const char *)iEnd - 7 )
              {
LABEL_28:
                if ( v46 >= v47 )
                {
LABEL_31:
                  if ( v46 < iEnd - 3 && *v45 == *(_DWORD *)v46 )
                  {
                    v46 += 4;
                    ++v45;
                  }
                  if ( v46 < iEnd - 1 && *(_WORD *)v45 == *(_WORD *)v46 )
                  {
                    v46 += 2;
                    v45 = (_DWORD *)((char *)v45 + 2);
                  }
                  if ( v46 < iEnd && *(_BYTE *)v45 == *v46 )
                    LODWORD(v46) = (_DWORD)v46 + 1;
                  v48 = (_DWORD)v46 - (_DWORD)v44;
                }
                else
                {
                  while ( *(_QWORD *)v46 == *(_QWORD *)v45 )
                  {
                    v46 += 8;
                    v45 += 2;
                    if ( v46 >= v47 )
                      goto LABEL_31;
                  }
                  _BitScanForward64(&v50, *(_QWORD *)v46 ^ *(_QWORD *)v45);
                  HIWORD(pattern32) = 0;
                  v48 = ((unsigned int)v50 >> 3) - (_DWORD)v44 + (_DWORD)v46;
                }
              }
              else
              {
                if ( *v44 == *(_QWORD *)v45 )
                {
                  v46 = (unsigned __int8 *)(v395 + 12);
                  v45 = v43 + 3;
                  goto LABEL_28;
                }
                _BitScanForward64(&v49, *v44 ^ *(_QWORD *)v45);
                HIWORD(pattern32) = 0;
                v48 = (unsigned int)v49 >> 3;
              }
              v51 = v394;
              v52 = v395;
              if ( (int)(v48 + 4) > v27 )
              {
                v27 = v48 + 4;
                v381 = v48 + 4;
                v402 = v42 + v394;
                v392 = v395;
              }
              v26 = v384;
LABEL_46:
              lowLimit = v388;
              goto LABEL_96;
            }
            v26 = v384;
            goto LABEL_94;
          }
          v53 = (_DWORD *)(v42 + dictBase);
          if ( *v53 != v26 )
          {
            v27 = v381;
LABEL_94:
            lowLimit = v388;
LABEL_95:
            v52 = v395;
            v51 = v394;
            goto LABEL_96;
          }
          v54 = (unsigned __int8 *)(v39 + 4);
          v55 = dictLimit;
          v56 = v53 + 1;
          v57 = (unsigned __int64)&v39[v55 - v42];
          v58 = iEnd;
          if ( v57 <= (unsigned __int64)iEnd )
            v58 = (unsigned __int8 *)v57;
          v59 = (unsigned __int8 *)(v39 + 4);
          v60 = v58 - 7;
          if ( v54 < v58 - 7 )
          {
            if ( *v56 != *(_QWORD *)v54 )
            {
              _BitScanForward64(&v68, *v56 ^ *(_QWORD *)v54);
              HIWORD(pattern32) = 0;
              v61 = (unsigned int)v68 >> 3;
              goto LABEL_66;
            }
            v59 = v54 + 8;
            v56 = v53 + 3;
          }
          if ( v59 >= v60 )
          {
LABEL_56:
            if ( v59 < v58 - 3 && *(_DWORD *)v56 == *(_DWORD *)v59 )
            {
              v59 += 4;
              v56 = (_QWORD *)((char *)v56 + 4);
            }
            if ( v59 < v58 - 1 && *(_WORD *)v56 == *(_WORD *)v59 )
            {
              v59 += 2;
              v56 = (_QWORD *)((char *)v56 + 2);
            }
            if ( v59 < v58 && *(_BYTE *)v56 == *v59 )
              LODWORD(v59) = (_DWORD)v59 + 1;
            v61 = (_DWORD)v59 - (_DWORD)v54;
          }
          else
          {
            while ( *v56 == *(_QWORD *)v59 )
            {
              v59 += 8;
              ++v56;
              if ( v59 >= v60 )
                goto LABEL_56;
            }
            _BitScanForward64(&v69, *v56 ^ *(_QWORD *)v59);
            HIWORD(pattern32) = 0;
            v61 = ((unsigned int)v69 >> 3) - (_DWORD)v54 + (_DWORD)v59;
          }
LABEL_66:
          v62 = v61 + 4;
          v63 = (unsigned __int8 *)&v395[v61 + 4];
          if ( v63 != v58 || v58 >= iEnd )
            goto LABEL_90;
          v64 = iEnd - 7;
          v65 = v28;
          v66 = (unsigned __int8 *)&v395[v62];
          if ( v63 >= iEnd - 7 )
            goto LABEL_71;
          if ( *v28 == *(_QWORD *)v63 )
          {
            v66 = v63 + 8;
            v65 = v28 + 1;
LABEL_71:
            if ( v66 >= v64 )
            {
LABEL_74:
              if ( v66 < iEnd - 3 && *v65 == *(_DWORD *)v66 )
              {
                v66 += 4;
                ++v65;
              }
              if ( v66 < iEnd - 1 && *(_WORD *)v65 == *(_WORD *)v66 )
              {
                v66 += 2;
                v65 = (_DWORD *)((char *)v65 + 2);
              }
              if ( v66 < iEnd && *(_BYTE *)v65 == *v66 )
                LODWORD(v66) = (_DWORD)v66 + 1;
              v67 = (_DWORD)v66 - (_DWORD)v63;
            }
            else
            {
              while ( *(_QWORD *)v65 == *(_QWORD *)v66 )
              {
                v66 += 8;
                v65 += 2;
                if ( v66 >= v64 )
                  goto LABEL_74;
              }
              _BitScanForward64(&v71, *(_QWORD *)v65 ^ *(_QWORD *)v66);
              HIWORD(pattern32) = 0;
              v67 = ((unsigned int)v71 >> 3) - (_DWORD)v63 + (_DWORD)v66;
            }
            goto LABEL_84;
          }
          _BitScanForward64(&v70, *v28 ^ *(_QWORD *)v63);
          HIWORD(pattern32) = 0;
          v67 = (unsigned int)v70 >> 3;
LABEL_84:
          v62 += v67;
LABEL_90:
          v27 = v381;
          v51 = v394;
          v52 = v395;
          v26 = v384;
          if ( v62 <= v381 )
            goto LABEL_46;
          v27 = v62;
          v402 = v394 + v42;
          lowLimit = v388;
          v392 = v395;
          v381 = v62;
LABEL_96:
          v72 = chainTable[(unsigned __int16)v42];
          v42 -= v72;
          if ( v72 != 1 )
            goto LABEL_132;
          if ( v30 )
          {
            if ( v30 != 2 )
              goto LABEL_132;
          }
          else
          {
            if ( (_BYTE)v26 != HIBYTE(v26) || (unsigned __int16)v26 != HIWORD(v26) )
            {
              v30 = 1;
LABEL_132:
              LODWORD(dictLimit) = v393;
              goto LABEL_133;
            }
            v73 = (unsigned __int64)(v52 + 4);
            v74 = 0x100000001i64 * v26;
            v30 = 2;
            v75 = (unsigned __int8 *)v73;
            if ( v73 >= (unsigned __int64)(iEnd - 7) )
            {
LABEL_102:
              while ( v75 < iEnd )
              {
                if ( *v75 != (_BYTE)v74 )
                  break;
                ++v75;
                v74 >>= 8;
              }
              v31 = (unsigned int)((_DWORD)v75 - v73 + 4);
            }
            else
            {
              while ( v74 == *(_QWORD *)v75 )
              {
                v75 += 8;
                if ( v75 >= iEnd - 7 )
                  goto LABEL_102;
              }
              _BitScanForward64(&v74, v74 ^ *(_QWORD *)v75);
              HIWORD(pattern32) = 0;
              v31 = (unsigned int)v75 + ((unsigned int)v74 >> 3) - (_DWORD)v73 + 4;
            }
          }
          LODWORD(dictLimit) = v393;
          if ( v42 >= v393 )
          {
            v76 = (_DWORD *)(v51 + v42);
            if ( *v76 == v26 )
            {
              v77 = (_DWORD)v76 + 4;
              v78 = 0x100000001i64 * v26;
              v79 = (unsigned __int8 *)(v76 + 1);
              if ( v76 + 1 >= (_DWORD *)(iEnd - 7) )
              {
LABEL_114:
                while ( v79 < iEnd )
                {
                  if ( *v79 != (_BYTE)v78 )
                    break;
                  ++v79;
                  v78 >>= 8;
                }
                v80 = (_DWORD)v79 - v77;
              }
              else
              {
                while ( *(_QWORD *)v79 == v78 )
                {
                  v79 += 8;
                  if ( v79 >= iEnd - 7 )
                    goto LABEL_114;
                }
                _BitScanForward64(&v78, *(_QWORD *)v79 ^ v78);
                HIWORD(pattern32) = 0;
                v80 = (_DWORD)v79 + ((unsigned int)v78 >> 3) - v77;
              }
              v81 = (const char *)v28;
              v82 = v80 + 4i64;
              HIWORD(pattern32) = HIWORD(v26);
              v83 = (const char *)v76;
              if ( (char *)v28 + 0xFFFF < v395 )
                v81 = v395 - 0xFFFF;
              if ( v76 >= (_DWORD *)v81 + 1 )
              {
                do
                {
                  v84 = (unsigned __int64)(v83 - 4);
                  if ( *((_DWORD *)v83 - 1) != v26 )
                    break;
                  v83 -= 4;
                }
                while ( v84 >= (unsigned __int64)(v81 + 4) );
              }
              if ( v83 > v81 )
              {
                v85 = (char *)((char *)&pattern32 + 3 - v83);
                do
                {
                  v86 = v83 - 1;
                  if ( *(v83 - 1) != v85[(_QWORD)v83] )
                    break;
                  --v83;
                }
                while ( v86 > v81 );
              }
              v87 = (unsigned int)((_DWORD)v76 - (_DWORD)v83);
              if ( v87 + v82 < v31 || v82 > v31 )
                v42 -= v87;
              else
                v42 += v82 - v31;
              goto LABEL_132;
            }
          }
LABEL_133:
          dictBase = v408;
          v39 = v395;
          if ( v42 < lowLimit )
            goto LABEL_134;
          v40 = v401;
        }
      }
      v88 = v381;
      if ( dict == usingDictCtx )
      {
        v89 = v396;
        if ( v396 )
        {
          if ( v399 - v388 < 0xFFFF )
          {
            v90 = *(_QWORD *)(dictCtx + 0x40000) - *(_QWORD *)(dictCtx + 262152);
            v91 = *(_DWORD *)(v41 + dictCtx);
            v92 = v91 + v388 - v90;
            if ( v399 - v92 <= 0xFFFF )
            {
              while ( 1 )
              {
                v93 = v89--;
                v396 = v89;
                if ( !v93 )
                  goto LABEL_165;
                v94 = (_DWORD *)(*(_QWORD *)(dictCtx + 262152) + v91);
                if ( *v94 == v384 )
                  break;
LABEL_164:
                v103 = *(unsigned __int16 *)(dictCtx + 2i64 * (unsigned __int16)v91 + 0x20000);
                v92 -= v103;
                v91 -= v103;
                if ( v399 - v92 > 0xFFFF )
                  goto LABEL_165;
              }
              v95 = iEnd;
              v96 = (unsigned __int8 *)(v39 + 4);
              v97 = v94 + 1;
              if ( &v39[v90 - v91] <= (const char *)iEnd )
                v95 = (unsigned __int8 *)&v39[v90 - v91];
              v98 = (unsigned __int8 *)(v39 + 4);
              v99 = v95 - 7;
              if ( v96 < v95 - 7 )
              {
                if ( *v97 != *(_QWORD *)v96 )
                {
                  _BitScanForward64(&v101, *v97 ^ *(_QWORD *)v96);
                  HIWORD(pattern32) = 0;
                  v100 = (unsigned int)v101 >> 3;
LABEL_161:
                  v39 = v395;
                  if ( (int)(v100 + 4) > v88 )
                  {
                    v88 = v100 + 4;
                    v402 = v394 + v92;
                    v392 = v395;
                  }
                  v89 = v396;
                  goto LABEL_164;
                }
                v98 = v96 + 8;
                v97 = v94 + 3;
              }
              if ( v98 >= v99 )
              {
LABEL_149:
                if ( v98 < v95 - 3 && *(_DWORD *)v97 == *(_DWORD *)v98 )
                {
                  v98 += 4;
                  v97 = (_QWORD *)((char *)v97 + 4);
                }
                if ( v98 < v95 - 1 && *(_WORD *)v97 == *(_WORD *)v98 )
                {
                  v98 += 2;
                  v97 = (_QWORD *)((char *)v97 + 2);
                }
                if ( v98 < v95 && *(_BYTE *)v97 == *v98 )
                  LODWORD(v98) = (_DWORD)v98 + 1;
                v100 = (_DWORD)v98 - (_DWORD)v96;
              }
              else
              {
                while ( *v97 == *(_QWORD *)v98 )
                {
                  v98 += 8;
                  ++v97;
                  if ( v98 >= v99 )
                    goto LABEL_149;
                }
                _BitScanForward64(&v102, *v97 ^ *(_QWORD *)v98);
                HIWORD(pattern32) = 0;
                v100 = ((unsigned int)v102 >> 3) - (_DWORD)v96 + (_DWORD)v98;
              }
              goto LABEL_161;
            }
          }
        }
      }
LABEL_165:
      if ( v88 <= 3 )
      {
        v105 = (int)v403;
        v104 = (int)v403;
      }
      else
      {
        if ( favorDecSpeed && v88 <= 36 && v88 > 18 )
          v88 = 18;
        v104 = v88;
        v105 = (_DWORD)v392 - v402;
        LODWORD(v410) = (_DWORD)v392 - v402;
        v397 = v88;
        HIDWORD(v410) = v88;
      }
      v106 = HIDWORD(v410);
      if ( !HIDWORD(v410) )
      {
        v16 = ++v395;
LABEL_628:
        v13 = v407;
        v20 = v404;
        goto LABEL_629;
      }
      if ( SHIDWORD(v410) <= v414 )
        break;
      v107 = v395;
      v108 = v404;
      v13 = v407;
      v109 = v105;
      v110 = v404;
      v111 = v404;
      v112 = (_WORD)v395 - v109;
      v113 = v395 - v407;
      v114 = v404 + 1;
      if ( limit && (unsigned __int64)v114 + v113 + (v113 >> 8) + 8 > v409 )
        goto $_dest_overflow;
      if ( v113 < 0xF )
      {
        *v404 = 16 * v113;
      }
      else
      {
        v115 = v113 - 15;
        *v404 = -16;
        if ( v113 - 15 >= 0xFF )
        {
          v116 = v114;
          v114 = (_QWORD *)((char *)v114 + v115 / 0xFF);
          memset(v116, 255, v115 / 0xFF);
          v115 %= 0xFFui64;
        }
        *(_BYTE *)v114 = v115;
        v114 = (_QWORD *)((char *)v114 + 1);
        v107 = v395;
      }
      v117 = (_WORD *)((char *)v114 + v113);
      v118 = v13 - (const char *)v114;
      do
      {
        *v114 = *(_QWORD *)((char *)v114 + v118);
        ++v114;
      }
      while ( v114 < (_QWORD *)v117 );
      v20 = (char *)(v117 + 1);
      v404 = (char *)(v117 + 1);
      *v117 = (_WORD)v107 - v112;
      v119 = (int)v106 - 4;
      if ( limit )
      {
        if ( (unsigned __int64)&v20[((unsigned __int64)((int)v106 - 4) >> 8) + 6] > v409 )
        {
$_dest_overflow:
          v18 = limit;
          if ( limit != 2 )
            return 0i64;
          v20 = v108;
          goto LABEL_634;
        }
      }
      v120 = *v111;
      if ( v119 < 0xF )
      {
        v16 = &v107[(int)v106];
        *v110 = v120 + v106 - 4;
        v395 = v16;
        v13 = v16;
        v407 = v16;
      }
      else
      {
        v121 = v119 - 15;
        *v110 = v120 + 15;
        if ( v121 >= 0x1FE )
        {
          v122 = v121 / 0x1FE;
          v121 %= 0x1FEui64;
          do
          {
            *(_WORD *)v20 = -1;
            v20 += 2;
            --v122;
          }
          while ( v122 );
        }
        if ( v121 >= 0xFF )
        {
          LOBYTE(v121) = v121 + 1;
          *v20++ = -1;
        }
        *v20++ = v121;
        v16 = &v107[(int)v106];
        v404 = v20;
        v395 = v16;
        v13 = v16;
        v407 = v16;
      }
LABEL_629:
      if ( (unsigned __int64)v16 > v415 )
      {
        v18 = limit;
LABEL_634:
        v19 = (int)v418;
        v14 = (int)v417;
        v17 = v416;
        goto $_last_literals_0;
      }
      v12 = v400;
    }
    v123 = v391;
    v124 = v391;
    if ( v391 >= 15 )
      v124 = (v391 - 15) / 0xFFu + v391 + 1;
    v125 = 0i64;
    v422 = v124;
    v424 = 1;
    v423 = 0;
    v126 = v391 + 1;
    v425 = v391;
    if ( v391 + 1 >= 15 )
      v126 = (v391 - 14) / 0xFFu + v391 + 2;
    v429 = v391 + 1;
    v426 = v126;
    v127 = v391 + 2;
    v428 = 1;
    v427 = 0;
    if ( v391 + 2 >= 15 )
      v127 = (v391 - 13) / 0xFFu + v391 + 3;
    v433[0] = v391 + 2;
    v430 = v127;
    v128 = v391 + 3;
    v432 = 1;
    v431 = 0;
    if ( v391 + 3 >= 15 )
      v128 = (v391 - 12) / 0xFFu + v391 + 4;
    v129 = 4;
    v130 = v104;
    v433[3] = 1;
    v433[2] = 0;
    v433[4] = v391 + 3;
    v433[1] = v128;
    if ( v104 >= 4i64 )
    {
      v131 = v434;
      v125 = v104 - 3i64;
      do
      {
        v132 = v123;
        if ( v123 >= 15 )
          v132 = (v123 - 15) / 0xFFu + v123 + 1;
        v133 = v132 + 3;
        if ( v129 >= 19 )
          v133 += (v129 - 19) / 0xFFu + 1;
        *((_DWORD *)v131 + 1) = v129++;
        *(_DWORD *)v131 = v105;
        *((_DWORD *)v131 + 2) = v123;
        *((_DWORD *)v131 - 1) = v133;
        v131 += 16;
        --v125;
      }
      while ( v125 );
    }
    v134 = v397;
    v135 = 2 * (v130 + 1);
    v136 = 1;
    v396 = 1;
    *(&v424 + 2 * v135) = 1;
    *(&v423 + 2 * v135) = v125;
    *(&v425 + 2 * v135) = 1;
    v137 = *(&v422 + 4 * v130) + 1;
    *(&v428 + 2 * v135) = 1;
    *(&v422 + 2 * v135) = v137;
    *(&v427 + 2 * v135) = v125;
    *(&v429 + 2 * v135) = 2;
    v138 = *(&v422 + 4 * v130) + 2;
    v433[2 * v135 - 1] = 1;
    *(&v426 + 2 * v135) = v138;
    *(&v431 + 2 * v135) = v125;
    v433[2 * v135] = 3;
    v139 = 1i64;
    v140 = *(&v422 + 4 * v130) + 3;
    v408 = 1i64;
    *(&v430 + 2 * v135) = v140;
    if ( v134 <= 1 )
    {
LABEL_598:
      LODWORD(v322) = *(&v424 + 4 * v134);
      v136 = v134 - v322;
      v321 = *(&v423 + 4 * v134);
      goto $encode;
    }
    while ( 1 )
    {
      v141 = &v395[v136];
      v392 = v141;
      if ( (unsigned __int64)v141 > v415 )
        goto LABEL_598;
      v142 = 16 * v139;
      v420 = v142;
      v143 = *(unsigned int *)((char *)&v426 + v142);
      v144 = *(unsigned int *)((char *)&v422 + v142);
      if ( fullUpdate )
      {
        if ( v143 <= v144 && v433[v142 / 4 + 5] < v144 + 3 )
          goto LABEL_597;
      }
      else if ( v143 <= v144 )
      {
        goto LABEL_597;
      }
      v145 = (__int64)v400->base;
      v146 = (_DWORD)v141 - v145;
      v147 = v400->dictLimit;
      v148 = v400->lowLimit;
      v149 = (int)v141;
      v413 = v400->dictCtx;
      v394 = v145;
      v399 = v147;
      v389 = (_DWORD)v141 - v145;
      if ( fullUpdate )
      {
        v150 = *(_DWORD *)v141;
        v401 = (char *)v125;
        v151 = (_QWORD *)(v145 + v147);
        v412 = 0i64;
        v382 = v150;
        v152 = 3;
        if ( v148 + 0x10000 <= v146 )
          v148 = v146 - 0xFFFF;
        v385 = 3;
        v393 = v148;
        v153 = 0;
        v154 = (__int64)v400->dictBase;
        v155 = 0i64;
        v156 = nbSearches;
        v157 = (_DWORD)v141 - v145;
        v158 = v400->nextToUpdate;
        dictCtx = v154;
        pattern32 = nbSearches;
        if ( (unsigned int)v158 >= v157 )
        {
          v160 = v400;
        }
        else
        {
          v159 = (_DWORD *)(v145 + v158);
          v160 = v400;
          do
          {
            v161 = (unsigned int)(-1640531535 * *v159);
            v159 = (_DWORD *)((char *)v159 + 1);
            v162 = v161 >> 17;
            v163 = (unsigned int)(v158 - v160->hashTable[v162]);
            if ( v163 > 0xFFFF )
              LOWORD(v163) = -1;
            v160->chainTable[(unsigned __int16)v158] = v163;
            v160->hashTable[v162] = v158;
            LODWORD(v158) = v158 + 1;
          }
          while ( (unsigned int)v158 < v157 );
          v154 = dictCtx;
          v156 = pattern32;
        }
        v160->nextToUpdate = v157;
        v164 = v392;
        v165 = 0i64;
        v166 = (int)v392;
        v402 = 0i64;
        v403 = v392;
        v167 = 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v392) >> 17);
        v168 = *(unsigned int *)((char *)v160->hashTable + v167);
        v406 = v167;
        if ( v168 >= v393 )
        {
          v403 = v392;
          while ( 1 )
          {
            if ( !v156 )
            {
LABEL_343:
              v167 = v406;
              v166 = (int)v403;
              break;
            }
            pattern32 = v156 - 1;
            if ( favorDecSpeed && v146 - v168 < 8 )
              goto LABEL_304;
            if ( v168 < v399 )
            {
              v177 = (_DWORD *)(v154 + v168);
              if ( *v177 == v150 )
              {
                v178 = iEnd;
                v179 = v177 + 1;
                if ( &v164[v399 - v168] <= (const char *)iEnd )
                  v178 = (unsigned __int8 *)&v164[v399 - v168];
                v180 = (unsigned __int8 *)(v164 + 4);
                v181 = v180;
                v182 = v178 - 7;
                if ( v180 >= v178 - 7 )
                  goto LABEL_262;
                if ( *v179 != *(_QWORD *)v180 )
                {
                  _BitScanForward64(&v190, *v179 ^ *(_QWORD *)v180);
                  v391 = 0;
                  v183 = (unsigned int)v190 >> 3;
                }
                else
                {
                  v181 = v180 + 8;
                  v179 = v177 + 3;
LABEL_262:
                  if ( v181 >= v182 )
                  {
LABEL_265:
                    if ( v181 < v178 - 3 && *(_DWORD *)v179 == *(_DWORD *)v181 )
                    {
                      v181 += 4;
                      v179 = (_QWORD *)((char *)v179 + 4);
                    }
                    if ( v181 < v178 - 1 && *(_WORD *)v179 == *(_WORD *)v181 )
                    {
                      v181 += 2;
                      v179 = (_QWORD *)((char *)v179 + 2);
                    }
                    if ( v181 < v178 && *(_BYTE *)v179 == *v181 )
                      LODWORD(v181) = (_DWORD)v181 + 1;
                    v183 = (_DWORD)v181 - (_DWORD)v180;
                  }
                  else
                  {
                    while ( *v179 == *(_QWORD *)v181 )
                    {
                      v181 += 8;
                      ++v179;
                      if ( v181 >= v182 )
                        goto LABEL_265;
                    }
                    _BitScanForward64(&v191, *v179 ^ *(_QWORD *)v181);
                    v391 = 0;
                    v183 = ((unsigned int)v191 >> 3) + (_DWORD)v181 - (_DWORD)v180;
                  }
                }
                v184 = v183 + 4;
                v185 = (unsigned __int8 *)&v392[v183 + 4];
                if ( v185 == v178 && v178 < iEnd )
                {
                  v186 = iEnd - 7;
                  v187 = v151;
                  v188 = (unsigned __int8 *)&v392[v184];
                  if ( v185 >= iEnd - 7 )
                  {
LABEL_280:
                    if ( v188 >= v186 )
                    {
LABEL_283:
                      if ( v188 < iEnd - 3 && *v187 == *(_DWORD *)v188 )
                      {
                        v188 += 4;
                        ++v187;
                      }
                      if ( v188 < iEnd - 1 && *(_WORD *)v187 == *(_WORD *)v188 )
                      {
                        v188 += 2;
                        v187 = (_DWORD *)((char *)v187 + 2);
                      }
                      if ( v188 < iEnd && *(_BYTE *)v187 == *v188 )
                        LODWORD(v188) = (_DWORD)v188 + 1;
                      v189 = (_DWORD)v188 - (_DWORD)v185;
                    }
                    else
                    {
                      while ( *(_QWORD *)v187 == *(_QWORD *)v188 )
                      {
                        v188 += 8;
                        v187 += 2;
                        if ( v188 >= v186 )
                          goto LABEL_283;
                      }
                      _BitScanForward64(&v193, *(_QWORD *)v187 ^ *(_QWORD *)v188);
                      v391 = 0;
                      v189 = ((unsigned int)v193 >> 3) + (_DWORD)v188 - (_DWORD)v185;
                    }
                  }
                  else
                  {
                    if ( *v151 == *(_QWORD *)v185 )
                    {
                      v188 = v185 + 8;
                      v187 = v151 + 1;
                      goto LABEL_280;
                    }
                    _BitScanForward64(&v192, *v151 ^ *(_QWORD *)v185);
                    v391 = 0;
                    v189 = (unsigned int)v192 >> 3;
                  }
                  v184 += v189;
                }
                v152 = v385;
                v164 = v392;
                v150 = v382;
                if ( v184 > v385 )
                {
                  v152 = v184;
                  v194 = v394;
                  v385 = v152;
                  v401 = (char *)(v394 + v168);
                  v146 = v389;
                  v403 = v392;
                  goto LABEL_305;
                }
                goto LABEL_303;
              }
              v152 = v385;
            }
            else
            {
              v169 = (_DWORD *)(v168 + v394);
              if ( *(_WORD *)&v164[v152 - 1] == *(_WORD *)((char *)v169 + v152 - v165 - 1) && *v169 == v382 )
              {
                v170 = v169 + 1;
                v171 = v392 + 4;
                v172 = iEnd - 7;
                v173 = (unsigned __int8 *)(v392 + 4);
                if ( v392 + 4 >= (const char *)iEnd - 7 )
                {
LABEL_237:
                  if ( v173 >= v172 )
                  {
LABEL_240:
                    if ( v173 < iEnd - 3 && *v170 == *(_DWORD *)v173 )
                    {
                      v173 += 4;
                      ++v170;
                    }
                    if ( v173 < iEnd - 1 && *(_WORD *)v170 == *(_WORD *)v173 )
                    {
                      v173 += 2;
                      v170 = (_DWORD *)((char *)v170 + 2);
                    }
                    if ( v173 < iEnd && *(_BYTE *)v170 == *v173 )
                      LODWORD(v173) = (_DWORD)v173 + 1;
                    v174 = (_DWORD)v173 - (_DWORD)v171;
                  }
                  else
                  {
                    while ( *(_QWORD *)v170 == *(_QWORD *)v173 )
                    {
                      v173 += 8;
                      v170 += 2;
                      if ( v173 >= v172 )
                        goto LABEL_240;
                    }
                    _BitScanForward64(&v176, *(_QWORD *)v170 ^ *(_QWORD *)v173);
                    v391 = 0;
                    v174 = ((unsigned int)v176 >> 3) + (_DWORD)v173 - (_DWORD)v171;
                  }
                }
                else
                {
                  if ( *(_QWORD *)v170 == *v171 )
                  {
                    v173 = (unsigned __int8 *)(v392 + 12);
                    v170 = v169 + 3;
                    goto LABEL_237;
                  }
                  _BitScanForward64(&v175, *(_QWORD *)v170 ^ *v171);
                  v391 = 0;
                  v174 = (unsigned int)v175 >> 3;
                }
                v164 = v392;
                v146 = v389;
                if ( (int)(v174 + 4) > v152 )
                {
                  v152 = v174 + 4;
                  v385 = v174 + 4;
                  v403 = v392;
                  v401 = (char *)(v168 + v394);
                }
                v150 = v382;
                goto LABEL_304;
              }
              v150 = v382;
              v164 = v392;
            }
LABEL_303:
            v146 = v389;
LABEL_304:
            v194 = v394;
LABEL_305:
            v195 = v400->chainTable[(unsigned __int16)v168];
            v168 -= v195;
            if ( v195 != 1 )
              goto LABEL_342;
            if ( v153 )
            {
              if ( v153 != 2 )
                goto LABEL_342;
              v197 = iEnd;
            }
            else
            {
              if ( (_BYTE)v150 != HIBYTE(v150) || (unsigned __int16)v150 != HIWORD(v150) )
              {
                v153 = 1;
                goto LABEL_342;
              }
              v196 = (unsigned __int64)(v164 + 4);
              v197 = iEnd;
              v198 = 0x100000001i64 * v150;
              v153 = 2;
              v199 = (unsigned __int8 *)v196;
              if ( v196 >= (unsigned __int64)(iEnd - 7) )
              {
LABEL_311:
                while ( v199 < iEnd )
                {
                  if ( *v199 != (_BYTE)v198 )
                    break;
                  ++v199;
                  v198 >>= 8;
                }
                v155 = (unsigned int)((_DWORD)v199 - v196 + 4);
              }
              else
              {
                while ( v198 == *(_QWORD *)v199 )
                {
                  v199 += 8;
                  if ( v199 >= iEnd - 7 )
                    goto LABEL_311;
                }
                _BitScanForward64(&v198, v198 ^ *(_QWORD *)v199);
                v391 = 0;
                v155 = ((unsigned int)v198 >> 3) + (_DWORD)v199 - (_DWORD)v196 + 4;
              }
            }
            if ( v168 >= v399 )
            {
              v200 = (_DWORD *)(v168 + v194);
              if ( *v200 == v150 )
              {
                v201 = (_DWORD)v200 + 4;
                v202 = 0x100000001i64 * v150;
                v203 = (unsigned __int8 *)(v200 + 1);
                if ( v200 + 1 >= (_DWORD *)(v197 - 7) )
                {
LABEL_324:
                  while ( v203 < v197 )
                  {
                    if ( *v203 != (_BYTE)v202 )
                      break;
                    ++v203;
                    v202 >>= 8;
                  }
                  v204 = (_DWORD)v203 - v201;
                }
                else
                {
                  while ( *(_QWORD *)v203 == v202 )
                  {
                    v203 += 8;
                    if ( v203 >= v197 - 7 )
                      goto LABEL_324;
                  }
                  _BitScanForward64(&v202, *(_QWORD *)v203 ^ v202);
                  v391 = 0;
                  v204 = (_DWORD)v203 + ((unsigned int)v202 >> 3) - v201;
                }
                v205 = (const char *)v151;
                v206 = v204 + 4i64;
                v391 = v150;
                v207 = (char *)v200;
                if ( (char *)v151 + 0xFFFF < v392 )
                  v205 = v392 - 0xFFFF;
                if ( v200 >= (_DWORD *)v205 + 1 )
                {
                  do
                  {
                    v208 = (unsigned __int64)(v207 - 4);
                    if ( *((_DWORD *)v207 - 1) != v150 )
                      break;
                    v207 -= 4;
                  }
                  while ( v208 >= (unsigned __int64)(v205 + 4) );
                }
                if ( v207 > v205 )
                {
                  v209 = (char *)&v391 + 3 - v207;
                  do
                  {
                    v210 = v207 - 1;
                    if ( *(v207 - 1) != v207[v209] )
                      break;
                    --v207;
                  }
                  while ( v210 > v205 );
                }
                v211 = (unsigned int)((_DWORD)v200 - (_DWORD)v207);
                if ( v211 + v206 < v155 || v206 > v155 )
                  v168 -= v211;
                else
                  v168 += v206 - v155;
              }
            }
LABEL_342:
            v154 = dictCtx;
            v156 = pattern32;
            v164 = v392;
            if ( v168 < v393 )
              goto LABEL_343;
            v165 = v402;
          }
        }
        v212 = v385;
        if ( dict == usingDictCtx )
        {
          if ( v156 )
          {
            if ( v146 - v393 < 0xFFFF )
            {
              v213 = (__int64)v413;
              v214 = v413->end - v413->base;
              v215 = *(unsigned int *)((char *)v413->hashTable + v167);
              v216 = v393 + v215 - v214;
              if ( v389 - v216 <= 0xFFFF )
              {
                while ( 1 )
                {
                  v217 = v156--;
                  pattern32 = v156;
                  if ( !v217 )
                    goto LABEL_374;
                  v218 = (_DWORD *)(v215 + *(_QWORD *)(v213 + 262152));
                  if ( *v218 == v382 )
                    break;
LABEL_373:
                  v213 = (__int64)v413;
                  v227 = v413->chainTable[(unsigned __int16)v215];
                  v216 -= v227;
                  v215 -= v227;
                  if ( v389 - v216 > 0xFFFF )
                    goto LABEL_374;
                }
                v219 = iEnd;
                v220 = v218 + 1;
                if ( &v164[v214 - v215] <= (const char *)iEnd )
                  v219 = (unsigned __int8 *)&v164[v214 - v215];
                v221 = (unsigned __int8 *)(v164 + 4);
                v222 = v221;
                v223 = v219 - 7;
                if ( v221 < v219 - 7 )
                {
                  if ( *v220 != *(_QWORD *)v221 )
                  {
                    _BitScanForward64(&v225, *v220 ^ *(_QWORD *)v221);
                    v391 = 0;
                    v224 = (unsigned int)v225 >> 3;
LABEL_370:
                    v156 = pattern32;
                    if ( (int)(v224 + 4) <= v212 )
                    {
                      v166 = (int)v403;
                      v164 = v392;
                    }
                    else
                    {
                      v212 = v224 + 4;
                      v164 = v392;
                      v166 = (int)v392;
                      v401 = (char *)(v394 + v216);
                      v403 = v392;
                    }
                    goto LABEL_373;
                  }
                  v222 = v221 + 8;
                  v220 = v218 + 3;
                }
                if ( v222 >= v223 )
                {
LABEL_358:
                  if ( v222 < v219 - 3 && *(_DWORD *)v220 == *(_DWORD *)v222 )
                  {
                    v222 += 4;
                    v220 = (_QWORD *)((char *)v220 + 4);
                  }
                  if ( v222 < v219 - 1 && *(_WORD *)v220 == *(_WORD *)v222 )
                  {
                    v222 += 2;
                    v220 = (_QWORD *)((char *)v220 + 2);
                  }
                  if ( v222 < v219 && *(_BYTE *)v220 == *v222 )
                    LODWORD(v222) = (_DWORD)v222 + 1;
                  v224 = (_DWORD)v222 - (_DWORD)v221;
                }
                else
                {
                  while ( *v220 == *(_QWORD *)v222 )
                  {
                    v222 += 8;
                    ++v220;
                    if ( v222 >= v223 )
                      goto LABEL_358;
                  }
                  _BitScanForward64(&v226, *v220 ^ *(_QWORD *)v222);
                  v391 = 0;
                  v224 = ((unsigned int)v226 >> 3) - (_DWORD)v221 + (_DWORD)v222;
                }
                goto LABEL_370;
              }
            }
          }
        }
LABEL_374:
        if ( v212 > 3 )
        {
          if ( favorDecSpeed && v212 <= 36 && v212 > 18 )
            v212 = 18;
          LODWORD(v412) = v166 - (_DWORD)v401;
          HIDWORD(v412) = v212;
        }
        v228 = v412;
        goto LABEL_551;
      }
      dictCtx = v125;
      v229 = v134 - v396;
      v230 = (_QWORD *)(v145 + v147);
      v231 = *(_DWORD *)v141;
      LODWORD(v403) = v229;
      v232 = v229;
      v383 = v229;
      v411 = 0i64;
      if ( v148 + 0x10000 <= v146 )
        v148 = v146 - 0xFFFF;
      pattern32 = v231;
      v393 = v148;
      v233 = (__int64)v400->dictBase;
      v234 = 0;
      v235 = nbSearches;
      v236 = 0i64;
      v237 = v400->nextToUpdate;
      v238 = v149 - v145;
      v406 = v233;
      if ( (unsigned int)v237 >= v238 )
      {
        v240 = v400;
      }
      else
      {
        v239 = (_DWORD *)(v145 + v237);
        v240 = v400;
        do
        {
          v241 = (unsigned int)(-1640531535 * *v239);
          v239 = (_DWORD *)((char *)v239 + 1);
          v242 = v241 >> 17;
          v243 = (unsigned int)(v237 - v240->hashTable[v242]);
          if ( v243 > 0xFFFF )
            LOWORD(v243) = -1;
          v240->chainTable[(unsigned __int16)v237] = v243;
          v240->hashTable[v242] = v237;
          LODWORD(v237) = v237 + 1;
        }
        while ( (unsigned int)v237 < v238 );
        v233 = v406;
        v231 = pattern32;
        v235 = nbSearches;
      }
      v240->nextToUpdate = v238;
      v244 = v392;
      v245 = 0i64;
      v246 = (int)v392;
      v402 = 0i64;
      v401 = (char *)v392;
      v247 = v240->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v392) >> 17];
      v248 = v393;
      if ( v247 >= v393 )
      {
        v401 = (char *)v392;
        while ( 1 )
        {
          if ( !v235 )
          {
LABEL_505:
            v246 = (int)v401;
            break;
          }
          v386 = v235 - 1;
          if ( favorDecSpeed && v146 - v247 < 8 )
            goto LABEL_481;
          if ( v247 >= v399 )
          {
            v249 = (_DWORD *)(v247 + v394);
            v250 = v244 - 1;
            if ( *(_WORD *)&v250[v383] == *(_WORD *)((char *)v249 + v383 - v245 - 1) && *v249 == v231 )
            {
              v251 = v249 + 1;
              v252 = v392 + 4;
              v253 = (unsigned __int8 *)(v392 + 4);
              v254 = iEnd - 7;
              if ( v392 + 4 >= (const char *)iEnd - 7 )
              {
LABEL_401:
                if ( v253 >= v254 )
                {
LABEL_404:
                  if ( v253 < iEnd - 3 && *v251 == *(_DWORD *)v253 )
                  {
                    v253 += 4;
                    ++v251;
                  }
                  if ( v253 < iEnd - 1 && *(_WORD *)v251 == *(_WORD *)v253 )
                  {
                    v253 += 2;
                    v251 = (_DWORD *)((char *)v251 + 2);
                  }
                  if ( v253 < iEnd && *(_BYTE *)v251 == *v253 )
                    LODWORD(v253) = (_DWORD)v253 + 1;
                  v255 = (_DWORD)v253 - (_DWORD)v252;
                }
                else
                {
                  while ( *(_QWORD *)v251 == *(_QWORD *)v253 )
                  {
                    v253 += 8;
                    v251 += 2;
                    if ( v253 >= v254 )
                      goto LABEL_404;
                  }
                  _BitScanForward64(&v260, *(_QWORD *)v251 ^ *(_QWORD *)v253);
                  v391 = 0;
                  v255 = ((unsigned int)v260 >> 3) - (_DWORD)v252 + (_DWORD)v253;
                }
              }
              else
              {
                if ( *(_QWORD *)v251 == *v252 )
                {
                  v253 = (unsigned __int8 *)(v392 + 12);
                  v251 = v249 + 3;
                  goto LABEL_401;
                }
                _BitScanForward64(&v259, *(_QWORD *)v251 ^ *v252);
                v391 = 0;
                v255 = (unsigned int)v259 >> 3;
              }
              v256 = v255 + 4;
              v257 = 0;
              if ( v402 )
              {
                v258 = (char *)v230 - (char *)v249 >= 0 ? (_DWORD)v230 - (_DWORD)v249 : 0;
                if ( v258 < 0 )
                {
                  do
                  {
                    if ( *v250 != v250[(char *)v249 - v392] )
                      break;
                    --v250;
                    --v257;
                  }
                  while ( (__int64)&v250[1i64 - (_QWORD)v392] > v258 );
                }
              }
              v244 = v392;
              v261 = v256 - v257;
              v146 = v389;
              if ( v261 > v383 )
              {
                v383 = v261;
                v401 = (char *)&v392[v257];
                dictCtx = (__int64)v249 + v257;
              }
            }
            else
            {
              v244 = v392;
LABEL_480:
              v146 = v389;
            }
LABEL_481:
            v284 = v394;
            goto LABEL_482;
          }
          v262 = (_DWORD *)(v233 + v247);
          if ( *v262 != pattern32 )
          {
            v231 = pattern32;
            goto LABEL_480;
          }
          v263 = iEnd;
          v264 = v233 + v400->lowLimit;
          v265 = v262 + 1;
          if ( &v244[v399 - v247] <= (const char *)iEnd )
            v263 = (unsigned __int8 *)&v244[v399 - v247];
          v266 = (unsigned __int8 *)(v244 + 4);
          v267 = v266;
          v268 = v263 - 7;
          if ( v266 < v263 - 7 )
          {
            if ( *v265 != *(_QWORD *)v266 )
            {
              _BitScanForward64(&v278, *v265 ^ *(_QWORD *)v266);
              v391 = 0;
              v269 = (unsigned int)v278 >> 3;
              goto LABEL_444;
            }
            v267 = v266 + 8;
            v265 = v262 + 3;
          }
          if ( v267 >= v268 )
          {
LABEL_434:
            if ( v267 < v263 - 3 && *(_DWORD *)v265 == *(_DWORD *)v267 )
            {
              v267 += 4;
              v265 = (_QWORD *)((char *)v265 + 4);
            }
            if ( v267 < v263 - 1 && *(_WORD *)v265 == *(_WORD *)v267 )
            {
              v267 += 2;
              v265 = (_QWORD *)((char *)v265 + 2);
            }
            if ( v267 < v263 && *(_BYTE *)v265 == *v267 )
              LODWORD(v267) = (_DWORD)v267 + 1;
            v269 = (_DWORD)v267 - (_DWORD)v266;
          }
          else
          {
            while ( *v265 == *(_QWORD *)v267 )
            {
              v267 += 8;
              ++v265;
              if ( v267 >= v268 )
                goto LABEL_434;
            }
            _BitScanForward64(&v279, *v265 ^ *(_QWORD *)v267);
            v391 = 0;
            v269 = ((unsigned int)v279 >> 3) - (_DWORD)v266 + (_DWORD)v267;
          }
LABEL_444:
          v270 = v269 + 4;
          v271 = (unsigned __int8 *)&v392[v269 + 4];
          if ( v271 == v263 && v263 < iEnd )
          {
            v272 = iEnd - 7;
            v273 = v230;
            v274 = (unsigned __int8 *)&v392[v270];
            if ( v271 >= iEnd - 7 )
            {
LABEL_449:
              if ( v274 >= v272 )
              {
LABEL_452:
                if ( v274 < iEnd - 3 && *v273 == *(_DWORD *)v274 )
                {
                  v274 += 4;
                  ++v273;
                }
                if ( v274 < iEnd - 1 && *(_WORD *)v273 == *(_WORD *)v274 )
                {
                  v274 += 2;
                  v273 = (_DWORD *)((char *)v273 + 2);
                }
                if ( v274 < iEnd && *(_BYTE *)v273 == *v274 )
                  LODWORD(v274) = (_DWORD)v274 + 1;
                v275 = (_DWORD)v274 - (_DWORD)v271;
              }
              else
              {
                while ( *(_QWORD *)v273 == *(_QWORD *)v274 )
                {
                  v274 += 8;
                  v273 += 2;
                  if ( v274 >= v272 )
                    goto LABEL_452;
                }
                _BitScanForward64(&v281, *(_QWORD *)v273 ^ *(_QWORD *)v274);
                v391 = 0;
                v275 = ((unsigned int)v281 >> 3) + (_DWORD)v274 - (_DWORD)v271;
              }
            }
            else
            {
              if ( *v230 == *(_QWORD *)v271 )
              {
                v274 = v271 + 8;
                v273 = v230 + 1;
                goto LABEL_449;
              }
              _BitScanForward64(&v280, *v230 ^ *(_QWORD *)v271);
              v391 = 0;
              v275 = (unsigned int)v280 >> 3;
            }
            v270 += v275;
          }
          v276 = 0;
          if ( v402 )
          {
            v277 = v264 - (__int64)v262 >= 0 ? v264 - (_DWORD)v262 : 0;
            if ( v277 < 0 )
            {
              v282 = (char *)v262 - v392;
              v283 = v392 - 1;
              do
              {
                if ( *v283 != v283[v282] )
                  break;
                --v283;
                --v276;
              }
              while ( (__int64)&v283[1i64 - (_QWORD)v392] > v277 );
            }
          }
          v284 = v394;
          v285 = v270 - v276;
          v244 = v392;
          v231 = pattern32;
          if ( v285 > v383 )
          {
            v383 = v285;
            dictCtx = v247 + v394 + v276;
            v401 = (char *)&v392[v276];
          }
          v146 = v389;
LABEL_482:
          v286 = v400->chainTable[(unsigned __int16)v247];
          v247 -= v286;
          if ( v286 != 1 )
            goto LABEL_504;
          if ( v234 )
          {
            if ( v234 != 2 )
              goto LABEL_504;
            v287 = iEnd;
          }
          else
          {
            if ( (_BYTE)v231 != HIBYTE(v231) || (unsigned __int16)v231 != HIWORD(v231) )
            {
              v234 = 1;
              goto LABEL_504;
            }
            v234 = 2;
            v236 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)v244 + 4, iEnd, v231) + 4;
          }
          if ( v247 >= v399 )
          {
            v288 = v247 + v284;
            if ( *(_DWORD *)v288 == v231 )
            {
              v289 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v288 + 4), v287, v231);
              v291 = (const char *)v230;
              v292 = v289 + 4i64;
              if ( (char *)v230 + 0xFFFF < v392 )
                v291 = v392 - 0xFFFF;
              v391 = v231;
              v293 = v290;
              if ( v290 >= (unsigned __int64)(v291 + 4) )
              {
                do
                {
                  v294 = v293 - 4;
                  if ( *(_DWORD *)(v293 - 4) != v231 )
                    break;
                  v293 -= 4i64;
                }
                while ( v294 >= (unsigned __int64)(v291 + 4) );
              }
              if ( v293 > (unsigned __int64)v291 )
              {
                v295 = (char *)&v391 - v293 + 3;
                do
                {
                  v296 = v293 - 1;
                  if ( *(_BYTE *)(v293 - 1) != v295[v293] )
                    break;
                  --v293;
                }
                while ( v296 > (unsigned __int64)v291 );
              }
              v297 = (unsigned int)(v290 - v293);
              if ( v297 + v292 < v236 || v292 > v236 )
                v247 -= v297;
              else
                v247 += v292 - v236;
            }
          }
LABEL_504:
          v248 = v393;
          v233 = v406;
          v232 = v383;
          v235 = v386;
          v244 = v392;
          if ( v247 < v393 )
            goto LABEL_505;
          v245 = v402;
        }
      }
      if ( dict == usingDictCtx )
      {
        if ( v235 )
        {
          if ( v146 - v248 < 0xFFFF )
          {
            v298 = v413->end - v413->base;
            v299 = v413->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v244) >> 17];
            v300 = v393 + v299 - v298;
            if ( v389 - v300 <= 0xFFFF )
              break;
          }
        }
      }
LABEL_545:
      if ( v232 > (int)v403 )
      {
        if ( favorDecSpeed && v232 <= 36 && v232 > 18 )
          v232 = 18;
        LODWORD(v411) = v246 - dictCtx;
        HIDWORD(v411) = v232;
      }
      v228 = v411;
LABEL_551:
      v136 = v396;
      v321 = v228;
      v406 = v228;
      v322 = HIDWORD(v228);
      if ( HIDWORD(v228) )
      {
        if ( SHIDWORD(v228) <= v414 )
        {
          LODWORD(v322) = HIDWORD(v228);
          if ( HIDWORD(v228) + v396 < 4096 )
          {
            v323 = v420;
            v324 = *(int *)((char *)&v425 + v420);
            v325 = v324;
            v326 = v324 - 15;
            if ( v324 >= 15 )
              v325 = v326 / 0xFF + v324 + 1;
            v327 = v324 + 1;
            if ( v324 + 1 >= 15 )
              v327 = (v324 - 14) / 0xFFu + v324 + 2;
            v328 = v408;
            v329 = *(unsigned int *)((char *)&v422 + v420) + v327 - v325;
            v330 = 2 * (v408 + 1);
            if ( v329 < (int)*(&v422 + 4 * v408 + 4) )
            {
              *(&v424 + 4 * v408 + 4) = 1;
              *(&v423 + 2 * v330) = 0;
              *(&v425 + 2 * v330) = v324 + 1;
              *(&v422 + 2 * v330) = v329;
            }
            v331 = v324;
            if ( v324 >= 15 )
              v331 = v326 / 0xFF + v324 + 1;
            v332 = v324 + 2;
            if ( v324 + 2 >= 15 )
              v332 = (v324 - 13) / 0xFFu + v324 + 3;
            v333 = *(unsigned int *)((char *)&v422 + v323);
            v334 = v333 + v332 - v331;
            if ( v334 < (int)*(&v422 + 4 * v328 + 8) )
            {
              *(&v424 + 4 * v328 + 8) = 1;
              *(&v423 + 4 * v328 + 8) = 0;
              *(&v425 + 4 * v328 + 8) = v324 + 2;
              *(&v422 + 4 * v328 + 8) = v334;
              v333 = *(unsigned int *)((char *)&v422 + v323);
            }
            v335 = v324;
            if ( v324 >= 15 )
              v335 = v326 / 0xFF + v324 + 1;
            v336 = v324 + 3;
            if ( v324 + 3 >= 15 )
              v336 = (v324 - 12) / 0xFFu + v324 + 4;
            v337 = v333 + v336 - v335;
            v125 = 0i64;
            if ( v337 < (int)*(&v422 + 4 * v328 + 12) )
            {
              *(&v424 + 4 * v328 + 12) = 1;
              *(&v423 + 4 * v328 + 12) = 0;
              *(&v425 + 4 * v328 + 12) = v324 + 3;
              *(&v422 + 4 * v328 + 12) = v337;
            }
            v338 = SHIDWORD(v406);
            v339 = 4i64;
            v134 = v397;
            if ( SHIDWORD(v406) >= 4i64 )
            {
              v340 = v136 + 4;
              v341 = -19 - v136;
              v342 = &v434[v323];
              v343 = -v136;
              do
              {
                if ( *(int *)((char *)&v424 + v323) == 1 )
                {
                  v344 = *(int *)((char *)&v425 + v323);
                  if ( v396 <= v344 )
                    v345 = 0;
                  else
                    v345 = *(&v422 + 4 * (v396 - v344));
                  v346 = *(int *)((char *)&v425 + v323);
                  if ( v344 >= 15 )
                    v346 = (v344 - 15) / 0xFFu + v344 + 1;
                  v347 = v346 + 3;
                  v348 = v343 + v340;
                  if ( v343 + v340 >= 19 )
                    v347 += (v341 + v340) / 0xFFu + 1;
                  v349 = v347 + v345;
                  v134 = v397;
                  v125 = 0i64;
                }
                else
                {
                  v348 = v343 + v340;
                  v344 = 0;
                  v350 = 3;
                  if ( v343 + v340 >= 19 )
                    v350 = (v341 + v340) / 0xFFu + 4;
                  v349 = *(unsigned int *)((char *)&v422 + v323) + v350;
                }
                if ( v340 > v134 + 3 || v349 <= *((_DWORD *)v342 - 1) - favorDecSpeed )
                {
                  if ( v339 == v338 )
                  {
                    if ( v134 < v340 )
                      v134 = v340;
                    v397 = v134;
                  }
                  *((_DWORD *)v342 + 1) = v348;
                  *(_DWORD *)v342 = v228;
                  *((_DWORD *)v342 + 2) = v344;
                  *((_DWORD *)v342 - 1) = v349;
                }
                ++v340;
                ++v339;
                v342 += 16;
              }
              while ( v339 <= v338 );
              v136 = v396;
            }
            v351 = 2 * (v134 + 1i64);
            *(&v424 + 2 * v351) = 1;
            *(&v423 + 2 * v351) = 0;
            *(&v425 + 2 * v351) = 1;
            v352 = *(&v422 + 4 * v134) + 1;
            *(&v428 + 2 * v351) = 1;
            *(&v422 + 2 * v351) = v352;
            *(&v427 + 2 * v351) = 0;
            *(&v429 + 2 * v351) = 2;
            v353 = *(&v422 + 4 * v134) + 2;
            v433[2 * v351 - 1] = 1;
            *(&v426 + 2 * v351) = v353;
            *(&v431 + 2 * v351) = 0;
            v433[2 * v351] = 3;
            *(&v430 + 2 * v351) = *(&v422 + 4 * v134) + 3;
            goto LABEL_597;
          }
        }
        v134 = v396 + 1;
        v397 = v396 + 1;
$encode:
        v354 = 2i64 * v136;
        v355 = *(&v424 + 4 * v136);
        v356 = *(&v423 + 4 * v136);
        *(&v424 + 2 * v354) = v322;
        v357 = v355;
        for ( *(&v423 + 2 * v354) = v321; v355 <= v136; v356 = v359 )
        {
          v136 -= v355;
          v358 = 2i64 * v136;
          v355 = *(&v424 + 4 * v136);
          v359 = *(&v423 + 4 * v136);
          *(&v424 + 2 * v358) = v357;
          v357 = v355;
          *(&v423 + 2 * v358) = v356;
        }
        v360 = 0;
        if ( v134 > 0 )
        {
          while ( 1 )
          {
            v361 = v395;
            v13 = v407;
            v362 = *(&v424 + 4 * v360);
            if ( (_DWORD)v362 == 1 )
            {
              v20 = v404;
              v16 = v395 + 1;
            }
            else
            {
              v108 = v404;
              v363 = v404;
              v364 = v404;
              v365 = (_DWORD)v395 - *(&v423 + 4 * v360);
              v366 = v404 + 1;
              v367 = v395 - v407;
              if ( limit && (unsigned __int64)v366 + v367 + (v367 >> 8) + 8 > v409 )
                goto $_dest_overflow;
              if ( v367 < 0xF )
              {
                *v404 = 16 * v367;
              }
              else
              {
                v368 = v367 - 15;
                *v404 = -16;
                if ( v367 - 15 >= 0xFF )
                {
                  v369 = v366;
                  v366 = (_QWORD *)((char *)v366 + v368 / 0xFF);
                  memset(v369, 255, v368 / 0xFF);
                  v368 %= 0xFFui64;
                }
                *(_BYTE *)v366 = v368;
                v366 = (_QWORD *)((char *)v366 + 1);
                v361 = v395;
              }
              v370 = (_WORD *)((char *)v366 + v367);
              v371 = v13 - (const char *)v366;
              do
              {
                *v366 = *(_QWORD *)((char *)v366 + v371);
                ++v366;
              }
              while ( v366 < (_QWORD *)v370 );
              v20 = (char *)(v370 + 1);
              v404 = (char *)(v370 + 1);
              *v370 = (_WORD)v361 - v365;
              v372 = (int)v362 - 4;
              if ( limit )
              {
                if ( (unsigned __int64)&v20[((unsigned __int64)((int)v362 - 4) >> 8) + 6] > v409 )
                  goto $_dest_overflow;
              }
              v373 = *v364;
              if ( v372 < 0xF )
              {
                *v363 = v373 + v362 - 4;
              }
              else
              {
                v374 = v372 - 15;
                *v363 = v373 + 15;
                if ( v374 >= 0x1FE )
                {
                  v375 = v374 / 0x1FE;
                  v374 %= 0x1FEui64;
                  do
                  {
                    *(_WORD *)v20 = -1;
                    v20 += 2;
                    --v375;
                  }
                  while ( v375 );
                }
                if ( v374 >= 0xFF )
                {
                  LOBYTE(v374) = v374 + 1;
                  *v20++ = -1;
                }
                *v20++ = v374;
                v404 = v20;
              }
              v134 = v397;
              v16 = &v361[v362];
              v13 = v16;
              v407 = v16;
            }
            v360 += v362;
            v395 = v16;
            if ( v360 >= v134 )
              goto LABEL_629;
          }
        }
        v16 = v395;
        goto LABEL_628;
      }
      v134 = v397;
      v125 = 0i64;
LABEL_597:
      ++v136;
      v139 = v408 + 1;
      v396 = v136;
      ++v408;
      if ( v136 >= v134 )
        goto LABEL_598;
    }
    while ( 1 )
    {
      v301 = v235--;
      v387 = v235;
      if ( !v301 )
        goto LABEL_545;
      v302 = v413->base;
      v303 = &v302[v299];
      if ( *(_DWORD *)v303 == pattern32 )
        break;
      v232 = v383;
LABEL_544:
      v320 = v413->chainTable[(unsigned __int16)v299];
      v300 -= v320;
      v299 -= v320;
      if ( v389 - v300 > 0xFFFF )
        goto LABEL_545;
    }
    v304 = iEnd;
    v305 = v303 + 4;
    if ( &v244[v298 - v299] <= (const char *)iEnd )
      v304 = (unsigned __int8 *)&v244[v298 - v299];
    v306 = (unsigned __int8 *)(v244 + 4);
    v307 = v306;
    v308 = v304 - 7;
    if ( v306 < v304 - 7 )
    {
      if ( *v305 != *(_QWORD *)v306 )
      {
        _BitScanForward64(&v314, *v305 ^ *(_QWORD *)v306);
        v391 = 0;
        v309 = (unsigned int)v314 >> 3;
LABEL_530:
        v310 = 0;
        v311 = v309 + 4;
        if ( v402 )
        {
          v312 = &v302[v413->dictLimit];
          v313 = v312 - v303 >= 0 ? (_DWORD)v312 - (_DWORD)v303 : 0;
          v316 = v313;
          if ( v313 < 0 )
          {
            v317 = v303 - (const unsigned __int8 *)v392;
            v318 = v392 - 1;
            do
            {
              if ( *v318 != v318[v317] )
                break;
              --v318;
              --v310;
            }
            while ( (__int64)&v318[1i64 - (_QWORD)v392] > v316 );
          }
        }
        v232 = v383;
        v319 = v311 - v310;
        v235 = v387;
        if ( v319 <= v383 )
        {
          v246 = (int)v401;
          v244 = v392;
        }
        else
        {
          v232 = v319;
          v383 = v319;
          v244 = v392;
          v246 = v310 + (_DWORD)v392;
          dictCtx = v394 + v310 + (unsigned __int64)v300;
          v401 = (char *)&v392[v310];
        }
        goto LABEL_544;
      }
      v307 = v306 + 8;
      v305 = v303 + 12;
    }
    if ( v307 >= v308 )
    {
LABEL_520:
      if ( v307 < v304 - 3 && *(_DWORD *)v305 == *(_DWORD *)v307 )
      {
        v307 += 4;
        v305 = (_QWORD *)((char *)v305 + 4);
      }
      if ( v307 < v304 - 1 && *(_WORD *)v305 == *(_WORD *)v307 )
      {
        v307 += 2;
        v305 = (_QWORD *)((char *)v305 + 2);
      }
      if ( v307 < v304 && *(_BYTE *)v305 == *v307 )
        LODWORD(v307) = (_DWORD)v307 + 1;
      v309 = (_DWORD)v307 - (_DWORD)v306;
    }
    else
    {
      while ( *v305 == *(_QWORD *)v307 )
      {
        v307 += 8;
        ++v305;
        if ( v307 >= v308 )
          goto LABEL_520;
      }
      _BitScanForward64(&v315, *v305 ^ *(_QWORD *)v307);
      v391 = 0;
      v309 = ((unsigned int)v315 >> 3) + (_DWORD)v307 - (_DWORD)v306;
    }
    goto LABEL_530;
  }
$_last_literals_0:
  v376 = v17 - v13;
  v377 = v409 + 5;
  if ( v18 != 2 )
    v377 = v409;
  if ( v18 && (unsigned __int64)&v20[(v376 + 240) / 0xFF + 1 + v376] > v377 )
  {
    if ( v18 == limitedOutput )
      return 0i64;
    v376 = v377 - (_QWORD)v20 - 1 - (v377 - (unsigned __int64)v20 - 1 + 240) / 0xFF;
  }
  v379 = v20 + 1;
  if ( v376 < 0xF )
  {
    *v20 = 16 * v376;
  }
  else
  {
    v380 = v376 - 15;
    *v20 = -16;
    if ( v376 - 15 >= 0xFF )
    {
      v379 += v380 / 0xFF;
      memset(v20 + 1, 255, v380 / 0xFF);
      v380 %= 0xFFui64;
    }
    *v379++ = v380;
  }
  memcpy_0(v379, v13, v376);
  *v421 = v376 + (_DWORD)v13 - v14;
  return (unsigned int)(v376 + (_DWORD)v379 - v19);
}

/*
==============
indyfs_LZ4HC_countPattern
==============
*/
__int64 indyfs_LZ4HC_countPattern(const unsigned __int8 *ip, const unsigned __int8 *const iEnd, const unsigned int pattern32)
{
  int v3; 
  unsigned __int64 v4; 

  v3 = (int)ip;
  v4 = 0x100000001i64 * pattern32;
  if ( ip >= iEnd - 7 )
  {
LABEL_4:
    while ( ip < iEnd )
    {
      if ( *ip != (_BYTE)v4 )
        break;
      ++ip;
      v4 >>= 8;
    }
    return (unsigned int)((_DWORD)ip - v3);
  }
  else
  {
    while ( v4 == *(_QWORD *)ip )
    {
      ip += 8;
      if ( ip >= iEnd - 7 )
        goto LABEL_4;
    }
    _BitScanForward64(&v4, v4 ^ *(_QWORD *)ip);
    return (_DWORD)ip - v3 + ((unsigned int)v4 >> 3);
  }
}

/*
==============
indyfs_LZ4HC_init
==============
*/
void indyfs_LZ4HC_init(indyfs_LZ4HC_CCtx_internal *hc4, const unsigned __int8 *start)
{
  unsigned __int64 v3; 
  unsigned __int64 v5; 

  v3 = hc4->end - hc4->base;
  if ( v3 > 0x40000000 )
  {
    memset_0(hc4, 0, 0x20000ui64);
    memset_0(hc4->chainTable, 255, sizeof(hc4->chainTable));
    v3 = 0i64;
  }
  v5 = v3 + 0x10000;
  hc4->end = start;
  hc4->nextToUpdate = v5;
  hc4->dictLimit = v5;
  hc4->base = &start[-v5];
  hc4->dictBase = &start[-v5];
  hc4->lowLimit = v5;
}

/*
==============
indyfs_LZ4HC_setExternalDict
==============
*/
void indyfs_LZ4HC_setExternalDict(indyfs_LZ4HC_CCtx_internal *ctxPtr, const unsigned __int8 *newBlock)
{
  __int64 dictLimit; 
  const unsigned __int8 *base; 
  const unsigned __int8 *v6; 
  const unsigned __int8 *end; 
  __int64 nextToUpdate; 
  unsigned int v9; 
  const unsigned __int8 *v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned int v14; 

  dictLimit = ctxPtr->dictLimit;
  base = ctxPtr->base;
  v6 = base;
  end = ctxPtr->end;
  if ( end >= &base[dictLimit + 4] )
  {
    nextToUpdate = ctxPtr->nextToUpdate;
    v9 = (_DWORD)end - (_DWORD)base - 3;
    if ( (unsigned int)nextToUpdate < v9 )
    {
      v10 = &base[nextToUpdate];
      do
      {
        v11 = (unsigned int)(-1640531535 * *(_DWORD *)v10++);
        v12 = v11 >> 17;
        v13 = (unsigned int)(nextToUpdate - ctxPtr->hashTable[v12]);
        if ( v13 > 0xFFFF )
          LOWORD(v13) = -1;
        ctxPtr->chainTable[(unsigned __int16)nextToUpdate] = v13;
        ctxPtr->hashTable[v12] = nextToUpdate;
        LODWORD(nextToUpdate) = nextToUpdate + 1;
      }
      while ( (unsigned int)nextToUpdate < v9 );
      LODWORD(dictLimit) = ctxPtr->dictLimit;
      LODWORD(end) = ctxPtr->end;
      LODWORD(base) = ctxPtr->base;
      v6 = ctxPtr->base;
    }
  }
  v14 = (_DWORD)end - (_DWORD)base;
  ctxPtr->end = newBlock;
  ctxPtr->base = &newBlock[-v14];
  ctxPtr->lowLimit = dictLimit;
  ctxPtr->dictLimit = v14;
  ctxPtr->dictBase = v6;
  ctxPtr->nextToUpdate = v14;
}

/*
==============
indyfs_LZ4_attach_HC_dictionary
==============
*/
void indyfs_LZ4_attach_HC_dictionary(indyfs_LZ4_streamHC_u *working_stream, const indyfs_LZ4_streamHC_u *dictionary_stream)
{
  working_stream->table[32773] = (unsigned __int64)dictionary_stream;
}

/*
==============
indyfs_LZ4_compressHC
==============
*/
int indyfs_LZ4_compressHC(const char *src, char *dst, int srcSize)
{
  int v6; 

  v6 = j_indyfs_LZ4_compressBound(srcSize);
  return j_indyfs_LZ4_compress_HC(src, dst, srcSize, v6, 0);
}

/*
==============
indyfs_LZ4_compressHC2
==============
*/
int indyfs_LZ4_compressHC2(const char *src, char *dst, int srcSize, int cLevel)
{
  int v8; 

  v8 = j_indyfs_LZ4_compressBound(srcSize);
  return j_indyfs_LZ4_compress_HC(src, dst, srcSize, v8, cLevel);
}

/*
==============
indyfs_LZ4_compressHC2_continue
==============
*/
int indyfs_LZ4_compressHC2_continue(void *indyfs_LZ4HC_Data, const char *src, char *dst, int srcSize, int cLevel)
{
  int srcSizePtr; 

  srcSizePtr = srcSize;
  if ( *((_QWORD *)indyfs_LZ4HC_Data + 32773) )
    return indyfs_LZ4HC_compress_generic_dictCtx((indyfs_LZ4HC_CCtx_internal *const)indyfs_LZ4HC_Data, src, dst, &srcSizePtr, 0, cLevel, notLimited);
  else
    return indyfs_LZ4HC_compress_generic_noDictCtx((indyfs_LZ4HC_CCtx_internal *const)indyfs_LZ4HC_Data, src, dst, &srcSizePtr, 0, cLevel, notLimited);
}

/*
==============
indyfs_LZ4_compressHC2_limitedOutput
==============
*/

int __fastcall indyfs_LZ4_compressHC2_limitedOutput(const char *src, char *dst, int srcSize, int maxDstSize, int cLevel)
{
  return j_indyfs_LZ4_compress_HC(src, dst, srcSize, maxDstSize, cLevel);
}

/*
==============
indyfs_LZ4_compressHC2_limitedOutput_continue
==============
*/
int indyfs_LZ4_compressHC2_limitedOutput_continue(void *indyfs_LZ4HC_Data, const char *src, char *dst, int srcSize, int dstCapacity, int cLevel)
{
  int srcSizePtr; 

  srcSizePtr = srcSize;
  if ( *((_QWORD *)indyfs_LZ4HC_Data + 32773) )
    return indyfs_LZ4HC_compress_generic_dictCtx((indyfs_LZ4HC_CCtx_internal *const)indyfs_LZ4HC_Data, src, dst, &srcSizePtr, dstCapacity, cLevel, limitedOutput);
  else
    return indyfs_LZ4HC_compress_generic_noDictCtx((indyfs_LZ4HC_CCtx_internal *const)indyfs_LZ4HC_Data, src, dst, &srcSizePtr, dstCapacity, cLevel, limitedOutput);
}

/*
==============
indyfs_LZ4_compressHC2_limitedOutput_withStateHC
==============
*/

int __fastcall indyfs_LZ4_compressHC2_limitedOutput_withStateHC(void *state, const char *src, char *dst, int srcSize, int maxDstSize, int cLevel)
{
  return j_indyfs_LZ4_compress_HC_extStateHC(state, src, dst, srcSize, maxDstSize, cLevel);
}

/*
==============
indyfs_LZ4_compressHC2_withStateHC
==============
*/
int indyfs_LZ4_compressHC2_withStateHC(void *state, const char *src, char *dst, int srcSize, int cLevel)
{
  int dstCapacity; 

  dstCapacity = j_indyfs_LZ4_compressBound(srcSize);
  return j_indyfs_LZ4_compress_HC_extStateHC(state, src, dst, srcSize, dstCapacity, cLevel);
}

/*
==============
indyfs_LZ4_compressHC_continue
==============
*/
int indyfs_LZ4_compressHC_continue(indyfs_LZ4_streamHC_u *ctx, const char *src, char *dst, int srcSize)
{
  int v8; 
  int dstCapacity; 
  int v10; 
  int srcSizePtr; 

  v8 = j_indyfs_LZ4_compressBound(srcSize);
  srcSizePtr = srcSize;
  dstCapacity = v8;
  v10 = j_indyfs_LZ4_compressBound(srcSize);
  return indyfs_LZ4_compressHC_continue_generic(ctx, src, dst, &srcSizePtr, dstCapacity, (limitedOutput_directive)(dstCapacity < v10));
}

/*
==============
indyfs_LZ4_compressHC_continue_generic
==============
*/
int indyfs_LZ4_compressHC_continue_generic(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, const char *src, char *dst, int *srcSizePtr, int dstCapacity, limitedOutput_directive limit)
{
  unsigned __int64 v7; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  const unsigned __int8 *v13; 
  int compressionLevel; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  __int64 nextToUpdate; 
  unsigned int v18; 
  _DWORD *v19; 
  unsigned __int64 v20; 
  unsigned __int64 v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  __int64 dictLimit; 
  const char *v25; 
  unsigned __int64 v26; 
  unsigned int v27; 
  int cLevel; 

  v7 = indyfs_LZ4_streamHCPtr->table[32769];
  if ( !v7 )
  {
    indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)indyfs_LZ4_streamHCPtr, (const unsigned __int8 *)src);
    v7 = indyfs_LZ4_streamHCPtr->table[32769];
  }
  v11 = indyfs_LZ4_streamHCPtr->table[0x8000];
  if ( v11 - v7 > 0x80000000 )
  {
    v12 = v11 - indyfs_LZ4_streamHCPtr->internal_donotuse.dictLimit - v7;
    if ( v12 > 0x10000 )
      v12 = 0x10000i64;
    v13 = (const unsigned __int8 *)(v11 - v12);
    compressionLevel = indyfs_LZ4_streamHCPtr->internal_donotuse.compressionLevel;
    indyfs_LZ4_streamHCPtr->table[32769] = 0i64;
    indyfs_LZ4_streamHCPtr->table[0x8000] = -1i64;
    indyfs_LZ4_streamHCPtr->table[32773] = 0i64;
    indyfs_LZ4_streamHCPtr->internal_donotuse.favorDecSpeed = 0;
    if ( compressionLevel >= 1 )
    {
      if ( compressionLevel > 12 )
        LOWORD(compressionLevel) = 12;
    }
    else
    {
      LOWORD(compressionLevel) = 9;
    }
    indyfs_LZ4_streamHCPtr->internal_donotuse.compressionLevel = compressionLevel;
    indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)indyfs_LZ4_streamHCPtr, v13);
    v15 = (unsigned __int64)&v13[(int)v12];
    indyfs_LZ4_streamHCPtr->table[0x8000] = v15;
    if ( (int)v12 >= 4 )
    {
      v16 = indyfs_LZ4_streamHCPtr->table[32769];
      nextToUpdate = indyfs_LZ4_streamHCPtr->internal_donotuse.nextToUpdate;
      v18 = v15 - v16 - 3;
      if ( (unsigned int)nextToUpdate < v18 )
      {
        v19 = (_DWORD *)(v16 + nextToUpdate);
        do
        {
          v20 = (unsigned int)(-1640531535 * *v19);
          v19 = (_DWORD *)((char *)v19 + 1);
          v21 = v20 >> 17;
          v22 = (unsigned int)(nextToUpdate - indyfs_LZ4_streamHCPtr->internal_donotuse.hashTable[v21]);
          if ( v22 > 0xFFFF )
            LOWORD(v22) = -1;
          indyfs_LZ4_streamHCPtr->internal_donotuse.chainTable[(unsigned __int16)nextToUpdate] = v22;
          indyfs_LZ4_streamHCPtr->internal_donotuse.hashTable[v21] = nextToUpdate;
          LODWORD(nextToUpdate) = nextToUpdate + 1;
        }
        while ( (unsigned int)nextToUpdate < v18 );
      }
      indyfs_LZ4_streamHCPtr->internal_donotuse.nextToUpdate = v18;
    }
  }
  if ( src != (const char *)indyfs_LZ4_streamHCPtr->table[0x8000] )
    indyfs_LZ4HC_setExternalDict((indyfs_LZ4HC_CCtx_internal *)indyfs_LZ4_streamHCPtr, (const unsigned __int8 *)src);
  v23 = indyfs_LZ4_streamHCPtr->table[32770];
  dictLimit = indyfs_LZ4_streamHCPtr->internal_donotuse.dictLimit;
  v25 = &src[*srcSizePtr];
  v26 = v23 + dictLimit;
  if ( (unsigned __int64)v25 > v23 + indyfs_LZ4_streamHCPtr->internal_donotuse.lowLimit && (unsigned __int64)src < v26 )
  {
    if ( (unsigned __int64)v25 <= v26 )
      LODWORD(v26) = (_DWORD)src + *srcSizePtr;
    v27 = v26 - v23;
    if ( (unsigned int)dictLimit - v27 < 4 )
      v27 = indyfs_LZ4_streamHCPtr->internal_donotuse.dictLimit;
    indyfs_LZ4_streamHCPtr->internal_donotuse.lowLimit = v27;
  }
  cLevel = indyfs_LZ4_streamHCPtr->internal_donotuse.compressionLevel;
  if ( indyfs_LZ4_streamHCPtr->table[32773] )
    return indyfs_LZ4HC_compress_generic_dictCtx((indyfs_LZ4HC_CCtx_internal *const)indyfs_LZ4_streamHCPtr, src, dst, srcSizePtr, dstCapacity, cLevel, limit);
  else
    return indyfs_LZ4HC_compress_generic_noDictCtx((indyfs_LZ4HC_CCtx_internal *const)indyfs_LZ4_streamHCPtr, src, dst, srcSizePtr, dstCapacity, cLevel, limit);
}

/*
==============
indyfs_LZ4_compressHC_limitedOutput
==============
*/
int indyfs_LZ4_compressHC_limitedOutput(const char *src, char *dst, int srcSize, int maxDstSize)
{
  return j_indyfs_LZ4_compress_HC(src, dst, srcSize, maxDstSize, 0);
}

/*
==============
indyfs_LZ4_compressHC_limitedOutput_continue
==============
*/
int indyfs_LZ4_compressHC_limitedOutput_continue(indyfs_LZ4_streamHC_u *ctx, const char *src, char *dst, int srcSize, int maxDstSize)
{
  int v8; 
  int srcSizePtr; 

  srcSizePtr = srcSize;
  v8 = j_indyfs_LZ4_compressBound(srcSize);
  return indyfs_LZ4_compressHC_continue_generic(ctx, src, dst, &srcSizePtr, maxDstSize, (limitedOutput_directive)(maxDstSize < v8));
}

/*
==============
indyfs_LZ4_compressHC_limitedOutput_withStateHC
==============
*/
int indyfs_LZ4_compressHC_limitedOutput_withStateHC(void *state, const char *src, char *dst, int srcSize, int maxDstSize)
{
  return j_indyfs_LZ4_compress_HC_extStateHC(state, src, dst, srcSize, maxDstSize, 0);
}

/*
==============
indyfs_LZ4_compressHC_withStateHC
==============
*/
int indyfs_LZ4_compressHC_withStateHC(void *state, const char *src, char *dst, int srcSize)
{
  int dstCapacity; 

  dstCapacity = j_indyfs_LZ4_compressBound(srcSize);
  return j_indyfs_LZ4_compress_HC_extStateHC(state, src, dst, srcSize, dstCapacity, 0);
}

/*
==============
indyfs_LZ4_compress_HC
==============
*/
__int64 indyfs_LZ4_compress_HC(const char *src, char *dst, int srcSize, int dstCapacity, int compressionLevel)
{
  void *v9; 
  unsigned int v10; 

  v9 = malloc(0x40038ui64);
  v10 = j_indyfs_LZ4_compress_HC_extStateHC(v9, src, dst, srcSize, dstCapacity, compressionLevel);
  free(v9);
  return v10;
}

/*
==============
indyfs_LZ4_compress_HC_continue
==============
*/
int indyfs_LZ4_compress_HC_continue(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, const char *src, char *dst, int srcSize, int dstCapacity)
{
  int v8; 
  int srcSizePtr; 

  srcSizePtr = srcSize;
  v8 = j_indyfs_LZ4_compressBound(srcSize);
  return indyfs_LZ4_compressHC_continue_generic(indyfs_LZ4_streamHCPtr, src, dst, &srcSizePtr, dstCapacity, (limitedOutput_directive)(dstCapacity < v8));
}

/*
==============
indyfs_LZ4_compress_HC_continue_destSize
==============
*/
int indyfs_LZ4_compress_HC_continue_destSize(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, const char *src, char *dst, int *srcSizePtr, int targetDestSize)
{
  return indyfs_LZ4_compressHC_continue_generic(indyfs_LZ4_streamHCPtr, src, dst, srcSizePtr, targetDestSize, (limitedOutput_directive)2);
}

/*
==============
indyfs_LZ4_compress_HC_destSize
==============
*/
int indyfs_LZ4_compress_HC_destSize(void *indyfs_LZ4HC_Data, const char *source, char *dest, int *sourceSizePtr, int targetDestSize, int cLevel)
{
  int v8; 

  *((_QWORD *)indyfs_LZ4HC_Data + 32769) = 0i64;
  *((_QWORD *)indyfs_LZ4HC_Data + 32773) = 0i64;
  *((_WORD *)indyfs_LZ4HC_Data + 131091) = 0;
  *((_QWORD *)indyfs_LZ4HC_Data + 0x8000) = -1i64;
  v8 = 9;
  if ( cLevel >= 1 )
    v8 = cLevel;
  if ( v8 > 12 )
    LOWORD(v8) = 12;
  *((_WORD *)indyfs_LZ4HC_Data + 131090) = v8;
  indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)indyfs_LZ4HC_Data, (const unsigned __int8 *)source);
  if ( *((_QWORD *)indyfs_LZ4HC_Data + 32773) )
    return indyfs_LZ4HC_compress_generic_dictCtx((indyfs_LZ4HC_CCtx_internal *const)indyfs_LZ4HC_Data, source, dest, sourceSizePtr, targetDestSize, cLevel, (limitedOutput_directive)2);
  else
    return indyfs_LZ4HC_compress_generic_noDictCtx((indyfs_LZ4HC_CCtx_internal *const)indyfs_LZ4HC_Data, source, dest, sourceSizePtr, targetDestSize, cLevel, (limitedOutput_directive)2);
}

/*
==============
indyfs_LZ4_compress_HC_extStateHC
==============
*/
int indyfs_LZ4_compress_HC_extStateHC(void *state, const char *src, char *dst, int srcSize, int dstCapacity, int compressionLevel)
{
  int v11; 
  int cLevel; 
  BOOL limit; 
  int srcSizePtr; 

  if ( ((unsigned __int8)state & 7) != 0 )
    return 0;
  *((_QWORD *)state + 0x8000) = -1i64;
  v11 = 9;
  cLevel = compressionLevel;
  *((_WORD *)state + 131091) = 0;
  *((_QWORD *)state + 32769) = 0i64;
  *((_QWORD *)state + 32773) = 0i64;
  if ( cLevel >= 1 )
    v11 = cLevel;
  srcSizePtr = srcSize;
  if ( v11 > 12 )
    LOWORD(v11) = 12;
  *((_WORD *)state + 131090) = v11;
  indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)state, (const unsigned __int8 *)src);
  limit = dstCapacity < j_indyfs_LZ4_compressBound(srcSize);
  if ( *((_QWORD *)state + 32773) )
    return indyfs_LZ4HC_compress_generic_dictCtx((indyfs_LZ4HC_CCtx_internal *const)state, src, dst, &srcSizePtr, dstCapacity, cLevel, (limitedOutput_directive)limit);
  else
    return indyfs_LZ4HC_compress_generic_noDictCtx((indyfs_LZ4HC_CCtx_internal *const)state, src, dst, &srcSizePtr, dstCapacity, cLevel, (limitedOutput_directive)limit);
}

/*
==============
indyfs_LZ4_compress_HC_extStateHC_fastReset
==============
*/
int indyfs_LZ4_compress_HC_extStateHC_fastReset(void *state, const char *src, char *dst, int srcSize, int dstCapacity, int compressionLevel)
{
  int v11; 
  int cLevel; 
  BOOL limit; 
  int srcSizePtr; 

  srcSizePtr = srcSize;
  if ( ((unsigned __int8)state & 7) != 0 )
    return 0;
  *((_QWORD *)state + 0x8000) -= *((_QWORD *)state + 32769);
  v11 = 9;
  cLevel = compressionLevel;
  *((_QWORD *)state + 32769) = 0i64;
  *((_QWORD *)state + 32773) = 0i64;
  if ( cLevel >= 1 )
    v11 = cLevel;
  if ( v11 > 12 )
    LOWORD(v11) = 12;
  *((_WORD *)state + 131090) = v11;
  indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)state, (const unsigned __int8 *)src);
  limit = dstCapacity < j_indyfs_LZ4_compressBound(srcSize);
  if ( *((_QWORD *)state + 32773) )
    return indyfs_LZ4HC_compress_generic_dictCtx((indyfs_LZ4HC_CCtx_internal *const)state, src, dst, &srcSizePtr, dstCapacity, cLevel, (limitedOutput_directive)limit);
  else
    return indyfs_LZ4HC_compress_generic_noDictCtx((indyfs_LZ4HC_CCtx_internal *const)state, src, dst, &srcSizePtr, dstCapacity, cLevel, (limitedOutput_directive)limit);
}

/*
==============
indyfs_LZ4_createHC
==============
*/
_QWORD *indyfs_LZ4_createHC(const char *inputBuffer)
{
  _QWORD *result; 
  _QWORD *v3; 

  result = malloc(0x40038ui64);
  v3 = result;
  if ( result )
  {
    result[0x8000] = -1i64;
    *((_DWORD *)result + 65545) = 9;
    result[32769] = 0i64;
    result[32773] = 0i64;
    indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)result, (const unsigned __int8 *)inputBuffer);
    return v3;
  }
  return result;
}

/*
==============
indyfs_LZ4_createStreamHC
==============
*/
indyfs_LZ4_streamHC_u *indyfs_LZ4_createStreamHC()
{
  indyfs_LZ4_streamHC_u *result; 

  result = (indyfs_LZ4_streamHC_u *)malloc(0x40038ui64);
  if ( result )
  {
    result->table[0x8000] = -1i64;
    result->table[32769] = 0i64;
    result->table[32773] = 0i64;
    *(_DWORD *)&result->internal_donotuse.compressionLevel = 9;
  }
  return result;
}

/*
==============
indyfs_LZ4_favorDecompressionSpeed
==============
*/
void indyfs_LZ4_favorDecompressionSpeed(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, int favor)
{
  indyfs_LZ4_streamHCPtr->internal_donotuse.favorDecSpeed = favor != 0;
}

/*
==============
indyfs_LZ4_freeHC
==============
*/
__int64 indyfs_LZ4_freeHC(void *indyfs_LZ4HC_Data)
{
  if ( indyfs_LZ4HC_Data )
    free(indyfs_LZ4HC_Data);
  return 0i64;
}

/*
==============
indyfs_LZ4_freeStreamHC
==============
*/
__int64 indyfs_LZ4_freeStreamHC(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr)
{
  if ( indyfs_LZ4_streamHCPtr )
    free(indyfs_LZ4_streamHCPtr);
  return 0i64;
}

/*
==============
indyfs_LZ4_loadDictHC
==============
*/
__int64 indyfs_LZ4_loadDictHC(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, const char *dictionary, int dictSize)
{
  int v3; 
  const char *v4; 
  int compressionLevel; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  __int64 nextToUpdate; 
  unsigned int v10; 
  _DWORD *v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 

  v3 = dictSize;
  v4 = dictionary;
  if ( dictSize > 0x10000 )
  {
    v3 = 0x10000;
    v4 = &dictionary[dictSize - 0x10000];
  }
  compressionLevel = indyfs_LZ4_streamHCPtr->internal_donotuse.compressionLevel;
  *(_OWORD *)&indyfs_LZ4_streamHCPtr->internal_donotuse.end = 0xFFFFFFFFFFFFFFFFui64;
  indyfs_LZ4_streamHCPtr->table[32773] = 0i64;
  indyfs_LZ4_streamHCPtr->internal_donotuse.favorDecSpeed = 0;
  if ( compressionLevel >= 1 )
  {
    if ( compressionLevel > 12 )
      LOWORD(compressionLevel) = 12;
  }
  else
  {
    LOWORD(compressionLevel) = 9;
  }
  indyfs_LZ4_streamHCPtr->internal_donotuse.compressionLevel = compressionLevel;
  indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)indyfs_LZ4_streamHCPtr, (const unsigned __int8 *)v4);
  v7 = (unsigned __int64)&v4[v3];
  indyfs_LZ4_streamHCPtr->table[0x8000] = v7;
  if ( v3 >= 4 )
  {
    v8 = indyfs_LZ4_streamHCPtr->table[32769];
    nextToUpdate = indyfs_LZ4_streamHCPtr->internal_donotuse.nextToUpdate;
    v10 = v7 - v8 - 3;
    if ( (unsigned int)nextToUpdate < v10 )
    {
      v11 = (_DWORD *)(v8 + nextToUpdate);
      do
      {
        v12 = (unsigned int)(-1640531535 * *v11);
        v11 = (_DWORD *)((char *)v11 + 1);
        v13 = v12 >> 17;
        v14 = (unsigned int)(nextToUpdate - indyfs_LZ4_streamHCPtr->internal_donotuse.hashTable[v13]);
        if ( v14 > 0xFFFF )
          LOWORD(v14) = -1;
        indyfs_LZ4_streamHCPtr->internal_donotuse.chainTable[(unsigned __int16)nextToUpdate] = v14;
        indyfs_LZ4_streamHCPtr->internal_donotuse.hashTable[v13] = nextToUpdate;
        LODWORD(nextToUpdate) = nextToUpdate + 1;
      }
      while ( (unsigned int)nextToUpdate < v10 );
    }
    indyfs_LZ4_streamHCPtr->internal_donotuse.nextToUpdate = v10;
  }
  return (unsigned int)v3;
}

/*
==============
indyfs_LZ4_resetStreamHC
==============
*/
void indyfs_LZ4_resetStreamHC(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, int compressionLevel)
{
  int v2; 

  *(_OWORD *)&indyfs_LZ4_streamHCPtr->internal_donotuse.end = 0xFFFFFFFFFFFFFFFFui64;
  indyfs_LZ4_streamHCPtr->table[32773] = 0i64;
  indyfs_LZ4_streamHCPtr->internal_donotuse.favorDecSpeed = 0;
  v2 = 9;
  if ( compressionLevel >= 1 )
    v2 = compressionLevel;
  if ( v2 > 12 )
    LOWORD(v2) = 12;
  indyfs_LZ4_streamHCPtr->internal_donotuse.compressionLevel = v2;
}

/*
==============
indyfs_LZ4_resetStreamHC_fast
==============
*/
void indyfs_LZ4_resetStreamHC_fast(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, int compressionLevel)
{
  int v2; 

  *(_OWORD *)&indyfs_LZ4_streamHCPtr->internal_donotuse.end = indyfs_LZ4_streamHCPtr->table[0x8000] - indyfs_LZ4_streamHCPtr->table[32769];
  indyfs_LZ4_streamHCPtr->table[32773] = 0i64;
  v2 = 9;
  if ( compressionLevel >= 1 )
    v2 = compressionLevel;
  if ( v2 > 12 )
    LOWORD(v2) = 12;
  indyfs_LZ4_streamHCPtr->internal_donotuse.compressionLevel = v2;
}

/*
==============
indyfs_LZ4_resetStreamStateHC
==============
*/
__int64 indyfs_LZ4_resetStreamStateHC(void *state, char *inputBuffer)
{
  int v3; 

  if ( ((unsigned __int8)state & 7) != 0 )
    return 1i64;
  *((_QWORD *)state + 0x8000) = -1i64;
  *((_QWORD *)state + 32769) = 0i64;
  *((_QWORD *)state + 32773) = 0i64;
  *((_WORD *)state + 131091) = 0;
  v3 = *((__int16 *)state + 131090);
  if ( v3 >= 1 )
  {
    if ( v3 > 12 )
      LOWORD(v3) = 12;
    *((_WORD *)state + 131090) = v3;
    indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)state, (const unsigned __int8 *)inputBuffer);
    return 0i64;
  }
  else
  {
    *((_WORD *)state + 131090) = 9;
    indyfs_LZ4HC_init((indyfs_LZ4HC_CCtx_internal *)state, (const unsigned __int8 *)inputBuffer);
    return 0i64;
  }
}

/*
==============
indyfs_LZ4_saveDictHC
==============
*/
__int64 indyfs_LZ4_saveDictHC(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, char *safeBuffer, int dictSize)
{
  int v4; 
  signed int v5; 
  int v7; 
  __int64 v8; 

  v4 = 0x10000;
  v5 = LODWORD(indyfs_LZ4_streamHCPtr->internal_donotuse.end) - LODWORD(indyfs_LZ4_streamHCPtr->internal_donotuse.base) - indyfs_LZ4_streamHCPtr->internal_donotuse.dictLimit;
  if ( dictSize <= 0x10000 )
    v4 = dictSize;
  v7 = 0;
  if ( v4 >= 4 )
    v7 = v4;
  if ( v7 <= v5 )
    v5 = v7;
  memmove_0(safeBuffer, (const void *)(indyfs_LZ4_streamHCPtr->table[0x8000] - v5), v5);
  v8 = (unsigned int)(LODWORD(indyfs_LZ4_streamHCPtr->internal_donotuse.end) - LODWORD(indyfs_LZ4_streamHCPtr->internal_donotuse.base));
  indyfs_LZ4_streamHCPtr->table[0x8000] = (unsigned __int64)&safeBuffer[v5];
  indyfs_LZ4_streamHCPtr->table[32769] = (unsigned __int64)&safeBuffer[v5 - v8];
  indyfs_LZ4_streamHCPtr->internal_donotuse.dictLimit = v8 - v5;
  indyfs_LZ4_streamHCPtr->internal_donotuse.lowLimit = v8 - v5;
  if ( indyfs_LZ4_streamHCPtr->internal_donotuse.nextToUpdate < (unsigned int)(v8 - v5) )
    indyfs_LZ4_streamHCPtr->internal_donotuse.nextToUpdate = v8 - v5;
  return (unsigned int)v5;
}

/*
==============
indyfs_LZ4_setCompressionLevel
==============
*/
void indyfs_LZ4_setCompressionLevel(indyfs_LZ4_streamHC_u *indyfs_LZ4_streamHCPtr, int compressionLevel)
{
  int v2; 

  v2 = 9;
  if ( compressionLevel >= 1 )
    v2 = compressionLevel;
  if ( v2 > 12 )
    LOWORD(v2) = 12;
  indyfs_LZ4_streamHCPtr->internal_donotuse.compressionLevel = v2;
}

/*
==============
indyfs_LZ4_sizeofStateHC
==============
*/
__int64 indyfs_LZ4_sizeofStateHC()
{
  return 262200i64;
}

/*
==============
indyfs_LZ4_sizeofStreamStateHC
==============
*/
__int64 indyfs_LZ4_sizeofStreamStateHC()
{
  return 262200i64;
}

/*
==============
indyfs_LZ4_slideInputBufferHC
==============
*/
char *indyfs_LZ4_slideInputBufferHC(void *indyfs_LZ4HC_Data)
{
  __int64 v1; 
  char *result; 
  int v3; 

  v1 = *((_QWORD *)indyfs_LZ4HC_Data + 32769);
  *((_QWORD *)indyfs_LZ4HC_Data + 0x8000) -= v1;
  result = (char *)(v1 + *((unsigned int *)indyfs_LZ4HC_Data + 65543));
  *((_QWORD *)indyfs_LZ4HC_Data + 32769) = 0i64;
  *((_QWORD *)indyfs_LZ4HC_Data + 32773) = 0i64;
  v3 = *((__int16 *)indyfs_LZ4HC_Data + 131090);
  if ( v3 >= 1 )
  {
    if ( v3 > 12 )
      LOWORD(v3) = 12;
    *((_WORD *)indyfs_LZ4HC_Data + 131090) = v3;
  }
  else
  {
    *((_WORD *)indyfs_LZ4HC_Data + 131090) = 9;
  }
  return result;
}

