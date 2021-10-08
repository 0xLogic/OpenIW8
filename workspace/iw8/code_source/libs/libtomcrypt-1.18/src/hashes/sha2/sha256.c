/*
==============
sha256_init
==============
*/
__int64 sha256_init(Hash_state *md)
{
  __int64 result; 

  result = 0i64;
  *(unsigned __int64 *)((char *)&md->sha512.state[3] + 4) = 1541459225i64;
  md->sha512.length = 0i64;
  md->sha256.state[0] = 1779033703;
  md->sha256.state[1] = -1150833019;
  md->sha512.state[1] = 0xA54FF53A3C6EF372ui64;
  md->sha512.state[2] = 0x9B05688C510E527Fui64;
  md->sha256.state[6] = 528734635;
  return result;
}

/*
==============
sha256_process
==============
*/
int sha256_process(Hash_state *md, const unsigned __int8 *in, unsigned int inlen)
{
  unsigned int v4; 
  int result; 
  __int64 curlen; 
  unsigned int v8; 
  __int64 v9; 

  v4 = inlen;
  if ( md->sha256.curlen > 0x40 )
    return 16;
  if ( md->sha512.length + inlen < md->sha512.length )
    return 25;
  if ( inlen )
  {
    do
    {
      curlen = md->sha256.curlen;
      if ( (_DWORD)curlen || v4 < 0x40 )
      {
        v8 = v4;
        if ( v4 >= 64 - (int)curlen )
          v8 = 64 - curlen;
        v9 = v8;
        memcpy_0((char *)&md->data + curlen + 44, in, v8);
        md->sha256.curlen += v9;
        in += v9;
        v4 -= v9;
        if ( md->sha256.curlen == 64 )
        {
          result = sha256_compress(md, md->sha256.buf);
          if ( result )
            return result;
          md->sha512.length += 512i64;
          md->sha256.curlen = 0;
        }
      }
      else
      {
        result = sha256_compress(md, (unsigned __int8 *)in);
        if ( result )
          return result;
        md->sha512.length += 512i64;
        in += 64;
        v4 -= 64;
      }
    }
    while ( v4 );
  }
  return 0;
}

/*
==============
sha256_done
==============
*/
__int64 sha256_done(Hash_state *md, unsigned __int8 *out)
{
  __int64 curlen; 
  __int64 v6; 

  curlen = md->sha256.curlen;
  if ( (unsigned int)curlen >= 0x40 )
    return 16i64;
  md->sha512.length += (unsigned int)(8 * curlen);
  md->sha256.buf[curlen] = 0x80;
  v6 = ++md->sha256.curlen;
  if ( (unsigned int)v6 > 0x38 )
  {
    for ( ; (unsigned int)v6 < 0x40; v6 = md->sha256.curlen )
    {
      md->sha256.buf[v6] = 0;
      ++md->sha256.curlen;
    }
    sha256_compress(md, md->sha256.buf);
    md->sha256.curlen = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)v6 < 0x38 )
  {
    do
LABEL_8:
      md->sha256.buf[md->sha256.curlen++] = 0;
    while ( md->sha256.curlen < 0x38 );
  }
  *(void **)((char *)&md->data + 100) = (void *)_byteswap_uint64(md->sha512.length);
  sha256_compress(md, md->sha256.buf);
  *(_DWORD *)out = _byteswap_ulong(md->sha256.state[0]);
  *((_DWORD *)out + 1) = _byteswap_ulong(md->sha256.state[1]);
  *((_DWORD *)out + 2) = _byteswap_ulong(md->sha256.state[2]);
  *((_DWORD *)out + 3) = _byteswap_ulong(md->sha256.state[3]);
  *((_DWORD *)out + 4) = _byteswap_ulong(md->sha256.state[4]);
  *((_DWORD *)out + 5) = _byteswap_ulong(md->sha256.state[5]);
  *((_DWORD *)out + 6) = _byteswap_ulong(md->sha256.state[6]);
  *((_DWORD *)out + 7) = _byteswap_ulong(md->sha256.state[7]);
  return 0i64;
}

/*
==============
sha256_test
==============
*/
__int64 sha256_test()
{
  return 2i64;
}

/*
==============
sha256_compress
==============
*/
__int64 sha256_compress(Hash_state *md, unsigned __int8 *buf)
{
  __int64 v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned __int32 *v8; 
  unsigned __int32 v9; 
  unsigned __int32 v10; 
  unsigned int v11; 
  unsigned __int32 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned __int32 v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  unsigned __int32 v22; 
  int v23; 
  int v24; 
  int v25; 
  unsigned int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  int v133; 
  int v134; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  int v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  int v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168; 
  int v169; 
  int v170; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  int v178; 
  int v179; 
  int v180; 
  int v181; 
  int v182; 
  int v183; 
  int v184; 
  int v185; 
  int v186; 
  int v187; 
  int v188; 
  int v189; 
  int v190; 
  int v191; 
  int v192; 
  int v193; 
  int v194; 
  int v195; 
  int v196; 
  int v197; 
  int v198; 
  int v199; 
  int v200; 
  int v201; 
  int v202; 
  int v203; 
  unsigned int v205; 
  int v206; 
  int v207; 
  int v208; 
  unsigned int v209; 
  unsigned int v210; 
  unsigned int v211; 
  unsigned int v212; 
  unsigned __int32 v213; 
  unsigned __int32 v214; 
  unsigned __int32 v215; 
  unsigned __int32 v216; 
  unsigned __int32 v217; 
  unsigned __int32 v218; 
  unsigned __int32 v219; 
  unsigned __int32 v220; 
  unsigned __int32 v221; 
  unsigned __int32 v222; 
  unsigned __int32 v223; 
  unsigned __int32 v224; 
  unsigned __int32 v225; 
  unsigned __int32 v226; 
  unsigned __int32 v227; 
  unsigned __int32 v228; 
  int v229; 
  int v230; 
  int v231; 
  int v232; 
  int v233; 
  int v234; 
  int v235; 
  int v236; 
  int v237; 
  int v238; 
  int v239; 
  int v240; 
  int v241; 
  int v242; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  int v247; 
  int v248; 
  int v249; 
  int v250; 
  int v251; 
  int v252; 
  int v253; 
  int v254; 
  int v255; 
  int v256; 
  int v257; 
  int v258; 
  int v259; 
  int v260; 
  int v261; 
  int v262; 
  int v263; 
  int v264; 
  int v265; 
  int v266; 
  int v267; 
  int v268; 
  int v269; 
  int v270; 
  int v271; 
  int v272; 
  int v273; 
  int v274; 
  int v275; 
  int v276; 

  v2 = 8i64;
  v211 = md->sha256.state[2];
  v210 = md->sha256.state[3];
  v209 = md->sha256.state[7];
  v213 = _byteswap_ulong(*(_DWORD *)buf);
  v3 = md->sha256.state[0];
  v4 = md->sha256.state[6];
  v5 = md->sha256.state[1];
  v6 = md->sha256.state[4];
  v7 = md->sha256.state[5];
  v214 = _byteswap_ulong(*((_DWORD *)buf + 1));
  v215 = _byteswap_ulong(*((_DWORD *)buf + 2));
  v216 = _byteswap_ulong(*((_DWORD *)buf + 3));
  v217 = _byteswap_ulong(*((_DWORD *)buf + 4));
  v218 = _byteswap_ulong(*((_DWORD *)buf + 5));
  v219 = _byteswap_ulong(*((_DWORD *)buf + 6));
  v220 = _byteswap_ulong(*((_DWORD *)buf + 7));
  v221 = _byteswap_ulong(*((_DWORD *)buf + 8));
  v222 = _byteswap_ulong(*((_DWORD *)buf + 9));
  v223 = _byteswap_ulong(*((_DWORD *)buf + 10));
  v224 = _byteswap_ulong(*((_DWORD *)buf + 11));
  v225 = _byteswap_ulong(*((_DWORD *)buf + 12));
  v226 = _byteswap_ulong(*((_DWORD *)buf + 13));
  v227 = _byteswap_ulong(*((_DWORD *)buf + 14));
  v228 = _byteswap_ulong(*((_DWORD *)buf + 15));
  v8 = &v213;
  v212 = v3;
  v205 = v4;
  do
  {
    v9 = v8[1];
    v10 = v8[14];
    v11 = *v8 + v8[9] + ((v9 >> 3) ^ __ROR4__(v9, 7) ^ __ROR4__(v9, 18)) + ((v10 >> 10) ^ __ROR4__(v10, 17) ^ __ROR4__(v10, 19));
    v8[16] = v11;
    v12 = v8[10] + ((v8[15] >> 10) ^ __ROR4__(v8[15], 17) ^ __ROR4__(v8[15], 19)) + ((v8[2] >> 3) ^ __ROR4__(v8[2], 7) ^ __ROR4__(v8[2], 18)) + v9;
    v8[17] = v12;
    v13 = v8[2] + v8[11] + ((v8[3] >> 3) ^ __ROR4__(v8[3], 7) ^ __ROR4__(v8[3], 18)) + (__ROR4__(v11, 17) ^ __ROR4__(v11, 19) ^ (v11 >> 10));
    v8[18] = v13;
    v14 = v8[3] + v8[12] + ((v8[4] >> 3) ^ __ROR4__(v8[4], 7) ^ __ROR4__(v8[4], 18)) + (__ROR4__(v12, 17) ^ __ROR4__(v12, 19) ^ (v12 >> 10));
    v8[19] = v14;
    v15 = v8[5];
    v8 += 6;
    v8[14] = *(v8 - 2) + v8[7] + ((v15 >> 3) ^ __ROR4__(v15, 7) ^ __ROR4__(v15, 18)) + ((v13 >> 10) ^ __ROR4__(v13, 17) ^ __ROR4__(v13, 19));
    v8[15] = v10 + *(v8 - 1) + ((v14 >> 10) ^ __ROR4__(v14, 17) ^ __ROR4__(v14, 19)) + ((*v8 >> 3) ^ __ROR4__(*v8, 7) ^ __ROR4__(*v8, 18));
    --v2;
  }
  while ( v2 );
  v16 = v213 + (__ROR4__(v6, 6) ^ __ROR4__(v6, 11) ^ __ROR4__(v6, 25)) + (v4 ^ v6 & (v4 ^ v7)) + v209 + 1116352408;
  v17 = v16 + v210;
  v18 = v16 + (__ROR4__(v3, 2) ^ __ROR4__(v3, 13) ^ __ROR4__(v3, 22)) + (v3 & v5 | v211 & (v3 | v5));
  v19 = v214 + (__ROR4__(v16 + v210, 6) ^ __ROR4__(v16 + v210, 11) ^ __ROR4__(v16 + v210, 25)) + (v7 ^ (v16 + v210) & (v6 ^ v7)) + v205 + 1899447441;
  v20 = v211 + v19;
  v21 = v19 + (__ROR4__(v18, 2) ^ __ROR4__(v18, 13) ^ __ROR4__(v18, 22)) + (v18 & v3 | v5 & (v18 | v3));
  v22 = v7 + v215 + (__ROR4__(v211 + v19, 6) ^ __ROR4__(v211 + v19, 11) ^ __ROR4__(v211 + v19, 25)) + (v6 ^ (v211 + v19) & (v17 ^ v6));
  v23 = v5 + v22 - 1245643825;
  v24 = (v21 & v18 | v3 & (v18 | v21)) + v22 + (__ROR4__(v21, 2) ^ __ROR4__(v21, 13) ^ __ROR4__(v21, 22)) - 1245643825;
  v25 = v216 + (__ROR4__(v23, 6) ^ __ROR4__(v23, 11) ^ __ROR4__(v23, 25)) + (v17 ^ v23 & (v20 ^ v17)) + v6 - 373957723;
  v26 = v25 + v3;
  v27 = v25 + (__ROR4__(v24, 2) ^ __ROR4__(v24, 13) ^ __ROR4__(v24, 22)) + (v24 & v21 | v18 & (v24 | v21));
  v28 = v217 + (__ROR4__(v26, 6) ^ __ROR4__(v26, 11) ^ __ROR4__(v26, 25)) + (v20 ^ v26 & (v20 ^ v23)) + v17 + 961987163;
  v29 = v18 + v28;
  v30 = v28 + (__ROR4__(v27, 2) ^ __ROR4__(v27, 13) ^ __ROR4__(v27, 22)) + (v24 & v27 | v21 & (v24 | v27));
  v31 = v20 + (__ROR4__(v18 + v28, 11) ^ __ROR4__(v18 + v28, 25) ^ __ROR4__(v18 + v28, 6)) + (v23 ^ (v18 + v28) & (v26 ^ v23)) + v218 + 1508970993;
  v32 = v21 + v31;
  v33 = v31 + (__ROR4__(v30, 2) ^ __ROR4__(v30, 13) ^ __ROR4__(v30, 22)) + (v27 & v30 | v24 & (v27 | v30));
  v34 = v23 + (__ROR4__(v21 + v31, 11) ^ __ROR4__(v21 + v31, 25) ^ __ROR4__(v32, 6)) + (v26 ^ v32 & (v29 ^ v26)) + v219 - 1841331548;
  v35 = v34 + v24;
  v36 = v34 + (__ROR4__(v33, 2) ^ __ROR4__(v33, 13) ^ __ROR4__(v33, 22)) + (v30 & v33 | v27 & (v30 | v33));
  v37 = v220 + (__ROR4__(v35, 6) ^ __ROR4__(v35, 11) ^ __ROR4__(v35, 25)) + (v29 ^ v35 & (v32 ^ v29)) + v26 - 1424204075;
  v38 = v37 + v27;
  v39 = v37 + (__ROR4__(v36, 2) ^ __ROR4__(v36, 13) ^ __ROR4__(v36, 22)) + (v36 & v33 | v30 & (v36 | v33));
  v40 = v221 + (__ROR4__(v38, 6) ^ __ROR4__(v38, 11) ^ __ROR4__(v38, 25)) + (v32 ^ v38 & (v32 ^ v35)) + v29 - 670586216;
  v41 = v40 + v30;
  v42 = v40 + (__ROR4__(v39, 2) ^ __ROR4__(v39, 13) ^ __ROR4__(v39, 22)) + (v39 & v36 | v33 & (v39 | v36));
  v43 = v222 + (__ROR4__(v41, 6) ^ __ROR4__(v41, 11) ^ __ROR4__(v41, 25)) + (v35 ^ v41 & (v38 ^ v35)) + v32 + 310598401;
  v44 = v43 + v33;
  v45 = v43 + (__ROR4__(v42, 2) ^ __ROR4__(v42, 13) ^ __ROR4__(v42, 22)) + (v42 & v39 | v36 & (v42 | v39));
  v46 = v223 + (__ROR4__(v44, 6) ^ __ROR4__(v44, 11) ^ __ROR4__(v44, 25)) + (v38 ^ v44 & (v38 ^ v41)) + v35 + 607225278;
  v47 = v46 + v36;
  v48 = v46 + (__ROR4__(v45, 2) ^ __ROR4__(v45, 13) ^ __ROR4__(v45, 22)) + (v45 & v42 | v39 & (v45 | v42));
  v49 = v224 + (__ROR4__(v47, 6) ^ __ROR4__(v47, 11) ^ __ROR4__(v47, 25)) + (v41 ^ v47 & (v41 ^ v44)) + v38 + 1426881987;
  v50 = v49 + v39;
  v51 = v49 + (__ROR4__(v48, 2) ^ __ROR4__(v48, 13) ^ __ROR4__(v48, 22)) + (v45 & v48 | v42 & (v45 | v48));
  v52 = v225 + (__ROR4__(v50, 6) ^ __ROR4__(v50, 11) ^ __ROR4__(v50, 25)) + (v44 ^ v50 & (v47 ^ v44)) + v41 + 1925078388;
  v53 = v52 + v42;
  v54 = v52 + (__ROR4__(v51, 2) ^ __ROR4__(v51, 13) ^ __ROR4__(v51, 22)) + (v51 & v48 | v45 & (v51 | v48));
  v55 = v226 + (__ROR4__(v53, 6) ^ __ROR4__(v53, 11) ^ __ROR4__(v53, 25)) + (v47 ^ v53 & (v50 ^ v47)) + v44 - 2132889090;
  v56 = v55 + v45;
  v57 = v55 + (__ROR4__(v54, 2) ^ __ROR4__(v54, 13) ^ __ROR4__(v54, 22)) + (v51 & v54 | v48 & (v51 | v54));
  v58 = v227 + (__ROR4__(v56, 6) ^ __ROR4__(v56, 11) ^ __ROR4__(v56, 25)) + (v50 ^ v56 & (v53 ^ v50)) + v47 - 1680079193;
  v59 = v58 + v48;
  v60 = v58 + (__ROR4__(v57, 2) ^ __ROR4__(v57, 13) ^ __ROR4__(v57, 22)) + (v54 & v57 | v51 & (v54 | v57));
  v61 = v228 + (__ROR4__(v59, 6) ^ __ROR4__(v59, 11) ^ __ROR4__(v59, 25)) + (v53 ^ v59 & (v56 ^ v53)) + v50 - 1046744716;
  v62 = v61 + v51;
  v63 = v61 + (__ROR4__(v60, 2) ^ __ROR4__(v60, 13) ^ __ROR4__(v60, 22)) + (v60 & v57 | v54 & (v60 | v57));
  v64 = v229 + (__ROR4__(v62, 6) ^ __ROR4__(v62, 11) ^ __ROR4__(v62, 25)) + (v56 ^ v62 & (v56 ^ v59)) + v53 - 459576895;
  v65 = v64 + v54;
  v66 = v64 + (__ROR4__(v63, 2) ^ __ROR4__(v63, 13) ^ __ROR4__(v63, 22)) + (v63 & v60 | v57 & (v63 | v60));
  v67 = v230 + (__ROR4__(v65, 6) ^ __ROR4__(v65, 11) ^ __ROR4__(v65, 25)) + (v59 ^ v65 & (v62 ^ v59)) + v56 - 272742522;
  v68 = v67 + v57;
  v69 = v67 + (__ROR4__(v66, 2) ^ __ROR4__(v66, 13) ^ __ROR4__(v66, 22)) + (v66 & v63 | v60 & (v66 | v63));
  v70 = v231 + (__ROR4__(v68, 6) ^ __ROR4__(v68, 11) ^ __ROR4__(v68, 25)) + (v62 ^ v68 & (v62 ^ v65)) + v59 + 264347078;
  v71 = v70 + v60;
  v72 = v70 + (__ROR4__(v69, 2) ^ __ROR4__(v69, 13) ^ __ROR4__(v69, 22)) + (v69 & v66 | v63 & (v69 | v66));
  v73 = v232 + (__ROR4__(v71, 6) ^ __ROR4__(v71, 11) ^ __ROR4__(v71, 25)) + (v65 ^ v71 & (v65 ^ v68)) + v62 + 604807628;
  v74 = v73 + v63;
  v75 = v73 + (__ROR4__(v72, 2) ^ __ROR4__(v72, 13) ^ __ROR4__(v72, 22)) + (v69 & v72 | v66 & (v69 | v72));
  v76 = v233 + (__ROR4__(v74, 6) ^ __ROR4__(v74, 11) ^ __ROR4__(v74, 25)) + (v68 ^ v74 & (v71 ^ v68)) + v65 + 770255983;
  v77 = v76 + v66;
  v78 = v76 + (__ROR4__(v75, 2) ^ __ROR4__(v75, 13) ^ __ROR4__(v75, 22)) + (v75 & v72 | v69 & (v75 | v72));
  v79 = v234 + (__ROR4__(v77, 6) ^ __ROR4__(v77, 11) ^ __ROR4__(v77, 25)) + (v71 ^ v77 & (v74 ^ v71)) + v68 + 1249150122;
  v80 = v79 + v69;
  v81 = v79 + (__ROR4__(v78, 2) ^ __ROR4__(v78, 13) ^ __ROR4__(v78, 22)) + (v75 & v78 | v72 & (v75 | v78));
  v82 = v235 + (__ROR4__(v80, 6) ^ __ROR4__(v80, 11) ^ __ROR4__(v80, 25)) + (v74 ^ v80 & (v77 ^ v74)) + v71 + 1555081692;
  v83 = v82 + v72;
  v84 = v82 + (__ROR4__(v81, 2) ^ __ROR4__(v81, 13) ^ __ROR4__(v81, 22)) + (v78 & v81 | v75 & (v78 | v81));
  v85 = v236 + (__ROR4__(v83, 6) ^ __ROR4__(v83, 11) ^ __ROR4__(v83, 25)) + (v77 ^ v83 & (v80 ^ v77)) + v74 + 1996064986;
  v86 = v85 + v75;
  v87 = v85 + (__ROR4__(v84, 2) ^ __ROR4__(v84, 13) ^ __ROR4__(v84, 22)) + (v84 & v81 | v78 & (v84 | v81));
  v88 = v237 + (__ROR4__(v86, 6) ^ __ROR4__(v86, 11) ^ __ROR4__(v86, 25)) + (v80 ^ v86 & (v80 ^ v83)) + v77 - 1740746414;
  v89 = v88 + v78;
  v90 = v88 + (__ROR4__(v87, 2) ^ __ROR4__(v87, 13) ^ __ROR4__(v87, 22)) + (v87 & v84 | v81 & (v87 | v84));
  v91 = v238 + (__ROR4__(v89, 6) ^ __ROR4__(v89, 11) ^ __ROR4__(v89, 25)) + (v83 ^ v89 & (v86 ^ v83)) + v80 - 1473132947;
  v92 = v91 + v81;
  v93 = v91 + (__ROR4__(v90, 2) ^ __ROR4__(v90, 13) ^ __ROR4__(v90, 22)) + (v90 & v87 | v84 & (v90 | v87));
  v94 = v239 + (__ROR4__(v92, 6) ^ __ROR4__(v92, 11) ^ __ROR4__(v92, 25)) + (v86 ^ v92 & (v86 ^ v89)) + v83 - 1341970488;
  v95 = v94 + v84;
  v96 = v94 + (__ROR4__(v93, 2) ^ __ROR4__(v93, 13) ^ __ROR4__(v93, 22)) + (v93 & v90 | v87 & (v93 | v90));
  v97 = v240 + (__ROR4__(v95, 6) ^ __ROR4__(v95, 11) ^ __ROR4__(v95, 25)) + (v89 ^ v95 & (v89 ^ v92)) + v86 - 1084653625;
  v98 = v97 + v87;
  v99 = v97 + (__ROR4__(v96, 2) ^ __ROR4__(v96, 13) ^ __ROR4__(v96, 22)) + (v93 & v96 | v90 & (v93 | v96));
  v100 = v241 + (__ROR4__(v98, 6) ^ __ROR4__(v98, 11) ^ __ROR4__(v98, 25)) + (v92 ^ v98 & (v95 ^ v92)) + v89 - 958395405;
  v101 = v100 + v90;
  v102 = v100 + (__ROR4__(v99, 2) ^ __ROR4__(v99, 13) ^ __ROR4__(v99, 22)) + (v99 & v96 | v93 & (v99 | v96));
  v103 = v242 + (__ROR4__(v101, 6) ^ __ROR4__(v101, 11) ^ __ROR4__(v101, 25)) + (v95 ^ v101 & (v98 ^ v95)) + v92 - 710438585;
  v104 = v103 + v93;
  v105 = v103 + (__ROR4__(v102, 2) ^ __ROR4__(v102, 13) ^ __ROR4__(v102, 22)) + (v99 & v102 | v96 & (v99 | v102));
  v106 = v243 + (__ROR4__(v104, 6) ^ __ROR4__(v104, 11) ^ __ROR4__(v104, 25)) + (v98 ^ v104 & (v101 ^ v98)) + v95 + 113926993;
  v107 = v106 + v96;
  v108 = v106 + (__ROR4__(v105, 2) ^ __ROR4__(v105, 13) ^ __ROR4__(v105, 22)) + (v102 & v105 | v99 & (v102 | v105));
  v109 = v244 + (__ROR4__(v107, 6) ^ __ROR4__(v107, 11) ^ __ROR4__(v107, 25)) + (v101 ^ v107 & (v104 ^ v101)) + v98 + 338241895;
  v110 = v109 + v99;
  v111 = v109 + (__ROR4__(v108, 2) ^ __ROR4__(v108, 13) ^ __ROR4__(v108, 22)) + (v108 & v105 | v102 & (v108 | v105));
  v112 = v245 + (__ROR4__(v110, 6) ^ __ROR4__(v110, 11) ^ __ROR4__(v110, 25)) + (v104 ^ v110 & (v104 ^ v107)) + v101 + 666307205;
  v113 = v112 + v102;
  v114 = v112 + (__ROR4__(v111, 2) ^ __ROR4__(v111, 13) ^ __ROR4__(v111, 22)) + (v111 & v108 | v105 & (v111 | v108));
  v115 = v246 + (__ROR4__(v113, 6) ^ __ROR4__(v113, 11) ^ __ROR4__(v113, 25)) + (v107 ^ v113 & (v110 ^ v107)) + v104 + 773529912;
  v116 = v115 + v105;
  v117 = v115 + (__ROR4__(v114, 2) ^ __ROR4__(v114, 13) ^ __ROR4__(v114, 22)) + (v114 & v111 | v108 & (v114 | v111));
  v118 = v247 + (__ROR4__(v116, 6) ^ __ROR4__(v116, 11) ^ __ROR4__(v116, 25)) + (v110 ^ v116 & (v110 ^ v113)) + v107 + 1294757372;
  v119 = v118 + v108;
  v120 = v118 + (__ROR4__(v117, 2) ^ __ROR4__(v117, 13) ^ __ROR4__(v117, 22)) + (v117 & v114 | v111 & (v117 | v114));
  v121 = v248 + (__ROR4__(v119, 6) ^ __ROR4__(v119, 11) ^ __ROR4__(v119, 25)) + (v113 ^ v119 & (v113 ^ v116)) + v110 + 1396182291;
  v122 = v121 + v111;
  v123 = v121 + (__ROR4__(v120, 2) ^ __ROR4__(v120, 13) ^ __ROR4__(v120, 22)) + (v117 & v120 | v114 & (v117 | v120));
  v124 = v249 + (__ROR4__(v122, 6) ^ __ROR4__(v122, 11) ^ __ROR4__(v122, 25)) + (v116 ^ v122 & (v119 ^ v116)) + v113 + 1695183700;
  v125 = v124 + v114;
  v126 = v124 + (__ROR4__(v123, 2) ^ __ROR4__(v123, 13) ^ __ROR4__(v123, 22)) + (v123 & v120 | v117 & (v123 | v120));
  v127 = v250 + (__ROR4__(v125, 6) ^ __ROR4__(v125, 11) ^ __ROR4__(v125, 25)) + (v119 ^ v125 & (v122 ^ v119)) + v116 + 1986661051;
  v128 = v127 + v117;
  v129 = v127 + (__ROR4__(v126, 2) ^ __ROR4__(v126, 13) ^ __ROR4__(v126, 22)) + (v123 & v126 | v120 & (v123 | v126));
  v130 = v251 + (__ROR4__(v128, 6) ^ __ROR4__(v128, 11) ^ __ROR4__(v128, 25)) + (v122 ^ v128 & (v125 ^ v122)) + v119 - 2117940946;
  v131 = v130 + v120;
  v132 = v130 + (__ROR4__(v129, 2) ^ __ROR4__(v129, 13) ^ __ROR4__(v129, 22)) + (v126 & v129 | v123 & (v126 | v129));
  v133 = v252 + (__ROR4__(v131, 6) ^ __ROR4__(v131, 11) ^ __ROR4__(v131, 25)) + (v125 ^ v131 & (v128 ^ v125)) + v122 - 1838011259;
  v134 = v133 + v123;
  v135 = v133 + (__ROR4__(v132, 2) ^ __ROR4__(v132, 13) ^ __ROR4__(v132, 22)) + (v132 & v129 | v126 & (v132 | v129));
  v136 = v253 + (__ROR4__(v134, 6) ^ __ROR4__(v134, 11) ^ __ROR4__(v134, 25)) + (v128 ^ v134 & (v128 ^ v131)) + v125 - 1564481375;
  v137 = v136 + v126;
  v138 = v136 + (__ROR4__(v135, 2) ^ __ROR4__(v135, 13) ^ __ROR4__(v135, 22)) + (v135 & v132 | v129 & (v135 | v132));
  v139 = v254 + (__ROR4__(v137, 6) ^ __ROR4__(v137, 11) ^ __ROR4__(v137, 25)) + (v131 ^ v137 & (v134 ^ v131)) + v128 - 1474664885;
  v140 = v139 + v129;
  v141 = v139 + (__ROR4__(v138, 2) ^ __ROR4__(v138, 13) ^ __ROR4__(v138, 22)) + (v138 & v135 | v132 & (v138 | v135));
  v142 = v255 + (__ROR4__(v140, 6) ^ __ROR4__(v140, 11) ^ __ROR4__(v140, 25)) + (v134 ^ v140 & (v134 ^ v137)) + v131 - 1035236496;
  v143 = v142 + v132;
  v144 = v142 + (__ROR4__(v141, 2) ^ __ROR4__(v141, 13) ^ __ROR4__(v141, 22)) + (v141 & v138 | v135 & (v141 | v138));
  v145 = v256 + (__ROR4__(v143, 6) ^ __ROR4__(v143, 11) ^ __ROR4__(v143, 25)) + (v137 ^ v143 & (v137 ^ v140)) + v134 - 949202525;
  v146 = v145 + v135;
  v147 = v145 + (__ROR4__(v144, 2) ^ __ROR4__(v144, 13) ^ __ROR4__(v144, 22)) + (v141 & v144 | v138 & (v141 | v144));
  v148 = v257 + (__ROR4__(v146, 6) ^ __ROR4__(v146, 11) ^ __ROR4__(v146, 25)) + (v140 ^ v146 & (v143 ^ v140)) + v137 - 778901479;
  v149 = v148 + v138;
  v150 = v148 + (__ROR4__(v147, 2) ^ __ROR4__(v147, 13) ^ __ROR4__(v147, 22)) + (v147 & v144 | v141 & (v147 | v144));
  v151 = v258 + (__ROR4__(v149, 6) ^ __ROR4__(v149, 11) ^ __ROR4__(v149, 25)) + (v143 ^ v149 & (v146 ^ v143)) + v140 - 694614492;
  v152 = v151 + v141;
  v153 = v151 + (__ROR4__(v150, 2) ^ __ROR4__(v150, 13) ^ __ROR4__(v150, 22)) + (v147 & v150 | v144 & (v147 | v150));
  v154 = v259 + (__ROR4__(v152, 6) ^ __ROR4__(v152, 11) ^ __ROR4__(v152, 25)) + (v146 ^ v152 & (v149 ^ v146)) + v143 - 200395387;
  v155 = v154 + v144;
  v156 = v154 + (__ROR4__(v153, 2) ^ __ROR4__(v153, 13) ^ __ROR4__(v153, 22)) + (v150 & v153 | v147 & (v150 | v153));
  v157 = v260 + (__ROR4__(v155, 6) ^ __ROR4__(v155, 11) ^ __ROR4__(v155, 25)) + (v149 ^ v155 & (v152 ^ v149)) + v146 + 275423344;
  v158 = v157 + v147;
  v159 = v157 + (__ROR4__(v156, 2) ^ __ROR4__(v156, 13) ^ __ROR4__(v156, 22)) + (v156 & v153 | v150 & (v156 | v153));
  v160 = v261 + (__ROR4__(v158, 6) ^ __ROR4__(v158, 11) ^ __ROR4__(v158, 25)) + (v152 ^ v158 & (v152 ^ v155)) + v149 + 430227734;
  v161 = v160 + v150;
  v162 = v160 + (__ROR4__(v159, 2) ^ __ROR4__(v159, 13) ^ __ROR4__(v159, 22)) + (v159 & v156 | v153 & (v159 | v156));
  v163 = v262 + (__ROR4__(v161, 6) ^ __ROR4__(v161, 11) ^ __ROR4__(v161, 25)) + (v155 ^ v161 & (v158 ^ v155)) + v152 + 506948616;
  v164 = v163 + v153;
  v165 = v163 + (__ROR4__(v162, 2) ^ __ROR4__(v162, 13) ^ __ROR4__(v162, 22)) + (v162 & v159 | v156 & (v162 | v159));
  v166 = v263 + (__ROR4__(v164, 6) ^ __ROR4__(v164, 11) ^ __ROR4__(v164, 25)) + (v158 ^ v164 & (v158 ^ v161)) + v155 + 659060556;
  v167 = v166 + v156;
  v168 = v166 + (__ROR4__(v165, 2) ^ __ROR4__(v165, 13) ^ __ROR4__(v165, 22)) + (v165 & v162 | v159 & (v165 | v162));
  v169 = v264 + (__ROR4__(v167, 6) ^ __ROR4__(v167, 11) ^ __ROR4__(v167, 25)) + (v161 ^ v167 & (v161 ^ v164)) + v158 + 883997877;
  v206 = v169 + v159;
  v170 = v169 + (__ROR4__(v168, 2) ^ __ROR4__(v168, 13) ^ __ROR4__(v168, 22)) + (v165 & v168 | v162 & (v165 | v168));
  v171 = v265 + (__ROR4__(v169 + v159, 6) ^ __ROR4__(v169 + v159, 11) ^ __ROR4__(v169 + v159, 25)) + (v164 ^ (v169 + v159) & (v167 ^ v164)) + v161 + 958139571;
  v172 = v171 + v162;
  v173 = v171 + (__ROR4__(v170, 2) ^ __ROR4__(v170, 13) ^ __ROR4__(v170, 22)) + (v170 & v168 | v165 & (v170 | v168));
  v174 = v266 + (__ROR4__(v172, 6) ^ __ROR4__(v172, 11) ^ __ROR4__(v172, 25)) + (v167 ^ v172 & (v206 ^ v167)) + v164 + 1322822218;
  v175 = v174 + v165;
  v176 = v174 + (__ROR4__(v173, 2) ^ __ROR4__(v173, 13) ^ __ROR4__(v173, 22)) + (v170 & v173 | v168 & (v170 | v173));
  v177 = v267 + (__ROR4__(v175, 6) ^ __ROR4__(v175, 11) ^ __ROR4__(v175, 25)) + (v206 ^ v175 & (v172 ^ v206)) + v167 + 1537002063;
  v178 = v177 + v168;
  v179 = v177 + (__ROR4__(v176, 2) ^ __ROR4__(v176, 13) ^ __ROR4__(v176, 22)) + (v173 & v176 | v170 & (v173 | v176));
  v180 = v268 + (__ROR4__(v178, 6) ^ __ROR4__(v178, 11) ^ __ROR4__(v178, 25)) + (v172 ^ v178 & (v175 ^ v172)) + v206 + 1747873779;
  v207 = v180 + v170;
  v181 = v180 + (__ROR4__(v179, 2) ^ __ROR4__(v179, 13) ^ __ROR4__(v179, 22)) + (v179 & v176 | v173 & (v179 | v176));
  v182 = v269 + (__ROR4__(v180 + v170, 6) ^ __ROR4__(v180 + v170, 11) ^ __ROR4__(v180 + v170, 25)) + (v175 ^ (v180 + v170) & (v175 ^ v178)) + v172 + 1955562222;
  v183 = v182 + v173;
  v184 = v182 + (__ROR4__(v181, 2) ^ __ROR4__(v181, 13) ^ __ROR4__(v181, 22)) + (v181 & v179 | v176 & (v181 | v179));
  v185 = v270 + (__ROR4__(v183, 6) ^ __ROR4__(v183, 11) ^ __ROR4__(v183, 25)) + (v178 ^ v183 & (v207 ^ v178)) + v175 + 2024104815;
  v186 = v185 + v176;
  v187 = v207;
  v188 = v185 + (__ROR4__(v184, 2) ^ __ROR4__(v184, 13) ^ __ROR4__(v184, 22)) + (v184 & v181 | v179 & (v184 | v181));
  v189 = v271 + (__ROR4__(v186, 6) ^ __ROR4__(v186, 11) ^ __ROR4__(v186, 25)) + (v207 ^ v186 & (v207 ^ v183)) + v178 - 2067236844;
  v208 = v189 + v179;
  v190 = v189 + (__ROR4__(v188, 2) ^ __ROR4__(v188, 13) ^ __ROR4__(v188, 22)) + (v188 & v184 | v181 & (v188 | v184));
  v191 = v187 + v272 + (__ROR4__(v189 + v179, 6) ^ __ROR4__(v189 + v179, 11) ^ __ROR4__(v189 + v179, 25)) + (v183 ^ (v189 + v179) & (v183 ^ v186));
  v192 = v181 + v191 - 1933114872;
  v193 = (v188 & v190 | v184 & (v188 | v190)) + v191 + (__ROR4__(v190, 2) ^ __ROR4__(v190, 13) ^ __ROR4__(v190, 22)) - 1933114872;
  v194 = v273 + (__ROR4__(v192, 6) ^ __ROR4__(v192, 11) ^ __ROR4__(v192, 25)) + (v186 ^ v192 & (v208 ^ v186)) + v183 - 1866530822;
  v195 = v194 + v184;
  v196 = v194 + (__ROR4__(v193, 2) ^ __ROR4__(v193, 13) ^ __ROR4__(v193, 22)) + (v190 & v193 | v188 & (v190 | v193));
  v197 = v274 + (__ROR4__(v195, 6) ^ __ROR4__(v195, 11) ^ __ROR4__(v195, 25)) + (v208 ^ v195 & (v208 ^ v192)) + v186 - 1538233109;
  v198 = v197 + v188;
  v199 = v197 + (__ROR4__(v196, 2) ^ __ROR4__(v196, 13) ^ __ROR4__(v196, 22)) + (v196 & v193 | v190 & (v196 | v193));
  v200 = v275 + (__ROR4__(v198, 6) ^ __ROR4__(v198, 11) ^ __ROR4__(v198, 25)) + (v192 ^ v198 & (v195 ^ v192)) + v208 - 1090935817;
  v201 = v200 + v190;
  v202 = v200 + (__ROR4__(v199, 2) ^ __ROR4__(v199, 13) ^ __ROR4__(v199, 22)) + (v196 & v199 | v193 & (v196 | v199));
  v203 = v192 + v276 + (__ROR4__(v201, 6) ^ __ROR4__(v201, 11) ^ __ROR4__(v201, 25)) + (v195 ^ v201 & (v198 ^ v195));
  md->sha256.state[0] = v203 + (__ROR4__(v202, 2) ^ __ROR4__(v202, 13) ^ __ROR4__(v202, 22)) + (v202 & v199 | v196 & (v202 | v199)) + v212 - 965641998;
  md->sha256.state[1] += v202;
  md->sha256.state[2] += v199;
  md->sha256.state[3] += v196;
  md->sha256.state[4] += v203 + v193 - 965641998;
  md->sha256.state[5] += v201;
  md->sha256.state[6] += v198;
  md->sha256.state[7] += v195;
  return 0i64;
}

