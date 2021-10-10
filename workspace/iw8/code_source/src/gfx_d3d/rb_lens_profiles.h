/*
==============
LensProfile_Init_Telescopic
==============
*/

void __fastcall LensProfile_Init_Telescopic(ZoomLensDistortProfile *lprofile)
{
  ?LensProfile_Init_Telescopic@@YAXPEAUZoomLensDistortProfile@@@Z(lprofile);
}

/*
==============
LensProfile_Init_Compact
==============
*/

void __fastcall LensProfile_Init_Compact(ZoomLensDistortProfile *lprofile)
{
  ?LensProfile_Init_Compact@@YAXPEAUZoomLensDistortProfile@@@Z(lprofile);
}

/*
==============
LensProfile_Init_Compact
==============
*/
void LensProfile_Init_Compact(ZoomLensDistortProfile *lprofile)
{
  _XMM2 = LODWORD(FLOAT_0_011046);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_011044);
  *(double *)lprofile->distortCurveTable[0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_011029);
  *(double *)lprofile->distortCurveTable[1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_01099);
  *(double *)lprofile->distortCurveTable[2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_010913);
  *(double *)lprofile->distortCurveTable[3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_010785);
  *(double *)lprofile->distortCurveTable[4].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_010596);
  lprofile->distortCurveTable[0].v[2] = FLOAT_N0_010623;
  lprofile->distortCurveTable[1].v[2] = FLOAT_N0_0094330003;
  *(double *)lprofile->distortCurveTable[5].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_010331);
  lprofile->distortCurveTable[2].v[2] = FLOAT_N0_0082440004;
  lprofile->distortCurveTable[3].v[2] = FLOAT_N0_0070540002;
  *(double *)lprofile->distortCurveTable[6].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[4].v[2] = FLOAT_N0_0058650002;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0099780001);
  lprofile->distortCurveTable[5].v[2] = FLOAT_N0_004675;
  *(double *)lprofile->distortCurveTable[7].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[6].v[2] = FLOAT_N0_003485;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->distortCurveTable[7].v[2] = FLOAT_N0_002296;
  *(double *)lprofile->distortCurveTable[8].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_0095260004);
  _XMM2 = LODWORD(FLOAT_0_0089609995);
  _XMM4 = LODWORD(FLOAT_0_000082999999);
  __asm
  {
    vunpcklps xmm0, xmm1, xmm0
    vunpcklps xmm1, xmm2, xmm1
  }
  _XMM2 = LODWORD(FLOAT_0_0082700001);
  *(double *)lprofile->distortCurveTable[10].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0074430001);
  *(double *)lprofile->distortCurveTable[11].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0064650001);
  *(double *)lprofile->distortCurveTable[12].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_005324);
  *(double *)lprofile->distortCurveTable[13].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0040079998);
  *(double *)lprofile->distortCurveTable[9].v = *(double *)&_XMM0;
  lprofile->distortCurveTable[8].v[2] = FLOAT_N0_001106;
  *(double *)lprofile->distortCurveTable[14].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_002505);
  *(double *)lprofile->distortCurveTable[15].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_00080099999);
  *(double *)lprofile->distortCurveTable[16].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001116);
  *(double *)lprofile->distortCurveTable[17].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[9].v[2] = FLOAT_0_000082999999;
  lprofile->distortCurveTable[10].v[2] = FLOAT_0_001273;
  lprofile->distortCurveTable[11].v[2] = FLOAT_0_0024629999;
  lprofile->distortCurveTable[12].v[2] = FLOAT_0_0036520001;
  lprofile->distortCurveTable[13].v[2] = FLOAT_0_0048420001;
  lprofile->distortCurveTable[14].v[2] = FLOAT_0_0060310001;
  lprofile->distortCurveTable[15].v[2] = FLOAT_0_0072209998;
  lprofile->distortCurveTable[16].v[2] = FLOAT_0_0084109996;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->distortCurveTable[17].v[2] = FLOAT_0_0096000005;
  *(double *)lprofile->distortCurveTable[18].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[18].v[2] = FLOAT_0_01079;
  _XMM2 = LODWORD(FLOAT_N0_001954);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001953);
  *(double *)lprofile->distortCurveTable[19].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001951);
  *(double *)lprofile->distortCurveTable[20].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001945);
  *(double *)lprofile->distortCurveTable[21].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0019349999);
  *(double *)lprofile->distortCurveTable[22].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0019189999);
  *(double *)lprofile->distortCurveTable[23].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001897);
  lprofile->distortCurveTable[19].v[2] = FLOAT_0_011386;
  *(double *)lprofile->distortCurveTable[24].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001867);
  lprofile->distortCurveTable[20].v[2] = FLOAT_0_011578;
  lprofile->distortCurveTable[21].v[2] = FLOAT_0_01177;
  *(double *)lprofile->distortCurveTable[25].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0018279999);
  lprofile->distortCurveTable[22].v[2] = FLOAT_0_011963;
  lprofile->distortCurveTable[23].v[2] = FLOAT_0_012155;
  *(double *)lprofile->distortCurveTable[26].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001779);
  lprofile->distortCurveTable[24].v[2] = FLOAT_0_012348;
  lprofile->distortCurveTable[25].v[2] = FLOAT_0_01254;
  *(double *)lprofile->distortCurveTable[27].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[26].v[2] = FLOAT_0_012733;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001718);
  lprofile->distortCurveTable[27].v[2] = FLOAT_0_012925;
  *(double *)lprofile->distortCurveTable[28].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[28].v[2] = FLOAT_0_013118;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001645);
  *(double *)lprofile->distortCurveTable[29].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001557);
  *(double *)lprofile->distortCurveTable[30].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001455);
  *(double *)lprofile->distortCurveTable[31].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0013370001);
  *(double *)lprofile->distortCurveTable[32].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0012009999);
  *(double *)lprofile->distortCurveTable[33].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0010470001);
  *(double *)lprofile->distortCurveTable[34].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00102);
  lprofile->distortCurveTable[29].v[2] = FLOAT_0_01331;
  lprofile->distortCurveTable[30].v[2] = FLOAT_0_013503;
  *(double *)lprofile->distortCurveTable[35].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001013);
  lprofile->distortCurveTable[31].v[2] = FLOAT_0_013695;
  lprofile->distortCurveTable[32].v[2] = FLOAT_0_013887;
  *(double *)lprofile->distortCurveTable[36].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00099099998);
  lprofile->distortCurveTable[33].v[2] = FLOAT_0_01408;
  lprofile->distortCurveTable[34].v[2] = FLOAT_0_014272;
  *(double *)lprofile->distortCurveTable[37].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[35].v[2] = FLOAT_0_014465;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00094699999);
  lprofile->distortCurveTable[36].v[2] = FLOAT_0_014968;
  *(double *)lprofile->distortCurveTable[38].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[37].v[2] = FLOAT_0_01553;
  lprofile->distortCurveTable[38].v[2] = FLOAT_0_016092001;
  _XMM3 = LODWORD(FLOAT_0_0018260001);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00087300001);
  *(double *)lprofile->distortCurveTable[39].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00076099997);
  *(double *)lprofile->distortCurveTable[40].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_000604);
  *(double *)lprofile->distortCurveTable[41].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00039299999);
  *(double *)lprofile->distortCurveTable[42].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00012);
  *(double *)lprofile->distortCurveTable[43].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_00022099999);
  *(double *)lprofile->distortCurveTable[44].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_00063899998);
  lprofile->distortCurveTable[39].v[2] = FLOAT_0_016652999;
  lprofile->distortCurveTable[40].v[2] = FLOAT_0_017215;
  *(double *)lprofile->distortCurveTable[45].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001143);
  lprofile->distortCurveTable[41].v[2] = FLOAT_0_017777;
  lprofile->distortCurveTable[42].v[2] = FLOAT_0_018338;
  *(double *)lprofile->distortCurveTable[46].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[43].v[2] = FLOAT_0_0189;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001738);
  lprofile->distortCurveTable[44].v[2] = FLOAT_0_019462001;
  *(double *)lprofile->distortCurveTable[47].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[45].v[2] = FLOAT_0_020022999;
  lprofile->distortCurveTable[46].v[2] = FLOAT_0_020585001;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->distortCurveTable[48].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[47].v[2] = FLOAT_0_021147;
  lprofile->distortCurveTable[48].v[2] = FLOAT_0_021708;
  _XMM2 = LODWORD(FLOAT_0_001824);
  __asm { vunpcklps xmm1, xmm3, xmm1 }
  *(double *)lprofile->distortCurveTable[49].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm3, xmm1 }
  *(double *)lprofile->distortCurveTable[50].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001822);
  *(double *)lprofile->distortCurveTable[51].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001818);
  *(double *)lprofile->distortCurveTable[52].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0018119999);
  *(double *)lprofile->distortCurveTable[53].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001803);
  *(double *)lprofile->distortCurveTable[54].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001792);
  lprofile->distortCurveTable[49].v[2] = FLOAT_0_022485999;
  *(double *)lprofile->distortCurveTable[55].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001777);
  lprofile->distortCurveTable[50].v[2] = FLOAT_0_023297001;
  lprofile->distortCurveTable[51].v[2] = FLOAT_0_024108;
  *(double *)lprofile->distortCurveTable[56].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001759);
  lprofile->distortCurveTable[52].v[2] = FLOAT_0_02492;
  lprofile->distortCurveTable[53].v[2] = FLOAT_0_025730999;
  *(double *)lprofile->distortCurveTable[57].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[54].v[2] = FLOAT_0_026542;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0017359999);
  lprofile->distortCurveTable[55].v[2] = FLOAT_0_027353;
  *(double *)lprofile->distortCurveTable[58].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[56].v[2] = FLOAT_0_028163999;
  lprofile->distortCurveTable[57].v[2] = FLOAT_0_028976001;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->distortCurveTable[58].v[2] = FLOAT_0_029787;
  _XMM3 = LODWORD(FLOAT_0_00012300001);
  _XMM2 = LODWORD(FLOAT_0_001709);
  *(double *)lprofile->distortCurveTable[59].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001677);
  *(double *)lprofile->distortCurveTable[60].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001639);
  *(double *)lprofile->distortCurveTable[61].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_001596);
  *(double *)lprofile->distortCurveTable[62].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[59].v[2] = FLOAT_0_030598;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->distortCurveTable[63].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[60].v[2] = FLOAT_0_031408999;
  lprofile->distortCurveTable[61].v[2] = FLOAT_0_032221001;
  _XMM0 = LODWORD(FLOAT_0_000124);
  lprofile->distortCurveTable[62].v[2] = FLOAT_0_033032;
  _XMM1 = LODWORD(FLOAT_N0_000142);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm10
    vunpcklps xmm1, xmm1, xmm10
  }
  *(double *)lprofile->tcaRedCurveTable[0].v = *(double *)&_XMM0;
  *(double *)lprofile->tcaBlueCurveTable[0].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_00012500001);
  lprofile->distortCurveTable[63].v[2] = FLOAT_0_033842999;
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  lprofile->tcaRedCurveTable[0].v[2] = FLOAT_1_000239;
  *(double *)lprofile->tcaBlueCurveTable[1].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[0].v[2] = FLOAT_1_000447;
  __asm { vunpcklps xmm0, xmm3, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[1].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[1].v[2] = FLOAT_1_000258;
  __asm { vunpcklps xmm1, xmm3, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[2].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000111);
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  lprofile->tcaBlueCurveTable[1].v[2] = FLOAT_1_000385;
  *(double *)lprofile->tcaBlueCurveTable[2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm3, xmm10 }
  lprofile->tcaRedCurveTable[2].v[2] = FLOAT_1_000275;
  *(double *)lprofile->tcaRedCurveTable[3].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[2].v[2] = FLOAT_1_000333;
  _XMM1 = LODWORD(FLOAT_N0_000099999997);
  lprofile->tcaRedCurveTable[3].v[2] = FLOAT_1_000288;
  _XMM0 = LODWORD(FLOAT_N0_000093000002);
  __asm { vunpcklps xmm0, xmm0, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[4].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[3].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[3].v[2] = FLOAT_1_0002919;
  __asm { vunpcklps xmm1, xmm3, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[4].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[4].v[2] = FLOAT_1_000297;
  _XMM0 = LODWORD(FLOAT_N0_000090000001);
  __asm { vunpcklps xmm0, xmm0, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[5].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000128);
  lprofile->tcaBlueCurveTable[4].v[2] = FLOAT_1_000266;
  __asm { vunpcklps xmm0, xmm0, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[6].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm3, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[5].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000079999998);
  lprofile->tcaRedCurveTable[5].v[2] = FLOAT_1_0003;
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[6].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000072000003);
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[7].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_00013299999);
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[8].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000067000001);
  lprofile->tcaBlueCurveTable[5].v[2] = FLOAT_1_000255;
  _XMM0 = LODWORD(FLOAT_0_00013099999);
  __asm { vunpcklps xmm0, xmm0, xmm10 }
  lprofile->tcaRedCurveTable[6].v[2] = FLOAT_1_000301;
  *(double *)lprofile->tcaRedCurveTable[7].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[6].v[2] = FLOAT_1_000235;
  lprofile->tcaRedCurveTable[7].v[2] = FLOAT_1_000301;
  lprofile->tcaBlueCurveTable[7].v[2] = FLOAT_1_0002199;
  _XMM0 = LODWORD(FLOAT_0_00013);
  lprofile->tcaRedCurveTable[8].v[2] = FLOAT_1_000302;
  __asm
  {
    vunpcklps xmm1, xmm1, xmm10
    vunpcklps xmm0, xmm0, xmm10
  }
  *(double *)lprofile->tcaBlueCurveTable[8].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[8].v[2] = FLOAT_1_00021;
  *(double *)lprofile->tcaRedCurveTable[9].v = *(double *)&_XMM0;
  _XMM1 = LODWORD(FLOAT_N0_000064);
  _XMM9 = LODWORD(FLOAT_N0_000054);
  _XMM5 = LODWORD(FLOAT_N0_000053);
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[9].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000119);
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[10].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000060999999);
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[10].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_00011);
  lprofile->tcaRedCurveTable[9].v[2] = FLOAT_1_000301;
  lprofile->tcaBlueCurveTable[9].v[2] = FLOAT_1_000205;
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[11].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000058000001);
  lprofile->tcaRedCurveTable[10].v[2] = FLOAT_1_000299;
  lprofile->tcaBlueCurveTable[10].v[2] = FLOAT_1_000196;
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[11].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000102);
  lprofile->tcaRedCurveTable[11].v[2] = FLOAT_1_000298;
  lprofile->tcaBlueCurveTable[11].v[2] = FLOAT_1_000188;
  _XMM0 = LODWORD(FLOAT_0_000096999996);
  __asm
  {
    vunpcklps xmm1, xmm1, xmm10
    vunpcklps xmm0, xmm0, xmm10
  }
  *(double *)lprofile->tcaRedCurveTable[12].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000056000001);
  *(double *)lprofile->tcaRedCurveTable[13].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[12].v[2] = FLOAT_1_000296;
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[12].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[12].v[2] = FLOAT_1_000182;
  __asm { vunpcklps xmm0, xmm9, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[13].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000093000002);
  __asm { vunpcklps xmm0, xmm0, xmm10 }
  *(double *)lprofile->tcaRedCurveTable[14].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[13].v[2] = FLOAT_1_000295;
  lprofile->tcaBlueCurveTable[13].v[2] = FLOAT_1_000177;
  __asm { vunpcklps xmm1, xmm5, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[14].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000090000001);
  lprofile->tcaRedCurveTable[14].v[2] = FLOAT_1_000295;
  lprofile->tcaBlueCurveTable[14].v[2] = FLOAT_1_000175;
  __asm { vunpcklps xmm1, xmm1, xmm10 }
  _XMM6 = LODWORD(FLOAT_N0_000049999999);
  _XMM7 = LODWORD(FLOAT_N0_000051999999);
  _XMM11 = LODWORD(FLOAT_0_000075000004);
  *(double *)lprofile->tcaRedCurveTable[15].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[15].v[2] = FLOAT_1_000289;
  __asm { vunpcklps xmm1, xmm7, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[15].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[15].v[2] = FLOAT_1_000173;
  __asm { vunpcklps xmm1, xmm4, xmm10 }
  _XMM4 = LODWORD(FLOAT_N0_000048000002);
  *(double *)lprofile->tcaRedCurveTable[16].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000077999997);
  lprofile->tcaRedCurveTable[16].v[2] = FLOAT_1_000277;
  __asm
  {
    vunpcklps xmm1, xmm1, xmm10
    vunpcklps xmm0, xmm6, xmm10
  }
  *(double *)lprofile->tcaBlueCurveTable[16].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[16].v[2] = FLOAT_1_0001709;
  *(double *)lprofile->tcaRedCurveTable[17].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[17].v[2] = FLOAT_1_000268;
  __asm { vunpcklps xmm0, xmm4, xmm10 }
  *(double *)lprofile->tcaBlueCurveTable[17].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[17].v[2] = FLOAT_1_00017;
  _XMM0 = LODWORD(FLOAT_N0_000047000001);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm10
    vunpcklps xmm1, xmm11, xmm10
  }
  _XMM10 = LODWORD(FLOAT_0_000069000002);
  *(double *)lprofile->tcaRedCurveTable[18].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[18].v[2] = FLOAT_1_000263;
  *(double *)lprofile->tcaBlueCurveTable[18].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm10, xmm1 }
  lprofile->tcaBlueCurveTable[18].v[2] = FLOAT_1_000169;
  *(double *)lprofile->tcaRedCurveTable[19].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000059999998);
  lprofile->tcaRedCurveTable[19].v[2] = FLOAT_1_0002609;
  __asm { vunpcklps xmm0, xmm4, xmm3 }
  _XMM4 = LODWORD(FLOAT_0_000051999999);
  *(double *)lprofile->tcaBlueCurveTable[19].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[19].v[2] = FLOAT_1_00017;
  __asm { vunpcklps xmm1, xmm1, xmm3 }
  *(double *)lprofile->tcaRedCurveTable[20].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[20].v[2] = FLOAT_1_000259;
  __asm { vunpcklps xmm0, xmm6, xmm1 }
  *(double *)lprofile->tcaBlueCurveTable[20].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[20].v[2] = FLOAT_1_000172;
  _XMM1 = LODWORD(FLOAT_0_000046000001);
  __asm
  {
    vunpcklps xmm1, xmm1, xmm15
    vunpcklps xmm0, xmm4, xmm15
  }
  *(double *)lprofile->tcaRedCurveTable[21].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[21].v[2] = FLOAT_1_000258;
  __asm { vunpcklps xmm0, xmm7, xmm15 }
  *(double *)lprofile->tcaBlueCurveTable[21].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[21].v[2] = FLOAT_1_000174;
  *(double *)lprofile->tcaRedCurveTable[22].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000044);
  lprofile->tcaRedCurveTable[22].v[2] = FLOAT_1_0002559;
  __asm { vunpcklps xmm0, xmm5, xmm15 }
  *(double *)lprofile->tcaBlueCurveTable[22].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000040999999);
  lprofile->tcaBlueCurveTable[22].v[2] = FLOAT_1_000176;
  __asm { vunpcklps xmm0, xmm0, xmm5 }
  *(double *)lprofile->tcaRedCurveTable[23].v = *(double *)&_XMM0;
  __asm
  {
    vunpcklps xmm1, xmm1, xmm5
    vunpcklps xmm0, xmm9, xmm5
  }
  lprofile->tcaRedCurveTable[23].v[2] = FLOAT_1_000255;
  *(double *)lprofile->tcaBlueCurveTable[23].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000039999999);
  __asm { vunpcklps xmm0, xmm0, xmm5 }
  lprofile->tcaBlueCurveTable[23].v[2] = FLOAT_1_000177;
  *(double *)lprofile->tcaRedCurveTable[24].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm9, xmm5 }
  lprofile->tcaRedCurveTable[24].v[2] = FLOAT_1_000255;
  *(double *)lprofile->tcaBlueCurveTable[24].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[24].v[2] = FLOAT_1_000177;
  *(double *)lprofile->tcaRedCurveTable[25].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000048000002);
  lprofile->tcaRedCurveTable[25].v[2] = FLOAT_1_000252;
  __asm
  {
    vunpcklps xmm1, xmm1, xmm5
    vunpcklps xmm0, xmm7, xmm5
  }
  *(double *)lprofile->tcaBlueCurveTable[25].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[25].v[2] = FLOAT_1_000172;
  *(double *)lprofile->tcaRedCurveTable[26].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[26].v[2] = FLOAT_1_00025;
  _XMM0 = LODWORD(FLOAT_N0_000048000002);
  __asm { vunpcklps xmm1, xmm6, xmm5 }
  *(double *)lprofile->tcaBlueCurveTable[26].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[26].v[2] = FLOAT_1_000167;
  __asm { vunpcklps xmm1, xmm4, xmm5 }
  *(double *)lprofile->tcaRedCurveTable[27].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[27].v[2] = FLOAT_1_000248;
  _XMM13 = LODWORD(FLOAT_N0_000045000001);
  _XMM15 = LODWORD(FLOAT_0_000055);
  _XMM8 = LODWORD(FLOAT_N0_000040999999);
  __asm { vunpcklps xmm0, xmm0, xmm5 }
  *(double *)lprofile->tcaBlueCurveTable[27].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[27].v[2] = FLOAT_1_000163;
  _XMM0 = LODWORD(FLOAT_0_000057000001);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm5
    vunpcklps xmm1, xmm15, xmm5
  }
  *(double *)lprofile->tcaRedCurveTable[28].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000046000001);
  lprofile->tcaRedCurveTable[28].v[2] = FLOAT_1_000247;
  __asm { vunpcklps xmm1, xmm1, xmm5 }
  *(double *)lprofile->tcaBlueCurveTable[28].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[28].v[2] = FLOAT_1_00016;
  *(double *)lprofile->tcaRedCurveTable[29].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[29].v[2] = FLOAT_1_000245;
  _XMM0 = LODWORD(FLOAT_0_000058000001);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm5
    vunpcklps xmm1, xmm13, xmm5
  }
  *(double *)lprofile->tcaBlueCurveTable[29].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[29].v[2] = FLOAT_1_000157;
  *(double *)lprofile->tcaRedCurveTable[30].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[30].v[2] = FLOAT_1_000245;
  _XMM0 = LODWORD(FLOAT_0_000062999999);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm5
    vunpcklps xmm1, xmm13, xmm5
  }
  *(double *)lprofile->tcaBlueCurveTable[30].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[30].v[2] = FLOAT_1_000156;
  *(double *)lprofile->tcaRedCurveTable[31].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm8, xmm5 }
  lprofile->tcaRedCurveTable[31].v[2] = FLOAT_1_00023;
  *(double *)lprofile->tcaBlueCurveTable[31].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[31].v[2] = FLOAT_1_000149;
  _XMM0 = LODWORD(FLOAT_N0_000035000001);
  __asm { vunpcklps xmm1, xmm10, xmm5 }
  *(double *)lprofile->tcaRedCurveTable[32].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[32].v[2] = FLOAT_1_0002069;
  __asm { vunpcklps xmm0, xmm0, xmm5 }
  *(double *)lprofile->tcaBlueCurveTable[32].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[32].v[2] = FLOAT_1_000139;
  __asm { vunpcklps xmm1, xmm11, xmm5 }
  *(double *)lprofile->tcaRedCurveTable[33].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000031);
  lprofile->tcaRedCurveTable[33].v[2] = FLOAT_1_0001889;
  __asm { vunpcklps xmm1, xmm1, xmm5 }
  _XMM0 = LODWORD(FLOAT_0_000078999998);
  _XMM4 = LODWORD(FLOAT_N0_000026);
  _XMM11 = LODWORD(FLOAT_0_000045000001);
  _XMM7 = LODWORD(FLOAT_N0_000036000001);
  *(double *)lprofile->tcaBlueCurveTable[33].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[33].v[2] = FLOAT_1_0001301;
  __asm { vunpcklps xmm0, xmm0, xmm5 }
  *(double *)lprofile->tcaRedCurveTable[34].v = *(double *)&_XMM0;
  _XMM1 = LODWORD(FLOAT_N0_000028);
  lprofile->tcaRedCurveTable[34].v[2] = FLOAT_1_000176;
  _XMM0 = LODWORD(FLOAT_0_000079999998);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm5
    vunpcklps xmm1, xmm1, xmm5
  }
  *(double *)lprofile->tcaBlueCurveTable[34].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[34].v[2] = FLOAT_1_000124;
  *(double *)lprofile->tcaRedCurveTable[35].v = *(double *)&_XMM0;
  _XMM12 = LODWORD(FLOAT_N0_000048000002);
  lprofile->tcaRedCurveTable[35].v[2] = FLOAT_1_0001709;
  __asm { vunpcklps xmm1, xmm4, xmm5 }
  *(double *)lprofile->tcaBlueCurveTable[35].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[35].v[2] = FLOAT_1_000122;
  _XMM0 = LODWORD(FLOAT_0_000014);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm5
    vunpcklps xmm1, xmm11, xmm5
  }
  *(double *)lprofile->tcaRedCurveTable[36].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[36].v[2] = FLOAT_1_0002019;
  __asm { vunpcklps xmm1, xmm7, xmm5 }
  *(double *)lprofile->tcaBlueCurveTable[36].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[36].v[2] = FLOAT_1_000147;
  *(double *)lprofile->tcaRedCurveTable[37].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_000044);
  _XMM3 = LODWORD(FLOAT_N0_000002);
  lprofile->tcaRedCurveTable[37].v[2] = FLOAT_1_00023;
  _XMM14 = 0i64;
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[37].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[37].v[2] = FLOAT_1_000169;
  __asm { vunpcklps xmm0, xmm3, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[38].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[38].v[2] = FLOAT_1_000244;
  __asm { vunpcklps xmm0, xmm12, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[38].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[38].v[2] = FLOAT_1_0001791;
  __asm { vunpcklps xmm1, xmm3, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[39].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm8, xmm14 }
  lprofile->tcaRedCurveTable[39].v[2] = FLOAT_1_0002429;
  *(double *)lprofile->tcaBlueCurveTable[39].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[39].v[2] = FLOAT_1_000162;
  _XMM3 = LODWORD(FLOAT_N0_000001);
  __asm { vunpcklps xmm1, xmm3, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[40].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000033);
  lprofile->tcaRedCurveTable[40].v[2] = FLOAT_1_000241;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[40].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[40].v[2] = FLOAT_1_000141;
  __asm { vunpcklps xmm1, xmm3, xmm14 }
  _XMM3 = LODWORD(FLOAT_N0_0);
  *(double *)lprofile->tcaRedCurveTable[41].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[41].v[2] = FLOAT_1_00024;
  __asm { vunpcklps xmm1, xmm4, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[41].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000021);
  lprofile->tcaBlueCurveTable[41].v[2] = FLOAT_1_000123;
  __asm
  {
    vunpcklps xmm1, xmm1, xmm14
    vunpcklps xmm0, xmm3, xmm14
  }
  *(double *)lprofile->tcaRedCurveTable[42].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[42].v[2] = FLOAT_1_000239;
  *(double *)lprofile->tcaBlueCurveTable[42].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[42].v[2] = FLOAT_1_000108;
  _XMM0 = LODWORD(FLOAT_N0_000016);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm14
    vunpcklps xmm1, xmm3, xmm14
  }
  *(double *)lprofile->tcaRedCurveTable[43].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000013);
  lprofile->tcaRedCurveTable[43].v[2] = FLOAT_1_0002379;
  *(double *)lprofile->tcaBlueCurveTable[43].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[43].v[2] = FLOAT_1_000097;
  __asm { vunpcklps xmm0, xmm14, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[44].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[44].v[2] = FLOAT_1_000237;
  __asm
  {
    vunpcklps xmm0, xmm14, xmm14
    vunpcklps xmm1, xmm1, xmm14
  }
  *(double *)lprofile->tcaBlueCurveTable[44].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[44].v[2] = FLOAT_1_000089;
  *(double *)lprofile->tcaRedCurveTable[45].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_000012);
  lprofile->tcaRedCurveTable[45].v[2] = FLOAT_1_000237;
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[45].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000031);
  lprofile->tcaBlueCurveTable[45].v[2] = FLOAT_1_0000859;
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[46].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[46].v[2] = FLOAT_1_000163;
  _XMM9 = LODWORD(FLOAT_N0_000027);
  __asm { vunpcklps xmm0, xmm9, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[46].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[46].v[2] = FLOAT_1_000139;
  _XMM0 = LODWORD(FLOAT_N0_000038999999);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm14
    vunpcklps xmm1, xmm15, xmm14
  }
  *(double *)lprofile->tcaRedCurveTable[47].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000066000001);
  lprofile->tcaRedCurveTable[47].v[2] = FLOAT_1_000106;
  *(double *)lprofile->tcaBlueCurveTable[47].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[47].v[2] = FLOAT_1_0001791;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[48].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[48].v[2] = FLOAT_1_00008;
  __asm { vunpcklps xmm1, xmm13, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[48].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000039999999);
  lprofile->tcaBlueCurveTable[48].v[2] = FLOAT_1_000198;
  __asm
  {
    vunpcklps xmm1, xmm1, xmm14
    vunpcklps xmm0, xmm15, xmm14
  }
  *(double *)lprofile->tcaRedCurveTable[49].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[49].v[2] = FLOAT_1_000085;
  *(double *)lprofile->tcaBlueCurveTable[49].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000043);
  lprofile->tcaBlueCurveTable[49].v[2] = FLOAT_1_000192;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[50].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000034000001);
  lprofile->tcaRedCurveTable[50].v[2] = FLOAT_1_00009;
  __asm
  {
    vunpcklps xmm1, xmm1, xmm14
    vunpcklps xmm0, xmm7, xmm14
  }
  *(double *)lprofile->tcaBlueCurveTable[50].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[50].v[2] = FLOAT_1_000186;
  *(double *)lprofile->tcaRedCurveTable[51].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000032);
  lprofile->tcaRedCurveTable[51].v[2] = FLOAT_1_0000941;
  _XMM0 = LODWORD(FLOAT_0_000027);
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[51].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[51].v[2] = FLOAT_1_00018;
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[52].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[52].v[2] = FLOAT_1_000097;
  _XMM0 = LODWORD(FLOAT_N0_000029000001);
  _XMM4 = LODWORD(FLOAT_N0_000031);
  _XMM1 = LODWORD(FLOAT_0_000023000001);
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[52].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[52].v[2] = FLOAT_1_000176;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[53].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000019999999);
  lprofile->tcaRedCurveTable[53].v[2] = FLOAT_1_0000989;
  __asm
  {
    vunpcklps xmm1, xmm1, xmm14
    vunpcklps xmm0, xmm9, xmm14
  }
  *(double *)lprofile->tcaBlueCurveTable[53].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[53].v[2] = FLOAT_1_000174;
  *(double *)lprofile->tcaRedCurveTable[54].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[54].v[2] = FLOAT_1_000096;
  __asm { vunpcklps xmm1, xmm4, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[54].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000013);
  lprofile->tcaBlueCurveTable[54].v[2] = FLOAT_1_000181;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[55].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[55].v[2] = FLOAT_1_0000809;
  _XMM0 = LODWORD(FLOAT_N0_000061999999);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm14
    vunpcklps xmm1, xmm12, xmm14
  }
  *(double *)lprofile->tcaBlueCurveTable[55].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_0000070000001);
  lprofile->tcaBlueCurveTable[55].v[2] = FLOAT_1_0002151;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[56].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_0000030000001);
  lprofile->tcaRedCurveTable[56].v[2] = FLOAT_1_000069;
  *(double *)lprofile->tcaBlueCurveTable[56].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  lprofile->tcaBlueCurveTable[56].v[2] = FLOAT_1_000244;
  *(double *)lprofile->tcaRedCurveTable[57].v = *(double *)&_XMM1;
  _XMM0 = LODWORD(FLOAT_N0_000073000003);
  lprofile->tcaRedCurveTable[57].v[2] = FLOAT_1_000059;
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[57].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[57].v[2] = FLOAT_1_000266;
  __asm { vunpcklps xmm1, xmm14, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[58].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[58].v[2] = FLOAT_1_000053;
  _XMM1 = LODWORD(FLOAT_N0_000078999998);
  _XMM2 = LODWORD(FLOAT_N0_36240301);
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[58].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_0000060000002);
  lprofile->tcaBlueCurveTable[58].v[2] = FLOAT_1_0002789;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[59].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000075999997);
  lprofile->tcaRedCurveTable[59].v[2] = FLOAT_1_000055;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[59].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000028);
  lprofile->tcaBlueCurveTable[59].v[2] = FLOAT_1_000262;
  _XMM0 = LODWORD(FLOAT_N0_000057000001);
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[60].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[60].v[2] = FLOAT_1_000067;
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[60].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[60].v[2] = FLOAT_1_000186;
  __asm { vunpcklps xmm1, xmm11, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[61].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000040999999);
  lprofile->tcaRedCurveTable[61].v[2] = FLOAT_1_000077;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[61].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000056000001);
  lprofile->tcaBlueCurveTable[61].v[2] = FLOAT_1_000126;
  __asm { vunpcklps xmm1, xmm1, xmm14 }
  *(double *)lprofile->tcaRedCurveTable[62].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[62].v[2] = FLOAT_1_000083;
  __asm { vunpcklps xmm0, xmm4, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[62].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000060999999);
  __asm { vunpcklps xmm0, xmm0, xmm14 }
  lprofile->tcaBlueCurveTable[62].v[2] = FLOAT_1_0000859;
  *(double *)lprofile->tcaRedCurveTable[63].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[63].v[2] = FLOAT_1_000085;
  __asm { vunpcklps xmm1, xmm9, xmm14 }
  *(double *)lprofile->tcaBlueCurveTable[63].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_40965399);
  lprofile->tcaBlueCurveTable[63].v[2] = FLOAT_1_000071;
  *(double *)lprofile->vignetteCurveTable[0][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[0][0].v[2] = FLOAT_N0_125163;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[0][1].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_42700201);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43149999);
  lprofile->vignetteCurveTable[0][1].v[2] = FLOAT_N0_20970701;
  *(double *)lprofile->vignetteCurveTable[0][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_362656);
  lprofile->vignetteCurveTable[0][2].v[2] = FLOAT_N0_223974;
  *(double *)lprofile->vignetteCurveTable[0][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_41142699);
  lprofile->vignetteCurveTable[0][3].v[2] = FLOAT_N0_22576401;
  *(double *)lprofile->vignetteCurveTable[1][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_42873099);
  lprofile->vignetteCurveTable[1][0].v[2] = FLOAT_N0_125477;
  *(double *)lprofile->vignetteCurveTable[1][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_432998);
  lprofile->vignetteCurveTable[1][1].v[2] = FLOAT_N0_211496;
  *(double *)lprofile->vignetteCurveTable[1][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36293301);
  lprofile->vignetteCurveTable[1][2].v[2] = FLOAT_N0_225658;
  *(double *)lprofile->vignetteCurveTable[1][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_41328999);
  lprofile->vignetteCurveTable[1][3].v[2] = FLOAT_N0_22712301;
  *(double *)lprofile->vignetteCurveTable[2][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43053699);
  lprofile->vignetteCurveTable[2][0].v[2] = FLOAT_N0_125815;
  *(double *)lprofile->vignetteCurveTable[2][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43454099);
  lprofile->vignetteCurveTable[2][1].v[2] = FLOAT_N0_21330599;
  *(double *)lprofile->vignetteCurveTable[2][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[2][2].v[2] = FLOAT_N0_22735301;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[2][3].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_36323199);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_41523901);
  lprofile->vignetteCurveTable[2][3].v[2] = FLOAT_N0_228507;
  *(double *)lprofile->vignetteCurveTable[3][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43239501);
  lprofile->vignetteCurveTable[3][0].v[2] = FLOAT_N0_126177;
  *(double *)lprofile->vignetteCurveTable[3][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43612701);
  lprofile->vignetteCurveTable[3][1].v[2] = FLOAT_N0_215131;
  *(double *)lprofile->vignetteCurveTable[3][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_363554);
  lprofile->vignetteCurveTable[3][2].v[2] = FLOAT_N0_229039;
  *(double *)lprofile->vignetteCurveTable[3][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_41726801);
  lprofile->vignetteCurveTable[3][3].v[2] = FLOAT_N0_22991499;
  *(double *)lprofile->vignetteCurveTable[4][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43430099);
  lprofile->vignetteCurveTable[4][0].v[2] = FLOAT_N0_126562;
  *(double *)lprofile->vignetteCurveTable[4][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43775401);
  lprofile->vignetteCurveTable[4][1].v[2] = FLOAT_N0_21696401;
  *(double *)lprofile->vignetteCurveTable[4][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36389801);
  lprofile->vignetteCurveTable[4][2].v[2] = FLOAT_N0_230711;
  *(double *)lprofile->vignetteCurveTable[4][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_41936901);
  lprofile->vignetteCurveTable[4][3].v[2] = FLOAT_N0_231343;
  *(double *)lprofile->vignetteCurveTable[5][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[5][0].v[2] = FLOAT_N0_126968;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[5][1].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_43625101);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_439421);
  lprofile->vignetteCurveTable[5][1].v[2] = FLOAT_N0_218798;
  *(double *)lprofile->vignetteCurveTable[5][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_364263);
  lprofile->vignetteCurveTable[5][2].v[2] = FLOAT_N0_232364;
  *(double *)lprofile->vignetteCurveTable[5][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_42153299);
  lprofile->vignetteCurveTable[5][3].v[2] = FLOAT_N0_23279101;
  *(double *)lprofile->vignetteCurveTable[6][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_438241);
  lprofile->vignetteCurveTable[6][0].v[2] = FLOAT_N0_127395;
  *(double *)lprofile->vignetteCurveTable[6][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44112501);
  lprofile->vignetteCurveTable[6][1].v[2] = FLOAT_N0_220624;
  *(double *)lprofile->vignetteCurveTable[6][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36464801);
  lprofile->vignetteCurveTable[6][2].v[2] = FLOAT_N0_23399299;
  *(double *)lprofile->vignetteCurveTable[6][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_423749);
  lprofile->vignetteCurveTable[6][3].v[2] = FLOAT_N0_234256;
  *(double *)lprofile->vignetteCurveTable[7][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44026601);
  lprofile->vignetteCurveTable[7][0].v[2] = FLOAT_N0_12784;
  *(double *)lprofile->vignetteCurveTable[7][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44286099);
  lprofile->vignetteCurveTable[7][1].v[2] = FLOAT_N0_222434;
  *(double *)lprofile->vignetteCurveTable[7][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->vignetteCurveTable[7][2].v[2] = FLOAT_N0_235594;
  *(double *)lprofile->vignetteCurveTable[7][3].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_365053);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_426007);
  lprofile->vignetteCurveTable[7][3].v[2] = FLOAT_N0_235733;
  *(double *)lprofile->vignetteCurveTable[8][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44232801);
  lprofile->vignetteCurveTable[8][0].v[2] = FLOAT_N0_128304;
  *(double *)lprofile->vignetteCurveTable[8][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44462699);
  lprofile->vignetteCurveTable[8][1].v[2] = FLOAT_N0_224218;
  *(double *)lprofile->vignetteCurveTable[8][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36547601);
  lprofile->vignetteCurveTable[8][2].v[2] = FLOAT_N0_237176;
  *(double *)lprofile->vignetteCurveTable[8][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_42829499);
  lprofile->vignetteCurveTable[8][3].v[2] = FLOAT_N0_23721901;
  *(double *)lprofile->vignetteCurveTable[9][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44446599);
  lprofile->vignetteCurveTable[9][0].v[2] = FLOAT_N0_128783;
  *(double *)lprofile->vignetteCurveTable[9][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_446399);
  lprofile->vignetteCurveTable[9][1].v[2] = FLOAT_N0_22596499;
  *(double *)lprofile->vignetteCurveTable[9][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36591601);
  lprofile->vignetteCurveTable[9][2].v[2] = FLOAT_N0_23885;
  *(double *)lprofile->vignetteCurveTable[9][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_430601);
  lprofile->vignetteCurveTable[9][3].v[2] = FLOAT_N0_238445;
  *(double *)lprofile->vignetteCurveTable[10][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->vignetteCurveTable[10][0].v[2] = FLOAT_N0_12927701;
  *(double *)lprofile->vignetteCurveTable[10][1].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_44662499);
  lprofile->vignetteCurveTable[10][1].v[2] = FLOAT_N0_227663;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[10][2].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_44818801);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36637199);
  lprofile->vignetteCurveTable[10][2].v[2] = FLOAT_N0_24049699;
  *(double *)lprofile->vignetteCurveTable[10][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_432915);
  lprofile->vignetteCurveTable[10][3].v[2] = FLOAT_N0_239659;
  *(double *)lprofile->vignetteCurveTable[11][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_448791);
  lprofile->vignetteCurveTable[11][0].v[2] = FLOAT_N0_129784;
  *(double *)lprofile->vignetteCurveTable[11][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44999099);
  lprofile->vignetteCurveTable[11][1].v[2] = FLOAT_N0_229304;
  *(double *)lprofile->vignetteCurveTable[11][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36684299);
  lprofile->vignetteCurveTable[11][2].v[2] = FLOAT_N0_242088;
  *(double *)lprofile->vignetteCurveTable[11][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43522501);
  lprofile->vignetteCurveTable[11][3].v[2] = FLOAT_N0_240861;
  *(double *)lprofile->vignetteCurveTable[12][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45091);
  lprofile->vignetteCurveTable[12][0].v[2] = FLOAT_N0_130303;
  *(double *)lprofile->vignetteCurveTable[12][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[12][1].v[2] = FLOAT_N0_230877;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_451754);
  *(double *)lprofile->vignetteCurveTable[12][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[12][2].v[2] = FLOAT_N0_24345601;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[12][3].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_367329);
  lprofile->vignetteCurveTable[12][3].v[2] = FLOAT_N0_241918;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[13][0].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_43752101);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45296201);
  lprofile->vignetteCurveTable[13][0].v[2] = FLOAT_N0_130832;
  *(double *)lprofile->vignetteCurveTable[13][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45345801);
  lprofile->vignetteCurveTable[13][1].v[2] = FLOAT_N0_232374;
  *(double *)lprofile->vignetteCurveTable[13][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36782801);
  lprofile->vignetteCurveTable[13][2].v[2] = FLOAT_N0_244553;
  *(double *)lprofile->vignetteCurveTable[13][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_43979299);
  lprofile->vignetteCurveTable[13][3].v[2] = FLOAT_N0_24278601;
  *(double *)lprofile->vignetteCurveTable[14][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45499399);
  lprofile->vignetteCurveTable[14][0].v[2] = FLOAT_N0_13136999;
  *(double *)lprofile->vignetteCurveTable[14][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_455156);
  lprofile->vignetteCurveTable[14][1].v[2] = FLOAT_N0_23379099;
  *(double *)lprofile->vignetteCurveTable[14][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_368339);
  lprofile->vignetteCurveTable[14][2].v[2] = FLOAT_N0_245574;
  *(double *)lprofile->vignetteCurveTable[14][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[14][3].v[2] = FLOAT_N0_243627;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44203401);
  *(double *)lprofile->vignetteCurveTable[15][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[15][0].v[2] = FLOAT_N0_131916;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[15][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[15][1].v[2] = FLOAT_N0_23512401;
  _XMM2 = LODWORD(FLOAT_N0_457001);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[15][2].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_45684701);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_368862);
  lprofile->vignetteCurveTable[15][2].v[2] = FLOAT_N0_24652401;
  *(double *)lprofile->vignetteCurveTable[15][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44423401);
  lprofile->vignetteCurveTable[15][3].v[2] = FLOAT_N0_244441;
  *(double *)lprofile->vignetteCurveTable[16][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45897701);
  lprofile->vignetteCurveTable[16][0].v[2] = FLOAT_N0_132469;
  *(double *)lprofile->vignetteCurveTable[16][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45852599);
  lprofile->vignetteCurveTable[16][1].v[2] = FLOAT_N0_23637;
  *(double *)lprofile->vignetteCurveTable[16][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36939499);
  lprofile->vignetteCurveTable[16][2].v[2] = FLOAT_N0_247403;
  *(double *)lprofile->vignetteCurveTable[16][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_44638801);
  lprofile->vignetteCurveTable[16][3].v[2] = FLOAT_N0_245226;
  *(double *)lprofile->vignetteCurveTable[17][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_460888);
  lprofile->vignetteCurveTable[17][0].v[2] = FLOAT_N0_133028;
  *(double *)lprofile->vignetteCurveTable[17][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46003699);
  lprofile->vignetteCurveTable[17][1].v[2] = FLOAT_N0_237528;
  *(double *)lprofile->vignetteCurveTable[17][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[17][2].v[2] = FLOAT_N0_248199;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_36993799);
  *(double *)lprofile->vignetteCurveTable[17][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[17][3].v[2] = FLOAT_N0_24569701;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[18][0].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_44848999);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46275201);
  lprofile->vignetteCurveTable[18][0].v[2] = FLOAT_N0_133591;
  *(double *)lprofile->vignetteCurveTable[18][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_461519);
  lprofile->vignetteCurveTable[18][1].v[2] = FLOAT_N0_23859601;
  *(double *)lprofile->vignetteCurveTable[18][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_370489);
  lprofile->vignetteCurveTable[18][2].v[2] = FLOAT_N0_248925;
  *(double *)lprofile->vignetteCurveTable[18][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_450533);
  lprofile->vignetteCurveTable[18][3].v[2] = FLOAT_N0_246122;
  *(double *)lprofile->vignetteCurveTable[19][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_464571);
  lprofile->vignetteCurveTable[19][0].v[2] = FLOAT_N0_134159;
  *(double *)lprofile->vignetteCurveTable[19][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46297601);
  lprofile->vignetteCurveTable[19][1].v[2] = FLOAT_N0_239574;
  *(double *)lprofile->vignetteCurveTable[19][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_371048);
  lprofile->vignetteCurveTable[19][2].v[2] = FLOAT_N0_24958301;
  *(double *)lprofile->vignetteCurveTable[19][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45251399);
  lprofile->vignetteCurveTable[19][3].v[2] = FLOAT_N0_24651501;
  *(double *)lprofile->vignetteCurveTable[20][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46634299);
  lprofile->vignetteCurveTable[20][0].v[2] = FLOAT_N0_134729;
  *(double *)lprofile->vignetteCurveTable[20][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[20][1].v[2] = FLOAT_N0_24046101;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[20][2].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_464405);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37161401);
  lprofile->vignetteCurveTable[20][2].v[2] = FLOAT_N0_25017601;
  *(double *)lprofile->vignetteCurveTable[20][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45442799);
  lprofile->vignetteCurveTable[20][3].v[2] = FLOAT_N0_246876;
  *(double *)lprofile->vignetteCurveTable[21][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46806401);
  lprofile->vignetteCurveTable[21][0].v[2] = FLOAT_N0_13530099;
  *(double *)lprofile->vignetteCurveTable[21][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46580401);
  lprofile->vignetteCurveTable[21][1].v[2] = FLOAT_N0_24126001;
  *(double *)lprofile->vignetteCurveTable[21][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37218699);
  lprofile->vignetteCurveTable[21][2].v[2] = FLOAT_N0_25070599;
  *(double *)lprofile->vignetteCurveTable[21][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_45627201);
  lprofile->vignetteCurveTable[21][3].v[2] = FLOAT_N0_24720301;
  *(double *)lprofile->vignetteCurveTable[22][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_469733);
  lprofile->vignetteCurveTable[22][0].v[2] = FLOAT_N0_135875;
  *(double *)lprofile->vignetteCurveTable[22][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46716899);
  lprofile->vignetteCurveTable[22][1].v[2] = FLOAT_N0_241971;
  *(double *)lprofile->vignetteCurveTable[22][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_372765);
  lprofile->vignetteCurveTable[22][2].v[2] = FLOAT_N0_251176;
  *(double *)lprofile->vignetteCurveTable[22][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[22][3].v[2] = FLOAT_N0_247495;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[23][0].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_45804101);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_471347);
  lprofile->vignetteCurveTable[23][0].v[2] = FLOAT_N0_13644899;
  *(double *)lprofile->vignetteCurveTable[23][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46849999);
  lprofile->vignetteCurveTable[23][1].v[2] = FLOAT_N0_24259999;
  *(double *)lprofile->vignetteCurveTable[23][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37334701);
  lprofile->vignetteCurveTable[23][2].v[2] = FLOAT_N0_251587;
  *(double *)lprofile->vignetteCurveTable[23][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_459732);
  lprofile->vignetteCurveTable[23][3].v[2] = FLOAT_N0_24775299;
  *(double *)lprofile->vignetteCurveTable[24][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_472904);
  lprofile->vignetteCurveTable[24][0].v[2] = FLOAT_N0_137024;
  *(double *)lprofile->vignetteCurveTable[24][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46979201);
  lprofile->vignetteCurveTable[24][1].v[2] = FLOAT_N0_243148;
  *(double *)lprofile->vignetteCurveTable[24][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_373934);
  lprofile->vignetteCurveTable[24][2].v[2] = FLOAT_N0_251939;
  *(double *)lprofile->vignetteCurveTable[24][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_461344);
  lprofile->vignetteCurveTable[24][3].v[2] = FLOAT_N0_24797601;
  *(double *)lprofile->vignetteCurveTable[25][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47439501);
  lprofile->vignetteCurveTable[25][0].v[2] = FLOAT_N0_13759699;
  *(double *)lprofile->vignetteCurveTable[25][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[25][1].v[2] = FLOAT_N0_243622;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[25][2].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_471044);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37452501);
  lprofile->vignetteCurveTable[25][2].v[2] = FLOAT_N0_252224;
  *(double *)lprofile->vignetteCurveTable[25][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46287501);
  lprofile->vignetteCurveTable[25][3].v[2] = FLOAT_N0_248162;
  *(double *)lprofile->vignetteCurveTable[26][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47567499);
  lprofile->vignetteCurveTable[26][0].v[2] = FLOAT_N0_13817;
  *(double *)lprofile->vignetteCurveTable[26][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47209701);
  lprofile->vignetteCurveTable[26][1].v[2] = FLOAT_N0_244023;
  *(double *)lprofile->vignetteCurveTable[26][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37511799);
  lprofile->vignetteCurveTable[26][2].v[2] = FLOAT_N0_25226799;
  *(double *)lprofile->vignetteCurveTable[26][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46432301);
  lprofile->vignetteCurveTable[26][3].v[2] = FLOAT_N0_24810199;
  *(double *)lprofile->vignetteCurveTable[27][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_476834);
  lprofile->vignetteCurveTable[27][0].v[2] = FLOAT_N0_138741;
  *(double *)lprofile->vignetteCurveTable[27][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47305501);
  lprofile->vignetteCurveTable[27][1].v[2] = FLOAT_N0_244353;
  *(double *)lprofile->vignetteCurveTable[27][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37571299);
  lprofile->vignetteCurveTable[27][2].v[2] = FLOAT_N0_25218701;
  *(double *)lprofile->vignetteCurveTable[27][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->vignetteCurveTable[27][3].v[2] = FLOAT_N0_24794;
  *(double *)lprofile->vignetteCurveTable[28][0].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_46568999);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47793201);
  lprofile->vignetteCurveTable[28][0].v[2] = FLOAT_N0_13931;
  *(double *)lprofile->vignetteCurveTable[28][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47397);
  lprofile->vignetteCurveTable[28][1].v[2] = FLOAT_N0_24461401;
  *(double *)lprofile->vignetteCurveTable[28][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37630999);
  lprofile->vignetteCurveTable[28][2].v[2] = FLOAT_N0_25205699;
  *(double *)lprofile->vignetteCurveTable[28][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_466977);
  lprofile->vignetteCurveTable[28][3].v[2] = FLOAT_N0_24774601;
  *(double *)lprofile->vignetteCurveTable[29][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47896999);
  lprofile->vignetteCurveTable[29][0].v[2] = FLOAT_N0_13987599;
  *(double *)lprofile->vignetteCurveTable[29][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_474841);
  lprofile->vignetteCurveTable[29][1].v[2] = FLOAT_N0_24480399;
  *(double *)lprofile->vignetteCurveTable[29][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_376908);
  lprofile->vignetteCurveTable[29][2].v[2] = FLOAT_N0_251881;
  *(double *)lprofile->vignetteCurveTable[29][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46818501);
  lprofile->vignetteCurveTable[29][3].v[2] = FLOAT_N0_247521;
  *(double *)lprofile->vignetteCurveTable[30][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47995201);
  lprofile->vignetteCurveTable[30][0].v[2] = FLOAT_N0_140439;
  *(double *)lprofile->vignetteCurveTable[30][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->vignetteCurveTable[30][1].v[2] = FLOAT_N0_24492399;
  *(double *)lprofile->vignetteCurveTable[30][2].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_47567001);
  lprofile->vignetteCurveTable[30][2].v[2] = FLOAT_N0_251663;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[30][3].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_377507);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_46931601);
  lprofile->vignetteCurveTable[30][3].v[2] = FLOAT_N0_24726699;
  *(double *)lprofile->vignetteCurveTable[31][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48087901);
  lprofile->vignetteCurveTable[31][0].v[2] = FLOAT_N0_14099801;
  *(double *)lprofile->vignetteCurveTable[31][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_476457);
  lprofile->vignetteCurveTable[31][1].v[2] = FLOAT_N0_244973;
  *(double *)lprofile->vignetteCurveTable[31][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_378106);
  lprofile->vignetteCurveTable[31][2].v[2] = FLOAT_N0_25140601;
  *(double *)lprofile->vignetteCurveTable[31][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47037199);
  lprofile->vignetteCurveTable[31][3].v[2] = FLOAT_N0_246986;
  *(double *)lprofile->vignetteCurveTable[32][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48175099);
  lprofile->vignetteCurveTable[32][0].v[2] = FLOAT_N0_141554;
  *(double *)lprofile->vignetteCurveTable[32][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_477202);
  lprofile->vignetteCurveTable[32][1].v[2] = FLOAT_N0_244954;
  *(double *)lprofile->vignetteCurveTable[32][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[32][2].v[2] = FLOAT_N0_25111201;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37870401);
  *(double *)lprofile->vignetteCurveTable[32][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[32][3].v[2] = FLOAT_N0_24667899;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[33][0].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_47135499);
  lprofile->vignetteCurveTable[33][0].v[2] = FLOAT_N0_142105;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[33][1].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_48256999);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_477907);
  lprofile->vignetteCurveTable[33][1].v[2] = FLOAT_N0_244865;
  *(double *)lprofile->vignetteCurveTable[33][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37930101);
  lprofile->vignetteCurveTable[33][2].v[2] = FLOAT_N0_250783;
  *(double *)lprofile->vignetteCurveTable[33][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47226599);
  lprofile->vignetteCurveTable[33][3].v[2] = FLOAT_N0_24634799;
  *(double *)lprofile->vignetteCurveTable[34][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_483338);
  lprofile->vignetteCurveTable[34][0].v[2] = FLOAT_N0_142652;
  *(double *)lprofile->vignetteCurveTable[34][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47857001);
  lprofile->vignetteCurveTable[34][1].v[2] = FLOAT_N0_244709;
  *(double *)lprofile->vignetteCurveTable[34][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_37989599);
  lprofile->vignetteCurveTable[34][2].v[2] = FLOAT_N0_25042099;
  *(double *)lprofile->vignetteCurveTable[34][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_473106);
  lprofile->vignetteCurveTable[34][3].v[2] = FLOAT_N0_245994;
  *(double *)lprofile->vignetteCurveTable[35][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[35][0].v[2] = FLOAT_N0_14319301;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48405501);
  *(double *)lprofile->vignetteCurveTable[35][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[35][1].v[2] = FLOAT_N0_244488;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[35][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[35][2].v[2] = FLOAT_N0_25002599;
  _XMM2 = LODWORD(FLOAT_N0_479193);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[35][3].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_38049001);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47387499);
  lprofile->vignetteCurveTable[35][3].v[2] = FLOAT_N0_245617;
  *(double *)lprofile->vignetteCurveTable[36][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_484721);
  lprofile->vignetteCurveTable[36][0].v[2] = FLOAT_N0_14373;
  *(double *)lprofile->vignetteCurveTable[36][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_479776);
  lprofile->vignetteCurveTable[36][1].v[2] = FLOAT_N0_244203;
  *(double *)lprofile->vignetteCurveTable[36][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_381082);
  lprofile->vignetteCurveTable[36][2].v[2] = FLOAT_N0_24960101;
  *(double *)lprofile->vignetteCurveTable[36][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47457299);
  lprofile->vignetteCurveTable[36][3].v[2] = FLOAT_N0_24521901;
  *(double *)lprofile->vignetteCurveTable[37][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_485338);
  lprofile->vignetteCurveTable[37][0].v[2] = FLOAT_N0_144262;
  *(double *)lprofile->vignetteCurveTable[37][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_480317);
  lprofile->vignetteCurveTable[37][1].v[2] = FLOAT_N0_243857;
  *(double *)lprofile->vignetteCurveTable[37][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38167101);
  lprofile->vignetteCurveTable[37][2].v[2] = FLOAT_N0_249145;
  *(double *)lprofile->vignetteCurveTable[37][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[37][3].v[2] = FLOAT_N0_2448;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_4752);
  *(double *)lprofile->vignetteCurveTable[38][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[38][0].v[2] = FLOAT_N0_144787;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[38][1].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_48590401);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48081601);
  lprofile->vignetteCurveTable[38][1].v[2] = FLOAT_N0_243451;
  *(double *)lprofile->vignetteCurveTable[38][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38225701);
  lprofile->vignetteCurveTable[38][2].v[2] = FLOAT_N0_248661;
  *(double *)lprofile->vignetteCurveTable[38][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_475757);
  lprofile->vignetteCurveTable[38][3].v[2] = FLOAT_N0_244359;
  *(double *)lprofile->vignetteCurveTable[39][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48642001);
  lprofile->vignetteCurveTable[39][0].v[2] = FLOAT_N0_145307;
  *(double *)lprofile->vignetteCurveTable[39][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48127401);
  lprofile->vignetteCurveTable[39][1].v[2] = FLOAT_N0_24298701;
  *(double *)lprofile->vignetteCurveTable[39][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38283899);
  lprofile->vignetteCurveTable[39][2].v[2] = FLOAT_N0_24814799;
  *(double *)lprofile->vignetteCurveTable[39][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47624201);
  lprofile->vignetteCurveTable[39][3].v[2] = FLOAT_N0_243898;
  *(double *)lprofile->vignetteCurveTable[40][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48688599);
  lprofile->vignetteCurveTable[40][0].v[2] = FLOAT_N0_14582101;
  *(double *)lprofile->vignetteCurveTable[40][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48168999);
  lprofile->vignetteCurveTable[40][1].v[2] = FLOAT_N0_242468;
  *(double *)lprofile->vignetteCurveTable[40][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[40][2].v[2] = FLOAT_N0_24760599;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[40][3].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_38341799);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47665799);
  lprofile->vignetteCurveTable[40][3].v[2] = FLOAT_N0_24341699;
  *(double *)lprofile->vignetteCurveTable[41][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48729599);
  lprofile->vignetteCurveTable[41][0].v[2] = FLOAT_N0_146329;
  *(double *)lprofile->vignetteCurveTable[41][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_482063);
  lprofile->vignetteCurveTable[41][1].v[2] = FLOAT_N0_241898;
  *(double *)lprofile->vignetteCurveTable[41][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38399199);
  lprofile->vignetteCurveTable[41][2].v[2] = FLOAT_N0_247034;
  *(double *)lprofile->vignetteCurveTable[41][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47700399);
  lprofile->vignetteCurveTable[41][3].v[2] = FLOAT_N0_242916;
  *(double *)lprofile->vignetteCurveTable[42][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48752299);
  lprofile->vignetteCurveTable[42][0].v[2] = FLOAT_N0_14683101;
  *(double *)lprofile->vignetteCurveTable[42][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_482283);
  lprofile->vignetteCurveTable[42][1].v[2] = FLOAT_N0_24128;
  *(double *)lprofile->vignetteCurveTable[42][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_384563);
  lprofile->vignetteCurveTable[42][2].v[2] = FLOAT_N0_246334;
  *(double *)lprofile->vignetteCurveTable[42][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47728401);
  lprofile->vignetteCurveTable[42][3].v[2] = FLOAT_N0_242301;
  *(double *)lprofile->vignetteCurveTable[43][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[43][0].v[2] = FLOAT_N0_14732599;
  _XMM3 = LODWORD(FLOAT_N0_47766301);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[43][1].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_487643);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_482416);
  lprofile->vignetteCurveTable[43][1].v[2] = FLOAT_N0_240619;
  *(double *)lprofile->vignetteCurveTable[43][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38512799);
  lprofile->vignetteCurveTable[43][2].v[2] = FLOAT_N0_245565;
  *(double *)lprofile->vignetteCurveTable[43][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47750199);
  lprofile->vignetteCurveTable[43][3].v[2] = FLOAT_N0_241633;
  *(double *)lprofile->vignetteCurveTable[44][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48772001);
  lprofile->vignetteCurveTable[44][0].v[2] = FLOAT_N0_14781401;
  *(double *)lprofile->vignetteCurveTable[44][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48251301);
  lprofile->vignetteCurveTable[44][1].v[2] = FLOAT_N0_23991799;
  *(double *)lprofile->vignetteCurveTable[44][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38568899);
  lprofile->vignetteCurveTable[44][2].v[2] = FLOAT_N0_24477801;
  *(double *)lprofile->vignetteCurveTable[44][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48775801);
  lprofile->vignetteCurveTable[44][3].v[2] = FLOAT_N0_240951;
  *(double *)lprofile->vignetteCurveTable[45][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[45][0].v[2] = FLOAT_N0_148296;
  __asm { vunpcklps xmm1, xmm3, xmm1 }
  *(double *)lprofile->vignetteCurveTable[45][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_482573);
  lprofile->vignetteCurveTable[45][1].v[2] = FLOAT_N0_23918299;
  *(double *)lprofile->vignetteCurveTable[45][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[45][2].v[2] = FLOAT_N0_243977;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[45][3].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_38624501);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47777101);
  lprofile->vignetteCurveTable[45][3].v[2] = FLOAT_N0_24025799;
  *(double *)lprofile->vignetteCurveTable[46][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48775899);
  lprofile->vignetteCurveTable[46][0].v[2] = FLOAT_N0_148771;
  *(double *)lprofile->vignetteCurveTable[46][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48259899);
  lprofile->vignetteCurveTable[46][1].v[2] = FLOAT_N0_238419;
  *(double *)lprofile->vignetteCurveTable[46][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38679501);
  lprofile->vignetteCurveTable[46][2].v[2] = FLOAT_N0_24316201;
  *(double *)lprofile->vignetteCurveTable[46][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47783101);
  lprofile->vignetteCurveTable[46][3].v[2] = FLOAT_N0_239555;
  *(double *)lprofile->vignetteCurveTable[47][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_487726);
  lprofile->vignetteCurveTable[47][0].v[2] = FLOAT_N0_149239;
  *(double *)lprofile->vignetteCurveTable[47][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48259199);
  lprofile->vignetteCurveTable[47][1].v[2] = FLOAT_N0_23763099;
  *(double *)lprofile->vignetteCurveTable[47][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38734001);
  lprofile->vignetteCurveTable[47][2].v[2] = FLOAT_N0_242337;
  *(double *)lprofile->vignetteCurveTable[47][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47784701);
  lprofile->vignetteCurveTable[47][3].v[2] = FLOAT_N0_23884401;
  *(double *)lprofile->vignetteCurveTable[48][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->vignetteCurveTable[48][0].v[2] = FLOAT_N0_1497;
  *(double *)lprofile->vignetteCurveTable[48][1].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_487661);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48255301);
  lprofile->vignetteCurveTable[48][1].v[2] = FLOAT_N0_23682401;
  *(double *)lprofile->vignetteCurveTable[48][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38787901);
  lprofile->vignetteCurveTable[48][2].v[2] = FLOAT_N0_241502;
  *(double *)lprofile->vignetteCurveTable[48][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47782201);
  lprofile->vignetteCurveTable[48][3].v[2] = FLOAT_N0_23812599;
  *(double *)lprofile->vignetteCurveTable[49][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48756501);
  lprofile->vignetteCurveTable[49][0].v[2] = FLOAT_N0_15015399;
  *(double *)lprofile->vignetteCurveTable[49][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48248401);
  lprofile->vignetteCurveTable[49][1].v[2] = FLOAT_N0_236002;
  *(double *)lprofile->vignetteCurveTable[49][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_388412);
  lprofile->vignetteCurveTable[49][2].v[2] = FLOAT_N0_240661;
  *(double *)lprofile->vignetteCurveTable[49][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47775999);
  lprofile->vignetteCurveTable[49][3].v[2] = FLOAT_N0_23740201;
  *(double *)lprofile->vignetteCurveTable[50][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48743999);
  lprofile->vignetteCurveTable[50][0].v[2] = FLOAT_N0_150601;
  *(double *)lprofile->vignetteCurveTable[50][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48238599);
  lprofile->vignetteCurveTable[50][1].v[2] = FLOAT_N0_23516899;
  *(double *)lprofile->vignetteCurveTable[50][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->vignetteCurveTable[50][2].v[2] = FLOAT_N0_239813;
  *(double *)lprofile->vignetteCurveTable[50][3].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_38893899);
  lprofile->vignetteCurveTable[50][3].v[2] = FLOAT_N0_236674;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[51][0].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_48728701);
  __asm { vunpcklps xmm1, xmm3, xmm1 }
  lprofile->vignetteCurveTable[51][0].v[2] = FLOAT_N0_151041;
  *(double *)lprofile->vignetteCurveTable[51][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48225999);
  lprofile->vignetteCurveTable[51][1].v[2] = FLOAT_N0_234329;
  *(double *)lprofile->vignetteCurveTable[51][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_38946);
  lprofile->vignetteCurveTable[51][2].v[2] = FLOAT_N0_238961;
  *(double *)lprofile->vignetteCurveTable[51][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47753301);
  lprofile->vignetteCurveTable[51][3].v[2] = FLOAT_N0_23594201;
  *(double *)lprofile->vignetteCurveTable[52][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48710701);
  lprofile->vignetteCurveTable[52][0].v[2] = FLOAT_N0_151474;
  *(double *)lprofile->vignetteCurveTable[52][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48210499);
  lprofile->vignetteCurveTable[52][1].v[2] = FLOAT_N0_233484;
  *(double *)lprofile->vignetteCurveTable[52][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_389974);
  lprofile->vignetteCurveTable[52][2].v[2] = FLOAT_N0_238105;
  *(double *)lprofile->vignetteCurveTable[52][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[52][3].v[2] = FLOAT_N0_235209;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47737199);
  *(double *)lprofile->vignetteCurveTable[53][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[53][0].v[2] = FLOAT_N0_15189999;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[53][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[53][1].v[2] = FLOAT_N0_232639;
  _XMM2 = LODWORD(FLOAT_N0_48689899);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[53][2].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_48192301);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_39048201);
  lprofile->vignetteCurveTable[53][2].v[2] = FLOAT_N0_23724601;
  *(double *)lprofile->vignetteCurveTable[53][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47718);
  lprofile->vignetteCurveTable[53][3].v[2] = FLOAT_N0_234473;
  *(double *)lprofile->vignetteCurveTable[54][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48666301);
  lprofile->vignetteCurveTable[54][0].v[2] = FLOAT_N0_152319;
  *(double *)lprofile->vignetteCurveTable[54][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48171201);
  lprofile->vignetteCurveTable[54][1].v[2] = FLOAT_N0_231795;
  *(double *)lprofile->vignetteCurveTable[54][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_39098299);
  lprofile->vignetteCurveTable[54][2].v[2] = FLOAT_N0_236386;
  *(double *)lprofile->vignetteCurveTable[54][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47695699);
  lprofile->vignetteCurveTable[54][3].v[2] = FLOAT_N0_23373599;
  *(double *)lprofile->vignetteCurveTable[55][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48639801);
  lprofile->vignetteCurveTable[55][0].v[2] = FLOAT_N0_15273;
  *(double *)lprofile->vignetteCurveTable[55][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48147401);
  lprofile->vignetteCurveTable[55][1].v[2] = FLOAT_N0_23095401;
  *(double *)lprofile->vignetteCurveTable[55][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[55][2].v[2] = FLOAT_N0_235524;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_39147699);
  *(double *)lprofile->vignetteCurveTable[55][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[55][3].v[2] = FLOAT_N0_232999;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[56][0].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_47670501);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48610401);
  lprofile->vignetteCurveTable[56][0].v[2] = FLOAT_N0_153135;
  *(double *)lprofile->vignetteCurveTable[56][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_481208);
  lprofile->vignetteCurveTable[56][1].v[2] = FLOAT_N0_23011801;
  *(double *)lprofile->vignetteCurveTable[56][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_391965);
  lprofile->vignetteCurveTable[56][2].v[2] = FLOAT_N0_23466;
  *(double *)lprofile->vignetteCurveTable[56][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_476421);
  lprofile->vignetteCurveTable[56][3].v[2] = FLOAT_N0_232262;
  *(double *)lprofile->vignetteCurveTable[57][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48577699);
  lprofile->vignetteCurveTable[57][0].v[2] = FLOAT_N0_153532;
  *(double *)lprofile->vignetteCurveTable[57][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_480912);
  lprofile->vignetteCurveTable[57][1].v[2] = FLOAT_N0_229289;
  *(double *)lprofile->vignetteCurveTable[57][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_392445);
  lprofile->vignetteCurveTable[57][2].v[2] = FLOAT_N0_233797;
  *(double *)lprofile->vignetteCurveTable[57][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_476107);
  lprofile->vignetteCurveTable[57][3].v[2] = FLOAT_N0_231526;
  *(double *)lprofile->vignetteCurveTable[58][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_485416);
  lprofile->vignetteCurveTable[58][0].v[2] = FLOAT_N0_15392201;
  *(double *)lprofile->vignetteCurveTable[58][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[58][1].v[2] = FLOAT_N0_228469;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[58][2].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_48058701);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_392919);
  lprofile->vignetteCurveTable[58][2].v[2] = FLOAT_N0_232933;
  *(double *)lprofile->vignetteCurveTable[58][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_475759);
  lprofile->vignetteCurveTable[58][3].v[2] = FLOAT_N0_23079;
  *(double *)lprofile->vignetteCurveTable[59][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_485017);
  lprofile->vignetteCurveTable[59][0].v[2] = FLOAT_N0_154305;
  *(double *)lprofile->vignetteCurveTable[59][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_480232);
  lprofile->vignetteCurveTable[59][1].v[2] = FLOAT_N0_22765701;
  *(double *)lprofile->vignetteCurveTable[59][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_39338499);
  lprofile->vignetteCurveTable[59][2].v[2] = FLOAT_N0_23207;
  *(double *)lprofile->vignetteCurveTable[59][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47537801);
  lprofile->vignetteCurveTable[59][3].v[2] = FLOAT_N0_230055;
  *(double *)lprofile->vignetteCurveTable[60][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_484575);
  lprofile->vignetteCurveTable[60][0].v[2] = FLOAT_N0_154682;
  *(double *)lprofile->vignetteCurveTable[60][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_479846);
  lprofile->vignetteCurveTable[60][1].v[2] = FLOAT_N0_22685499;
  *(double *)lprofile->vignetteCurveTable[60][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_39384401);
  lprofile->vignetteCurveTable[60][2].v[2] = FLOAT_N0_231207;
  *(double *)lprofile->vignetteCurveTable[60][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[60][3].v[2] = FLOAT_N0_229321;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[61][0].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_47496);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48408499);
  lprofile->vignetteCurveTable[61][0].v[2] = FLOAT_N0_15505099;
  *(double *)lprofile->vignetteCurveTable[61][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47942799);
  lprofile->vignetteCurveTable[61][1].v[2] = FLOAT_N0_226063;
  *(double *)lprofile->vignetteCurveTable[61][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_39429599);
  lprofile->vignetteCurveTable[61][2].v[2] = FLOAT_N0_230345;
  *(double *)lprofile->vignetteCurveTable[61][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47450399);
  lprofile->vignetteCurveTable[61][3].v[2] = FLOAT_N0_228588;
  *(double *)lprofile->vignetteCurveTable[62][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48354);
  lprofile->vignetteCurveTable[62][0].v[2] = FLOAT_N0_155413;
  *(double *)lprofile->vignetteCurveTable[62][1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47897899);
  lprofile->vignetteCurveTable[62][1].v[2] = FLOAT_N0_22528;
  *(double *)lprofile->vignetteCurveTable[62][2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_394741);
  lprofile->vignetteCurveTable[62][2].v[2] = FLOAT_N0_22948401;
  *(double *)lprofile->vignetteCurveTable[62][3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47397399);
  lprofile->vignetteCurveTable[62][3].v[2] = FLOAT_N0_22785801;
  *(double *)lprofile->vignetteCurveTable[63][0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_48290899);
  lprofile->vignetteCurveTable[63][0].v[2] = FLOAT_N0_15576901;
  *(double *)lprofile->vignetteCurveTable[63][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[63][1].v[2] = FLOAT_N0_22446699;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_47850001);
  *(double *)lprofile->vignetteCurveTable[63][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[63][2].v[2] = FLOAT_N0_228617;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[63][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[63][3].v[2] = FLOAT_N0_227129;
  lprofile->focalLengthMin = 22.0;
  lprofile->focalLengthMax = 70.0;
  lprofile->apertureMin = 1.8;
  lprofile->apertureMax = 11.0;
  lprofile->numCurveTableEntries = 64;
}

/*
==============
LensProfile_Init_Telescopic
==============
*/
void LensProfile_Init_Telescopic(ZoomLensDistortProfile *lprofile)
{
  _XMM2 = LODWORD(FLOAT_N0_0069550001);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0069360002);
  *(double *)lprofile->distortCurveTable[0].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0067989998);
  *(double *)lprofile->distortCurveTable[1].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0064269998);
  *(double *)lprofile->distortCurveTable[2].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0057040001);
  *(double *)lprofile->distortCurveTable[3].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0045110001);
  *(double *)lprofile->distortCurveTable[4].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0032820001);
  lprofile->distortCurveTable[0].v[2] = FLOAT_N0_02015;
  lprofile->distortCurveTable[1].v[2] = FLOAT_N0_017518001;
  *(double *)lprofile->distortCurveTable[5].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_003277);
  lprofile->distortCurveTable[2].v[2] = FLOAT_N0_014887;
  lprofile->distortCurveTable[3].v[2] = FLOAT_N0_012255;
  *(double *)lprofile->distortCurveTable[6].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[4].v[2] = FLOAT_N0_0096230004;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0032510001);
  lprofile->distortCurveTable[5].v[2] = FLOAT_N0_0069909999;
  *(double *)lprofile->distortCurveTable[7].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[6].v[2] = FLOAT_N0_00477;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->distortCurveTable[7].v[2] = FLOAT_N0_003645;
  *(double *)lprofile->distortCurveTable[8].v = *(double *)&_XMM1;
  _XMM2 = LODWORD(FLOAT_N0_0031900001);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0030779999);
  *(double *)lprofile->distortCurveTable[9].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_002899);
  *(double *)lprofile->distortCurveTable[10].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0026370001);
  *(double *)lprofile->distortCurveTable[11].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0022770001);
  *(double *)lprofile->distortCurveTable[12].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001802);
  *(double *)lprofile->distortCurveTable[13].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001198);
  lprofile->distortCurveTable[8].v[2] = FLOAT_N0_0025200001;
  lprofile->distortCurveTable[9].v[2] = FLOAT_N0_001394;
  *(double *)lprofile->distortCurveTable[14].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00044800001);
  lprofile->distortCurveTable[10].v[2] = FLOAT_N0_00026900001;
  lprofile->distortCurveTable[11].v[2] = FLOAT_0_000856;
  *(double *)lprofile->distortCurveTable[15].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_000462);
  lprofile->distortCurveTable[12].v[2] = FLOAT_0_001981;
  lprofile->distortCurveTable[13].v[2] = FLOAT_0_0031069999;
  *(double *)lprofile->distortCurveTable[16].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[14].v[2] = FLOAT_0_0042320001;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_00155);
  lprofile->distortCurveTable[15].v[2] = FLOAT_0_005357;
  *(double *)lprofile->distortCurveTable[17].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[16].v[2] = FLOAT_0_006482;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->distortCurveTable[17].v[2] = FLOAT_0_0076080002;
  *(double *)lprofile->distortCurveTable[18].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[18].v[2] = FLOAT_0_0087329997;
  _XMM2 = LODWORD(FLOAT_0_002692);
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_002689);
  *(double *)lprofile->distortCurveTable[19].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0026720001);
  *(double *)lprofile->distortCurveTable[20].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_002627);
  *(double *)lprofile->distortCurveTable[21].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_00254);
  *(double *)lprofile->distortCurveTable[22].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0024000001);
  *(double *)lprofile->distortCurveTable[23].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0021919999);
  *(double *)lprofile->distortCurveTable[24].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0019030001);
  lprofile->distortCurveTable[19].v[2] = FLOAT_0_0096140001;
  lprofile->distortCurveTable[20].v[2] = FLOAT_0_0083020004;
  *(double *)lprofile->distortCurveTable[25].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0015210001);
  lprofile->distortCurveTable[21].v[2] = FLOAT_0_0069909999;
  lprofile->distortCurveTable[22].v[2] = FLOAT_0_0056790002;
  *(double *)lprofile->distortCurveTable[26].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[23].v[2] = FLOAT_0_004367;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_0_0010310001);
  lprofile->distortCurveTable[24].v[2] = FLOAT_0_003055;
  *(double *)lprofile->distortCurveTable[27].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[25].v[2] = FLOAT_0_001743;
  lprofile->distortCurveTable[26].v[2] = FLOAT_0_00043099999;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->distortCurveTable[28].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000421);
  lprofile->distortCurveTable[27].v[2] = FLOAT_N0_00088000001;
  lprofile->distortCurveTable[28].v[2] = FLOAT_N0_0021919999;
  _XMM2 = LODWORD(FLOAT_N0_00032299999);
  _XMM3 = LODWORD(FLOAT_N0_0035039999);
  __asm
  {
    vunpcklps xmm0, xmm1, xmm0
    vunpcklps xmm1, xmm2, xmm1
  }
  _XMM2 = LODWORD(FLOAT_N0_001214);
  *(double *)lprofile->distortCurveTable[30].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_002264);
  *(double *)lprofile->distortCurveTable[31].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_003488);
  *(double *)lprofile->distortCurveTable[32].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0037799999);
  *(double *)lprofile->distortCurveTable[33].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0037789999);
  *(double *)lprofile->distortCurveTable[29].v = *(double *)&_XMM0;
  *(double *)lprofile->distortCurveTable[34].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0037769999);
  *(double *)lprofile->distortCurveTable[35].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0037730001);
  *(double *)lprofile->distortCurveTable[36].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_003765);
  *(double *)lprofile->distortCurveTable[37].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0037539999);
  lprofile->distortCurveTable[29].v[2] = FLOAT_N0_0035039999;
  lprofile->distortCurveTable[30].v[2] = FLOAT_N0_0048159999;
  lprofile->distortCurveTable[31].v[2] = FLOAT_N0_0061280001;
  lprofile->distortCurveTable[32].v[2] = FLOAT_N0_0074399998;
  lprofile->distortCurveTable[33].v[2] = FLOAT_N0_0087519996;
  lprofile->distortCurveTable[34].v[2] = FLOAT_N0_0089389998;
  lprofile->distortCurveTable[35].v[2] = FLOAT_N0_0088130003;
  lprofile->distortCurveTable[36].v[2] = FLOAT_N0_0086869998;
  *(double *)lprofile->distortCurveTable[38].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[37].v[2] = FLOAT_N0_0085610002;
  lprofile->distortCurveTable[38].v[2] = FLOAT_N0_0084349997;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0037390001);
  *(double *)lprofile->distortCurveTable[39].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0037179999);
  *(double *)lprofile->distortCurveTable[40].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0036899999);
  *(double *)lprofile->distortCurveTable[41].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0036559999);
  *(double *)lprofile->distortCurveTable[42].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_003614);
  *(double *)lprofile->distortCurveTable[43].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0035639999);
  *(double *)lprofile->distortCurveTable[44].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0034340001);
  lprofile->distortCurveTable[39].v[2] = FLOAT_N0_0083090002;
  lprofile->distortCurveTable[40].v[2] = FLOAT_N0_0081820004;
  *(double *)lprofile->distortCurveTable[45].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[41].v[2] = FLOAT_N0_0080559999;
  lprofile->distortCurveTable[42].v[2] = FLOAT_N0_0079300003;
  __asm { vunpcklps xmm1, xmm3, xmm1 }
  *(double *)lprofile->distortCurveTable[46].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0033529999);
  lprofile->distortCurveTable[43].v[2] = FLOAT_N0_0078039998;
  lprofile->distortCurveTable[44].v[2] = FLOAT_N0_0076779998;
  *(double *)lprofile->distortCurveTable[47].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[45].v[2] = FLOAT_N0_0075520002;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0032609999);
  lprofile->distortCurveTable[46].v[2] = FLOAT_N0_0074260002;
  *(double *)lprofile->distortCurveTable[48].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[47].v[2] = FLOAT_N0_0073000002;
  lprofile->distortCurveTable[48].v[2] = FLOAT_N0_0071740001;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_003156);
  *(double *)lprofile->distortCurveTable[49].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0030380001);
  *(double *)lprofile->distortCurveTable[50].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_002905);
  *(double *)lprofile->distortCurveTable[51].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_002758);
  *(double *)lprofile->distortCurveTable[52].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_002595);
  *(double *)lprofile->distortCurveTable[53].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_002416);
  *(double *)lprofile->distortCurveTable[54].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0022189999);
  lprofile->distortCurveTable[49].v[2] = FLOAT_N0_0070480001;
  *(double *)lprofile->distortCurveTable[55].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_0020049999);
  lprofile->distortCurveTable[50].v[2] = FLOAT_N0_0069209998;
  lprofile->distortCurveTable[51].v[2] = FLOAT_N0_0067949998;
  *(double *)lprofile->distortCurveTable[56].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001771);
  lprofile->distortCurveTable[52].v[2] = FLOAT_N0_0066689998;
  lprofile->distortCurveTable[53].v[2] = FLOAT_N0_0065430002;
  *(double *)lprofile->distortCurveTable[57].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[54].v[2] = FLOAT_N0_0064170002;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_001518);
  lprofile->distortCurveTable[55].v[2] = FLOAT_N0_0062910002;
  *(double *)lprofile->distortCurveTable[58].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[56].v[2] = FLOAT_N0_0061650001;
  lprofile->distortCurveTable[57].v[2] = FLOAT_N0_0060390001;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  lprofile->distortCurveTable[58].v[2] = FLOAT_N0_0059130001;
  _XMM2 = LODWORD(FLOAT_N0_001244);
  _XMM3 = LODWORD(FLOAT_N0_000043);
  _XMM8 = LODWORD(FLOAT_0_000018000001);
  _XMM6 = LODWORD(FLOAT_0_000029999999);
  *(double *)lprofile->distortCurveTable[59].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00095000002);
  *(double *)lprofile->distortCurveTable[60].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00063299999);
  *(double *)lprofile->distortCurveTable[61].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_00029299999);
  *(double *)lprofile->distortCurveTable[62].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[59].v[2] = FLOAT_N0_0057859998;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->distortCurveTable[63].v = *(double *)&_XMM1;
  lprofile->distortCurveTable[60].v[2] = FLOAT_N0_0056599998;
  lprofile->distortCurveTable[61].v[2] = FLOAT_N0_0055340002;
  lprofile->distortCurveTable[62].v[2] = FLOAT_N0_0054080002;
  lprofile->distortCurveTable[63].v[2] = FLOAT_N0_0052820002;
  __asm { vunpcklps xmm1, xmm3, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[0].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[0].v[2] = FLOAT_1_0004179;
  __asm { vunpcklps xmm1, xmm8, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[0].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000015);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[1].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000004);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  lprofile->tcaBlueCurveTable[0].v[2] = FLOAT_0_99983102;
  *(double *)lprofile->tcaBlueCurveTable[1].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_0000099999997);
  lprofile->tcaRedCurveTable[1].v[2] = FLOAT_1_000369;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[2].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000008);
  lprofile->tcaBlueCurveTable[1].v[2] = FLOAT_0_99982703;
  __asm { vunpcklps xmm0, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[2].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[2].v[2] = FLOAT_1_000326;
  lprofile->tcaBlueCurveTable[2].v[2] = FLOAT_0_99982297;
  _XMM13 = LODWORD(FLOAT_0_000049999999);
  _XMM9 = LODWORD(FLOAT_N0_000053);
  __asm { vunpcklps xmm1, xmm6, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[3].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000018000001);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[3].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000046000001);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[4].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000024999999);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[4].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000055);
  lprofile->tcaRedCurveTable[3].v[2] = FLOAT_1_0002919;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[5].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000029999999);
  lprofile->tcaBlueCurveTable[3].v[2] = FLOAT_0_99981999;
  lprofile->tcaRedCurveTable[4].v[2] = FLOAT_1_000265;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[5].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000056000001);
  lprofile->tcaBlueCurveTable[4].v[2] = FLOAT_0_99981701;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  lprofile->tcaRedCurveTable[5].v[2] = FLOAT_1_000249;
  *(double *)lprofile->tcaRedCurveTable[6].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000033);
  lprofile->tcaBlueCurveTable[5].v[2] = FLOAT_0_999816;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  lprofile->tcaRedCurveTable[6].v[2] = FLOAT_1_00024;
  *(double *)lprofile->tcaBlueCurveTable[6].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[6].v[2] = FLOAT_0_99981499;
  __asm { vunpcklps xmm1, xmm13, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[7].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[7].v[2] = FLOAT_1_000224;
  __asm { vunpcklps xmm1, xmm3, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[7].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000045000001);
  lprofile->tcaBlueCurveTable[7].v[2] = FLOAT_0_99981099;
  __asm { vunpcklps xmm0, xmm9, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[8].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[8].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[8].v[2] = FLOAT_1_000208;
  lprofile->tcaBlueCurveTable[8].v[2] = FLOAT_0_99980801;
  _XMM1 = LODWORD(FLOAT_0_000039999999);
  _XMM5 = LODWORD(FLOAT_N0_000060999999);
  _XMM4 = LODWORD(FLOAT_0_000036000001);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[9].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[9].v[2] = FLOAT_1_000193;
  _XMM0 = LODWORD(FLOAT_N0_000069000002);
  __asm { vunpcklps xmm0, xmm0, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[10].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm5, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[9].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[9].v[2] = FLOAT_0_99980497;
  __asm { vunpcklps xmm1, xmm4, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[10].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000032);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[11].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000076999997);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[11].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000028);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[12].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[10].v[2] = FLOAT_1_0001791;
  lprofile->tcaBlueCurveTable[10].v[2] = FLOAT_0_99980301;
  lprofile->tcaRedCurveTable[11].v[2] = FLOAT_1_0001661;
  _XMM0 = LODWORD(FLOAT_N0_000083999999);
  __asm { vunpcklps xmm0, xmm0, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[12].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[11].v[2] = FLOAT_0_99980003;
  _XMM1 = LODWORD(FLOAT_0_000024000001);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[13].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000090000001);
  lprofile->tcaRedCurveTable[12].v[2] = FLOAT_1_000154;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[13].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000021);
  lprofile->tcaBlueCurveTable[12].v[2] = FLOAT_0_999798;
  lprofile->tcaRedCurveTable[13].v[2] = FLOAT_1_000144;
  _XMM0 = LODWORD(FLOAT_N0_000095000003);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[14].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[13].v[2] = FLOAT_0_99979597;
  __asm { vunpcklps xmm0, xmm0, xmm11 }
  lprofile->tcaRedCurveTable[14].v[2] = FLOAT_1_0001349;
  *(double *)lprofile->tcaBlueCurveTable[14].v = *(double *)&_XMM0;
  _XMM1 = LODWORD(FLOAT_0_000018999999);
  _XMM7 = LODWORD(FLOAT_0_000014);
  lprofile->tcaBlueCurveTable[14].v[2] = FLOAT_0_99979401;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[15].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000099999997);
  lprofile->tcaRedCurveTable[15].v[2] = FLOAT_1_000127;
  _XMM0 = LODWORD(FLOAT_N0_000104);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[15].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000017);
  lprofile->tcaBlueCurveTable[15].v[2] = FLOAT_0_99979299;
  __asm
  {
    vunpcklps xmm0, xmm0, xmm11
    vunpcklps xmm1, xmm1, xmm11
  }
  *(double *)lprofile->tcaRedCurveTable[16].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000015);
  lprofile->tcaRedCurveTable[16].v[2] = FLOAT_1_00012;
  *(double *)lprofile->tcaBlueCurveTable[16].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  lprofile->tcaBlueCurveTable[16].v[2] = FLOAT_0_99979103;
  *(double *)lprofile->tcaRedCurveTable[17].v = *(double *)&_XMM1;
  _XMM0 = LODWORD(FLOAT_N0_000106);
  lprofile->tcaRedCurveTable[17].v[2] = FLOAT_1_000116;
  __asm { vunpcklps xmm0, xmm0, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[17].v = *(double *)&_XMM0;
  _XMM3 = LODWORD(FLOAT_N0_000108);
  lprofile->tcaBlueCurveTable[17].v[2] = FLOAT_0_99979103;
  __asm { vunpcklps xmm1, xmm7, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[18].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[18].v[2] = FLOAT_1_000113;
  __asm
  {
    vunpcklps xmm1, xmm7, xmm11
    vunpcklps xmm0, xmm3, xmm11
  }
  *(double *)lprofile->tcaBlueCurveTable[18].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[18].v[2] = FLOAT_0_99979001;
  *(double *)lprofile->tcaRedCurveTable[19].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[19].v[2] = FLOAT_1_000109;
  __asm { vunpcklps xmm0, xmm3, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[19].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[19].v[2] = FLOAT_0_99979001;
  __asm { vunpcklps xmm1, xmm8, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[20].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000102);
  lprofile->tcaRedCurveTable[20].v[2] = FLOAT_1_000084;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[20].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[20].v[2] = FLOAT_0_99978799;
  _XMM1 = LODWORD(FLOAT_0_000022);
  _XMM10 = LODWORD(FLOAT_0_000026);
  _XMM8 = LODWORD(FLOAT_0_000033);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[21].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000096000003);
  lprofile->tcaRedCurveTable[21].v[2] = FLOAT_1_00006;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[21].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[21].v[2] = FLOAT_0_99978697;
  _XMM0 = LODWORD(FLOAT_N0_000091000002);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm11
    vunpcklps xmm1, xmm10, xmm11
  }
  *(double *)lprofile->tcaRedCurveTable[22].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[22].v[2] = FLOAT_1_000036;
  *(double *)lprofile->tcaBlueCurveTable[22].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[22].v[2] = FLOAT_0_99978602;
  __asm { vunpcklps xmm1, xmm6, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[23].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000086);
  lprofile->tcaRedCurveTable[23].v[2] = FLOAT_1_0000139;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[23].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[23].v[2] = FLOAT_0_99978501;
  __asm { vunpcklps xmm1, xmm8, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[24].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000080999998);
  lprofile->tcaRedCurveTable[24].v[2] = FLOAT_0_99999398;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[24].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[24].v[2] = FLOAT_0_99978399;
  __asm { vunpcklps xmm1, xmm4, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[25].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000075999997);
  lprofile->tcaRedCurveTable[25].v[2] = FLOAT_0_99997401;
  _XMM0 = LODWORD(FLOAT_N0_000072000003);
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[25].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000038999999);
  lprofile->tcaBlueCurveTable[25].v[2] = FLOAT_0_99978298;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[26].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[26].v[2] = FLOAT_0_99995601;
  __asm { vunpcklps xmm0, xmm0, xmm11 }
  *(double *)lprofile->tcaBlueCurveTable[26].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[26].v[2] = FLOAT_0_99978203;
  _XMM1 = LODWORD(FLOAT_0_000042);
  _XMM7 = LODWORD(FLOAT_0_000044);
  _XMM6 = LODWORD(FLOAT_0_000051999999);
  _XMM0 = LODWORD(FLOAT_N0_000068000001);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm11
    vunpcklps xmm1, xmm1, xmm11
  }
  *(double *)lprofile->tcaRedCurveTable[27].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[27].v[2] = FLOAT_0_99993902;
  *(double *)lprofile->tcaBlueCurveTable[27].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[27].v[2] = FLOAT_0_99978101;
  _XMM0 = LODWORD(FLOAT_N0_000064);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm11
    vunpcklps xmm1, xmm7, xmm11
  }
  *(double *)lprofile->tcaRedCurveTable[28].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000047000001);
  lprofile->tcaRedCurveTable[28].v[2] = FLOAT_0_99992299;
  *(double *)lprofile->tcaBlueCurveTable[28].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  lprofile->tcaBlueCurveTable[28].v[2] = FLOAT_0_99978101;
  *(double *)lprofile->tcaRedCurveTable[29].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[29].v[2] = FLOAT_0_99990898;
  _XMM0 = LODWORD(FLOAT_N0_000058000001);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm3
    vunpcklps xmm1, xmm5, xmm11
  }
  *(double *)lprofile->tcaBlueCurveTable[29].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000048999998);
  lprofile->tcaBlueCurveTable[29].v[2] = FLOAT_0_99978;
  __asm { vunpcklps xmm1, xmm1, xmm11 }
  *(double *)lprofile->tcaRedCurveTable[30].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[30].v[2] = FLOAT_0_999897;
  *(double *)lprofile->tcaBlueCurveTable[30].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[30].v[2] = FLOAT_0_99977899;
  _XMM0 = LODWORD(FLOAT_N0_000055);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm3
    vunpcklps xmm1, xmm13, xmm3
  }
  *(double *)lprofile->tcaRedCurveTable[31].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[31].v[2] = FLOAT_0_99988598;
  *(double *)lprofile->tcaBlueCurveTable[31].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[31].v[2] = FLOAT_0_99977899;
  __asm { vunpcklps xmm1, xmm6, xmm3 }
  *(double *)lprofile->tcaRedCurveTable[32].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[32].v[2] = FLOAT_0_99987698;
  __asm { vunpcklps xmm0, xmm9, xmm3 }
  *(double *)lprofile->tcaBlueCurveTable[32].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[32].v[2] = FLOAT_0_99977797;
  _XMM4 = LODWORD(FLOAT_0_000054);
  _XMM1 = LODWORD(FLOAT_0_000053);
  _XMM0 = LODWORD(FLOAT_N0_000051999999);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm3
    vunpcklps xmm1, xmm1, xmm3
  }
  *(double *)lprofile->tcaRedCurveTable[33].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[33].v[2] = FLOAT_0_99987;
  *(double *)lprofile->tcaBlueCurveTable[33].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm4, xmm3 }
  _XMM3 = LODWORD(FLOAT_N0_000049999999);
  lprofile->tcaBlueCurveTable[33].v[2] = FLOAT_0_99977797;
  *(double *)lprofile->tcaRedCurveTable[34].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[34].v[2] = FLOAT_0_999865;
  __asm { vunpcklps xmm1, xmm4, xmm9 }
  _XMM4 = 0i64;
  __asm { vunpcklps xmm0, xmm3, xmm9 }
  *(double *)lprofile->tcaBlueCurveTable[34].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[34].v[2] = FLOAT_0_99977797;
  *(double *)lprofile->tcaRedCurveTable[35].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[35].v[2] = FLOAT_0_99986303;
  __asm { vunpcklps xmm0, xmm3, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[35].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[35].v[2] = FLOAT_0_99977797;
  __asm { vunpcklps xmm1, xmm6, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[36].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000048000002);
  lprofile->tcaRedCurveTable[36].v[2] = FLOAT_0_99985898;
  __asm { vunpcklps xmm1, xmm1, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[36].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000048000002);
  lprofile->tcaBlueCurveTable[36].v[2] = FLOAT_0_99977702;
  __asm { vunpcklps xmm1, xmm1, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[37].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000043);
  lprofile->tcaRedCurveTable[37].v[2] = FLOAT_0_99985301;
  _XMM0 = LODWORD(FLOAT_N0_000038999999);
  __asm { vunpcklps xmm1, xmm1, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[37].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[37].v[2] = FLOAT_0_99977601;
  __asm
  {
    vunpcklps xmm0, xmm0, xmm4
    vunpcklps xmm1, xmm7, xmm4
  }
  *(double *)lprofile->tcaRedCurveTable[38].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[38].v[2] = FLOAT_0_99984699;
  *(double *)lprofile->tcaBlueCurveTable[38].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[38].v[2] = FLOAT_0_99977499;
  _XMM0 = LODWORD(FLOAT_0_000039999999);
  __asm { vunpcklps xmm1, xmm0, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[39].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000035000001);
  lprofile->tcaRedCurveTable[39].v[2] = FLOAT_0_99984097;
  _XMM0 = LODWORD(FLOAT_N0_000032);
  __asm { vunpcklps xmm1, xmm1, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[39].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000037000002);
  lprofile->tcaBlueCurveTable[39].v[2] = FLOAT_0_99977398;
  __asm
  {
    vunpcklps xmm0, xmm0, xmm4
    vunpcklps xmm1, xmm1, xmm4
  }
  *(double *)lprofile->tcaRedCurveTable[40].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[40].v[2] = FLOAT_0_99983501;
  *(double *)lprofile->tcaBlueCurveTable[40].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm8, xmm4 }
  lprofile->tcaBlueCurveTable[40].v[2] = FLOAT_0_99977303;
  *(double *)lprofile->tcaRedCurveTable[41].v = *(double *)&_XMM1;
  _XMM0 = LODWORD(FLOAT_N0_000028);
  lprofile->tcaRedCurveTable[41].v[2] = FLOAT_0_99982899;
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[41].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000029000001);
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  lprofile->tcaBlueCurveTable[41].v[2] = FLOAT_0_99977303;
  *(double *)lprofile->tcaRedCurveTable[42].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_000024000001);
  lprofile->tcaRedCurveTable[42].v[2] = FLOAT_0_99982297;
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[42].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[42].v[2] = FLOAT_0_99977201;
  __asm { vunpcklps xmm1, xmm10, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[43].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000021);
  lprofile->tcaRedCurveTable[43].v[2] = FLOAT_0_99981803;
  __asm { vunpcklps xmm1, xmm1, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[43].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_0_000023000001);
  lprofile->tcaBlueCurveTable[43].v[2] = FLOAT_0_999771;
  __asm { vunpcklps xmm1, xmm1, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[44].v = *(double *)&_XMM1;
  _XMM1 = LODWORD(FLOAT_N0_000017);
  lprofile->tcaRedCurveTable[44].v[2] = FLOAT_0_99981302;
  __asm { vunpcklps xmm1, xmm1, xmm4 }
  _XMM0 = LODWORD(FLOAT_0_000019999999);
  *(double *)lprofile->tcaBlueCurveTable[44].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[44].v[2] = FLOAT_0_99976999;
  _XMM10 = LODWORD(FLOAT_N0_000011);
  _XMM13 = LODWORD(FLOAT_0_000014);
  _XMM6 = LODWORD(FLOAT_0_000011);
  _XMM3 = LODWORD(FLOAT_0_0000030000001);
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[45].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_000014);
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  lprofile->tcaRedCurveTable[45].v[2] = FLOAT_0_99980801;
  *(double *)lprofile->tcaBlueCurveTable[45].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[45].v[2] = FLOAT_0_99976897;
  _XMM0 = LODWORD(FLOAT_0_000017);
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[46].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[46].v[2] = FLOAT_0_99980301;
  __asm { vunpcklps xmm0, xmm10, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[46].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[46].v[2] = FLOAT_0_99976897;
  __asm { vunpcklps xmm0, xmm13, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[47].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[47].v[2] = FLOAT_0_999798;
  _XMM0 = LODWORD(FLOAT_N0_000008);
  __asm { vunpcklps xmm1, xmm0, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[47].v = *(double *)&_XMM1;
  lprofile->tcaBlueCurveTable[47].v[2] = FLOAT_0_99976802;
  __asm { vunpcklps xmm0, xmm6, xmm4 }
  *(double *)lprofile->tcaRedCurveTable[48].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_0000049999999);
  lprofile->tcaRedCurveTable[48].v[2] = FLOAT_0_99979401;
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[48].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000008);
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  lprofile->tcaBlueCurveTable[48].v[2] = FLOAT_0_99976701;
  *(double *)lprofile->tcaRedCurveTable[49].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_000002);
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  lprofile->tcaRedCurveTable[49].v[2] = FLOAT_0_99979001;
  *(double *)lprofile->tcaBlueCurveTable[49].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_0000060000002);
  __asm { vunpcklps xmm0, xmm0, xmm4 }
  lprofile->tcaBlueCurveTable[49].v[2] = FLOAT_0_99976701;
  *(double *)lprofile->tcaRedCurveTable[50].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[50].v[2] = FLOAT_0_99978602;
  __asm { vunpcklps xmm1, xmm4, xmm4 }
  *(double *)lprofile->tcaBlueCurveTable[50].v = *(double *)&_XMM1;
  __asm { vunpcklps xmm0, xmm3, xmm4 }
  lprofile->tcaBlueCurveTable[50].v[2] = FLOAT_0_99976599;
  *(double *)lprofile->tcaRedCurveTable[51].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[51].v[2] = FLOAT_0_99978203;
  __asm { vunpcklps xmm0, xmm3, xmm12 }
  *(double *)lprofile->tcaBlueCurveTable[51].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000001);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaBlueCurveTable[51].v[2] = FLOAT_0_99976498;
  *(double *)lprofile->tcaRedCurveTable[52].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_0000049999999);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaRedCurveTable[52].v[2] = FLOAT_0_99977899;
  *(double *)lprofile->tcaBlueCurveTable[52].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_000001);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaBlueCurveTable[52].v[2] = FLOAT_0_99976498;
  *(double *)lprofile->tcaRedCurveTable[53].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_0000070000001);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaRedCurveTable[53].v[2] = FLOAT_0_99977499;
  *(double *)lprofile->tcaBlueCurveTable[53].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_0000030000001);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaBlueCurveTable[53].v[2] = FLOAT_0_99976403;
  *(double *)lprofile->tcaRedCurveTable[54].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_0000090000003);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaRedCurveTable[54].v[2] = FLOAT_0_99977201;
  *(double *)lprofile->tcaBlueCurveTable[54].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_000004);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaBlueCurveTable[54].v[2] = FLOAT_0_99976403;
  *(double *)lprofile->tcaRedCurveTable[55].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[55].v[2] = FLOAT_0_99976897;
  __asm { vunpcklps xmm0, xmm6, xmm12 }
  *(double *)lprofile->tcaBlueCurveTable[55].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_0000060000002);
  lprofile->tcaBlueCurveTable[55].v[2] = FLOAT_0_99976403;
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  *(double *)lprofile->tcaRedCurveTable[56].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000012);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaRedCurveTable[56].v[2] = FLOAT_0_99976701;
  *(double *)lprofile->tcaBlueCurveTable[56].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_0000070000001);
  lprofile->tcaBlueCurveTable[56].v[2] = FLOAT_0_99976301;
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  *(double *)lprofile->tcaRedCurveTable[57].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[57].v[2] = FLOAT_0_99976498;
  __asm { vunpcklps xmm0, xmm13, xmm12 }
  *(double *)lprofile->tcaBlueCurveTable[57].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[57].v[2] = FLOAT_0_99976301;
  _XMM5 = LODWORD(FLOAT_0_000018000001);
  _XMM0 = LODWORD(FLOAT_N0_0000090000003);
  _XMM1 = LODWORD(FLOAT_N0_0000099999997);
  _XMM2 = LODWORD(FLOAT_N0_087256998);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  *(double *)lprofile->tcaRedCurveTable[58].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_0_000015);
  __asm
  {
    vunpcklps xmm0, xmm0, xmm12
    vunpcklps xmm1, xmm1, xmm12
  }
  lprofile->tcaRedCurveTable[58].v[2] = FLOAT_0_99976301;
  *(double *)lprofile->tcaBlueCurveTable[58].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[58].v[2] = FLOAT_0_99976301;
  *(double *)lprofile->tcaRedCurveTable[59].v = *(double *)&_XMM1;
  _XMM0 = LODWORD(FLOAT_0_000016);
  lprofile->tcaRedCurveTable[59].v[2] = FLOAT_0_99976099;
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  *(double *)lprofile->tcaBlueCurveTable[59].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm1, xmm10, xmm12 }
  lprofile->tcaBlueCurveTable[59].v[2] = FLOAT_0_999762;
  *(double *)lprofile->tcaRedCurveTable[60].v = *(double *)&_XMM1;
  _XMM0 = LODWORD(FLOAT_0_000017);
  lprofile->tcaRedCurveTable[60].v[2] = FLOAT_0_99975997;
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  *(double *)lprofile->tcaBlueCurveTable[60].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[60].v[2] = FLOAT_0_999762;
  __asm
  {
    vunpcklps xmm0, xmm5, xmm12
    vunpcklps xmm1, xmm10, xmm12
  }
  *(double *)lprofile->tcaRedCurveTable[61].v = *(double *)&_XMM1;
  lprofile->tcaRedCurveTable[61].v[2] = FLOAT_0_99975902;
  *(double *)lprofile->tcaBlueCurveTable[61].v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm10, xmm12 }
  lprofile->tcaBlueCurveTable[61].v[2] = FLOAT_0_999762;
  *(double *)lprofile->tcaRedCurveTable[62].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[62].v[2] = FLOAT_0_99975801;
  __asm { vunpcklps xmm0, xmm5, xmm12 }
  *(double *)lprofile->tcaBlueCurveTable[62].v = *(double *)&_XMM0;
  _XMM0 = LODWORD(FLOAT_N0_000012);
  __asm { vunpcklps xmm0, xmm0, xmm12 }
  lprofile->tcaBlueCurveTable[62].v[2] = FLOAT_0_999762;
  *(double *)lprofile->tcaRedCurveTable[63].v = *(double *)&_XMM0;
  lprofile->tcaRedCurveTable[63].v[2] = FLOAT_0_99975801;
  __asm { vunpcklps xmm0, xmm5, xmm12 }
  *(double *)lprofile->tcaBlueCurveTable[63].v = *(double *)&_XMM0;
  lprofile->tcaBlueCurveTable[63].v[2] = FLOAT_0_999762;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_089668997);
  *(double *)lprofile->vignetteCurveTable[0][0].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[0][0].v[2] = FLOAT_N0_022746;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_092042997);
  *(double *)lprofile->vignetteCurveTable[0][1].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[0][1].v[2] = FLOAT_N0_023025;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  _XMM2 = LODWORD(FLOAT_N0_092928998);
  *(double *)lprofile->vignetteCurveTable[0][2].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[0][2].v[2] = FLOAT_N0_029022001;
  __asm { vunpcklps xmm1, xmm2, xmm1 }
  *(double *)lprofile->vignetteCurveTable[0][3].v = *(double *)&_XMM1;
  lprofile->vignetteCurveTable[0][3].v[2] = FLOAT_N0_031167001;
  lprofile->focalLengthMin = 40.0;
  lprofile->focalLengthMax = 150.0;
  lprofile->apertureMin = 4.0;
  lprofile->apertureMax = 22.0;
  lprofile->numCurveTableEntries = 64;
}

