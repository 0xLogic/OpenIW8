/*
==============
R_Glass_ShutdownWorld
==============
*/

void R_Glass_ShutdownWorld(void)
{
  ?R_Glass_ShutdownWorld@@YAXXZ();
}

/*
==============
R_Glass_InitWorld
==============
*/

void R_Glass_InitWorld(void)
{
  ?R_Glass_InitWorld@@YAXXZ();
}

/*
==============
R_Glass_InitWorld
==============
*/
void R_Glass_InitWorld(void)
{
  unsigned __int64 v0; 

  PMem_BeginAlloc("SceneGlass Buffer", PMEM_STACK_GAME);
  scene.sceneGlassCount = cm.totalGlassPieceLimit;
  if ( cm.totalGlassPieceLimit )
  {
    v0 = 4i64 * cm.totalGlassPieceLimit;
    scene.sceneGlass = (GfxSceneGlass *)PMem_Alloc(v0, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "smodel alloc record for lgv");
    memset_0(scene.sceneGlass, 0, v0);
  }
  else
  {
    scene.sceneGlass = NULL;
  }
  PMem_EndAlloc("SceneGlass Buffer", PMEM_STACK_GAME);
}

/*
==============
R_Glass_ShutdownWorld
==============
*/
void R_Glass_ShutdownWorld(void)
{
  StreamerMemLoan result; 

  scene.sceneGlassCount = 0;
  PMem_Free(&result, "SceneGlass Buffer", PMEM_STACK_GAME);
  StreamerMemLoan::~StreamerMemLoan(&result);
}

