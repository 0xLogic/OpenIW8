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
  unsigned __int64 v20; 
  BOOL favorDecSpeed; 
  __int64 v22; 
  void *v23; 
  __int64 v24; 
  char *v25; 
  char *v26; 
  unsigned int *v27; 
  __int64 base; 
  unsigned int lowLimit; 
  unsigned int v30; 
  int v31; 
  __int64 dictLimit; 
  unsigned __int64 v33; 
  unsigned int v34; 
  int v35; 
  __int64 nextToUpdate; 
  unsigned int v37; 
  bool v38; 
  _QWORD *v39; 
  unsigned int v40; 
  __int64 dictBase; 
  unsigned int v42; 
  _DWORD *v43; 
  unsigned __int64 v44; 
  __int64 v45; 
  unsigned __int64 v46; 
  _DWORD *v47; 
  unsigned int v48; 
  _DWORD *v49; 
  unsigned __int8 *v50; 
  unsigned __int8 *v51; 
  unsigned __int8 *v52; 
  unsigned __int8 *v53; 
  _QWORD *v54; 
  unsigned int v55; 
  unsigned __int64 v56; 
  unsigned __int64 v57; 
  unsigned __int8 *v58; 
  unsigned __int8 *v59; 
  _QWORD *v60; 
  unsigned __int8 *v61; 
  unsigned __int8 *v62; 
  unsigned int v63; 
  int v64; 
  unsigned __int8 *v65; 
  _DWORD *v66; 
  unsigned __int8 *v67; 
  unsigned __int8 *v68; 
  unsigned int v69; 
  int v70; 
  unsigned __int64 v71; 
  unsigned __int64 v72; 
  unsigned __int64 v73; 
  unsigned __int64 v74; 
  unsigned __int64 v75; 
  unsigned int v76; 
  unsigned __int64 v77; 
  char *v78; 
  unsigned __int64 v79; 
  unsigned __int64 v80; 
  unsigned __int64 v81; 
  char *v82; 
  unsigned __int64 v83; 
  __int64 v84; 
  unsigned int v85; 
  __int64 v86; 
  unsigned int v87; 
  unsigned int v88; 
  int v89; 
  _DWORD *v91; 
  unsigned __int8 *v92; 
  unsigned __int8 *v93; 
  _QWORD *v94; 
  unsigned __int8 *v95; 
  unsigned __int8 *v96; 
  unsigned int v97; 
  int v98; 
  int v99; 
  unsigned __int64 v100; 
  unsigned __int64 v101; 
  __int64 v102; 
  unsigned __int64 v103; 
  int v104; 
  const unsigned __int8 *v105; 
  unsigned int v106; 
  unsigned int v107; 
  __int64 v108; 
  const unsigned __int8 *v109; 
  unsigned int v110; 
  __int64 v111; 
  const unsigned __int8 *v112; 
  __int64 v113; 
  int v114; 
  unsigned int v115; 
  int v116; 
  unsigned __int64 v117; 
  _DWORD *v118; 
  unsigned __int64 v119; 
  unsigned __int64 v120; 
  unsigned __int64 v121; 
  _DWORD *v122; 
  __int64 v123; 
  unsigned int v124; 
  _DWORD *v125; 
  unsigned int v126; 
  unsigned __int8 *v127; 
  _DWORD *v128; 
  unsigned __int8 *v129; 
  unsigned __int8 *v130; 
  unsigned __int64 v131; 
  unsigned int v132; 
  int v133; 
  unsigned int v134; 
  int v135; 
  unsigned __int64 v136; 
  unsigned __int64 v137; 
  _BYTE *v138; 
  int v139; 
  int v140; 
  unsigned int v141; 
  const unsigned __int8 *v142; 
  unsigned __int8 *v143; 
  int v144; 
  _QWORD *v145; 
  unsigned __int64 v146; 
  const unsigned __int8 *v147; 
  unsigned __int8 *v148; 
  unsigned __int8 *v149; 
  unsigned __int8 *v150; 
  unsigned int v151; 
  signed int v152; 
  unsigned __int8 *v153; 
  const unsigned __int8 *v154; 
  unsigned __int8 *v155; 
  unsigned __int8 *v156; 
  unsigned int v157; 
  int v158; 
  int v159; 
  unsigned __int64 v160; 
  unsigned __int64 v161; 
  unsigned __int64 v162; 
  unsigned __int64 v163; 
  signed __int64 v164; 
  const unsigned __int8 *v165; 
  int v166; 
  __int64 v167; 
  unsigned int v168; 
  unsigned __int64 v169; 
  const unsigned __int8 *v170; 
  unsigned __int64 v171; 
  unsigned __int64 v172; 
  unsigned __int64 v173; 
  char *v174; 
  unsigned __int64 v175; 
  __int64 v176; 
  signed __int64 v177; 
  unsigned int v178; 
  unsigned int v179; 
  int v180; 
  const unsigned __int8 *v182; 
  __int64 v183; 
  unsigned __int8 *v184; 
  unsigned __int8 *v185; 
  _QWORD *v186; 
  unsigned __int8 *v187; 
  unsigned __int8 *v188; 
  unsigned int v189; 
  int v190; 
  unsigned int v191; 
  const unsigned __int8 *v192; 
  int v193; 
  unsigned __int64 v194; 
  unsigned __int64 v195; 
  __int64 v196; 
  __int64 v197; 
  int v198; 
  __int64 v199; 
  int v200; 
  int v201; 
  unsigned __int64 v202; 
  unsigned __int64 v203; 
  __int64 v204; 
  int v205; 
  int v206; 
  int v207; 
  unsigned __int64 v208; 
  unsigned __int64 v209; 
  int v210; 
  int v211; 
  int v212; 
  const unsigned __int8 *v213; 
  unsigned int v214; 
  unsigned int v215; 
  __int64 v216; 
  const unsigned __int8 *v217; 
  const unsigned __int8 *v218; 
  int v219; 
  unsigned int v220; 
  int v221; 
  unsigned __int64 v222; 
  __int64 v223; 
  const unsigned __int8 *v224; 
  unsigned __int64 v225; 
  unsigned __int64 v226; 
  unsigned __int64 v227; 
  indyfs_LZ4HC_CCtx_internal *v228; 
  unsigned __int64 v229; 
  __int64 v230; 
  unsigned int v231; 
  const unsigned __int8 *v232; 
  unsigned int v233; 
  _QWORD *v234; 
  _DWORD *v235; 
  unsigned __int8 *v236; 
  unsigned __int8 *v237; 
  unsigned __int64 v238; 
  unsigned int v239; 
  int v240; 
  unsigned int v241; 
  int v242; 
  unsigned __int64 v243; 
  unsigned __int64 v244; 
  _BYTE *v245; 
  int v246; 
  int v247; 
  unsigned __int8 *v248; 
  unsigned int v249; 
  const unsigned __int8 *v250; 
  unsigned __int8 *v251; 
  const unsigned __int8 *v252; 
  int v253; 
  unsigned __int8 *v254; 
  _QWORD *v255; 
  unsigned __int64 v256; 
  unsigned __int8 *v257; 
  unsigned __int8 *v258; 
  unsigned int v259; 
  signed int v260; 
  unsigned __int8 *v261; 
  unsigned __int8 *v262; 
  const unsigned __int8 *v263; 
  unsigned __int8 *v264; 
  unsigned int v265; 
  int v266; 
  int v267; 
  unsigned __int64 v268; 
  unsigned __int64 v269; 
  unsigned __int64 v270; 
  unsigned __int64 v271; 
  const unsigned __int8 *v272; 
  _BYTE *v273; 
  int v274; 
  const unsigned __int8 *v275; 
  unsigned int v276; 
  unsigned __int64 v277; 
  const unsigned __int8 *v278; 
  unsigned __int64 v279; 
  unsigned __int64 v280; 
  unsigned __int64 v281; 
  char *v282; 
  unsigned __int64 v283; 
  __int64 v284; 
  signed __int64 v285; 
  unsigned int v286; 
  int v287; 
  int v288; 
  const unsigned __int8 *v290; 
  const unsigned __int8 *v291; 
  unsigned __int8 *v292; 
  unsigned __int8 *v293; 
  _DWORD *v294; 
  unsigned __int8 *v295; 
  unsigned __int8 *v296; 
  unsigned int v297; 
  int v298; 
  int v299; 
  unsigned __int64 v300; 
  unsigned __int64 v301; 
  char *v302; 
  _BYTE *v303; 
  int v304; 
  int v305; 
  unsigned __int64 v306; 
  unsigned __int64 v307; 
  int v308; 
  __int64 v309; 
  int v310; 
  char *v311; 
  _BYTE *v312; 
  limitedOutput_directive v313; 
  unsigned __int64 v314; 
  unsigned __int64 v315; 
  _QWORD *v316; 
  unsigned __int64 v317; 
  void *v318; 
  _WORD *v319; 
  signed __int64 v320; 
  _WORD *v321; 
  unsigned __int64 v322; 
  char v323; 
  unsigned __int64 v324; 
  unsigned __int64 v325; 
  __int64 v326; 
  __int64 v327; 
  int v328; 
  _BYTE *v329; 
  unsigned __int64 v330; 
  _QWORD *v331; 
  unsigned __int64 v332; 
  void *v333; 
  _WORD *v334; 
  signed __int64 v335; 
  _WORD *v336; 
  unsigned __int64 v337; 
  char v338; 
  unsigned __int64 v339; 
  unsigned __int64 v340; 
  __int64 v341; 
  _BYTE *v342; 
  unsigned __int64 v343; 
  _QWORD *v344; 
  unsigned __int64 v345; 
  void *v346; 
  _WORD *v347; 
  signed __int64 v348; 
  _BYTE *v349; 
  unsigned __int64 v350; 
  char v351; 
  unsigned __int64 v352; 
  unsigned __int64 v353; 
  void *v354; 
  _BYTE *v355; 
  char *v356; 
  unsigned __int64 v357; 
  _QWORD *v358; 
  unsigned __int64 v359; 
  void *v360; 
  _WORD *v361; 
  signed __int64 v362; 
  unsigned __int64 v363; 
  char v364; 
  unsigned __int64 v365; 
  unsigned __int64 v366; 
  _BYTE *v367; 
  unsigned __int64 v368; 
  _QWORD *v369; 
  unsigned __int64 v370; 
  void *v371; 
  _WORD *v372; 
  signed __int64 v373; 
  unsigned __int64 v374; 
  char v375; 
  unsigned __int64 v376; 
  unsigned __int64 v377; 
  size_t v378; 
  unsigned __int64 v379; 
  int v380; 
  size_t v381; 
  char *v382; 
  void *v383; 
  int v384; 
  unsigned int pattern32; 
  int v386; 
  unsigned int v387; 
  int v388; 
  unsigned __int64 v389; 
  int v390; 
  int v391; 
  unsigned __int8 *iEnd; 
  unsigned __int64 v393; 
  unsigned __int64 v394; 
  int v395; 
  const unsigned __int8 *v396; 
  const unsigned __int8 *v397; 
  void *Src; 
  int v399; 
  unsigned __int64 v400; 
  char *v401; 
  _QWORD *v402; 
  __int64 v403; 
  const unsigned __int8 *v404; 
  BOOL v405; 
  _QWORD *v406; 
  const unsigned __int8 *v407; 
  unsigned __int64 v408; 
  unsigned __int8 *v409; 
  unsigned __int64 hashTable; 
  int nbSearches[2]; 
  unsigned __int16 *chainTable; 
  const indyfs_LZ4HC_CCtx_internal *dictCtx; 
  int v415; 
  int v416; 

  v416 = (int)dst;
  v415 = (int)src;
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
  _RCX = 3i64 * v15;
  _RAX = dword_1447549F0;
  __asm { vmovsd  xmm0, qword ptr [rax+rcx*4] }
  v20 = dword_1447549F0[3 * v15 + 2];
  favorDecSpeed = ctx->favorDecSpeed != 0;
  __asm { vmovsd  qword ptr [rbp+80h+var_60], xmm0 }
  if ( nbSearches[0] )
    return indyfs_LZ4HC_compress_optimal(ctx, (const char *const)v10, dst, v7, dstCapacity, nbSearches[1], v20, limit, v15 == 12, usingDictCtx, (const HCfavor_e)favorDecSpeed);
  v22 = *v7;
  v23 = v10;
  v401 = dst;
  v24 = (__int64)&v10[v22];
  v389 = (unsigned __int64)v10;
  v25 = dst;
  v405 = nbSearches[1] > 0x40u;
  Src = v10;
  v409 = &v10[v22];
  v402 = NULL;
  v26 = &dst[dstCapacity - 5];
  iEnd = &v10[v22 - 5];
  if ( limit != 2 )
    v26 = &dst[dstCapacity];
  v400 = 0i64;
  v394 = (unsigned __int64)v26;
  v396 = NULL;
  v408 = 0i64;
  v404 = NULL;
  *v7 = 0;
  if ( (int)v22 < 13 || (unsigned __int64)v10 > v24 - 12 )
  {
    v313 = limit;
    goto LABEL_626;
  }
  v27 = (unsigned int *)v10;
  chainTable = ctx->chainTable;
  while ( 2 )
  {
    base = (__int64)v16->base;
    lowLimit = v16->lowLimit;
    v30 = (_DWORD)v27 - base;
    v31 = 0;
    dictLimit = v16->dictLimit;
    v33 = 0i64;
    v34 = *v27;
    v35 = (int)v27;
    nextToUpdate = v16->nextToUpdate;
    v37 = nbSearches[1];
    v38 = lowLimit + 0x10000 <= v30;
    hashTable = (unsigned __int64)v16->dictCtx->hashTable;
    v39 = (_QWORD *)(base + dictLimit);
    v40 = v30 - 0xFFFF;
    v395 = v30;
    dictBase = (__int64)v16->dictBase;
    if ( v38 )
      lowLimit = v40;
    v42 = v35 - base;
    v388 = 3;
    v393 = base;
    v406 = (_QWORD *)(base + dictLimit);
    pattern32 = lowLimit;
    v403 = dictBase;
    v387 = nbSearches[1];
    if ( (unsigned int)nextToUpdate < v42 )
    {
      v43 = (_DWORD *)(base + nextToUpdate);
      do
      {
        v44 = (unsigned int)(-1640531535 * *v43);
        v43 = (_DWORD *)((char *)v43 + 1);
        v45 = v44 >> 17;
        v46 = (unsigned int)(nextToUpdate - v16->hashTable[v45]);
        if ( v46 > 0xFFFF )
          LOWORD(v46) = -1;
        v16->chainTable[(unsigned __int16)nextToUpdate] = v46;
        v16->hashTable[v45] = nextToUpdate;
        LODWORD(nextToUpdate) = nextToUpdate + 1;
      }
      while ( (unsigned int)nextToUpdate < v42 );
      v39 = v406;
      dictBase = v403;
      v37 = v387;
    }
    v47 = (_DWORD *)v389;
    v16->nextToUpdate = v42;
    v48 = v16->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *v47) >> 17];
    if ( v48 >= lowLimit )
    {
      while ( 1 )
      {
        if ( !v37 )
          goto LABEL_150;
        v387 = v37 - 1;
        if ( v48 < (unsigned int)dictLimit )
        {
          if ( *(_DWORD *)(v48 + dictBase) == v34 )
          {
            v58 = iEnd;
            v59 = (unsigned __int8 *)(v47 + 1);
            v60 = (_QWORD *)(v48 + dictBase + 4);
            if ( (unsigned __int8 *)((char *)v47 + (unsigned int)dictLimit - v48) <= iEnd )
              v58 = (unsigned __int8 *)v47 + (unsigned int)dictLimit - v48;
            v61 = (unsigned __int8 *)(v47 + 1);
            v62 = v58 - 7;
            if ( v59 >= v58 - 7 )
              goto LABEL_59;
            if ( *v60 != *(_QWORD *)v59 )
            {
              _BitScanForward64(&v71, *v60 ^ *(_QWORD *)v59);
              HIWORD(v384) = 0;
              v63 = (unsigned int)v71 >> 3;
            }
            else
            {
              v61 = v59 + 8;
              ++v60;
LABEL_59:
              if ( v61 >= v62 )
              {
LABEL_62:
                if ( v61 < v58 - 3 && *(_DWORD *)v60 == *(_DWORD *)v61 )
                {
                  v61 += 4;
                  v60 = (_QWORD *)((char *)v60 + 4);
                }
                if ( v61 < v58 - 1 && *(_WORD *)v60 == *(_WORD *)v61 )
                {
                  v61 += 2;
                  v60 = (_QWORD *)((char *)v60 + 2);
                }
                if ( v61 < v58 && *(_BYTE *)v60 == *v61 )
                  LODWORD(v61) = (_DWORD)v61 + 1;
                v63 = (_DWORD)v61 - (_DWORD)v59;
              }
              else
              {
                while ( *v60 == *(_QWORD *)v61 )
                {
                  v61 += 8;
                  ++v60;
                  if ( v61 >= v62 )
                    goto LABEL_62;
                }
                _BitScanForward64(&v72, *v60 ^ *(_QWORD *)v61);
                HIWORD(v384) = 0;
                v63 = ((unsigned int)v72 >> 3) - (_DWORD)v59 + (_DWORD)v61;
              }
            }
            v47 = (_DWORD *)v389;
            v64 = v63 + 4;
            v65 = (unsigned __int8 *)(v389 + (int)(v63 + 4));
            if ( v65 == v58 && v58 < iEnd )
            {
              v66 = v39;
              v67 = (unsigned __int8 *)(v389 + v64);
              v68 = iEnd - 7;
              if ( v65 >= iEnd - 7 )
              {
LABEL_77:
                if ( v67 >= v68 )
                {
LABEL_80:
                  if ( v67 < iEnd - 3 && *v66 == *(_DWORD *)v67 )
                  {
                    v67 += 4;
                    ++v66;
                  }
                  if ( v67 < iEnd - 1 && *(_WORD *)v66 == *(_WORD *)v67 )
                  {
                    v67 += 2;
                    v66 = (_DWORD *)((char *)v66 + 2);
                  }
                  if ( v67 < iEnd && *(_BYTE *)v66 == *v67 )
                    LODWORD(v67) = (_DWORD)v67 + 1;
                  v69 = (_DWORD)v67 - (_DWORD)v65;
                }
                else
                {
                  while ( *(_QWORD *)v67 == *(_QWORD *)v66 )
                  {
                    v67 += 8;
                    v66 += 2;
                    if ( v67 >= v68 )
                      goto LABEL_80;
                  }
                  _BitScanForward64(&v74, *(_QWORD *)v67 ^ *(_QWORD *)v66);
                  HIWORD(v384) = 0;
                  v69 = ((unsigned int)v74 >> 3) - (_DWORD)v65 + (_DWORD)v67;
                }
              }
              else
              {
                if ( *(_QWORD *)v65 == *v39 )
                {
                  v67 = v65 + 8;
                  v66 = v39 + 1;
                  goto LABEL_77;
                }
                _BitScanForward64(&v73, *(_QWORD *)v65 ^ *v39);
                HIWORD(v384) = 0;
                v69 = (unsigned int)v73 >> 3;
              }
              v47 = (_DWORD *)v389;
              v64 += v69;
            }
            if ( v64 > v388 )
            {
              v388 = v64;
              v402 = (_QWORD *)(v48 + v393);
            }
            lowLimit = pattern32;
          }
LABEL_94:
          v50 = iEnd;
          goto LABEL_95;
        }
        v49 = (_DWORD *)(v48 + v393);
        if ( *(_WORD *)((char *)v47 + v388 - 1) != *(_WORD *)((char *)v49 + v388 - 1) )
          goto LABEL_94;
        v50 = iEnd;
        if ( *v49 == v34 )
          break;
LABEL_95:
        v70 = chainTable[(unsigned __int16)v48];
        v48 -= v70;
        if ( v405 && v70 == 1 )
        {
          if ( v31 )
          {
            if ( v31 == 2 )
              goto LABEL_106;
          }
          else
          {
            if ( (_BYTE)v34 == HIBYTE(v34) && (unsigned __int16)v34 == HIWORD(v34) )
            {
              v47 = (_DWORD *)v389;
              v31 = 2;
              v33 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v389 + 4), v50, v34) + 4;
LABEL_106:
              if ( v48 >= (unsigned int)dictLimit )
              {
                v75 = v393 + v48;
                if ( *(_DWORD *)v75 == v34 )
                {
                  v76 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v75 + 4), iEnd, v34);
                  v78 = (char *)v39;
                  v79 = v76 + 4i64;
                  if ( (_DWORD *)((char *)v39 + 0xFFFF) < v47 )
                    v78 = (char *)v47 - 0xFFFF;
                  v399 = v34;
                  v80 = v77;
                  if ( v77 >= (unsigned __int64)(v78 + 4) )
                  {
                    do
                    {
                      v81 = v80 - 4;
                      if ( *(_DWORD *)(v80 - 4) != v34 )
                        break;
                      v80 -= 4i64;
                    }
                    while ( v81 >= (unsigned __int64)(v78 + 4) );
                  }
                  if ( v80 > (unsigned __int64)v78 )
                  {
                    v82 = (char *)&v399 - v80 + 3;
                    do
                    {
                      v83 = v80 - 1;
                      if ( *(_BYTE *)(v80 - 1) != v82[v80] )
                        break;
                      --v80;
                    }
                    while ( v83 > (unsigned __int64)v78 );
                  }
                  v84 = (unsigned int)(v77 - v80);
                  if ( v84 + v79 < v33 || v79 > v33 )
                    v48 -= v84;
                  else
                    v48 += v79 - v33;
                }
              }
              lowLimit = pattern32;
              goto LABEL_122;
            }
            v31 = 1;
          }
        }
LABEL_122:
        dictBase = v403;
        v37 = v387;
        v47 = (_DWORD *)v389;
        if ( v48 < lowLimit )
          goto LABEL_123;
      }
      v51 = (unsigned __int8 *)(v47 + 1);
      v52 = iEnd - 7;
      v53 = v51;
      v54 = v49 + 1;
      if ( v51 < iEnd - 7 )
      {
        if ( *v54 != *(_QWORD *)v51 )
        {
          _BitScanForward64(&v56, *v54 ^ *(_QWORD *)v51);
          HIWORD(v384) = 0;
          v55 = (unsigned int)v56 >> 3;
LABEL_49:
          v47 = (_DWORD *)v389;
          if ( (int)(v55 + 4) > v388 )
          {
            v388 = v55 + 4;
            v402 = (_QWORD *)(v48 + v393);
          }
          goto LABEL_95;
        }
        v53 = v51 + 8;
        v54 = v49 + 3;
      }
      if ( v53 >= v52 )
      {
LABEL_39:
        if ( v53 < iEnd - 3 && *(_DWORD *)v54 == *(_DWORD *)v53 )
        {
          v53 += 4;
          v54 = (_QWORD *)((char *)v54 + 4);
        }
        if ( v53 < iEnd - 1 && *(_WORD *)v54 == *(_WORD *)v53 )
        {
          v53 += 2;
          v54 = (_QWORD *)((char *)v54 + 2);
        }
        if ( v53 < iEnd && *(_BYTE *)v54 == *v53 )
          LODWORD(v53) = (_DWORD)v53 + 1;
        v55 = (_DWORD)v53 - (_DWORD)v51;
      }
      else
      {
        while ( *v54 == *(_QWORD *)v53 )
        {
          v53 += 8;
          ++v54;
          if ( v53 >= v52 )
            goto LABEL_39;
        }
        _BitScanForward64(&v57, *v54 ^ *(_QWORD *)v53);
        HIWORD(v384) = 0;
        v55 = ((unsigned int)v57 >> 3) - (_DWORD)v51 + (_DWORD)v53;
      }
      goto LABEL_49;
    }
LABEL_123:
    v85 = v387;
    if ( v387 )
    {
      if ( v395 - pattern32 < 0xFFFF )
      {
        v86 = *(_QWORD *)(hashTable + 0x40000) - *(_QWORD *)(hashTable + 262152);
        v87 = *(_DWORD *)(hashTable + 4 * ((unsigned __int64)(unsigned int)(-1640531535 * *v47) >> 17));
        v88 = v87 + pattern32 - v86;
        if ( v395 - v88 <= 0xFFFF )
        {
          v89 = v388;
          while ( 1 )
          {
            if ( !v85-- )
              goto LABEL_150;
            v91 = (_DWORD *)(v87 + *(_QWORD *)(hashTable + 262152));
            if ( *v91 == v34 )
              break;
LABEL_149:
            v98 = *(unsigned __int16 *)(hashTable + 2i64 * (unsigned __int16)v87 + 0x20000);
            v88 -= v98;
            v87 -= v98;
            if ( v395 - v88 > 0xFFFF )
              goto LABEL_150;
          }
          v92 = iEnd;
          v93 = (unsigned __int8 *)(v47 + 1);
          if ( (unsigned __int8 *)((char *)v47 + v86 - v87) <= iEnd )
            v92 = (unsigned __int8 *)v47 + v86 - v87;
          v94 = v91 + 1;
          v95 = (unsigned __int8 *)(v47 + 1);
          v96 = v92 - 7;
          if ( v93 < v92 - 7 )
          {
            if ( *v94 != *(_QWORD *)v93 )
            {
              _BitScanForward64(&v100, *v94 ^ *(_QWORD *)v93);
              HIWORD(v384) = 0;
              v97 = (unsigned int)v100 >> 3;
LABEL_147:
              v47 = (_DWORD *)v389;
              if ( (int)(v97 + 4) > v89 )
              {
                v388 = v97 + 4;
                v89 = v97 + 4;
                v402 = (_QWORD *)(v393 + v88);
              }
              goto LABEL_149;
            }
            v95 = v93 + 8;
            ++v94;
          }
          if ( v95 >= v96 )
          {
LABEL_137:
            if ( v95 < v92 - 3 && *(_DWORD *)v94 == *(_DWORD *)v95 )
            {
              v95 += 4;
              v94 = (_QWORD *)((char *)v94 + 4);
            }
            if ( v95 < v92 - 1 && *(_WORD *)v94 == *(_WORD *)v95 )
            {
              v95 += 2;
              v94 = (_QWORD *)((char *)v94 + 2);
            }
            if ( v95 < v92 && *(_BYTE *)v94 == *v95 )
              LODWORD(v95) = (_DWORD)v95 + 1;
            v97 = (_DWORD)v95 - (_DWORD)v93;
          }
          else
          {
            while ( *v94 == *(_QWORD *)v95 )
            {
              v95 += 8;
              ++v94;
              if ( v95 >= v96 )
                goto LABEL_137;
            }
            _BitScanForward64(&v101, *v94 ^ *(_QWORD *)v95);
            HIWORD(v384) = 0;
            v97 = ((unsigned int)v101 >> 3) - (_DWORD)v93 + (_DWORD)v95;
          }
          goto LABEL_147;
        }
      }
    }
LABEL_150:
    v99 = v388;
    if ( v388 < 4 )
    {
      v25 = v401;
      v27 = (_DWORD *)((char *)v47 + 1);
      v23 = Src;
      goto LABEL_617;
    }
    LOWORD(v102) = (_WORD)v402;
    v406 = v402;
    hashTable = (unsigned __int64)v47;
    v399 = v388;
    while ( 1 )
    {
LABEL_155:
      v103 = (unsigned __int64)v47 + v99;
      if ( v103 > (unsigned __int64)(v409 - 12) )
        goto LABEL_596;
      v397 = (const unsigned __int8 *)(v103 - 2);
      v391 = v99;
      v104 = nbSearches[1];
      v105 = ctx->base;
      v106 = v103 - 2 - (_DWORD)v105;
      v107 = ctx->lowLimit;
      v108 = ctx->dictLimit;
      v109 = ctx->dictBase;
      dictCtx = ctx->dictCtx;
      v110 = v106 - 0xFFFF;
      v393 = (unsigned __int64)v105;
      v38 = v107 + 0x10000 <= v106;
      v395 = v106;
      v111 = ctx->nextToUpdate;
      v112 = &v105[v108];
      if ( v38 )
        v107 = v110;
      v386 = v108;
      v113 = v393;
      v114 = v103 - 2 - v389;
      v115 = v103 - 2 - v393;
      pattern32 = *(_DWORD *)(v103 - 2);
      v387 = v107;
      v116 = 0;
      v407 = v109;
      v117 = 0i64;
      v390 = nbSearches[1];
      if ( (unsigned int)v111 < v115 )
      {
        v118 = (_DWORD *)(v393 + v111);
        do
        {
          v119 = (unsigned int)(-1640531535 * *v118);
          v118 = (_DWORD *)((char *)v118 + 1);
          v120 = v119 >> 17;
          v121 = (unsigned int)(v111 - ctx->hashTable[v120]);
          if ( v121 > 0xFFFF )
            LOWORD(v121) = -1;
          ctx->chainTable[(unsigned __int16)v111] = v121;
          ctx->hashTable[v120] = v111;
          LODWORD(v111) = v111 + 1;
        }
        while ( (unsigned int)v111 < v115 );
        LODWORD(v108) = v386;
        v107 = v387;
        v109 = v407;
      }
      v122 = v397;
      ctx->nextToUpdate = v115;
      v123 = v114;
      v403 = v114;
      v124 = ctx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *v122) >> 17];
      if ( v124 >= v107 )
      {
        while ( 1 )
        {
          if ( !v104 )
            goto LABEL_318;
          v390 = v104 - 1;
          if ( v124 >= (unsigned int)v108 )
          {
            v125 = (_DWORD *)(v124 + v113);
            v126 = pattern32;
            if ( *(_WORD *)(v391 + v389 - 1) == *(_WORD *)((char *)v125 + v391 - v123 - 1) && *v125 == pattern32 )
            {
              v127 = (unsigned __int8 *)(v122 + 1);
              v128 = v125 + 1;
              v129 = v127;
              v130 = iEnd - 7;
              if ( v127 >= iEnd - 7 )
              {
LABEL_174:
                if ( v129 >= v130 )
                {
LABEL_177:
                  if ( v129 < iEnd - 3 && *v128 == *(_DWORD *)v129 )
                  {
                    v129 += 4;
                    ++v128;
                  }
                  if ( v129 < iEnd - 1 && *(_WORD *)v128 == *(_WORD *)v129 )
                  {
                    v129 += 2;
                    v128 = (_DWORD *)((char *)v128 + 2);
                  }
                  if ( v129 < iEnd && *(_BYTE *)v128 == *v129 )
                    LODWORD(v129) = (_DWORD)v129 + 1;
                  v132 = (_DWORD)v129 - (_DWORD)v127;
                  v133 = 0;
                }
                else
                {
                  while ( *(_QWORD *)v128 == *(_QWORD *)v129 )
                  {
                    v129 += 8;
                    v128 += 2;
                    if ( v129 >= v130 )
                      goto LABEL_177;
                  }
                  _BitScanForward64(&v137, *(_QWORD *)v128 ^ *(_QWORD *)v129);
                  v133 = 0;
                  HIWORD(v384) = 0;
                  v132 = ((unsigned int)v137 >> 3) - (_DWORD)v127 + (_DWORD)v129;
                }
              }
              else
              {
                v131 = *(_QWORD *)v128 ^ *(_QWORD *)v127;
                if ( !v131 )
                {
                  v129 = v127 + 8;
                  v128 = v125 + 3;
                  goto LABEL_174;
                }
                v133 = 0;
                _BitScanForward64(&v136, v131);
                HIWORD(v384) = 0;
                v132 = (unsigned int)v136 >> 3;
              }
              v134 = v132 + 4;
              if ( v123 )
              {
                v135 = (__int64)(v389 - (_QWORD)v397) <= v112 - (const unsigned __int8 *)v125 ? (int)v112 - (int)v125 : v389 - (_DWORD)v397;
                if ( v135 < 0 )
                {
                  v138 = (char *)v125 - 1;
                  do
                  {
                    if ( v138[v397 - (const unsigned __int8 *)v125] != *v138 )
                      break;
                    --v138;
                    --v133;
                  }
                  while ( (__int64)&v138[1i64 - (_QWORD)v125] > v135 );
                }
              }
              v122 = v397;
              v139 = v134 - v133;
              if ( v139 > v391 )
              {
                v391 = v139;
                v400 = (unsigned __int64)&v397[v133];
                v396 = (const unsigned __int8 *)v125 + v133;
              }
              LODWORD(v108) = v386;
            }
            v113 = v393;
            goto LABEL_201;
          }
          v142 = &v109[v124];
          if ( *(_DWORD *)v142 != pattern32 )
          {
            v107 = v387;
            v126 = pattern32;
            goto LABEL_201;
          }
          v143 = (unsigned __int8 *)(v122 + 1);
          v144 = v108;
          v145 = v142 + 4;
          v146 = (unsigned __int64)v122 + v144 - v124;
          v147 = &v109[ctx->lowLimit];
          v148 = iEnd;
          if ( v146 <= (unsigned __int64)iEnd )
            v148 = (unsigned __int8 *)v146;
          v149 = (unsigned __int8 *)(v122 + 1);
          v150 = v148 - 7;
          if ( v143 < v148 - 7 )
          {
            if ( *v145 != *(_QWORD *)v143 )
            {
              _BitScanForward64(&v160, *v145 ^ *(_QWORD *)v143);
              HIWORD(v384) = 0;
              v151 = (unsigned int)v160 >> 3;
              goto LABEL_225;
            }
            v149 = v143 + 8;
            v145 = v142 + 12;
          }
          if ( v149 >= v150 )
          {
LABEL_215:
            if ( v149 < v148 - 3 && *(_DWORD *)v145 == *(_DWORD *)v149 )
            {
              v149 += 4;
              v145 = (_QWORD *)((char *)v145 + 4);
            }
            if ( v149 < v148 - 1 && *(_WORD *)v145 == *(_WORD *)v149 )
            {
              v149 += 2;
              v145 = (_QWORD *)((char *)v145 + 2);
            }
            if ( v149 < v148 && *(_BYTE *)v145 == *v149 )
              LODWORD(v149) = (_DWORD)v149 + 1;
            v151 = (_DWORD)v149 - (_DWORD)v143;
          }
          else
          {
            while ( *v145 == *(_QWORD *)v149 )
            {
              v149 += 8;
              ++v145;
              if ( v149 >= v150 )
                goto LABEL_215;
            }
            _BitScanForward64(&v161, *v145 ^ *(_QWORD *)v149);
            HIWORD(v384) = 0;
            v151 = ((unsigned int)v161 >> 3) + (_DWORD)v149 - (_DWORD)v143;
          }
LABEL_225:
          v122 = v397;
          v152 = v151 + 4;
          v153 = (unsigned __int8 *)&v397[v151 + 4];
          if ( v153 == v148 && v148 < iEnd )
          {
            v154 = v112;
            v155 = (unsigned __int8 *)&v397[v152];
            v156 = iEnd - 7;
            if ( v153 >= iEnd - 7 )
            {
LABEL_230:
              if ( v155 >= v156 )
              {
LABEL_233:
                if ( v155 < iEnd - 3 && *(_DWORD *)v154 == *(_DWORD *)v155 )
                {
                  v155 += 4;
                  v154 += 4;
                }
                if ( v155 < iEnd - 1 && *(_WORD *)v154 == *(_WORD *)v155 )
                {
                  v155 += 2;
                  v154 += 2;
                }
                if ( v155 < iEnd && *v154 == *v155 )
                  LODWORD(v155) = (_DWORD)v155 + 1;
                v157 = (_DWORD)v155 - (_DWORD)v153;
              }
              else
              {
                while ( *(_QWORD *)v154 == *(_QWORD *)v155 )
                {
                  v155 += 8;
                  v154 += 8;
                  if ( v155 >= v156 )
                    goto LABEL_233;
                }
                _BitScanForward64(&v163, *(_QWORD *)v154 ^ *(_QWORD *)v155);
                HIWORD(v384) = 0;
                v157 = ((unsigned int)v163 >> 3) - (_DWORD)v153 + (_DWORD)v155;
              }
            }
            else
            {
              if ( *(_QWORD *)v112 == *(_QWORD *)v153 )
              {
                v155 = v153 + 8;
                v154 = v112 + 8;
                goto LABEL_230;
              }
              _BitScanForward64(&v162, *(_QWORD *)v112 ^ *(_QWORD *)v153);
              HIWORD(v384) = 0;
              v157 = (unsigned int)v162 >> 3;
            }
            v122 = v397;
            v152 += v157;
          }
          v158 = 0;
          if ( v403 )
          {
            v159 = (__int64)(v389 - (_QWORD)v122) <= v147 - v142 ? (int)v147 - (int)v142 : v389 - (_DWORD)v122;
            if ( v159 < 0 )
            {
              v164 = (char *)v122 - (char *)v142;
              v165 = v142 - 1;
              do
              {
                if ( v165[v164] != *v165 )
                  break;
                --v165;
                --v158;
              }
              while ( (__int64)&v165[1i64 - (_QWORD)v142] > v159 );
              v122 = v397;
            }
          }
          v113 = v393;
          v166 = v152 - v158;
          v107 = v387;
          if ( v166 > v391 )
          {
            v391 = v166;
            v396 = (const unsigned __int8 *)(v393 + v124 + (__int64)v158);
            v400 = (unsigned __int64)v122 + v158;
          }
          LODWORD(v108) = v386;
          v126 = pattern32;
LABEL_201:
          v140 = chainTable[(unsigned __int16)v124];
          v124 -= v140;
          if ( v405 && v140 == 1 )
          {
            if ( v116 )
            {
              if ( v116 != 2 )
                goto LABEL_279;
            }
            else
            {
              if ( (_BYTE)v126 != HIBYTE(v126) || (unsigned __int16)v126 != HIWORD(v126) )
              {
                v116 = 1;
LABEL_278:
                LODWORD(v108) = v386;
                goto LABEL_279;
              }
              v122 = v397;
              v116 = 2;
              v141 = indyfs_LZ4HC_countPattern(v397 + 4, iEnd, v126);
              LODWORD(v108) = v386;
              v117 = v141 + 4;
            }
            if ( v124 >= (unsigned int)v108 )
            {
              v167 = v124 + v113;
              if ( *(_DWORD *)v167 == v126 )
              {
                v168 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v167 + 4), iEnd, v126);
                v170 = v112;
                v171 = v168 + 4i64;
                if ( v112 + 0xFFFF < (const unsigned __int8 *)v122 )
                  v170 = (const unsigned __int8 *)v122 - 0xFFFF;
                HIWORD(v384) = HIWORD(v126);
                v172 = v169;
                if ( v169 >= (unsigned __int64)(v170 + 4) )
                {
                  do
                  {
                    v173 = v172 - 4;
                    if ( *(_DWORD *)(v172 - 4) != v126 )
                      break;
                    v172 -= 4i64;
                  }
                  while ( v173 >= (unsigned __int64)(v170 + 4) );
                }
                if ( v172 > (unsigned __int64)v170 )
                {
                  v174 = (char *)&v384 - v172 + 3;
                  do
                  {
                    v175 = v172 - 1;
                    if ( *(_BYTE *)(v172 - 1) != v174[v172] )
                      break;
                    --v172;
                  }
                  while ( v175 > (unsigned __int64)v170 );
                }
                v176 = (unsigned int)(v169 - v172);
                if ( v176 + v171 < v117 || v171 > v117 )
                  v124 -= v176;
                else
                  v124 += v171 - v117;
                goto LABEL_278;
              }
            }
          }
LABEL_279:
          v122 = v397;
          v109 = v407;
          v104 = v390;
          v113 = v393;
          if ( v124 < v107 )
            break;
          v123 = v403;
        }
      }
      if ( v104 )
      {
        if ( v395 - v107 < 0xFFFF )
        {
          v177 = dictCtx->end - dictCtx->base;
          v178 = dictCtx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *v122) >> 17];
          v179 = v387 + v178 - v177;
          if ( v395 - v179 <= 0xFFFF )
          {
            v180 = v390;
            while ( 1 )
            {
              if ( !v180-- )
                goto LABEL_318;
              v182 = dictCtx->base;
              v183 = (__int64)&v182[v178];
              if ( *(_DWORD *)v183 == pattern32 )
                break;
LABEL_317:
              v200 = dictCtx->chainTable[(unsigned __int16)v178];
              v179 -= v200;
              v178 -= v200;
              if ( v395 - v179 > 0xFFFF )
                goto LABEL_318;
            }
            v184 = iEnd;
            v185 = (unsigned __int8 *)(v122 + 1);
            v186 = (_QWORD *)(v183 + 4);
            if ( (unsigned __int8 *)((char *)v122 + v177 - v178) <= iEnd )
              v184 = (unsigned __int8 *)v122 + v177 - v178;
            v187 = (unsigned __int8 *)(v122 + 1);
            v188 = v184 - 7;
            if ( v185 < v184 - 7 )
            {
              if ( *v186 != *(_QWORD *)v185 )
              {
                v190 = 0;
                _BitScanForward64(&v194, *v186 ^ *(_QWORD *)v185);
                HIWORD(v384) = 0;
                v189 = (unsigned int)v194 >> 3;
LABEL_304:
                v191 = v189 + 4;
                if ( v403 )
                {
                  v192 = &v182[dictCtx->dictLimit];
                  v193 = (__int64)(v389 - (_QWORD)v397) <= (__int64)&v192[-v183] ? (_DWORD)v192 - v183 : (int)v389 - (int)v397;
                  if ( v193 < 0 )
                  {
                    v196 = v183 - 1;
                    v197 = -v183;
                    do
                    {
                      if ( v397[v197 + v196] != *(_BYTE *)v196 )
                        break;
                      --v196;
                      --v190;
                    }
                    while ( v197 + v196 + 1 > v193 );
                  }
                }
                v198 = v191 - v190;
                if ( v198 <= v391 )
                {
                  v122 = v397;
                }
                else
                {
                  v199 = v190;
                  v122 = v397;
                  v391 = v198;
                  v396 = (const unsigned __int8 *)(v393 + v199 + v179);
                  v400 = (unsigned __int64)&v397[v199];
                }
                goto LABEL_317;
              }
              v187 = v185 + 8;
              v186 = (_QWORD *)(v183 + 12);
            }
            if ( v187 >= v188 )
            {
LABEL_294:
              if ( v187 < v184 - 3 && *(_DWORD *)v186 == *(_DWORD *)v187 )
              {
                v187 += 4;
                v186 = (_QWORD *)((char *)v186 + 4);
              }
              if ( v187 < v184 - 1 && *(_WORD *)v186 == *(_WORD *)v187 )
              {
                v187 += 2;
                v186 = (_QWORD *)((char *)v186 + 2);
              }
              if ( v187 < v184 && *(_BYTE *)v186 == *v187 )
                LODWORD(v187) = (_DWORD)v187 + 1;
              v189 = (_DWORD)v187 - (_DWORD)v185;
              v190 = 0;
            }
            else
            {
              while ( *v186 == *(_QWORD *)v187 )
              {
                v187 += 8;
                ++v186;
                if ( v187 >= v188 )
                  goto LABEL_294;
              }
              _BitScanForward64(&v195, *v186 ^ *(_QWORD *)v187);
              v190 = 0;
              HIWORD(v384) = 0;
              v189 = ((unsigned int)v195 >> 3) - (_DWORD)v185 + (_DWORD)v187;
            }
            goto LABEL_304;
          }
        }
      }
LABEL_318:
      v201 = v391;
      v99 = v388;
      if ( v391 == v388 )
      {
        v47 = (_DWORD *)v389;
        LOWORD(v102) = (_WORD)v402;
LABEL_596:
        v311 = v401;
        v367 = Src;
        v313 = limit;
        v368 = (char *)v47 - (_BYTE *)Src;
        v26 = (char *)v394;
        v369 = v401 + 1;
        if ( limit && (unsigned __int64)v369 + v368 + (v368 >> 8) + 8 > v394 )
          goto LABEL_621;
        if ( v368 < 0xF )
        {
          *v401 = 16 * v368;
        }
        else
        {
          v370 = v368 - 15;
          *v401 = -16;
          if ( v368 - 15 >= 0xFF )
          {
            v371 = v369;
            v369 = (_QWORD *)((char *)v369 + v370 / 0xFF);
            memset(v371, 255, v370 / 0xFF);
            v47 = (_DWORD *)v389;
            v367 = Src;
            v313 = limit;
            v370 %= 0xFFui64;
          }
          *(_BYTE *)v369 = v370;
          v369 = (_QWORD *)((char *)v369 + 1);
        }
        v372 = (_WORD *)((char *)v369 + v368);
        v373 = v367 - (_BYTE *)v369;
        do
        {
          *v369 = *(_QWORD *)((char *)v369 + v373);
          ++v369;
        }
        while ( v369 < (_QWORD *)v372 );
        *v372 = (_WORD)v47 - v102;
        v25 = (char *)(v372 + 1);
        v401 = v25;
        v374 = v99 - 4;
        if ( v313 )
        {
          if ( &v25[((unsigned __int64)(v99 - 4) >> 8) + 6] > v26 )
            goto LABEL_621;
        }
        v375 = *v311;
        if ( v374 < 0xF )
        {
          *v311 = v375 + v99 - 4;
        }
        else
        {
          v376 = v374 - 15;
          *v311 = v375 + 15;
          if ( v376 >= 0x1FE )
          {
            v377 = v376 / 0x1FE;
            v376 %= 0x1FEui64;
            do
            {
              *(_WORD *)v25 = -1;
              v25 += 2;
              --v377;
            }
            while ( v377 );
          }
          if ( v376 >= 0xFF )
          {
            LOBYTE(v376) = v376 + 1;
            *v25++ = -1;
          }
          *v25++ = v376;
          v401 = v25;
        }
        v27 = (_DWORD *)((char *)v47 + v99);
        goto LABEL_616;
      }
      v202 = v389;
      v203 = v400;
      if ( hashTable < v389 && v400 < v389 + v399 )
      {
        v202 = hashTable;
        v402 = v406;
        v99 = v399;
        v389 = hashTable;
        v388 = v399;
      }
      if ( (__int64)(v400 - v202) >= 3 )
        break;
      LOWORD(v102) = (_WORD)v396;
      v99 = v391;
      v402 = v396;
      v47 = (_DWORD *)v400;
      v388 = v391;
      v389 = v400;
    }
    v204 = (__int64)v396;
    while ( 1 )
    {
      if ( (__int64)(v203 - v202) < 18 )
      {
        v205 = v99;
        if ( v99 > 18 )
          v205 = 18;
        v206 = v203;
        if ( v202 + v205 > v201 + v203 - 4 )
        {
          v205 = v203 - v202 + v201 - 4;
          v206 = v203;
        }
        v207 = v205 + v202 - v206;
        if ( v207 > 0 )
        {
          v203 += v207;
          v201 -= v207;
          v400 = v203;
          v391 = v201;
          v396 = (const unsigned __int8 *)(v207 + v204);
        }
      }
      v208 = v203 + v201;
      v386 = v201;
      v406 = (_QWORD *)v208;
      if ( v208 > (unsigned __int64)(v409 - 12) )
      {
        v305 = v201;
      }
      else
      {
        v209 = v208 - 3;
        v210 = nbSearches[1];
        v211 = v208 - 3;
        v395 = nbSearches[1];
        v212 = v208 - 3;
        v213 = ctx->base;
        v214 = v208 - 3 - (_DWORD)v213;
        v215 = ctx->lowLimit;
        v216 = ctx->dictLimit;
        v217 = ctx->dictBase;
        dictCtx = ctx->dictCtx;
        v399 = v214;
        v397 = v213;
        v390 = v216;
        v218 = &v213[v216];
        if ( v215 + 0x10000 <= v214 )
          v215 = v214 - 0xFFFF;
        v407 = v217;
        v219 = v211 - v203;
        v387 = *(_DWORD *)v209;
        v220 = v212 - (_DWORD)v213;
        pattern32 = v215;
        v221 = 0;
        v393 = 0i64;
        v222 = 0i64;
        v223 = ctx->nextToUpdate;
        if ( (unsigned int)v223 < v220 )
        {
          v224 = &v213[v223];
          do
          {
            v225 = (unsigned int)(-1640531535 * *(_DWORD *)v224++);
            v226 = v225 >> 17;
            v227 = (unsigned int)(v223 - ctx->hashTable[v226]);
            if ( v227 > 0xFFFF )
              LOWORD(v227) = -1;
            ctx->chainTable[(unsigned __int16)v223] = v227;
            ctx->hashTable[v226] = v223;
            LODWORD(v223) = v223 + 1;
          }
          while ( (unsigned int)v223 < v220 );
          v222 = v393;
          LODWORD(v216) = v390;
          v217 = v407;
        }
        v228 = ctx;
        ctx->nextToUpdate = v220;
        v229 = (unsigned int)(-1640531535 * *(_DWORD *)v209);
        v230 = v219;
        v403 = v219;
        v231 = ctx->hashTable[v229 >> 17];
        if ( v231 >= v215 )
        {
          while ( 1 )
          {
            if ( !v210 )
              goto LABEL_495;
            v395 = v210 - 1;
            if ( v231 >= (unsigned int)v216 )
            {
              v232 = &v397[v231];
              v233 = v387;
              if ( *(_WORD *)(v386 + v400 - 1) == *(_WORD *)&v232[v386 - v230 - 1] && *(_DWORD *)v232 == v387 )
              {
                v234 = (_QWORD *)(v209 + 4);
                v235 = v232 + 4;
                v236 = (unsigned __int8 *)(v209 + 4);
                v237 = iEnd - 7;
                if ( v209 + 4 >= (unsigned __int64)(iEnd - 7) )
                {
LABEL_351:
                  if ( v236 >= v237 )
                  {
LABEL_354:
                    if ( v236 < iEnd - 3 && *v235 == *(_DWORD *)v236 )
                    {
                      v236 += 4;
                      ++v235;
                    }
                    if ( v236 < iEnd - 1 && *(_WORD *)v235 == *(_WORD *)v236 )
                    {
                      v236 += 2;
                      v235 = (_DWORD *)((char *)v235 + 2);
                    }
                    if ( v236 < iEnd && *(_BYTE *)v235 == *v236 )
                      LODWORD(v236) = (_DWORD)v236 + 1;
                    v239 = (_DWORD)v236 - (_DWORD)v234;
                    v240 = 0;
                  }
                  else
                  {
                    while ( *(_QWORD *)v235 == *(_QWORD *)v236 )
                    {
                      v236 += 8;
                      v235 += 2;
                      if ( v236 >= v237 )
                        goto LABEL_354;
                    }
                    _BitScanForward64(&v244, *(_QWORD *)v235 ^ *(_QWORD *)v236);
                    v240 = 0;
                    HIWORD(v384) = 0;
                    v239 = ((unsigned int)v244 >> 3) - (_DWORD)v234 + (_DWORD)v236;
                  }
                }
                else
                {
                  v238 = *(_QWORD *)v235 ^ *v234;
                  if ( !v238 )
                  {
                    v236 = (unsigned __int8 *)(v209 + 12);
                    v235 = v232 + 12;
                    goto LABEL_351;
                  }
                  v240 = 0;
                  _BitScanForward64(&v243, v238);
                  HIWORD(v384) = 0;
                  v239 = (unsigned int)v243 >> 3;
                }
                v241 = v239 + 4;
                if ( v230 )
                {
                  v242 = (__int64)(v400 - v209) <= v218 - v232 ? (int)v218 - (int)v232 : v400 - v209;
                  if ( v242 < 0 )
                  {
                    v245 = (_BYTE *)(v209 - 1);
                    do
                    {
                      if ( *v245 != v232[(_QWORD)v245 - v209] )
                        break;
                      --v245;
                      --v240;
                    }
                    while ( (__int64)&v245[1 - v209] > v242 );
                  }
                }
                v246 = v241 - v240;
                if ( v246 > v386 )
                {
                  v386 = v246;
                  v404 = &v232[v240];
                  v408 = v240 + v209;
                }
                LODWORD(v216) = v390;
              }
              v215 = pattern32;
              goto LABEL_378;
            }
            v250 = &v217[v231];
            if ( *(_DWORD *)v250 != v387 )
            {
              v222 = v393;
              v233 = v387;
              goto LABEL_378;
            }
            v251 = (unsigned __int8 *)(v209 + 4);
            v252 = &v217[v228->lowLimit];
            v253 = v216;
            v254 = iEnd;
            v255 = v250 + 4;
            v256 = v209 + v253 - v231;
            if ( v256 <= (unsigned __int64)iEnd )
              v254 = (unsigned __int8 *)v256;
            v257 = (unsigned __int8 *)(v209 + 4);
            v258 = v254 - 7;
            if ( v251 < v254 - 7 )
            {
              if ( *v255 != *(_QWORD *)v251 )
              {
                _BitScanForward64(&v268, *v255 ^ *(_QWORD *)v251);
                HIWORD(v384) = 0;
                v259 = (unsigned int)v268 >> 3;
                goto LABEL_402;
              }
              v257 = (unsigned __int8 *)(v209 + 12);
              v255 = v250 + 12;
            }
            if ( v257 >= v258 )
            {
LABEL_392:
              if ( v257 < v254 - 3 && *(_DWORD *)v255 == *(_DWORD *)v257 )
              {
                v257 += 4;
                v255 = (_QWORD *)((char *)v255 + 4);
              }
              if ( v257 < v254 - 1 && *(_WORD *)v255 == *(_WORD *)v257 )
              {
                v257 += 2;
                v255 = (_QWORD *)((char *)v255 + 2);
              }
              if ( v257 < v254 && *(_BYTE *)v255 == *v257 )
                LODWORD(v257) = (_DWORD)v257 + 1;
              v259 = (_DWORD)v257 - (_DWORD)v251;
            }
            else
            {
              while ( *v255 == *(_QWORD *)v257 )
              {
                v257 += 8;
                ++v255;
                if ( v257 >= v258 )
                  goto LABEL_392;
              }
              _BitScanForward64(&v269, *v255 ^ *(_QWORD *)v257);
              HIWORD(v384) = 0;
              v259 = ((unsigned int)v269 >> 3) - (_DWORD)v251 + (_DWORD)v257;
            }
LABEL_402:
            v260 = v259 + 4;
            v261 = (unsigned __int8 *)(v209 + (int)(v259 + 4));
            if ( v261 == v254 && v254 < iEnd )
            {
              v262 = iEnd - 7;
              v263 = v218;
              v264 = (unsigned __int8 *)(v209 + v260);
              if ( v261 >= iEnd - 7 )
              {
LABEL_407:
                if ( v264 >= v262 )
                {
LABEL_410:
                  if ( v264 < iEnd - 3 && *(_DWORD *)v263 == *(_DWORD *)v264 )
                  {
                    v264 += 4;
                    v263 += 4;
                  }
                  if ( v264 < iEnd - 1 && *(_WORD *)v263 == *(_WORD *)v264 )
                  {
                    v264 += 2;
                    v263 += 2;
                  }
                  if ( v264 < iEnd && *v263 == *v264 )
                    LODWORD(v264) = (_DWORD)v264 + 1;
                  v265 = (_DWORD)v264 - (_DWORD)v261;
                }
                else
                {
                  while ( *(_QWORD *)v263 == *(_QWORD *)v264 )
                  {
                    v264 += 8;
                    v263 += 8;
                    if ( v264 >= v262 )
                      goto LABEL_410;
                  }
                  _BitScanForward64(&v271, *(_QWORD *)v263 ^ *(_QWORD *)v264);
                  HIWORD(v384) = 0;
                  v265 = ((unsigned int)v271 >> 3) - (_DWORD)v261 + (_DWORD)v264;
                }
              }
              else
              {
                if ( *(_QWORD *)v218 == *(_QWORD *)v261 )
                {
                  v264 = v261 + 8;
                  v263 = v218 + 8;
                  goto LABEL_407;
                }
                _BitScanForward64(&v270, *(_QWORD *)v218 ^ *(_QWORD *)v261);
                HIWORD(v384) = 0;
                v265 = (unsigned int)v270 >> 3;
              }
              v260 += v265;
            }
            v266 = 0;
            if ( v403 )
            {
              v267 = (__int64)(v400 - v209) <= v252 - v250 ? (int)v252 - (int)v250 : v400 - v209;
              if ( v267 < 0 )
              {
                v272 = &v250[-v209];
                v273 = (_BYTE *)(v209 - 1);
                do
                {
                  if ( *v273 != v273[(_QWORD)v272] )
                    break;
                  --v273;
                  --v266;
                }
                while ( (__int64)&v273[1 - v209] > v267 );
              }
            }
            v222 = v393;
            v274 = v260 - v266;
            v215 = pattern32;
            if ( v274 > v386 )
            {
              v386 = v274;
              v404 = &v397[v266 + (unsigned __int64)v231];
              v408 = v209 + v266;
            }
            LODWORD(v216) = v390;
            v233 = v387;
LABEL_378:
            v247 = chainTable[(unsigned __int16)v231];
            v231 -= v247;
            if ( v405 && v247 == 1 )
            {
              if ( v221 )
              {
                if ( v221 != 2 )
                  goto LABEL_457;
                v248 = iEnd;
              }
              else
              {
                if ( (_BYTE)v233 != HIBYTE(v233) || (unsigned __int16)v233 != HIWORD(v233) )
                {
                  LODWORD(v216) = v390;
                  v221 = 1;
                  goto LABEL_457;
                }
                v248 = iEnd;
                v221 = 2;
                v249 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v209 + 4), iEnd, v233);
                LODWORD(v216) = v390;
                v222 = v249 + 4;
                v393 = v222;
              }
              if ( v231 >= (unsigned int)v216 )
              {
                v275 = &v397[v231];
                if ( *(_DWORD *)v275 == v233 )
                {
                  v276 = indyfs_LZ4HC_countPattern(v275 + 4, v248, v233);
                  v278 = v218;
                  v279 = v276 + 4i64;
                  if ( (unsigned __int64)(v218 + 0xFFFF) < v209 )
                    v278 = (const unsigned __int8 *)(v209 - 0xFFFF);
                  HIWORD(v384) = HIWORD(v233);
                  v280 = v277;
                  if ( v277 >= (unsigned __int64)(v278 + 4) )
                  {
                    do
                    {
                      v281 = v280 - 4;
                      if ( *(_DWORD *)(v280 - 4) != v233 )
                        break;
                      v280 -= 4i64;
                    }
                    while ( v281 >= (unsigned __int64)(v278 + 4) );
                  }
                  if ( v280 > (unsigned __int64)v278 )
                  {
                    v282 = (char *)&v384 - v280 + 3;
                    do
                    {
                      v283 = v280 - 1;
                      if ( *(_BYTE *)(v280 - 1) != v282[v280] )
                        break;
                      --v280;
                    }
                    while ( v283 > (unsigned __int64)v278 );
                  }
                  v284 = (unsigned int)(v277 - v280);
                  if ( v284 + v279 < v222 || v279 > v222 )
                    v231 -= v284;
                  else
                    v231 += v279 - v222;
                  LODWORD(v216) = v390;
                }
                v215 = pattern32;
              }
            }
LABEL_457:
            v217 = v407;
            v210 = v395;
            v228 = ctx;
            if ( v231 < v215 )
              break;
            v230 = v403;
          }
        }
        if ( v210 )
        {
          if ( v399 - v215 < 0xFFFF )
          {
            v285 = dictCtx->end - dictCtx->base;
            v286 = dictCtx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v209) >> 17];
            v287 = v215 + v286 - v285;
            if ( (unsigned int)(v399 - v287) <= 0xFFFF )
            {
              v288 = v395;
              while ( 1 )
              {
                if ( !v288-- )
                  goto LABEL_495;
                v290 = dictCtx->base;
                v291 = &v290[v286];
                if ( *(_DWORD *)v291 == v387 )
                  break;
LABEL_494:
                v304 = dictCtx->chainTable[(unsigned __int16)v286];
                v287 -= v304;
                v286 -= v304;
                if ( (unsigned int)(v399 - v287) > 0xFFFF )
                  goto LABEL_495;
              }
              v292 = iEnd;
              v293 = (unsigned __int8 *)(v209 + 4);
              v294 = v291 + 4;
              v295 = (unsigned __int8 *)(v209 + 4);
              if ( v285 - v286 + v209 <= (unsigned __int64)iEnd )
                v292 = (unsigned __int8 *)(v285 - v286 + v209);
              v296 = v292 - 7;
              if ( v293 >= v292 - 7 )
              {
LABEL_469:
                if ( v295 >= v296 )
                {
LABEL_472:
                  if ( v295 < v292 - 3 && *v294 == *(_DWORD *)v295 )
                  {
                    v295 += 4;
                    ++v294;
                  }
                  if ( v295 < v292 - 1 && *(_WORD *)v294 == *(_WORD *)v295 )
                  {
                    v295 += 2;
                    v294 = (_DWORD *)((char *)v294 + 2);
                  }
                  if ( v295 < v292 && *(_BYTE *)v294 == *v295 )
                    LODWORD(v295) = (_DWORD)v295 + 1;
                  v297 = (_DWORD)v295 - (_DWORD)v293;
                  v298 = 0;
                }
                else
                {
                  while ( *(_QWORD *)v295 == *(_QWORD *)v294 )
                  {
                    v295 += 8;
                    v294 += 2;
                    if ( v295 >= v296 )
                      goto LABEL_472;
                  }
                  _BitScanForward64(&v301, *(_QWORD *)v295 ^ *(_QWORD *)v294);
                  v298 = 0;
                  HIWORD(v384) = 0;
                  v297 = ((unsigned int)v301 >> 3) - (_DWORD)v293 + (_DWORD)v295;
                }
              }
              else
              {
                if ( *(_QWORD *)v293 == *(_QWORD *)v294 )
                {
                  v295 = (unsigned __int8 *)(v209 + 12);
                  v294 = v291 + 12;
                  goto LABEL_469;
                }
                v298 = 0;
                _BitScanForward64(&v300, *(_QWORD *)v293 ^ *(_QWORD *)v294);
                HIWORD(v384) = 0;
                v297 = (unsigned int)v300 >> 3;
              }
              if ( v403 )
              {
                v299 = (__int64)(v400 - v209) <= (__int64)(dictCtx->dictLimit - (unsigned __int64)v286) ? (int)v290 + dictCtx->dictLimit - (int)v291 : v400 - v209;
                if ( v299 < 0 )
                {
                  v302 = (char *)&v291[-v209];
                  v303 = (_BYTE *)(v209 - 1);
                  do
                  {
                    if ( *v303 != v303[(_QWORD)v302] )
                      break;
                    --v303;
                    --v298;
                  }
                  while ( (__int64)&v303[1 - v209] > v299 );
                }
              }
              if ( (int)(v297 + 4 - v298) > v386 )
              {
                v386 = v297 + 4 - v298;
                v404 = &v397[v287 + v298];
                v408 = v209 + v298;
              }
              goto LABEL_494;
            }
          }
        }
LABEL_495:
        v305 = v386;
        v208 = (unsigned __int64)v406;
        v203 = v400;
        v201 = v391;
        v202 = v389;
        v99 = v388;
      }
      if ( v305 == v201 )
        break;
      v306 = v408;
      v307 = v202 + v99;
      if ( v408 >= v307 + 3 )
      {
        if ( v203 < v307 )
        {
          if ( (__int64)(v203 - v202) < 18 )
          {
            if ( v99 > 18 )
              v99 = 18;
            v308 = v203;
            if ( v202 + v99 > v208 - 4 )
            {
              v99 = v203 - v202 + v201 - 4;
              v308 = v203;
            }
            v309 = (__int64)v396;
            v310 = v99 + v202 - v308;
            if ( v310 > 0 )
            {
              v203 += v310;
              v309 = (__int64)&v396[v310];
              v201 -= v310;
            }
            goto LABEL_511;
          }
          v99 = v203 - v202;
        }
        v309 = (__int64)v396;
LABEL_511:
        v311 = v401;
        v312 = Src;
        v313 = limit;
        v314 = v202 - (_QWORD)Src;
        v315 = v394;
        v316 = v401 + 1;
        if ( limit && (unsigned __int64)v316 + (v314 >> 8) + v314 + 8 > v394 )
          goto LABEL_620;
        if ( v314 < 0xF )
        {
          *v401 = 16 * v314;
        }
        else
        {
          v317 = v314 - 15;
          *v401 = -16;
          if ( v314 - 15 >= 0xFF )
          {
            v318 = v316;
            v316 = (_QWORD *)((char *)v316 + v317 / 0xFF);
            memset(v318, 255, v317 / 0xFF);
            v305 = v386;
            v312 = Src;
            v313 = limit;
            v317 %= 0xFFui64;
          }
          *(_BYTE *)v316 = v317;
          v316 = (_QWORD *)((char *)v316 + 1);
          v202 = v389;
        }
        v319 = (_WORD *)((char *)v316 + v314);
        v320 = v312 - (_BYTE *)v316;
        do
        {
          *v316 = *(_QWORD *)((char *)v316 + v320);
          ++v316;
        }
        while ( v316 < (_QWORD *)v319 );
        *v319 = v202 - (_WORD)v402;
        v321 = v319 + 1;
        v401 = (char *)v321;
        v322 = v99 - 4;
        if ( v313 && (unsigned __int64)v321 + ((unsigned __int64)(v99 - 4) >> 8) + 6 > v315 )
        {
LABEL_619:
          v26 = (char *)v394;
LABEL_621:
          v13 = 0;
          if ( v313 != 2 )
            return v13;
          v24 = (__int64)v409;
          v25 = v311;
          v23 = Src;
          goto LABEL_623;
        }
        v323 = *v311;
        if ( v322 < 0xF )
        {
          *v311 = v323 + v99 - 4;
        }
        else
        {
          v324 = v322 - 15;
          *v311 = v323 + 15;
          if ( v324 >= 0x1FE )
          {
            v325 = v324 / 0x1FE;
            v324 %= 0x1FEui64;
            do
            {
              *v321++ = -1;
              --v325;
            }
            while ( v325 );
          }
          if ( v324 >= 0xFF )
          {
            LOBYTE(v324) = v324 + 1;
            *(_BYTE *)v321 = -1;
            v321 = (_WORD *)((char *)v321 + 1);
          }
          *(_BYTE *)v321 = v324;
          v401 = (char *)v321 + 1;
        }
        v326 = v99;
        v99 = v201;
        v389 = v203;
        Src = (void *)(v202 + v326);
        v202 = v203;
        v402 = (_QWORD *)v309;
        v388 = v201;
        goto LABEL_500;
      }
      if ( v408 >= v307 )
      {
        v327 = (__int64)v396;
        v102 = (__int64)v404;
        if ( v203 < v307 )
        {
          v328 = v99 + v202 - v203;
          v201 -= v328;
          v203 += v328;
          v327 = (__int64)&v396[v328];
          v400 = v203;
          v396 = (const unsigned __int8 *)v327;
          if ( v201 < 4 )
          {
            v203 = v408;
            v400 = v408;
            v327 = (__int64)v404;
            v396 = v404;
            v201 = v305;
          }
        }
        v311 = v401;
        v329 = Src;
        v313 = limit;
        v330 = v202 - (_QWORD)Src;
        v331 = v401 + 1;
        if ( limit && (unsigned __int64)v331 + (v330 >> 8) + v330 + 8 > v394 )
          goto LABEL_619;
        if ( v330 < 0xF )
        {
          *v401 = 16 * v330;
        }
        else
        {
          v332 = v330 - 15;
          *v401 = -16;
          if ( v330 - 15 >= 0xFF )
          {
            v333 = v331;
            v331 = (_QWORD *)((char *)v331 + v332 / 0xFF);
            memset(v333, 255, v332 / 0xFF);
            v305 = v386;
            v329 = Src;
            v313 = limit;
            v332 %= 0xFFui64;
          }
          *(_BYTE *)v331 = v332;
          v331 = (_QWORD *)((char *)v331 + 1);
          v202 = v389;
        }
        v334 = (_WORD *)((char *)v331 + v330);
        v335 = v329 - (_BYTE *)v331;
        do
        {
          *v331 = *(_QWORD *)((char *)v331 + v335);
          ++v331;
        }
        while ( v331 < (_QWORD *)v334 );
        *v334 = v202 - (_WORD)v402;
        v336 = v334 + 1;
        v401 = (char *)v336;
        v337 = v99 - 4;
        if ( v313 )
        {
          if ( (unsigned __int64)v336 + ((unsigned __int64)(v99 - 4) >> 8) + 6 > v394 )
            goto LABEL_619;
        }
        v338 = *v311;
        if ( v337 < 0xF )
        {
          *v311 = v338 + v99 - 4;
        }
        else
        {
          v339 = v337 - 15;
          *v311 = v338 + 15;
          if ( v339 >= 0x1FE )
          {
            v340 = v339 / 0x1FE;
            v339 %= 0x1FEui64;
            do
            {
              *v336++ = -1;
              --v340;
            }
            while ( v340 );
          }
          if ( v339 >= 0xFF )
          {
            LOBYTE(v339) = v339 + 1;
            *(_BYTE *)v336 = -1;
            v336 = (_WORD *)((char *)v336 + 1);
          }
          *(_BYTE *)v336 = v339;
          v401 = (char *)v336 + 1;
        }
        v341 = v99;
        v99 = v305;
        v388 = v305;
        Src = (void *)(v202 + v341);
        v47 = (_DWORD *)v306;
        v389 = v306;
        v402 = (_QWORD *)v102;
        hashTable = v203;
        v406 = (_QWORD *)v327;
        v399 = v201;
        goto LABEL_155;
      }
LABEL_500:
      v204 = (__int64)v404;
      v203 = v306;
      v396 = v404;
      v201 = v305;
      v400 = v306;
      v391 = v305;
    }
    if ( v203 < v202 + v99 )
      v99 = v203 - v202;
    v311 = v401;
    v342 = Src;
    v313 = limit;
    v343 = v202 - (_QWORD)Src;
    v315 = v394;
    v344 = v401 + 1;
    if ( limit && (unsigned __int64)v344 + v343 + (v343 >> 8) + 8 > v394 )
    {
LABEL_620:
      v26 = (char *)v315;
      goto LABEL_621;
    }
    if ( v343 < 0xF )
    {
      *v401 = 16 * v343;
    }
    else
    {
      v345 = v343 - 15;
      *v401 = -16;
      if ( v343 - 15 >= 0xFF )
      {
        v346 = v344;
        v344 = (_QWORD *)((char *)v344 + v345 / 0xFF);
        memset(v346, 255, v345 / 0xFF);
        v342 = Src;
        v313 = limit;
        v345 %= 0xFFui64;
      }
      *(_BYTE *)v344 = v345;
      v344 = (_QWORD *)((char *)v344 + 1);
      v202 = v389;
    }
    v347 = (_WORD *)((char *)v344 + v343);
    v348 = v342 - (_BYTE *)v344;
    do
    {
      *v344 = *(_QWORD *)((char *)v344 + v348);
      ++v344;
    }
    while ( v344 < (_QWORD *)v347 );
    *v347 = v202 - (_WORD)v402;
    v349 = v347 + 1;
    v350 = v99 - 4;
    if ( v313 && (unsigned __int64)&v349[((unsigned __int64)(v99 - 4) >> 8) + 6] > v315 )
      goto LABEL_619;
    v351 = *v311;
    if ( v350 < 0xF )
    {
      *v311 = v351 + v99 - 4;
    }
    else
    {
      v352 = v350 - 15;
      *v311 = v351 + 15;
      if ( v352 >= 0x1FE )
      {
        v353 = v352 / 0x1FE;
        v352 %= 0x1FEui64;
        do
        {
          *(_WORD *)v349 = -1;
          v349 += 2;
          --v353;
        }
        while ( v353 );
        v313 = limit;
      }
      if ( v352 >= 0xFF )
      {
        LOBYTE(v352) = v352 + 1;
        *v349++ = -1;
      }
      *v349++ = v352;
    }
    v354 = (void *)(v202 + v99);
    v311 = v349;
    v355 = v349;
    Src = v354;
    v356 = v349;
    v357 = v203 - (_QWORD)v354;
    v358 = v349 + 1;
    if ( v313 )
    {
      if ( (unsigned __int64)v358 + v357 + (v357 >> 8) + 8 > v315 )
        goto LABEL_619;
    }
    if ( v357 < 0xF )
    {
      *v355 = 16 * v357;
    }
    else
    {
      v359 = v357 - 15;
      *v355 = -16;
      if ( v357 - 15 >= 0xFF )
      {
        v360 = v358;
        v358 = (_QWORD *)((char *)v358 + v359 / 0xFF);
        memset(v360, 255, v359 / 0xFF);
        v354 = Src;
        v313 = limit;
        v359 %= 0xFFui64;
      }
      *(_BYTE *)v358 = v359;
      v358 = (_QWORD *)((char *)v358 + 1);
    }
    v361 = (_WORD *)((char *)v358 + v357);
    v362 = (_BYTE *)v354 - (_BYTE *)v358;
    do
    {
      *v358 = *(_QWORD *)((char *)v358 + v362);
      ++v358;
    }
    while ( v358 < (_QWORD *)v361 );
    *v361 = v203 - (_WORD)v396;
    v25 = (char *)(v361 + 1);
    v401 = v25;
    v363 = v201 - 4;
    if ( v313 )
    {
      if ( (unsigned __int64)&v25[((unsigned __int64)(v201 - 4) >> 8) + 6] > v394 )
        goto LABEL_619;
    }
    v364 = *v356;
    if ( v363 < 0xF )
    {
      *v355 = v364 + v201 - 4;
      v27 = (unsigned int *)(v203 + v201);
    }
    else
    {
      v365 = v363 - 15;
      *v355 = v364 + 15;
      if ( v365 >= 0x1FE )
      {
        v366 = v365 / 0x1FE;
        v365 %= 0x1FEui64;
        do
        {
          *(_WORD *)v25 = -1;
          v25 += 2;
          --v366;
        }
        while ( v366 );
      }
      if ( v365 >= 0xFF )
      {
        LOBYTE(v365) = v365 + 1;
        *v25++ = -1;
      }
      *v25++ = v365;
      v401 = v25;
      v27 = (unsigned int *)(v203 + v201);
    }
LABEL_616:
    Src = v27;
    v23 = v27;
LABEL_617:
    v24 = (__int64)v409;
    v13 = 0;
    v389 = (unsigned __int64)v27;
    if ( v27 <= (unsigned int *)v409 - 3 )
    {
      v16 = ctx;
      continue;
    }
    break;
  }
  v313 = limit;
  v26 = (char *)v394;
LABEL_623:
  LODWORD(v10) = v415;
  v7 = srcSizePtr;
LABEL_626:
  v378 = v24 - (_QWORD)v23;
  v379 = (unsigned __int64)(v26 + 5);
  if ( v313 != 2 )
    v379 = (unsigned __int64)v26;
  if ( v313 == notLimited || (unsigned __int64)&v25[v378 + 1 + (v378 + 240) / 0xFF] <= v379 )
    goto LABEL_632;
  if ( limit != limitedOutput )
  {
    v378 = v379 - (_QWORD)v25 - 1 - (v379 - (unsigned __int64)v25 - 1 + 240) / 0xFF;
LABEL_632:
    v380 = v378 + (_DWORD)v23;
    if ( v378 < 0xF )
    {
      *v25 = 16 * v378;
    }
    else
    {
      *v25 = -16;
      v381 = v378 - 15;
      ++v25;
      if ( v378 - 15 >= 0xFF )
      {
        v382 = v25;
        v25 += v381 / 0xFF;
        memset(v382, 255, v381 / 0xFF);
        v381 %= 0xFFui64;
      }
      *v25 = v381;
    }
    v383 = v25 + 1;
    memcpy_0(v383, v23, v378);
    *v7 = v380 - (_DWORD)v10;
    return (_DWORD)v383 + v378 - v416;
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
  __int64 v21; 
  void *v22; 
  char *v23; 
  __int64 v24; 
  char *v25; 
  unsigned __int64 v26; 
  __int64 chainTable; 
  unsigned int *v28; 
  const unsigned __int8 *base; 
  unsigned int lowLimit; 
  unsigned int v31; 
  unsigned int v32; 
  int v33; 
  unsigned int v34; 
  unsigned __int64 v35; 
  int v36; 
  __int64 nextToUpdate; 
  unsigned int v38; 
  bool v39; 
  const unsigned __int8 *v40; 
  int v41; 
  unsigned int v42; 
  const unsigned __int8 *v43; 
  unsigned __int64 v44; 
  __int64 v45; 
  unsigned __int64 v46; 
  _DWORD *v47; 
  indyfs_LZ4HC_CCtx_internal *v48; 
  unsigned int v49; 
  const unsigned __int8 *v50; 
  unsigned __int8 *v51; 
  unsigned __int8 *v52; 
  unsigned __int8 *v53; 
  unsigned __int8 *v54; 
  _QWORD *v55; 
  unsigned int v56; 
  unsigned __int64 v57; 
  unsigned __int64 v58; 
  unsigned int v59; 
  unsigned __int8 *v60; 
  unsigned __int8 *v61; 
  const unsigned __int8 *v62; 
  unsigned __int64 v63; 
  unsigned __int8 *v64; 
  unsigned __int8 *v65; 
  unsigned int v66; 
  signed int v67; 
  unsigned __int8 *v68; 
  const unsigned __int8 *v69; 
  unsigned __int8 *v70; 
  unsigned __int8 *v71; 
  unsigned int v72; 
  int v73; 
  unsigned int v74; 
  unsigned __int64 v75; 
  unsigned __int64 v76; 
  unsigned __int64 v77; 
  unsigned __int64 v78; 
  const unsigned __int8 *v79; 
  unsigned int v80; 
  unsigned __int64 v81; 
  char *v82; 
  unsigned __int64 v83; 
  unsigned __int64 v84; 
  unsigned __int64 v85; 
  char *v86; 
  unsigned __int64 v87; 
  __int64 v88; 
  int v89; 
  __int16 v90; 
  __int64 v91; 
  unsigned __int64 v92; 
  unsigned int v93; 
  unsigned __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  unsigned int v97; 
  int v98; 
  unsigned int v99; 
  unsigned int v100; 
  int v101; 
  _QWORD *v102; 
  int v103; 
  __int64 v104; 
  unsigned int v105; 
  int v106; 
  unsigned __int64 v107; 
  _DWORD *v108; 
  unsigned __int64 v109; 
  unsigned __int64 v110; 
  unsigned __int64 v111; 
  unsigned int v112; 
  __int64 v113; 
  _DWORD *v114; 
  _QWORD *v115; 
  _DWORD *v116; 
  unsigned __int8 *v117; 
  unsigned __int8 *v118; 
  unsigned __int64 v119; 
  unsigned int v120; 
  int v121; 
  unsigned int v122; 
  int v123; 
  unsigned __int64 v124; 
  unsigned __int64 v125; 
  _BYTE *v126; 
  __int64 v127; 
  int v128; 
  _DWORD *v129; 
  unsigned __int8 *v130; 
  _QWORD *v131; 
  int v132; 
  unsigned __int8 *v133; 
  unsigned __int64 v134; 
  __int64 v135; 
  unsigned __int8 *v136; 
  unsigned __int8 *v137; 
  unsigned int v138; 
  signed int v139; 
  unsigned __int8 *v140; 
  unsigned __int8 *v141; 
  _DWORD *v142; 
  unsigned __int8 *v143; 
  unsigned int v144; 
  int v145; 
  int v146; 
  unsigned __int64 v147; 
  unsigned __int64 v148; 
  unsigned __int64 v149; 
  unsigned __int64 v150; 
  _BYTE *v151; 
  int v152; 
  int v153; 
  unsigned int v154; 
  unsigned __int8 *v155; 
  __int64 v156; 
  unsigned int v157; 
  unsigned __int64 v158; 
  _QWORD *v159; 
  unsigned __int64 v160; 
  unsigned __int64 v161; 
  unsigned __int64 v162; 
  char *v163; 
  unsigned __int64 v164; 
  __int64 v165; 
  unsigned __int64 v166; 
  int v167; 
  unsigned __int64 v168; 
  unsigned __int64 v169; 
  __int64 v170; 
  int v171; 
  int v172; 
  int v173; 
  unsigned __int64 v174; 
  unsigned __int64 v175; 
  unsigned int v176; 
  __int64 v177; 
  int v178; 
  unsigned int v179; 
  unsigned int v180; 
  _QWORD *v181; 
  unsigned int v182; 
  int v183; 
  __int64 v184; 
  int v185; 
  unsigned int v186; 
  int v187; 
  unsigned int v188; 
  unsigned __int64 v189; 
  _DWORD *v190; 
  unsigned __int64 v191; 
  unsigned __int64 v192; 
  unsigned __int64 v193; 
  unsigned int v194; 
  __int64 v195; 
  _DWORD *v196; 
  _QWORD *v197; 
  _DWORD *v198; 
  unsigned __int8 *v199; 
  unsigned __int8 *v200; 
  unsigned __int64 v201; 
  unsigned int v202; 
  int v203; 
  unsigned int v204; 
  int v205; 
  unsigned __int64 v206; 
  unsigned __int64 v207; 
  _BYTE *v208; 
  int v209; 
  _DWORD *v210; 
  unsigned __int8 *v211; 
  unsigned __int8 *v212; 
  _QWORD *v213; 
  __int64 v214; 
  unsigned __int8 *v215; 
  unsigned __int8 *v216; 
  unsigned int v217; 
  signed int v218; 
  unsigned __int8 *v219; 
  unsigned __int8 *v220; 
  _DWORD *v221; 
  unsigned __int8 *v222; 
  unsigned int v223; 
  int v224; 
  int v225; 
  unsigned __int64 v226; 
  unsigned __int64 v227; 
  unsigned __int64 v228; 
  unsigned __int64 v229; 
  char *v230; 
  _BYTE *v231; 
  int v232; 
  int v233; 
  unsigned __int8 *v234; 
  __int64 v235; 
  unsigned int v236; 
  unsigned __int64 v237; 
  _QWORD *v238; 
  unsigned __int64 v239; 
  unsigned __int64 v240; 
  unsigned __int64 v241; 
  char *v242; 
  unsigned __int64 v243; 
  __int64 v244; 
  unsigned __int64 v245; 
  int v246; 
  char *v247; 
  _BYTE *v248; 
  limitedOutput_directive v249; 
  unsigned __int64 v250; 
  _QWORD *v251; 
  unsigned __int64 v252; 
  void *v253; 
  _WORD *v254; 
  signed __int64 v255; 
  _WORD *v256; 
  unsigned __int64 v257; 
  char v258; 
  unsigned __int64 v259; 
  unsigned __int64 v260; 
  __int64 v261; 
  void *v262; 
  int v263; 
  __int64 v264; 
  _BYTE *v265; 
  unsigned __int64 v266; 
  _QWORD *v267; 
  unsigned __int64 v268; 
  void *v269; 
  _WORD *v270; 
  signed __int64 v271; 
  _WORD *v272; 
  unsigned __int64 v273; 
  char v274; 
  unsigned __int64 v275; 
  unsigned __int64 v276; 
  __int64 v277; 
  _BYTE *v278; 
  unsigned __int64 v279; 
  _QWORD *v280; 
  unsigned __int64 v281; 
  void *v282; 
  _WORD *v283; 
  signed __int64 v284; 
  _BYTE *v285; 
  unsigned __int64 v286; 
  char v287; 
  unsigned __int64 v288; 
  unsigned __int64 v289; 
  __int64 v290; 
  unsigned __int64 v291; 
  void *v292; 
  _BYTE *v293; 
  char *v294; 
  _QWORD *v295; 
  unsigned __int64 v296; 
  unsigned __int64 v297; 
  void *v298; 
  _WORD *v299; 
  signed __int64 v300; 
  unsigned __int64 v301; 
  char v302; 
  unsigned __int64 v303; 
  unsigned __int64 v304; 
  _BYTE *v305; 
  unsigned __int64 v306; 
  _QWORD *v307; 
  unsigned __int64 v308; 
  void *v309; 
  _WORD *v310; 
  signed __int64 v311; 
  unsigned __int64 v312; 
  char v313; 
  unsigned __int64 v314; 
  unsigned __int64 v315; 
  size_t v316; 
  unsigned __int64 v317; 
  int v318; 
  size_t v319; 
  char *v320; 
  void *v321; 
  int v322; 
  int v323; 
  int v324; 
  int v325; 
  unsigned int v326; 
  int v327; 
  int v328; 
  int v329; 
  int dictLimit; 
  unsigned __int8 *iEnd; 
  unsigned __int64 v332; 
  __int64 v333; 
  unsigned __int64 v334; 
  void *Src; 
  int v336; 
  unsigned int v337; 
  const unsigned __int8 *v338; 
  char *v339; 
  unsigned __int64 v340; 
  unsigned int v341; 
  const unsigned __int8 *v342; 
  unsigned __int64 v343; 
  int v344; 
  const unsigned __int8 *v345; 
  const unsigned __int8 *dictBase; 
  _DWORD *v347; 
  unsigned __int64 v348; 
  __int64 v349; 
  unsigned __int16 *v350; 
  char *v351; 
  int nbSearches[2]; 
  __int64 v353; 
  unsigned __int64 v354; 
  int v356; 
  int v357; 
  int cLevela; 

  v357 = (int)dst;
  v356 = (int)src;
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
  _RCX = 3i64 * v13;
  _RAX = dword_1447549F0;
  __asm { vmovsd  xmm0, qword ptr [rax+rcx*4] }
  sufficient_len = dword_1447549F0[3 * v13 + 2];
  fullUpdate = 0;
  __asm { vmovsd  qword ptr [rbp+80h+var_60], xmm0 }
  if ( nbSearches[0] )
  {
    LOBYTE(fullUpdate) = v13 == 12;
    return indyfs_LZ4HC_compress_optimal(v10, v9, dst, v7, dstCapacity, nbSearches[1], sufficient_len, limit, fullUpdate, noDictCtx, (const HCfavor_e)favorDecSpeed);
  }
  v21 = *v7;
  v22 = v9;
  v23 = dst;
  v339 = dst;
  LOBYTE(fullUpdate) = nbSearches[1] > 0x40u;
  v24 = (__int64)&v9[v21];
  v344 = fullUpdate;
  v25 = &dst[dstCapacity];
  v332 = (unsigned __int64)v9;
  Src = v9;
  v351 = &v9[v21];
  v26 = (unsigned __int64)(v25 - 5);
  iEnd = (unsigned __int8 *)&v9[v21 - 5];
  if ( limit != 2 )
    v26 = (unsigned __int64)v25;
  v342 = NULL;
  v334 = v26;
  v340 = 0i64;
  v338 = NULL;
  v348 = 0i64;
  v345 = NULL;
  *v7 = 0;
  if ( (int)v21 < 13 || (unsigned __int64)v9 > v24 - 12 )
  {
    v249 = limit;
    goto LABEL_518;
  }
  chainTable = (__int64)v10->chainTable;
  v28 = (unsigned int *)v9;
  v350 = v10->chainTable;
  while ( 2 )
  {
    base = v10->base;
    lowLimit = v10->lowLimit;
    v31 = (_DWORD)v28 - (_DWORD)base;
    v33 = 0;
    v34 = *v28;
    v35 = 0i64;
    v36 = (int)v28;
    cLevela = 3;
    nextToUpdate = v10->nextToUpdate;
    v38 = v31 - 0xFFFF;
    dictLimit = v10->dictLimit;
    v32 = dictLimit;
    v39 = lowLimit + 0x10000 <= v31;
    v40 = &base[dictLimit];
    v41 = nbSearches[1];
    if ( v39 )
      lowLimit = v38;
    v322 = nbSearches[1];
    v42 = v36 - (_DWORD)base;
    v326 = lowLimit;
    dictBase = v10->dictBase;
    if ( (unsigned int)nextToUpdate < v42 )
    {
      v43 = &base[nextToUpdate];
      do
      {
        v44 = (unsigned int)(-1640531535 * *(_DWORD *)v43++);
        v45 = v44 >> 17;
        v46 = (unsigned int)(nextToUpdate - v10->hashTable[v45]);
        if ( v46 > 0xFFFF )
          LOWORD(v46) = -1;
        *(_WORD *)(chainTable + 2i64 * (unsigned __int16)nextToUpdate) = v46;
        v10->hashTable[v45] = nextToUpdate;
        LODWORD(nextToUpdate) = nextToUpdate + 1;
      }
      while ( (unsigned int)nextToUpdate < v42 );
      v32 = dictLimit;
      v41 = v322;
    }
    v47 = (_DWORD *)v332;
    v10->nextToUpdate = v42;
    v48 = ctx;
    v49 = ctx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *v47) >> 17];
    if ( v49 >= lowLimit )
    {
      while ( 1 )
      {
        if ( !v41 )
        {
LABEL_119:
          v48 = ctx;
          goto LABEL_120;
        }
        v323 = v41 - 1;
        if ( v49 < v32 )
        {
          if ( *(_DWORD *)&dictBase[v49] == v34 )
          {
            v59 = v32;
            v60 = (unsigned __int8 *)(v47 + 1);
            v61 = iEnd;
            v62 = &dictBase[v49 + 4];
            v63 = (unsigned __int64)v47 + v59 - v49;
            if ( v63 <= (unsigned __int64)iEnd )
              v61 = (unsigned __int8 *)v63;
            v64 = (unsigned __int8 *)(v47 + 1);
            v65 = v61 - 7;
            if ( v60 >= v61 - 7 )
              goto LABEL_54;
            if ( *(_QWORD *)v60 != *(_QWORD *)v62 )
            {
              _BitScanForward64(&v75, *(_QWORD *)v60 ^ *(_QWORD *)v62);
              HIWORD(v329) = 0;
              v66 = (unsigned int)v75 >> 3;
            }
            else
            {
              v64 = v60 + 8;
              v62 = &dictBase[v49 + 12];
LABEL_54:
              if ( v64 >= v65 )
              {
LABEL_57:
                if ( v64 < v61 - 3 && *(_DWORD *)v62 == *(_DWORD *)v64 )
                {
                  v64 += 4;
                  v62 += 4;
                }
                if ( v64 < v61 - 1 && *(_WORD *)v62 == *(_WORD *)v64 )
                {
                  v64 += 2;
                  v62 += 2;
                }
                if ( v64 < v61 && *v62 == *v64 )
                  LODWORD(v64) = (_DWORD)v64 + 1;
                v66 = (_DWORD)v64 - (_DWORD)v60;
              }
              else
              {
                while ( *(_QWORD *)v64 == *(_QWORD *)v62 )
                {
                  v64 += 8;
                  v62 += 8;
                  if ( v64 >= v65 )
                    goto LABEL_57;
                }
                _BitScanForward64(&v76, *(_QWORD *)v64 ^ *(_QWORD *)v62);
                HIWORD(v329) = 0;
                v66 = ((unsigned int)v76 >> 3) - (_DWORD)v60 + (_DWORD)v64;
              }
            }
            v47 = (_DWORD *)v332;
            v67 = v66 + 4;
            v68 = (unsigned __int8 *)(v332 + (int)(v66 + 4));
            if ( v68 == v61 && v61 < iEnd )
            {
              v69 = v40;
              v70 = (unsigned __int8 *)(v332 + v67);
              v71 = iEnd - 7;
              if ( v68 >= iEnd - 7 )
              {
LABEL_72:
                if ( v70 >= v71 )
                {
LABEL_75:
                  if ( v70 < iEnd - 3 && *(_DWORD *)v69 == *(_DWORD *)v70 )
                  {
                    v70 += 4;
                    v69 += 4;
                  }
                  if ( v70 < iEnd - 1 && *(_WORD *)v69 == *(_WORD *)v70 )
                  {
                    v70 += 2;
                    v69 += 2;
                  }
                  if ( v70 < iEnd && *v69 == *v70 )
                    LODWORD(v70) = (_DWORD)v70 + 1;
                  v72 = (_DWORD)v70 - (_DWORD)v68;
                }
                else
                {
                  while ( *(_QWORD *)v69 == *(_QWORD *)v70 )
                  {
                    v70 += 8;
                    v69 += 8;
                    if ( v70 >= v71 )
                      goto LABEL_75;
                  }
                  _BitScanForward64(&v78, *(_QWORD *)v69 ^ *(_QWORD *)v70);
                  HIWORD(v329) = 0;
                  v72 = ((unsigned int)v78 >> 3) - (_DWORD)v68 + (_DWORD)v70;
                }
              }
              else
              {
                if ( *(_QWORD *)v40 == *(_QWORD *)v68 )
                {
                  v70 = v68 + 8;
                  v69 = v40 + 8;
                  goto LABEL_72;
                }
                _BitScanForward64(&v77, *(_QWORD *)v40 ^ *(_QWORD *)v68);
                HIWORD(v329) = 0;
                v72 = (unsigned int)v77 >> 3;
              }
              v47 = (_DWORD *)v332;
              v67 += v72;
            }
            v32 = dictLimit;
            if ( v67 > cLevela )
            {
              cLevela = v67;
              v342 = &base[v49];
            }
            lowLimit = v326;
          }
LABEL_89:
          v51 = iEnd;
          goto LABEL_90;
        }
        v50 = &base[v49];
        if ( *(_WORD *)((char *)v47 + cLevela - 1) != *(_WORD *)&v50[cLevela - 1] )
          goto LABEL_89;
        v51 = iEnd;
        if ( *(_DWORD *)v50 == v34 )
          break;
LABEL_90:
        v73 = v350[(unsigned __int16)v49];
        v49 -= v73;
        if ( v344 && v73 == 1 )
        {
          if ( v33 )
          {
            if ( v33 == 2 )
              goto LABEL_101;
          }
          else
          {
            if ( (_BYTE)v34 == HIBYTE(v34) && (unsigned __int16)v34 == HIWORD(v34) )
            {
              v47 = (_DWORD *)v332;
              v33 = 2;
              v74 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v332 + 4), v51, v34);
              v32 = dictLimit;
              v35 = v74 + 4;
LABEL_101:
              if ( v49 >= v32 )
              {
                v79 = &base[v49];
                if ( *(_DWORD *)v79 == v34 )
                {
                  v80 = indyfs_LZ4HC_countPattern(v79 + 4, iEnd, v34);
                  v82 = (char *)v40;
                  v83 = v80 + 4i64;
                  if ( v40 + 0xFFFF < (const unsigned __int8 *)v47 )
                    v82 = (char *)v47 - 0xFFFF;
                  v337 = v34;
                  v84 = v81;
                  if ( v81 >= (unsigned __int64)(v82 + 4) )
                  {
                    do
                    {
                      v85 = v84 - 4;
                      if ( *(_DWORD *)(v84 - 4) != v34 )
                        break;
                      v84 -= 4i64;
                    }
                    while ( v85 >= (unsigned __int64)(v82 + 4) );
                  }
                  if ( v84 > (unsigned __int64)v82 )
                  {
                    v86 = (char *)&v337 - v84 + 3;
                    do
                    {
                      v87 = v84 - 1;
                      if ( *(_BYTE *)(v84 - 1) != v86[v84] )
                        break;
                      --v84;
                    }
                    while ( v87 > (unsigned __int64)v82 );
                  }
                  v88 = (unsigned int)(v81 - v84);
                  if ( v88 + v83 < v35 || v83 > v35 )
                    v49 -= v88;
                  else
                    v49 += v83 - v35;
                  v32 = dictLimit;
                }
              }
              lowLimit = v326;
              goto LABEL_118;
            }
            v33 = 1;
          }
        }
LABEL_118:
        v41 = v323;
        v47 = (_DWORD *)v332;
        if ( v49 < lowLimit )
          goto LABEL_119;
      }
      v52 = (unsigned __int8 *)(v47 + 1);
      v53 = iEnd - 7;
      v54 = v52;
      v55 = v50 + 4;
      if ( v52 < iEnd - 7 )
      {
        if ( *v55 != *(_QWORD *)v52 )
        {
          _BitScanForward64(&v57, *v55 ^ *(_QWORD *)v52);
          HIWORD(v329) = 0;
          v56 = (unsigned int)v57 >> 3;
LABEL_44:
          v32 = dictLimit;
          v47 = (_DWORD *)v332;
          if ( (int)(v56 + 4) > cLevela )
          {
            cLevela = v56 + 4;
            v342 = &base[v49];
          }
          goto LABEL_90;
        }
        v54 = v52 + 8;
        v55 = v50 + 12;
      }
      if ( v54 >= v53 )
      {
LABEL_34:
        if ( v54 < iEnd - 3 && *(_DWORD *)v55 == *(_DWORD *)v54 )
        {
          v54 += 4;
          v55 = (_QWORD *)((char *)v55 + 4);
        }
        if ( v54 < iEnd - 1 && *(_WORD *)v55 == *(_WORD *)v54 )
        {
          v54 += 2;
          v55 = (_QWORD *)((char *)v55 + 2);
        }
        if ( v54 < iEnd && *(_BYTE *)v55 == *v54 )
          LODWORD(v54) = (_DWORD)v54 + 1;
        v56 = (_DWORD)v54 - (_DWORD)v52;
      }
      else
      {
        while ( *v55 == *(_QWORD *)v54 )
        {
          v54 += 8;
          ++v55;
          if ( v54 >= v53 )
            goto LABEL_34;
        }
        _BitScanForward64(&v58, *v55 ^ *(_QWORD *)v54);
        HIWORD(v329) = 0;
        v56 = ((unsigned int)v58 >> 3) - (_DWORD)v52 + (_DWORD)v54;
      }
      goto LABEL_44;
    }
LABEL_120:
    v89 = cLevela;
    if ( cLevela < 4 )
    {
      v23 = v339;
      v28 = (_DWORD *)((char *)v47 + 1);
      v22 = Src;
      goto LABEL_509;
    }
    v90 = (__int16)v342;
    v354 = (unsigned __int64)v47;
    v91 = (__int64)v47;
    dictBase = v342;
    v347 = v47;
    v337 = cLevela;
    while ( 1 )
    {
LABEL_123:
      v92 = v91 + v89;
      if ( v92 > (unsigned __int64)(v351 - 12) )
        goto LABEL_488;
      v93 = v48->lowLimit;
      v94 = v92 - 2;
      v95 = (__int64)v48->base;
      v96 = v48->dictLimit;
      v97 = v92 - 2 - v95;
      v98 = v92 - 2;
      dictLimit = v89;
      v99 = *(_DWORD *)(v92 - 2);
      v39 = v93 + 0x10000 <= v97;
      v100 = v97 - 0xFFFF;
      v333 = v95;
      v101 = nbSearches[1];
      v102 = (_QWORD *)(v95 + v96);
      if ( v39 )
        v93 = v100;
      v327 = v96;
      v103 = v98 - v91;
      v353 = (__int64)v48->dictBase;
      v341 = v93;
      v104 = ctx->nextToUpdate;
      v105 = v94 - v95;
      v336 = nbSearches[1];
      v106 = 0;
      v324 = 0;
      v107 = 0i64;
      v343 = 0i64;
      if ( (unsigned int)v104 < (int)v94 - (int)v95 )
      {
        v108 = (_DWORD *)(v95 + v104);
        do
        {
          v109 = (unsigned int)(-1640531535 * *v108);
          v108 = (_DWORD *)((char *)v108 + 1);
          v110 = v109 >> 17;
          v111 = (unsigned int)(v104 - ctx->hashTable[v110]);
          if ( v111 > 0xFFFF )
            LOWORD(v111) = -1;
          ctx->chainTable[(unsigned __int16)v104] = v111;
          ctx->hashTable[v110] = v104;
          LODWORD(v104) = v104 + 1;
        }
        while ( (unsigned int)v104 < v105 );
        v107 = v343;
        v101 = v336;
        LODWORD(v96) = v327;
      }
      ctx->nextToUpdate = v105;
      v48 = ctx;
      v112 = ctx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v94) >> 17];
      if ( v112 >= v341 )
      {
        v113 = v103;
        v349 = v103;
        while ( 1 )
        {
          if ( !v101 )
          {
LABEL_248:
            v48 = ctx;
            break;
          }
          v336 = v101 - 1;
          if ( v112 >= (unsigned int)v96 )
          {
            v114 = (_DWORD *)(v112 + v333);
            if ( *(_WORD *)(dictLimit + v332 - 1) != *(_WORD *)((char *)v114 + dictLimit - v113 - 1) || *v114 != v99 )
            {
              v106 = v324;
LABEL_221:
              v127 = v333;
              goto LABEL_222;
            }
            v115 = (_QWORD *)(v94 + 4);
            v116 = v114 + 1;
            v117 = (unsigned __int8 *)(v94 + 4);
            v118 = iEnd - 7;
            if ( v94 + 4 >= (unsigned __int64)(iEnd - 7) )
            {
LABEL_141:
              if ( v117 >= v118 )
              {
LABEL_144:
                if ( v117 < iEnd - 3 && *v116 == *(_DWORD *)v117 )
                {
                  v117 += 4;
                  ++v116;
                }
                if ( v117 < iEnd - 1 && *(_WORD *)v116 == *(_WORD *)v117 )
                {
                  v117 += 2;
                  v116 = (_DWORD *)((char *)v116 + 2);
                }
                if ( v117 < iEnd && *(_BYTE *)v116 == *v117 )
                  LODWORD(v117) = (_DWORD)v117 + 1;
                v120 = (_DWORD)v117 - (_DWORD)v115;
                v121 = 0;
              }
              else
              {
                while ( *(_QWORD *)v116 == *(_QWORD *)v117 )
                {
                  v117 += 8;
                  v116 += 2;
                  if ( v117 >= v118 )
                    goto LABEL_144;
                }
                _BitScanForward64(&v125, *(_QWORD *)v116 ^ *(_QWORD *)v117);
                v121 = 0;
                HIWORD(v329) = 0;
                v120 = ((unsigned int)v125 >> 3) - (_DWORD)v115 + (_DWORD)v117;
              }
            }
            else
            {
              v119 = *(_QWORD *)v116 ^ *v115;
              if ( !v119 )
              {
                v117 = (unsigned __int8 *)(v94 + 12);
                v116 = v114 + 3;
                goto LABEL_141;
              }
              v121 = 0;
              _BitScanForward64(&v124, v119);
              HIWORD(v329) = 0;
              v120 = (unsigned int)v124 >> 3;
            }
            v122 = v120 + 4;
            if ( v113 )
            {
              v123 = (__int64)(v332 - v94) <= (char *)v102 - (char *)v114 ? (int)v102 - (int)v114 : (_DWORD)v347 - v94;
              if ( v123 < 0 )
              {
                v126 = (char *)v114 - 1;
                do
                {
                  if ( v126[v94 - (_QWORD)v114] != *v126 )
                    break;
                  --v126;
                  --v121;
                }
                while ( (__int64)&v126[1i64 - (_QWORD)v114] > v123 );
              }
            }
            v127 = v333;
            v128 = v122 - v121;
            LODWORD(v96) = v327;
            if ( v128 > dictLimit )
            {
              dictLimit = v128;
              v340 = v94 + v121;
              v338 = (const unsigned __int8 *)v114 + v121;
            }
            v106 = v324;
            goto LABEL_222;
          }
          v129 = (_DWORD *)(v353 + v112);
          if ( *v129 != v99 )
          {
            v107 = v343;
            goto LABEL_221;
          }
          v130 = (unsigned __int8 *)(v94 + 4);
          v131 = v129 + 1;
          v132 = v96;
          v133 = iEnd;
          v134 = v94 + v132 - v112;
          v135 = v353 + ctx->lowLimit;
          if ( v134 <= (unsigned __int64)iEnd )
            v133 = (unsigned __int8 *)v134;
          v136 = (unsigned __int8 *)(v94 + 4);
          v137 = v133 - 7;
          if ( v130 < v133 - 7 )
          {
            if ( *v131 != *(_QWORD *)v130 )
            {
              _BitScanForward64(&v147, *v131 ^ *(_QWORD *)v130);
              HIWORD(v329) = 0;
              v138 = (unsigned int)v147 >> 3;
              goto LABEL_186;
            }
            v136 = (unsigned __int8 *)(v94 + 12);
            v131 = v129 + 3;
          }
          if ( v136 >= v137 )
          {
LABEL_176:
            if ( v136 < v133 - 3 && *(_DWORD *)v131 == *(_DWORD *)v136 )
            {
              v136 += 4;
              v131 = (_QWORD *)((char *)v131 + 4);
            }
            if ( v136 < v133 - 1 && *(_WORD *)v131 == *(_WORD *)v136 )
            {
              v136 += 2;
              v131 = (_QWORD *)((char *)v131 + 2);
            }
            if ( v136 < v133 && *(_BYTE *)v131 == *v136 )
              LODWORD(v136) = (_DWORD)v136 + 1;
            v138 = (_DWORD)v136 - (_DWORD)v130;
          }
          else
          {
            while ( *v131 == *(_QWORD *)v136 )
            {
              v136 += 8;
              ++v131;
              if ( v136 >= v137 )
                goto LABEL_176;
            }
            _BitScanForward64(&v148, *v131 ^ *(_QWORD *)v136);
            HIWORD(v329) = 0;
            v138 = ((unsigned int)v148 >> 3) + (_DWORD)v136 - (_DWORD)v130;
          }
LABEL_186:
          v139 = v138 + 4;
          v140 = (unsigned __int8 *)(v94 + (int)(v138 + 4));
          if ( v140 == v133 && v133 < iEnd )
          {
            v141 = iEnd - 7;
            v142 = v102;
            v143 = (unsigned __int8 *)(v94 + v139);
            if ( v140 >= iEnd - 7 )
            {
LABEL_191:
              if ( v143 >= v141 )
              {
LABEL_194:
                if ( v143 < iEnd - 3 && *v142 == *(_DWORD *)v143 )
                {
                  v143 += 4;
                  ++v142;
                }
                if ( v143 < iEnd - 1 && *(_WORD *)v142 == *(_WORD *)v143 )
                {
                  v143 += 2;
                  v142 = (_DWORD *)((char *)v142 + 2);
                }
                if ( v143 < iEnd && *(_BYTE *)v142 == *v143 )
                  LODWORD(v143) = (_DWORD)v143 + 1;
                v144 = (_DWORD)v143 - (_DWORD)v140;
              }
              else
              {
                while ( *(_QWORD *)v142 == *(_QWORD *)v143 )
                {
                  v143 += 8;
                  v142 += 2;
                  if ( v143 >= v141 )
                    goto LABEL_194;
                }
                _BitScanForward64(&v150, *(_QWORD *)v142 ^ *(_QWORD *)v143);
                HIWORD(v329) = 0;
                v144 = ((unsigned int)v150 >> 3) - (_DWORD)v140 + (_DWORD)v143;
              }
            }
            else
            {
              if ( *(_QWORD *)v140 == *v102 )
              {
                v143 = v140 + 8;
                v142 = v102 + 1;
                goto LABEL_191;
              }
              _BitScanForward64(&v149, *(_QWORD *)v140 ^ *v102);
              HIWORD(v329) = 0;
              v144 = (unsigned int)v149 >> 3;
            }
            v139 += v144;
          }
          v145 = 0;
          if ( v349 )
          {
            v146 = (__int64)(v332 - v94) <= v135 - (__int64)v129 ? v135 - (_DWORD)v129 : (int)v347 - (int)v94;
            if ( v146 < 0 )
            {
              v151 = (char *)v129 - 1;
              do
              {
                if ( v151[v94 - (_QWORD)v129] != *v151 )
                  break;
                --v151;
                --v145;
              }
              while ( (__int64)&v151[1i64 - (_QWORD)v129] > v146 );
            }
          }
          v106 = v324;
          v152 = v139 - v145;
          v107 = v343;
          LODWORD(v96) = v327;
          if ( v152 <= dictLimit )
            goto LABEL_221;
          dictLimit = v152;
          v127 = v333;
          v338 = (const unsigned __int8 *)(v333 + v145 + (unsigned __int64)v112);
          v340 = v94 + v145;
LABEL_222:
          v153 = v350[(unsigned __int16)v112];
          v112 -= v153;
          if ( v344 && v153 == 1 )
          {
            if ( v106 )
            {
              if ( v106 == 2 )
              {
                v155 = iEnd;
LABEL_230:
                if ( v112 >= (unsigned int)v96 )
                {
                  v156 = v127 + v112;
                  if ( *(_DWORD *)v156 == v99 )
                  {
                    v157 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v156 + 4), v155, v99);
                    v159 = v102;
                    v160 = v157 + 4i64;
                    if ( (unsigned __int64)v102 + 0xFFFF < v94 )
                      v159 = (_QWORD *)(v94 - 0xFFFF);
                    HIWORD(v329) = HIWORD(v99);
                    v161 = v158;
                    if ( v158 >= (unsigned __int64)v159 + 4 )
                    {
                      do
                      {
                        v162 = v161 - 4;
                        if ( *(_DWORD *)(v161 - 4) != v99 )
                          break;
                        v161 -= 4i64;
                      }
                      while ( v162 >= (unsigned __int64)v159 + 4 );
                    }
                    if ( v161 > (unsigned __int64)v159 )
                    {
                      v163 = (char *)&v329 - v161 + 3;
                      do
                      {
                        v164 = v161 - 1;
                        if ( *(_BYTE *)(v161 - 1) != v163[v161] )
                          break;
                        --v161;
                      }
                      while ( v164 > (unsigned __int64)v159 );
                    }
                    v165 = (unsigned int)(v158 - v161);
                    if ( v165 + v160 < v107 || v160 > v107 )
                      v112 -= v165;
                    else
                      v112 += v160 - v107;
                    LODWORD(v96) = v327;
                  }
                  v106 = v324;
                }
              }
            }
            else
            {
              if ( (_BYTE)v99 == HIBYTE(v99) && (unsigned __int16)v99 == HIWORD(v99) )
              {
                v324 = 2;
                v154 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v94 + 4), iEnd, v99);
                LODWORD(v96) = v327;
                v107 = v154 + 4;
                v343 = v107;
                goto LABEL_230;
              }
              v106 = 1;
              v324 = 1;
            }
          }
          v113 = v349;
          v101 = v336;
          if ( v112 < v341 )
            goto LABEL_248;
        }
      }
      v166 = v340;
      v167 = dictLimit;
      v91 = v340;
      v89 = cLevela;
      v347 = (_DWORD *)v340;
      if ( dictLimit == cLevela )
      {
        v47 = (_DWORD *)v332;
        v90 = (__int16)v342;
LABEL_488:
        v247 = v339;
        v305 = Src;
        v249 = limit;
        v306 = (char *)v47 - (_BYTE *)Src;
        v26 = v334;
        v307 = v339 + 1;
        if ( limit && (unsigned __int64)v307 + v306 + (v306 >> 8) + 8 > v334 )
          goto LABEL_513;
        if ( v306 < 0xF )
        {
          *v339 = 16 * v306;
        }
        else
        {
          v308 = v306 - 15;
          *v339 = -16;
          if ( v306 - 15 >= 0xFF )
          {
            v309 = v307;
            v307 = (_QWORD *)((char *)v307 + v308 / 0xFF);
            memset(v309, 255, v308 / 0xFF);
            v47 = (_DWORD *)v332;
            v305 = Src;
            v249 = limit;
            v308 %= 0xFFui64;
          }
          *(_BYTE *)v307 = v308;
          v307 = (_QWORD *)((char *)v307 + 1);
        }
        v310 = (_WORD *)((char *)v307 + v306);
        v311 = v305 - (_BYTE *)v307;
        do
        {
          *v307 = *(_QWORD *)((char *)v307 + v311);
          ++v307;
        }
        while ( v307 < (_QWORD *)v310 );
        *v310 = (_WORD)v47 - v90;
        v23 = (char *)(v310 + 1);
        v339 = v23;
        v312 = v89 - 4;
        if ( v249 )
        {
          if ( (unsigned __int64)&v23[((unsigned __int64)(v89 - 4) >> 8) + 6] > v26 )
            goto LABEL_513;
        }
        v313 = *v247;
        if ( v312 < 0xF )
        {
          *v247 = v89 - 4 + v313;
        }
        else
        {
          v314 = v312 - 15;
          *v247 = v313 + 15;
          if ( v314 >= 0x1FE )
          {
            v315 = v314 / 0x1FE;
            v314 %= 0x1FEui64;
            do
            {
              *(_WORD *)v23 = -1;
              v23 += 2;
              --v315;
            }
            while ( v315 );
          }
          if ( v314 >= 0xFF )
          {
            LOBYTE(v314) = v314 + 1;
            *v23++ = -1;
          }
          *v23++ = v314;
          v339 = v23;
        }
        v28 = (_DWORD *)((char *)v47 + v89);
        goto LABEL_508;
      }
      v168 = v332;
      if ( v354 < v332 && v340 < v332 + (int)v337 )
      {
        v168 = v354;
        v342 = dictBase;
        v89 = v337;
        v332 = v354;
        cLevela = v337;
      }
      if ( (__int64)(v340 - v168) >= 3 )
        break;
      v90 = (__int16)v338;
      v89 = dictLimit;
      v342 = v338;
      v47 = (_DWORD *)v340;
      cLevela = dictLimit;
      v332 = v340;
    }
    v169 = v348;
    v170 = (__int64)v338;
    while ( 1 )
    {
      if ( (__int64)(v166 - v168) < 18 )
      {
        v171 = v89;
        if ( v89 > 18 )
          v171 = 18;
        if ( v168 + v171 > v167 + v166 - 4 )
          v171 = v166 - v168 + v167 - 4;
        v172 = v171 + v168 - v166;
        if ( v172 > 0 )
        {
          v166 += v172;
          v167 -= v172;
          v340 = v166;
          dictLimit = v167;
          v338 = (const unsigned __int8 *)(v172 + v170);
        }
      }
      v173 = v167;
      v174 = v166 + v167;
      dictBase = (const unsigned __int8 *)v174;
      if ( v174 <= (unsigned __int64)(v351 - 12) )
      {
        v175 = v174 - 3;
        v176 = v48->lowLimit;
        v177 = (__int64)v48->base;
        v178 = v174 - 3;
        v179 = *(_DWORD *)(v174 - 3);
        v180 = v174 - 3 - v177;
        v341 = v48->dictLimit;
        v328 = v167;
        v181 = (_QWORD *)(v177 + v341);
        v333 = v177;
        v39 = v176 + 0x10000 <= v180;
        v182 = v180 - 0xFFFF;
        v183 = nbSearches[1];
        if ( v39 )
          v176 = v182;
        v336 = nbSearches[1];
        v184 = (__int64)v48->dictBase;
        v185 = v178 - v166;
        v337 = v176;
        v186 = v175 - v177;
        v353 = v184;
        v187 = 0;
        v325 = 0;
        v188 = ctx->nextToUpdate;
        v189 = 0i64;
        v343 = 0i64;
        if ( v188 < (int)v175 - (int)v177 )
        {
          v190 = (_DWORD *)(v333 + v188);
          do
          {
            v191 = (unsigned int)(-1640531535 * *v190);
            v190 = (_DWORD *)((char *)v190 + 1);
            v192 = v191 >> 17;
            v193 = v188 - ctx->hashTable[v192];
            if ( v193 > 0xFFFF )
              LOWORD(v193) = -1;
            ctx->chainTable[(unsigned __int16)v188] = v193;
            ctx->hashTable[v192] = v188++;
          }
          while ( v188 < v186 );
          v189 = v343;
          v177 = v333;
          v183 = v336;
        }
        ctx->nextToUpdate = v186;
        v194 = ctx->hashTable[(unsigned __int64)(unsigned int)(-1640531535 * *(_DWORD *)v175) >> 17];
        if ( v194 >= v337 )
        {
          v195 = v185;
          v349 = v185;
          do
          {
            if ( !v183 )
              break;
            v336 = v183 - 1;
            if ( v194 >= v341 )
            {
              v196 = (_DWORD *)(v177 + v194);
              v173 = v328;
              if ( *(_WORD *)(v340 + v328 - 1) == *(_WORD *)((char *)v196 + v328 - v195 - 1) && *v196 == v179 )
              {
                v197 = (_QWORD *)(v175 + 4);
                v198 = v196 + 1;
                v199 = (unsigned __int8 *)(v175 + 4);
                v200 = iEnd - 7;
                if ( v175 + 4 >= (unsigned __int64)(iEnd - 7) )
                {
LABEL_281:
                  if ( v199 >= v200 )
                  {
LABEL_284:
                    if ( v199 < iEnd - 3 && *v198 == *(_DWORD *)v199 )
                    {
                      v199 += 4;
                      ++v198;
                    }
                    if ( v199 < iEnd - 1 && *(_WORD *)v198 == *(_WORD *)v199 )
                    {
                      v199 += 2;
                      v198 = (_DWORD *)((char *)v198 + 2);
                    }
                    if ( v199 < iEnd && *(_BYTE *)v198 == *v199 )
                      LODWORD(v199) = (_DWORD)v199 + 1;
                    v202 = (_DWORD)v199 - (_DWORD)v197;
                    v203 = 0;
                  }
                  else
                  {
                    while ( *(_QWORD *)v198 == *(_QWORD *)v199 )
                    {
                      v199 += 8;
                      v198 += 2;
                      if ( v199 >= v200 )
                        goto LABEL_284;
                    }
                    _BitScanForward64(&v207, *(_QWORD *)v198 ^ *(_QWORD *)v199);
                    v203 = 0;
                    HIWORD(v329) = 0;
                    v202 = ((unsigned int)v207 >> 3) - (_DWORD)v197 + (_DWORD)v199;
                  }
                }
                else
                {
                  v201 = *(_QWORD *)v198 ^ *v197;
                  if ( !v201 )
                  {
                    v199 = (unsigned __int8 *)(v175 + 12);
                    v198 = v196 + 3;
                    goto LABEL_281;
                  }
                  v203 = 0;
                  _BitScanForward64(&v206, v201);
                  HIWORD(v329) = 0;
                  v202 = (unsigned int)v206 >> 3;
                }
                v204 = v202 + 4;
                if ( v195 )
                {
                  v205 = (__int64)(v340 - v175) <= (char *)v181 - (char *)v196 ? (int)v181 - (int)v196 : v340 - v175;
                  if ( v205 < 0 )
                  {
                    v208 = (_BYTE *)(v175 - 1);
                    do
                    {
                      if ( *v208 != v208[(_QWORD)v196 - v175] )
                        break;
                      --v208;
                      --v203;
                    }
                    while ( (__int64)&v208[1 - v175] > v205 );
                  }
                }
                v209 = v204 - v203;
                if ( v209 > v328 )
                {
                  v173 = v209;
                  v328 = v209;
                  v345 = (const unsigned __int8 *)v196 + v203;
                  v348 = v175 + v203;
                }
              }
              v187 = v325;
              goto LABEL_361;
            }
            v210 = (_DWORD *)(v353 + v194);
            if ( *v210 != v179 )
            {
              v189 = v343;
LABEL_360:
              v173 = v328;
              goto LABEL_361;
            }
            v211 = (unsigned __int8 *)(v175 + 4);
            v212 = iEnd;
            v213 = v210 + 1;
            v214 = v353 + ctx->lowLimit;
            if ( v175 + v341 - v194 <= (unsigned __int64)iEnd )
              v212 = (unsigned __int8 *)(v175 + v341 - v194);
            v215 = (unsigned __int8 *)(v175 + 4);
            v216 = v212 - 7;
            if ( v211 < v212 - 7 )
            {
              if ( *v213 != *(_QWORD *)v211 )
              {
                _BitScanForward64(&v226, *v213 ^ *(_QWORD *)v211);
                HIWORD(v329) = 0;
                v217 = (unsigned int)v226 >> 3;
                goto LABEL_326;
              }
              v215 = (unsigned __int8 *)(v175 + 12);
              v213 = v210 + 3;
            }
            if ( v215 >= v216 )
            {
LABEL_316:
              if ( v215 < v212 - 3 && *(_DWORD *)v213 == *(_DWORD *)v215 )
              {
                v215 += 4;
                v213 = (_QWORD *)((char *)v213 + 4);
              }
              if ( v215 < v212 - 1 && *(_WORD *)v213 == *(_WORD *)v215 )
              {
                v215 += 2;
                v213 = (_QWORD *)((char *)v213 + 2);
              }
              if ( v215 < v212 && *(_BYTE *)v213 == *v215 )
                LODWORD(v215) = (_DWORD)v215 + 1;
              v217 = (_DWORD)v215 - (_DWORD)v211;
            }
            else
            {
              while ( *v213 == *(_QWORD *)v215 )
              {
                v215 += 8;
                ++v213;
                if ( v215 >= v216 )
                  goto LABEL_316;
              }
              _BitScanForward64(&v227, *v213 ^ *(_QWORD *)v215);
              HIWORD(v329) = 0;
              v217 = ((unsigned int)v227 >> 3) - (_DWORD)v211 + (_DWORD)v215;
            }
LABEL_326:
            v218 = v217 + 4;
            v219 = (unsigned __int8 *)(v175 + (int)(v217 + 4));
            if ( v219 == v212 && v212 < iEnd )
            {
              v220 = iEnd - 7;
              v221 = v181;
              v222 = (unsigned __int8 *)(v175 + v218);
              if ( v219 >= iEnd - 7 )
              {
LABEL_331:
                if ( v222 >= v220 )
                {
LABEL_334:
                  if ( v222 < iEnd - 3 && *v221 == *(_DWORD *)v222 )
                  {
                    v222 += 4;
                    ++v221;
                  }
                  if ( v222 < iEnd - 1 && *(_WORD *)v221 == *(_WORD *)v222 )
                  {
                    v222 += 2;
                    v221 = (_DWORD *)((char *)v221 + 2);
                  }
                  if ( v222 < iEnd && *(_BYTE *)v221 == *v222 )
                    LODWORD(v222) = (_DWORD)v222 + 1;
                  v223 = (_DWORD)v222 - (_DWORD)v219;
                }
                else
                {
                  while ( *(_QWORD *)v222 == *(_QWORD *)v221 )
                  {
                    v222 += 8;
                    v221 += 2;
                    if ( v222 >= v220 )
                      goto LABEL_334;
                  }
                  _BitScanForward64(&v229, *(_QWORD *)v222 ^ *(_QWORD *)v221);
                  HIWORD(v329) = 0;
                  v223 = ((unsigned int)v229 >> 3) - (_DWORD)v219 + (_DWORD)v222;
                }
              }
              else
              {
                if ( *(_QWORD *)v219 == *v181 )
                {
                  v222 = v219 + 8;
                  v221 = v181 + 1;
                  goto LABEL_331;
                }
                _BitScanForward64(&v228, *(_QWORD *)v219 ^ *v181);
                HIWORD(v329) = 0;
                v223 = (unsigned int)v228 >> 3;
              }
              v218 += v223;
            }
            v224 = 0;
            if ( v349 )
            {
              v225 = (__int64)(v340 - v175) <= v214 - (__int64)v210 ? v214 - (_DWORD)v210 : (int)v340 - (int)v175;
              if ( v225 < 0 )
              {
                v230 = (char *)v210 - v175;
                v231 = (_BYTE *)(v175 - 1);
                do
                {
                  if ( *v231 != v231[(_QWORD)v230] )
                    break;
                  --v231;
                  --v224;
                }
                while ( (__int64)&v231[1 - v175] > v225 );
              }
            }
            v187 = v325;
            v232 = v218 - v224;
            v189 = v343;
            if ( v232 <= v328 )
              goto LABEL_360;
            v328 = v232;
            v173 = v232;
            v345 = (const unsigned __int8 *)(v224 + v194 + v333);
            v348 = v175 + v224;
LABEL_361:
            v233 = v350[(unsigned __int16)v194];
            v194 -= v233;
            if ( !v344 || v233 != 1 )
              goto LABEL_384;
            if ( v187 )
            {
              if ( v187 != 2 )
                goto LABEL_384;
              v234 = iEnd;
            }
            else
            {
              if ( (_BYTE)v179 != HIBYTE(v179) || (unsigned __int16)v179 != HIWORD(v179) )
              {
                v187 = 1;
                v325 = 1;
LABEL_384:
                v177 = v333;
                goto LABEL_385;
              }
              v325 = 2;
              v189 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v175 + 4), iEnd, v179) + 4;
              v343 = v189;
            }
            v177 = v333;
            if ( v194 >= v341 )
            {
              v235 = v333 + v194;
              if ( *(_DWORD *)v235 != v179 )
              {
                v187 = v325;
                goto LABEL_385;
              }
              v236 = indyfs_LZ4HC_countPattern((const unsigned __int8 *)(v235 + 4), v234, v179);
              v238 = v181;
              v239 = v236 + 4i64;
              if ( (unsigned __int64)v181 + 0xFFFF < v175 )
                v238 = (_QWORD *)(v175 - 0xFFFF);
              HIWORD(v329) = HIWORD(v179);
              v240 = v237;
              if ( v237 >= (unsigned __int64)v238 + 4 )
              {
                do
                {
                  v241 = v240 - 4;
                  if ( *(_DWORD *)(v240 - 4) != v179 )
                    break;
                  v240 -= 4i64;
                }
                while ( v241 >= (unsigned __int64)v238 + 4 );
              }
              if ( v240 > (unsigned __int64)v238 )
              {
                v242 = (char *)&v329 - v240 + 3;
                do
                {
                  v243 = v240 - 1;
                  if ( *(_BYTE *)(v240 - 1) != v242[v240] )
                    break;
                  --v240;
                }
                while ( v243 > (unsigned __int64)v238 );
              }
              v244 = (unsigned int)(v237 - v240);
              if ( v244 + v239 < v189 || v239 > v189 )
                v194 -= v244;
              else
                v194 += v239 - v189;
              v187 = v325;
              goto LABEL_384;
            }
LABEL_385:
            v195 = v349;
            v183 = v336;
          }
          while ( v194 >= v337 );
        }
        v174 = (unsigned __int64)dictBase;
        v166 = v340;
        v167 = dictLimit;
        v168 = v332;
        v89 = cLevela;
        v169 = v348;
      }
      v347 = (_DWORD *)v169;
      v91 = v169;
      if ( v173 == v167 )
        break;
      v245 = v89 + v168;
      if ( v169 >= v245 + 3 )
      {
        if ( v166 < v245 )
        {
          if ( (__int64)(v166 - v168) >= 18 )
          {
            v89 = v166 - v168;
          }
          else
          {
            if ( v89 > 18 )
              v89 = 18;
            if ( v168 + v89 > v174 - 4 )
              v89 = v166 - v168 + v167 - 4;
            v246 = v89 + v168 - v166;
            if ( v246 > 0 )
            {
              v338 += v246;
              v166 += v246;
              v167 -= v246;
            }
          }
        }
        v247 = v339;
        v248 = Src;
        v249 = limit;
        v250 = v168 - (_QWORD)Src;
        v251 = v339 + 1;
        if ( limit && (unsigned __int64)v251 + (v250 >> 8) + v250 + 8 > v334 )
          goto LABEL_512;
        if ( v250 < 0xF )
        {
          *v339 = 16 * v250;
        }
        else
        {
          v252 = v250 - 15;
          *v339 = -16;
          if ( v250 - 15 >= 0xFF )
          {
            v253 = v251;
            v251 = (_QWORD *)((char *)v251 + v252 / 0xFF);
            memset(v253, 255, v252 / 0xFF);
            v248 = Src;
            v249 = limit;
            v252 %= 0xFFui64;
          }
          *(_BYTE *)v251 = v252;
          v251 = (_QWORD *)((char *)v251 + 1);
        }
        v254 = (_WORD *)((char *)v251 + v250);
        v255 = v248 - (_BYTE *)v251;
        do
        {
          *v251 = *(_QWORD *)((char *)v251 + v255);
          ++v251;
        }
        while ( v251 < (_QWORD *)v254 );
        *v254 = v168 - (_WORD)v342;
        v256 = v254 + 1;
        v339 = (char *)v256;
        v257 = v89 - 4;
        if ( v249 )
        {
          if ( (unsigned __int64)v256 + ((unsigned __int64)(v89 - 4) >> 8) + 6 > v334 )
            goto LABEL_512;
        }
        v258 = *v247;
        if ( v257 < 0xF )
        {
          *v247 = v89 - 4 + v258;
        }
        else
        {
          v259 = v257 - 15;
          *v247 = v258 + 15;
          if ( v259 >= 0x1FE )
          {
            v260 = v259 / 0x1FE;
            v259 %= 0x1FEui64;
            do
            {
              *v256++ = -1;
              --v260;
            }
            while ( v260 );
          }
          if ( v259 >= 0xFF )
          {
            LOBYTE(v259) = v259 + 1;
            *(_BYTE *)v256 = -1;
            v256 = (_WORD *)((char *)v256 + 1);
          }
          *(_BYTE *)v256 = v259;
          v339 = (char *)v256 + 1;
        }
        v261 = v89;
        v89 = v167;
        v262 = (void *)(v168 + v261);
        v342 = v338;
        v168 = v166;
        Src = v262;
        v332 = v166;
        cLevela = v167;
      }
      else if ( v169 >= v245 )
      {
        if ( v166 >= v245 || (v263 = v89 + v168 - v166, v167 -= v263, v338 += v263, v166 += v263, v340 = v166, v167 >= 4) )
        {
          v264 = (__int64)v345;
        }
        else
        {
          v166 = v169;
          v340 = v169;
          v264 = (__int64)v345;
          v167 = v173;
          v338 = v345;
        }
        v247 = v339;
        v265 = Src;
        v249 = limit;
        v266 = v168 - (_QWORD)Src;
        v267 = v339 + 1;
        if ( limit && (unsigned __int64)v267 + (v266 >> 8) + v266 + 8 > v334 )
          goto LABEL_512;
        if ( v266 < 0xF )
        {
          *v339 = 16 * v266;
        }
        else
        {
          v268 = v266 - 15;
          *v339 = -16;
          if ( v266 - 15 >= 0xFF )
          {
            v269 = v267;
            v267 = (_QWORD *)((char *)v267 + v268 / 0xFF);
            memset(v269, 255, v268 / 0xFF);
            v265 = Src;
            v249 = limit;
            v268 %= 0xFFui64;
          }
          *(_BYTE *)v267 = v268;
          v267 = (_QWORD *)((char *)v267 + 1);
          v91 = (__int64)v347;
        }
        v270 = (_WORD *)((char *)v267 + v266);
        v271 = v265 - (_BYTE *)v267;
        do
        {
          *v267 = *(_QWORD *)((char *)v267 + v271);
          ++v267;
        }
        while ( v267 < (_QWORD *)v270 );
        *v270 = v168 - (_WORD)v342;
        v272 = v270 + 1;
        v339 = (char *)v272;
        v273 = v89 - 4;
        if ( v249 )
        {
          if ( (unsigned __int64)v272 + ((unsigned __int64)(v89 - 4) >> 8) + 6 > v334 )
            goto LABEL_512;
        }
        v274 = *v247;
        if ( v273 < 0xF )
        {
          *v247 = v89 - 4 + v274;
        }
        else
        {
          v275 = v273 - 15;
          *v247 = v274 + 15;
          if ( v275 >= 0x1FE )
          {
            v276 = v275 / 0x1FE;
            v275 %= 0x1FEui64;
            do
            {
              *v272++ = -1;
              --v276;
            }
            while ( v276 );
          }
          if ( v275 >= 0xFF )
          {
            LOBYTE(v275) = v275 + 1;
            *(_BYTE *)v272 = -1;
            v272 = (_WORD *)((char *)v272 + 1);
          }
          *(_BYTE *)v272 = v275;
          v339 = (char *)v272 + 1;
        }
        v47 = (_DWORD *)v348;
        v48 = ctx;
        v277 = v89;
        v89 = v173;
        v332 = v348;
        Src = (void *)(v168 + v277);
        v90 = v264;
        dictBase = v338;
        v342 = (const unsigned __int8 *)v264;
        cLevela = v173;
        v354 = v166;
        v337 = v167;
        goto LABEL_123;
      }
      v170 = (__int64)v345;
      v166 = v169;
      v48 = ctx;
      v167 = v173;
      v338 = v345;
      v340 = v169;
      dictLimit = v173;
    }
    if ( v166 < v168 + v89 )
      v89 = v166 - v168;
    v247 = v339;
    v278 = Src;
    v249 = limit;
    v279 = v168 - (_QWORD)Src;
    v26 = v334;
    v280 = v339 + 1;
    if ( limit && (unsigned __int64)v280 + v279 + (v279 >> 8) + 8 > v334 )
      goto LABEL_513;
    if ( v279 < 0xF )
    {
      *v339 = 16 * v279;
    }
    else
    {
      v281 = v279 - 15;
      *v339 = -16;
      if ( v279 - 15 >= 0xFF )
      {
        v282 = v280;
        v280 = (_QWORD *)((char *)v280 + v281 / 0xFF);
        memset(v282, 255, v281 / 0xFF);
        v278 = Src;
        v249 = limit;
        v281 %= 0xFFui64;
      }
      *(_BYTE *)v280 = v281;
      v280 = (_QWORD *)((char *)v280 + 1);
    }
    v283 = (_WORD *)((char *)v280 + v279);
    v284 = v278 - (_BYTE *)v280;
    do
    {
      *v280 = *(_QWORD *)((char *)v280 + v284);
      ++v280;
    }
    while ( v280 < (_QWORD *)v283 );
    *v283 = v168 - (_WORD)v342;
    v285 = v283 + 1;
    v286 = v89 - 4;
    if ( v249 )
    {
      if ( (unsigned __int64)&v285[((unsigned __int64)(v89 - 4) >> 8) + 6] > v26 )
        goto LABEL_513;
    }
    v287 = *v247;
    if ( v286 < 0xF )
    {
      *v247 = v89 - 4 + v287;
    }
    else
    {
      v288 = v286 - 15;
      *v247 = v287 + 15;
      if ( v288 >= 0x1FE )
      {
        v289 = v288 / 0x1FE;
        v288 %= 0x1FEui64;
        do
        {
          *(_WORD *)v285 = -1;
          v285 += 2;
          --v289;
        }
        while ( v289 );
        v249 = limit;
      }
      if ( v288 >= 0xFF )
      {
        LOBYTE(v288) = v288 + 1;
        *v285++ = -1;
      }
      *v285++ = v288;
    }
    v290 = v89;
    v291 = v334;
    v292 = (void *)(v168 + v290);
    v293 = v285;
    Src = v292;
    v247 = v285;
    v294 = v285;
    v295 = v285 + 1;
    v296 = v166 - (_QWORD)v292;
    if ( v249 && (unsigned __int64)v295 + v296 + (v296 >> 8) + 8 > v334 )
    {
      v26 = v334;
      goto LABEL_513;
    }
    if ( v296 < 0xF )
    {
      *v293 = 16 * v296;
    }
    else
    {
      v297 = v296 - 15;
      *v293 = -16;
      if ( v296 - 15 >= 0xFF )
      {
        v298 = v295;
        v295 = (_QWORD *)((char *)v295 + v297 / 0xFF);
        memset(v298, 255, v297 / 0xFF);
        v292 = Src;
        v249 = limit;
        v297 %= 0xFFui64;
      }
      *(_BYTE *)v295 = v297;
      v295 = (_QWORD *)((char *)v295 + 1);
    }
    v299 = (_WORD *)((char *)v295 + v296);
    v300 = (_BYTE *)v292 - (_BYTE *)v295;
    do
    {
      *v295 = *(_QWORD *)((char *)v295 + v300);
      ++v295;
    }
    while ( v295 < (_QWORD *)v299 );
    *v299 = v166 - (_WORD)v338;
    v23 = (char *)(v299 + 1);
    v339 = v23;
    v301 = v167 - 4;
    if ( v249 && (unsigned __int64)&v23[((unsigned __int64)(v167 - 4) >> 8) + 6] > v291 )
    {
LABEL_512:
      v26 = v334;
LABEL_513:
      v14 = 0;
      if ( v249 == 2 )
      {
        v24 = (__int64)v351;
        v23 = v247;
        v22 = Src;
        goto LABEL_515;
      }
      return v14;
    }
    v302 = *v294;
    if ( v301 < 0xF )
    {
      *v293 = v167 - 4 + v302;
      v28 = (unsigned int *)(v166 + v167);
    }
    else
    {
      v303 = v301 - 15;
      *v293 = v302 + 15;
      if ( v303 >= 0x1FE )
      {
        v304 = v303 / 0x1FE;
        v303 %= 0x1FEui64;
        do
        {
          *(_WORD *)v23 = -1;
          v23 += 2;
          --v304;
        }
        while ( v304 );
      }
      if ( v303 >= 0xFF )
      {
        LOBYTE(v303) = v303 + 1;
        *v23++ = -1;
      }
      *v23++ = v303;
      v339 = v23;
      v28 = (unsigned int *)(v166 + v167);
    }
LABEL_508:
    Src = v28;
    v22 = v28;
LABEL_509:
    v24 = (__int64)v351;
    v14 = 0;
    v332 = (unsigned __int64)v28;
    if ( v28 <= (unsigned int *)v351 - 3 )
    {
      v10 = ctx;
      chainTable = (__int64)v350;
      continue;
    }
    break;
  }
  v249 = limit;
  v26 = v334;
LABEL_515:
  LODWORD(v9) = v356;
  v7 = srcSizePtr;
LABEL_518:
  v316 = v24 - (_QWORD)v22;
  v317 = v26 + 5;
  if ( v249 != 2 )
    v317 = v26;
  if ( v249 && (unsigned __int64)&v23[v316 + 1 + (v316 + 240) / 0xFF] > v317 )
  {
    if ( limit == limitedOutput )
      return v14;
    v316 = v317 - (_QWORD)v23 - 1 - (v317 - (unsigned __int64)v23 - 1 + 240) / 0xFF;
  }
  v318 = v316 + (_DWORD)v22;
  if ( v316 < 0xF )
  {
    *v23 = 16 * v316;
  }
  else
  {
    *v23 = -16;
    v319 = v316 - 15;
    ++v23;
    if ( v316 - 15 >= 0xFF )
    {
      v320 = v23;
      v23 += v319 / 0xFF;
      memset(v320, 255, v319 / 0xFF);
      v319 %= 0xFFui64;
    }
    *v23 = v319;
  }
  v321 = v23 + 1;
  memcpy_0(v321, v22, v316);
  *v7 = v318 - (_DWORD)v9;
  return v316 + (_DWORD)v321 - v357;
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

