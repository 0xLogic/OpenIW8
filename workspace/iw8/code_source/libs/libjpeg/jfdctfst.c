/*
==============
jpeg_fdct_ifast
==============
*/
void jpeg_fdct_ifast(int *data)
{
  __int64 v1; 
  int *v2; 
  __int64 v3; 
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
  int *v113; 
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
  int v204; 
  int v205; 
  int v206; 
  int v207; 
  int v208; 
  int v209; 
  int v210; 
  int v211; 
  int v212; 
  int v213; 
  int v214; 
  int v215; 
  int v216; 
  int v217; 
  int v218; 
  int v219; 
  int v220; 
  int v221; 

  v1 = 2i64;
  v2 = data + 2;
  v3 = 2i64;
  do
  {
    v5 = v2[5];
    v6 = v2[2];
    v7 = *(v2 - 2);
    v8 = *(v2 - 1);
    v9 = v2[1];
    v10 = v7 + v5;
    v11 = v7 - v5;
    v12 = v2[4];
    v13 = v12 + v8;
    v14 = v8 - v12;
    v15 = v2[3];
    v16 = *v2 + v15;
    v17 = *v2 - v15;
    v18 = v6 + v9;
    v19 = v6 + v9 + v10;
    v20 = v17 + v9 - v6;
    v21 = v10 - v18;
    *(v2 - 2) = v16 + v13 + v19;
    v2[2] = v19 - (v16 + v13);
    v22 = v13 + v21 - v16;
    v23 = (139 * v20) >> 8;
    v24 = (181 * v22) >> 8;
    *v2 = v24 + v21;
    v25 = 334 * (v14 + v11);
    v26 = v20;
    v27 = v2[9];
    v28 = 98 * (v26 - (v14 + v11));
    v29 = v17 + v14;
    v30 = v2[7];
    v31 = v2[8];
    v28 >>= 8;
    v32 = v28 + v23;
    v2[4] = v21 - v24;
    v33 = v28 + (v25 >> 8);
    v34 = (181 * v29) >> 8;
    v35 = v34 + v11;
    v36 = v11 - v34;
    v2[3] = v36 + v32;
    *(v2 - 1) = v35 + v33;
    v37 = v35 - v33;
    v38 = v2[13];
    v39 = v2[10];
    v2[1] = v36 - v32;
    v40 = v2[6];
    v2[5] = v37;
    v41 = v38 + v40;
    v42 = v40 - v38;
    v43 = v2[12];
    v44 = v30 + v43;
    v45 = v30 - v43;
    v46 = v2[11];
    v47 = v46 + v31;
    v48 = v31 - v46;
    v49 = v27 + v39 + v41;
    v50 = v41 - (v27 + v39);
    v2[6] = v47 + v44 + v49;
    v2[10] = v49 - (v47 + v44);
    v51 = v48 + v27 - v39;
    v52 = (181 * (v44 + v50 - v47)) >> 8;
    v2[8] = v52 + v50;
    v53 = 334 * (v45 + v42);
    v2[12] = v50 - v52;
    v54 = v2[16];
    v55 = 98 * (v51 - (v45 + v42));
    v56 = v48 + v45;
    v57 = v2[14];
    v58 = v2[15];
    v55 >>= 8;
    v59 = v55 + (v53 >> 8);
    v60 = v55 + ((139 * v51) >> 8);
    v61 = (181 * v56) >> 8;
    v62 = v61 + v42;
    v63 = v42 - v61;
    v2[11] = v63 + v60;
    v2[7] = v62 + v59;
    v64 = v62 - v59;
    v65 = v2[21];
    v66 = v2[17];
    v2[13] = v64;
    v2[9] = v63 - v60;
    v67 = v65 + v57;
    v68 = v57 - v65;
    v69 = v2[20];
    v70 = v58 + v69;
    v71 = v58 - v69;
    v72 = v2[19];
    v73 = v72 + v54;
    v74 = v54 - v72;
    v75 = v2[18];
    v76 = v66 + v75 + v67;
    v77 = v67 - (v66 + v75);
    v2[14] = v73 + v70 + v76;
    v2[18] = v76 - (v73 + v70);
    v78 = (181 * (v70 + v77 - v73)) >> 8;
    v2[16] = v78 + v77;
    v79 = v66 - v75 + v74;
    v2[20] = v77 - v78;
    v80 = (98 * (v79 - (v71 + v68))) >> 8;
    v81 = v80 + ((139 * v79) >> 8);
    v82 = v80 + ((334 * (v71 + v68)) >> 8);
    v83 = (181 * (v74 + v71)) >> 8;
    v84 = v83 + v68;
    v85 = v2[23];
    v86 = v68 - v83;
    v87 = v2[24];
    v2 += 32;
    v88 = v86 + v81;
    v89 = v86 - v81;
    v90 = *(v2 - 7);
    *(v2 - 13) = v88;
    *(v2 - 17) = v84 + v82;
    v91 = *(v2 - 3);
    *(v2 - 11) = v84 - v82;
    *(v2 - 15) = v89;
    v92 = *(v2 - 10);
    v93 = v91 + v92;
    v94 = v92 - v91;
    v95 = *(v2 - 4);
    v96 = v85 + v95;
    v97 = v85 - v95;
    v98 = *(v2 - 5);
    v99 = v98 + v87;
    v100 = v87 - v98;
    v101 = *(v2 - 6);
    v102 = v90 + v101;
    v103 = v90 - v101;
    v104 = v102 + v93;
    v105 = v93 - v102;
    *(v2 - 10) = v99 + v96 + v104;
    *(v2 - 6) = v104 - (v99 + v96);
    v106 = (181 * (v96 + v105 - v99)) >> 8;
    *(v2 - 8) = v106 + v105;
    *(v2 - 4) = v105 - v106;
    v107 = (98 * (v103 + v100 - (v97 + v94))) >> 8;
    v108 = (181 * (v100 + v97)) >> 8;
    v109 = v107 + ((139 * (v103 + v100)) >> 8);
    v110 = v107 + ((334 * (v97 + v94)) >> 8);
    v111 = v108 + v94;
    v112 = v94 - v108;
    *(v2 - 5) = v112 + v109;
    *(v2 - 7) = v112 - v109;
    *(v2 - 3) = v111 - v110;
    *(v2 - 9) = v111 + v110;
    --v3;
  }
  while ( v3 );
  v113 = data + 16;
  do
  {
    v114 = v113[40];
    v115 = v113[16];
    v116 = *(v113 - 16);
    v117 = *(v113 - 8);
    v118 = v113[8];
    v119 = v114 + v116;
    v120 = v116 - v114;
    v121 = v113[32];
    v122 = v117 + v121;
    v123 = v117 - v121;
    v124 = v113[24];
    v125 = v124 + *v113;
    v126 = *v113 - v124;
    v127 = v118 + v115;
    v128 = v118 + v115 + v119;
    v129 = v126 + v118 - v115;
    v130 = v119 - v127;
    *(v113 - 16) = v125 + v122 + v128;
    v113[16] = v128 - (v125 + v122);
    v131 = v122 + v130 - v125;
    v132 = (139 * v129) >> 8;
    v133 = (181 * v131) >> 8;
    *v113 = v133 + v130;
    v134 = 334 * (v123 + v120);
    v135 = v129;
    v136 = v113[9];
    v137 = 98 * (v135 - (v123 + v120));
    v138 = v126 + v123;
    v139 = *(v113 - 7);
    v140 = v113[1];
    v137 >>= 8;
    v141 = v137 + v132;
    v113[32] = v130 - v133;
    v142 = v137 + (v134 >> 8);
    v143 = (181 * v138) >> 8;
    v144 = v143 + v120;
    v145 = v120 - v143;
    v113[24] = v145 + v141;
    *(v113 - 8) = v144 + v142;
    v146 = v144 - v142;
    v147 = v113[41];
    v148 = v113[17];
    v113[8] = v145 - v141;
    v149 = *(v113 - 15);
    v113[40] = v146;
    v150 = v147 + v149;
    v151 = v149 - v147;
    v152 = v113[33];
    v153 = v139 + v152;
    v154 = v139 - v152;
    v155 = v113[25];
    v156 = v155 + v140;
    v157 = v140 - v155;
    v158 = v136 + v148 + v150;
    v159 = v150 - (v136 + v148);
    *(v113 - 15) = v156 + v153 + v158;
    v113[17] = v158 - (v156 + v153);
    v160 = v157 + v136 - v148;
    v161 = (181 * (v153 + v159 - v156)) >> 8;
    v113[1] = v161 + v159;
    v162 = 334 * (v154 + v151);
    v113[33] = v159 - v161;
    v163 = v113[2];
    v164 = 98 * (v160 - (v154 + v151));
    v165 = v157 + v154;
    v166 = *(v113 - 14);
    v167 = *(v113 - 6);
    v164 >>= 8;
    v168 = v164 + (v162 >> 8);
    v169 = v164 + ((139 * v160) >> 8);
    v170 = (181 * v165) >> 8;
    v171 = v170 + v151;
    v172 = v151 - v170;
    v113[25] = v172 + v169;
    *(v113 - 7) = v171 + v168;
    v173 = v171 - v168;
    v174 = v113[42];
    v175 = v113[10];
    v113[41] = v173;
    v113[9] = v172 - v169;
    v176 = v166 + v174;
    v177 = v166 - v174;
    v178 = v113[34];
    v179 = v178 + v167;
    v180 = v167 - v178;
    v181 = v113[26];
    v182 = v163 + v181;
    v183 = v163 - v181;
    v184 = v113[18];
    v185 = v184 + v175 + v176;
    v186 = v176 - (v184 + v175);
    *(v113 - 14) = v182 + v179 + v185;
    v113[18] = v185 - (v182 + v179);
    v187 = (181 * (v179 + v186 - v182)) >> 8;
    v113[2] = v187 + v186;
    v188 = v175 - v184 + v183;
    v113[34] = v186 - v187;
    v189 = (98 * (v188 - (v180 + v177))) >> 8;
    v190 = v189 + ((139 * v188) >> 8);
    v191 = v189 + ((334 * (v180 + v177)) >> 8);
    v192 = (181 * (v183 + v180)) >> 8;
    v193 = v192 + v177;
    v194 = *(v113 - 5);
    v195 = v177 - v192;
    v196 = v113[3];
    v113 += 4;
    v197 = v195 + v190;
    v198 = v195 - v190;
    v199 = v113[7];
    v113[22] = v197;
    *(v113 - 10) = v193 + v191;
    v200 = v113[39];
    v113[38] = v193 - v191;
    v113[6] = v198;
    v201 = *(v113 - 17);
    v202 = v200 + v201;
    v203 = v201 - v200;
    v204 = v113[31];
    v205 = v194 + v204;
    v206 = v194 - v204;
    v207 = v113[23];
    v208 = v207 + v196;
    v209 = v196 - v207;
    v210 = v113[15];
    v211 = v199 + v210;
    v212 = v199 - v210;
    v213 = v211 + v202;
    v214 = v202 - v211;
    *(v113 - 17) = v208 + v205 + v213;
    v113[15] = v213 - (v208 + v205);
    v215 = (181 * (v205 + v214 - v208)) >> 8;
    *(v113 - 1) = v215 + v214;
    v113[31] = v214 - v215;
    v216 = (98 * (v212 + v209 - (v206 + v203))) >> 8;
    v217 = (181 * (v209 + v206)) >> 8;
    v218 = v216 + ((139 * (v212 + v209)) >> 8);
    v219 = v216 + ((334 * (v206 + v203)) >> 8);
    v220 = v217 + v203;
    v221 = v203 - v217;
    v113[23] = v221 + v218;
    v113[7] = v221 - v218;
    v113[39] = v220 - v219;
    *(v113 - 9) = v220 + v219;
    --v1;
  }
  while ( v1 );
}
