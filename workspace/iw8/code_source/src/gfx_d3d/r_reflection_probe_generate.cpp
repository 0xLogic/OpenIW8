/*
==============
R_CalcCubeMapViewValues
==============
*/

void __fastcall R_CalcCubeMapViewValues(refdef_t *refdef, CubemapShot cubemapShot, int cubemapSize)
{
  ?R_CalcCubeMapViewValues@@YAXPEAUrefdef_t@@W4CubemapShot@@H@Z(refdef, cubemapShot, cubemapSize);
}

/*
==============
R_CalcCubeMapViewValues
==============
*/
void R_CalcCubeMapViewValues(refdef_t *refdef, CubemapShot cubemapShot, int cubemapSize)
{
  refdef_t *v10; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vdivss  xmm2, xmm0, xmm0
    vmovsd  xmm0, qword ptr [rcx+10h]
  }
  refdef->displayViewport.width = cubemapSize;
  __asm
  {
    vmovss  xmm0, xmm0, xmm2
    vinsertps xmm1, xmm0, xmm2, 10h
  }
  *(_QWORD *)&refdef->displayViewport.x = 0i64;
  refdef->displayViewport.height = cubemapSize;
  v10 = refdef;
  refdef->view.zNear = 0.0;
  __asm
  {
    vmovsd  qword ptr [rcx+10h], xmm1
    vmovsd  qword ptr [rcx+4Ch], xmm1
  }
  switch ( cubemapShot )
  {
    case CUBEMAPSHOT_RIGHT:
      *(_OWORD *)refdef->view.axis.m[0].v = 0x3F800000ui64;
      *(_OWORD *)&refdef->view.axis.row1.y = 0x3F800000ui64;
      refdef->view.axis.m[2].v[2] = 1.0;
      break;
    case CUBEMAPSHOT_LEFT:
      refdef->view.axis.m[0].v[0] = -1.0;
      *(_QWORD *)&refdef->view.axis.row0.y = 0i64;
      refdef->view.axis.m[1].v[0] = 0.0;
      refdef->view.axis.m[1].v[1] = -1.0;
      *(_QWORD *)&refdef->view.axis.row1.z = 0i64;
      refdef->view.axis.m[2].v[1] = 0.0;
      refdef->view.axis.m[2].v[2] = 1.0;
      break;
    case CUBEMAPSHOT_FRONT:
      refdef->view.axis.m[0].v[0] = 0.0;
      *(_QWORD *)&refdef->view.axis.row0.y = 3212836864i64;
      *(_OWORD *)refdef->view.axis.row1.v = 0x3F800000ui64;
      refdef->view.axis.m[2].v[1] = 0.0;
      refdef->view.axis.m[2].v[2] = 1.0;
      break;
    case CUBEMAPSHOT_UP:
      *(_QWORD *)refdef->view.axis.m[0].v = 0i64;
      *(_QWORD *)&refdef->view.axis.row0.z = 1065353216i64;
      *(_QWORD *)&refdef->view.axis.row1.y = 1065353216i64;
      refdef->view.axis.m[2].v[0] = -1.0;
      *(_QWORD *)&refdef->view.axis.row2.y = 0i64;
      break;
    case CUBEMAPSHOT_DOWN:
      *(_QWORD *)refdef->view.axis.m[0].v = 0i64;
      *(_QWORD *)&refdef->view.axis.row0.z = 3212836864i64;
      *(_QWORD *)&refdef->view.axis.row1.y = 1065353216i64;
      *(_QWORD *)refdef->view.axis.row2.v = 1065353216i64;
      refdef->view.axis.m[2].v[2] = 0.0;
      break;
    default:
      if ( cubemapShot != CUBEMAPSHOT_BACK && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_reflection_probe_generate.cpp", 220, ASSERT_TYPE_SANITY, "( ( cubemapShot == CubemapShot::CUBEMAPSHOT_BACK ) )", "( cubemapShot ) = %i", cubemapShot) )
        __debugbreak();
      v10->view.axis.m[0].v[0] = 0.0;
      *(_QWORD *)&v10->view.axis.row0.y = 1065353216i64;
      v10->view.axis.m[1].v[0] = -1.0;
      *(_QWORD *)&v10->view.axis.row1.y = 0i64;
      *(_QWORD *)v10->view.axis.row2.v = 0i64;
      v10->view.axis.m[2].v[2] = 1.0;
      break;
  }
}

