/*
==============
jpeg_fdct_islow
==============
*/
void jpeg_fdct_islow(int *data)
{
  __int64 v1; 
  int *v2; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
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
  __int64 v53; 
  int *v54; 
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

  v1 = 4i64;
  v2 = data + 2;
  do
  {
    v4 = v2[5];
    v5 = *(v2 - 2);
    v6 = *(v2 - 1);
    v7 = v2[1];
    v8 = v2[6];
    v9 = v5 + v4;
    v10 = v5 - v4;
    v11 = v2[4];
    v12 = v6 + v11;
    v13 = v6 - v11;
    v14 = v2[3];
    v15 = v14 + *v2;
    v16 = *v2 - v14;
    v17 = v2[2];
    v18 = v7 + v17;
    v19 = v7 - v17;
    v20 = v18 + v9;
    v21 = v9 - v18;
    v22 = v15 + v12;
    v23 = v12 - v15;
    *(v2 - 2) = 4 * (v22 + v20);
    v2[2] = 4 * (v20 - v22);
    v24 = 4433 * (v23 + v21);
    *v2 = (6270 * v21 + v24 + 1024) >> 11;
    v2[4] = (v24 - 15137 * v23 + 1024) >> 11;
    v25 = -20995 * (v16 + v13);
    v26 = 9633 * (v16 + v10 + v19 + v13) - 16069 * (v19 + v13);
    v27 = 9633 * (v16 + v10 + v19 + v13) - 3196 * (v16 + v10);
    v28 = 16819 * v16;
    v29 = v2[8];
    v2[5] = (v26 + 2446 * v19 - 7373 * (v19 + v10) + 1024) >> 11;
    v30 = v27 + v28 + v25 + 1024;
    v31 = 25172 * v13;
    v32 = v2[7];
    v2[3] = v30 >> 11;
    v2[1] = (v26 + v31 + v25 + 1024) >> 11;
    v33 = v2[13];
    *(v2 - 1) = (v27 + 12299 * v10 - 7373 * (v19 + v10) + 1024) >> 11;
    v34 = v33 + v8;
    v35 = v8 - v33;
    v36 = v2[12];
    v37 = v32 + v36;
    v38 = v32 - v36;
    v39 = v2[11];
    v40 = v39 + v29;
    v41 = v2[9];
    v2 += 16;
    v42 = v29 - v39;
    v43 = *(v2 - 6);
    v44 = v41 + v43;
    v45 = v41 - v43;
    v46 = v44 + v34;
    v47 = v34 - v44;
    v48 = v40 + v37;
    v49 = v37 - v40;
    *(v2 - 10) = 4 * (v48 + v46);
    *(v2 - 6) = 4 * (v46 - v48);
    v50 = 4433 * (v49 + v47);
    *(v2 - 8) = (6270 * v47 + v50 + 1024) >> 11;
    *(v2 - 4) = (v50 - 15137 * v49 + 1024) >> 11;
    v51 = 9633 * (v42 + v35 + v45 + v38) - 16069 * (v45 + v38);
    v52 = 9633 * (v42 + v35 + v45 + v38) - 3196 * (v42 + v35);
    *(v2 - 3) = (v51 + 2446 * v45 - 7373 * (v45 + v35) + 1024) >> 11;
    *(v2 - 5) = (v52 + 16819 * v42 - 20995 * (v42 + v38) + 1024) >> 11;
    *(v2 - 7) = (v51 + 25172 * v38 - 20995 * (v42 + v38) + 1024) >> 11;
    *(v2 - 9) = (v52 + 12299 * v35 - 7373 * (v45 + v35) + 1024) >> 11;
    --v1;
  }
  while ( v1 );
  v53 = 4i64;
  v54 = data + 16;
  do
  {
    v55 = v54[40];
    v56 = *(v54 - 16);
    v57 = *(v54 - 8);
    v58 = v54[8];
    v59 = *(v54 - 15);
    v60 = v56 + v55;
    v61 = v56 - v55;
    v62 = v54[32];
    v63 = v57 + v62;
    v64 = v57 - v62;
    v65 = v54[24];
    v66 = v65 + *v54;
    v67 = *v54 - v65;
    v68 = v54[16];
    v69 = v58 + v68;
    v70 = v58 - v68;
    v71 = v69 + v60;
    v72 = v60 - v69;
    v73 = v66 + v63;
    v74 = v63 - v66;
    *(v54 - 16) = (v73 + v71 + 2) >> 2;
    v54[16] = (v71 - v73 + 2) >> 2;
    v75 = 4433 * (v74 + v72);
    *v54 = (6270 * v72 + v75 + 0x4000) >> 15;
    v54[32] = (v75 - 15137 * v74 + 0x4000) >> 15;
    v76 = -20995 * (v67 + v64);
    v77 = 9633 * (v67 + v61 + v70 + v64) - 16069 * (v70 + v64);
    v78 = 9633 * (v67 + v61 + v70 + v64) - 3196 * (v67 + v61);
    v79 = 16819 * v67;
    v80 = v54[1];
    v54[40] = (v77 + 2446 * v70 - 7373 * (v70 + v61) + 0x4000) >> 15;
    v81 = v78 + v79 + v76 + 0x4000;
    v82 = 25172 * v64;
    v83 = *(v54 - 7);
    v54[24] = v81 >> 15;
    v54[8] = (v77 + v82 + v76 + 0x4000) >> 15;
    v84 = v54[41];
    *(v54 - 8) = (v78 + 12299 * v61 - 7373 * (v70 + v61) + 0x4000) >> 15;
    v85 = v84 + v59;
    v86 = v59 - v84;
    v87 = v54[33];
    v88 = v83 + v87;
    v89 = v83 - v87;
    v90 = v54[25];
    v91 = v54[9];
    v92 = v90 + v80;
    v93 = v80 - v90;
    v94 = v54[17];
    v54 += 2;
    v95 = v91 + v94;
    v96 = v91 - v94;
    v97 = v95 + v85;
    v98 = v85 - v95;
    v99 = v92 + v88;
    v100 = v88 - v92;
    *(v54 - 17) = (v99 + v97 + 2) >> 2;
    v54[15] = (v97 - v99 + 2) >> 2;
    v101 = 4433 * (v100 + v98);
    *(v54 - 1) = (6270 * v98 + v101 + 0x4000) >> 15;
    v54[31] = (v101 - 15137 * v100 + 0x4000) >> 15;
    v102 = 9633 * (v93 + v86 + v96 + v89) - 16069 * (v96 + v89);
    v103 = 9633 * (v93 + v86 + v96 + v89) - 3196 * (v93 + v86);
    v54[39] = (v102 + 2446 * v96 - 7373 * (v96 + v86) + 0x4000) >> 15;
    v54[23] = (v103 + 16819 * v93 - 20995 * (v93 + v89) + 0x4000) >> 15;
    v54[7] = (v102 + 25172 * v89 - 20995 * (v93 + v89) + 0x4000) >> 15;
    *(v54 - 9) = (v103 + 12299 * v86 - 7373 * (v96 + v86) + 0x4000) >> 15;
    --v53;
  }
  while ( v53 );
}
